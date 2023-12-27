#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void){
    char c='a';
    putchar(c);
    printf("c=%c\n",c);

    //宽字符
    setlocale(LC_ALL, "zh-CN");
    wchar_t wchar_variable_1=L'果';
    wchar_t wchar_variable_2 = L'♥';  //特殊符号
    putwchar(wchar_variable_2);
    return 0;
}