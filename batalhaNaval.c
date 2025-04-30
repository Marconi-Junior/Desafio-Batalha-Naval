#include <stdio.h>

int main(){

char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int numeros = 1;
int tabuleiro[10][10];

printf("   ");
for (int i = 0; i < 10; i++){
    printf(" %c", letras[i]);
    
}
printf("\n");
    
for (int i = 0; i < 10; i++){
    if (numeros < 10){
        printf(" ");
    }
    printf("%d ", numeros);
    numeros++;
    for (int j = 0; j < 10; j++){
        if ((i == 1 && j >= 1 && j <= 3) ||
            (i >= 3 && i <= 5 && j == 7)){
            tabuleiro[i][j] = 3;
        } else {
            tabuleiro[i][j] = 0;
        }
        printf(" %d",tabuleiro[i][j]);
    }
    printf("\n");   
}
return 0;
}
