#include <stdlib.h>

int i=0,j=0;

int main(){
    /*
    int A[5];

    printf("%d\n", A);
    printf("%d\n", &A);
    printf("%d\n", &A[0]);


    int numeros[5] = {10,20,30,40,50};

    for(i=0;i<5;i++){
        printf("Elemento %d: %d\n", i, numeros[i]);
    }
    */

    int matriz[2][3] = {{1,2,3},{4,5,6}};

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Elementos [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }

return 0;
}
