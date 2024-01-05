#include <stdio.h>
#include <string.h>
void main()
{
    // 字符串指针
    char str1[] ="http://c.biancheng.net";
    int len =strlen(str1);
    //直接输出字符串
    puts(str1);
    //单个字符输出
    for (int i = 0; i < len; i++)
    {
        printf("%c",str1[i]);
    }
     printf("\n");
   
   //使用指针
   for (int i = 0; i < len; i++)
    {
        printf("%c",*(str1+i));
    }
     printf("\n");
     char *p=str1;
     for (int i = 0; i < len; i++)
    {
        printf("%c",*(p+i));
    }

}