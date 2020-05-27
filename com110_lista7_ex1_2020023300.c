#include <stdio.h>
#include <stdlib.h>

int main(void){
    int M[2][2];
    int R[2][2];
    int num = 0;
    int i,j;

    for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf("Digite o número da posição (%d, %d) na matriz: ", i,j);
        scanf("%d", &M[i][j]);
        if(num < M[i][j]){
            num = M[i][j];
        }
    }
    }
    printf("A matriz resultante é:\n");
    for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        R[i][j] = M[i][j] * num;
        printf("%d|", R[i][j]);

    }
    printf("\n");
    }

    return 0;
}