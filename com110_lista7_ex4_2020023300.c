#include <stdio.h>
#include <stdlib.h>

int main(void){
    int M[5][7];
    int i,j,v;

    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            printf("Digite o número da posição (%d, %d): ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }
    





    return 0;
}
