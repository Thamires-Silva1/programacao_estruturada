#include <stdio.h>

int main()
{
    float mat[3][3];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Endereco [%d][%d]: %p\n", i+1, j+1, &mat[i][j]);
        }
    }
    
    return 0;
}