#include <stdio.h>
#include <math.h>

int main(){
    int x;
    
    float valor[5];
    int i;
    for(i = 0; i < 5; i++){
        valor[i] = 0;
    }
    
    printf("\nMENU: \n1 = media aritmetica simples \n2 = media ponderada \n3 = desvio padrao \n4 = maior valor \n5 = menor valor \n6 = leitura dos valores");
    printf("\n\nInforme o que deseja realizar: ");
    scanf("%d", &x);
    do{
        //para receber os valores    
        if(x == 6){
            printf("\nInforme os 5 valores: ");
            for(i = 0; i < 5; i++){
                printf("valor %d = ", i+1);
                scanf("%f", &valor[i]);
                printf("\t\t      ");
            }
        }

        //calculos
        float soma = 0, soma2 = 0;
        
        //media aritmetica simples
        float ma; 
        if(x == 1){
            for(i = 0; i < 5; i++){
                soma += valor[i];
            }
            ma = soma/5;
            printf("\n\n\t   A media aritmetica e igual a %.2f\n\n", ma);
        }

        //media ponderada
        float peso[5]; float mp;
        if(x == 2){
            printf("\nInforme o peso de cada valor:\n");
            for(i = 0; i < 5; i++){
                printf("Peso do valor %d = ", i+1);
                scanf("%f", &peso[i]);
            }
            for(i = 0; i < 5; i++){
                soma += (peso[i] * valor[i]);
                soma2 += peso[i];
            }
            mp = soma/soma2;
            printf("\n\n\t   A media ponderada e igual a %.2f\n\n", mp);
        }

        //desvio padrao
        float dp;
        if(x == 3){
            for(i = 0; i < 5; i++){
                soma += valor[i];
            }
            ma = soma/5;
            for(i = 0; i < 5; i++){
                soma2 += pow((valor[i] - ma), 2);
            }
            dp = sqrt(soma2/5);
            printf("\n\n\t   O desvio padrao e igual a %.2f\n\n", dp);
        }

        //maior valor
        float max = 0;
        if(x == 4){
            for(i = 0; i < 5; i++){
                if(valor[i] > max){
                    max = valor[i];
                }
            }
            printf("\n\n\t\tO maior valor e %.2f\n\n", max);
        }

        //menor valor
        float min = 100000000000;
        if(x == 5){
            for(i = 0; i < 5; i++){
                if(valor[i] < min){
                    min = valor[i];
                }
            }
            printf("\n\n\t\tO menor valor e %.2f\n\n", min);
        }

        printf("\nMENU: \n1 = media aritmetica simples \n2 = media ponderada \n3 = desvio padrao \n4 = maior valor \n5 = menor valor \n6 = leitura dos valores");
        printf("\n\nInforme o que deseja realizar(-1 para sair): ");
        scanf("%d", &x);
    }while(x != -1);

    return 0;
}
