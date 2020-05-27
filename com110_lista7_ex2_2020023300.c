#include <stdio.h>
#include <stdlib.h>

int main(void){

    int M[8][8];
    int i,j,c;
    c = 0;

    for(i=0; i<8; i++){
    for(j=0; j<8; j++){
        printf("Digite o número da pocisão (%d,%d) na matriz: ", i+1,j+1);
        scanf("%d", &M[i][j]);
    }
    }

    printf("Matriz:\n");
    for(i=0; i<8; i++){
    for(j=0; j<8; j++){
        printf("%d|", M[i][j]);
    }
    printf("\n");
    }

    for(int i=0; i < 8; i++){
    for(int j=0; j< 8; j++){
      if(M[i][j] != M[j][i]){
        c++;
      }
    }
  }
  if(c==64){
    printf("A matriz não é simetrica. \n");
  }else{
    printf("A matriz é simetrica. \n");
  }

  return 0;
}