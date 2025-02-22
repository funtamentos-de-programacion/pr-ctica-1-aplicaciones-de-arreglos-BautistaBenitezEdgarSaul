#include <stdio.h>

int main()
{
    int mat[2][3]={{0,1,2},{3,4,5}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++){
        printf("Direccion de mat [%d][%d]: %p\n",i,j,&mat[i][j]);
        }
    }
return 0;
}
