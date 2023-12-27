#include <stdio.h>
int main(void)
{
    char author[30];
    gets(author);
    printf("author: %s\n", author);
    return 0;
}