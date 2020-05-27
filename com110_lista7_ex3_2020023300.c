#include <stdio.h>
#include <stdlib.h>

int main(){
    float M [4][7];
    float min = 28;
    float max = -28;
    int P [2][2];
    int i,j;

    //Dados matriz M
    for(i=0; i<4; i++){
    for(j=0; j<7; j++){
      printf("\n Informe o valor da posicao (%d,%d): ",i+1,j+1);
      scanf("%f", &M[i][j]);
      if(M[i][j]>max){
        max=M[i][j];
        P[1][0]=i;
        P[1][1]=j;
      }
      if(M[i][j]<min){
        min=M[i][j];
        P[0][0]=i;
        P[0][1]=j;
      }
    }
  }

  printf("O menor valor é %.1f e está na posição (%d,%d)\n", min, P[0][0], P[0][1]);
  printf("O maior valor é %.1f e está na posição (%d,%d)\n", max, P[0][0], P[0][1]);
  return 0;
}