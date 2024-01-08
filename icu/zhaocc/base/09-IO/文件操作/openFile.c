#include <stdio.h>
#include <stdlib.h>

#define N 100
void main()
{

    FILE *file = fopen("E:\\doc\\English\\English.md", "rt");
    // 判断文件是否打开失败
    if (file == NULL)
    {
        puts("文件打开失败");
        exit(0);
    }

    // 循环读取文件的每一行数据
    char str[N + 1];
    while (fgets(str, N, file) != NULL)
    {
        printf("%s", str);
    }
    // 操作结束后关闭文件
    fclose(file);
}