#include <stdio.h>
#include <stdlib.h>
void main()
{
    int* b =(int*)malloc(sizeof(int));
    b=realloc(b,sizeof(int)*20);


    char* p=realloc(NULL,sizeof(int));
    //等价
    char* pp =malloc(sizeof(int));

    
}