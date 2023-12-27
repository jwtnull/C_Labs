#include <stdio.h>
void main()
{
    //数组指针
    int arr[] = {99, 15, 100, 888, 252};
    // 计算数组长度
    int len = sizeof(arr) / sizeof(int);
   
    for (int i = 0; i < len; i++)
    {
        // printf("%d ",arr[i]);
        printf("%d ",*(arr+i));
    }
    printf("\n");

    //使用数组指针遍历数组
    int* p=arr;
    for(int i=0;i<len;i++){
        printf("%d ",*(p+i));
    }
     printf("\n");
    
}