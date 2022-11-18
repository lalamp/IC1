//Programa para achar o vetor cujos elementos são os elementos que estão em ambos os vetores iniciais, ou seja, se um elemento está no vetor 1 e também no vetor 2, ele será adicionado ao vetor de interseção (vetor 3)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    printf("\nInforme um valor para n: "); //n = numero de posicoes do vetor 1
    scanf("%d", &n);

    int m; 
    printf("Informe um valor para m: "); //m = numero de posicoes do vetor 2
    scanf("%d", &m);

    int i;
    int *vetor1 = (int *)malloc(n*sizeof(int)); //aloca o vetor 1 de n posicoes 
    printf("\nInforme os valores do vetor 1:\n");
    for(i = 0; i < n; i++){
        printf("vetor1[%d] = ", i);
        scanf("%d", &*(vetor1+i)); //recebe o valor de cada posicao do vetor 1
    }
    
    int *vetor2 = (int *)malloc(m*sizeof(int)); //aloca o vetor 2 de m posicoes 
    printf("\nInforme os valores do vetor 2:\n");
    for(i = 0; i < m; i++){
        printf("vetor2[%d] = ", i);
        scanf("%d", &*(vetor2+i)); //recebe o valor de cada posicao do vetor 2
    }

    int j;
    int k = 0; //k = tamanho do vetor de interseção (vetor3)
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(vetor1[i] == vetor2[j]){ //compara cada elemento do vetor 1 com cada elemento do vetor 2
                k++; //se o elemento da posicao i do vetor 1 for igual ao elemento da posicao j do vetor 2, soma 1 ao tamanho do vetor de intersecao
            }
        }
    }

    int *vetor3 = (int *)malloc(k*sizeof(int)); //aloca o vetor de intersecao (vetor 3)
    k = 0; //para comecar da posicao 0 do vetor 3
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(vetor1[i] == vetor2[j]){
                vetor3[k] = vetor1[i]; //se o elemento da posicao i do vetor 1 for igual ao elemento da posicao j do vetor 2, o vetor 3 (vetor de intersecao) recebe esse valor
                k++; //passa para a proxima posicao do vetor 3
            }
        }
    }

    int tam = k;
    int aux;
    printf("\n\nIntersecao entre vetor1 e vetor2 => vetor3 = {");
    for(i = 0; i < tam; i++){
        aux = 0;
        for(j = 0; j < i; j++){
            if(vetor3[i] == vetor3[j]){ //compara os elementos de cada posicao do vetor3 com os elementos das posicoes anteriores
                aux = 1; //caso o elemento de determinada posicao seja igual a um elemento anterior => aux = 1 => nao imprime esse elemento
            }
        }
        if(aux == 0) //caso contrario => aux = 0 => imprime esse elemento 
            printf("  %d  ", vetor3[i]);
    }
    printf("}\n\n");

    free(vetor1);
    free(vetor2);
    free(vetor3);
    return 0;
}
