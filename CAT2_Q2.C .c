#include <stdio.h>

int main(){
    int scores[4][2]={
        {65,92},
        {84,72},
        {35,70},
        {59,67}
    };

    int matrix_one[2][2];
    int matrix_two[2][2];

    for(int a=0;a<2;a++) {
        for(int b=0;b<2;b++) {
            matrix_one[a][b]=scores[a][b];
        }
    }

    for(int a=2;a<4;a++) {
        for(int b=0;b<2;b++ {
            matrix_two[a-2][b]=scores[a][b];
        }
    }

    printf("matrix_one:\n");
    for(int a=0;a<2;a++) {
        for(int b=0;b<2;b++) {
            printf("%d ", matrix_one[a][b]);
        }
        printf("\n");
    }

    printf("matrix_two:\n");
    for(int a=0;a<2;a++) {
        for(int b=0;b< 2;b++) {
            printf("%d ", matrix_two[a][b]);
        }
        printf("\n");
    }

    return 0;
}