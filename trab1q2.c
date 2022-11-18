//Jogo Adivinha -> adivinhar o número sorteado pelo computador 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); 
    int n = rand() % 101; 
    
    int count = 1; 

    int x;
    printf("\nTente adivinhar o numero sorteado - informe seu palpite: ");
    scanf("%d", &x);

    while(x != n){
        if(x > n)
            printf("Esse numero e maior que o numero sorteado, tente novamente! \n\nPalpite: ");
        else
            printf("Esse numero e menor que o numero sorteado, tente novamente! \n\nPalpite: ");

        count++;
        scanf("%d", &x);
    }
    
    printf("\n\nVoce acertou o numero sorteado = %d!! Parabens!! \nNumero de tentativas: %d\n\n", n, count);

    return 0;
}
