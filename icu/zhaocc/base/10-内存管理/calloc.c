#include <stdio.h>
#include <stdlib.h>
void main()
{
    int* p = calloc(10,sizeof(int));
    //等同于
    int* pp =malloc(sizeof(int)*10);
    memset(p,0,sizeof(int)*10);
    
}