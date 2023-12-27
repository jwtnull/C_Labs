#include <stdio.h>
int main(void){
    //窄字符串
    char varialbe_char_str_1[]="C语言世界你好";
    char *variable_char_str_2="C语言世界你好a";
    printf("varialbe_char_str_1=%s,variable_char_str_2=%s\n",varialbe_char_str_1,variable_char_str_2);

    //宽字符串
    //将本地环境设置为简体中文
   // setlocale(LC_ALL, "zh_CN");
    //使用通用的 wprintf 输出宽字符
    wchar_t varialbe_wchar_str_1[] = L"http://c.biancheng.net";
    wchar_t *varialbe_wchar_str_2 = L"C语言中文网";
     wprintf(L"varialbe_wchar_str_1: %ls,varialbe_wchar_str_2: %ls\n", varialbe_wchar_str_1, varialbe_wchar_str_2);
    return 0;
}