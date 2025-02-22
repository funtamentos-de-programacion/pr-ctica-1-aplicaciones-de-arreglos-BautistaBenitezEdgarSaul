#include <stdio.h>

int main()
{
    double arr[5]={0,1,2,3,4};
    for(int i=0; i<5; i++)
    {
        printf("[%d] esta en la direccion: %p\n",i,&arr[i]);

    }
    return 0;
}
