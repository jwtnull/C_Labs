#include <stdio.h>
#include <stdlib.h>
int main(void){
    //小数分为整数和小数部分用.分割
    //有两种表达形式：10.20 、 7.25×102(指数形式)

    //单精度浮点型
    float float_type=12.0;
    //双精度浮点型
    double double_type=12.10;

    //小数的输出
    /**
     * 小数也可以使用 printf 函数输出，包括十进制形式和指数形式，它们对应的格式控制符分别是：
%f 以十进制形式输出 float 类型；
%lf 以十进制形式输出 double 类型；
%e 以指数形式输出 float 类型，输出结果中的 e 小写；
%E 以指数形式输出 float 类型，输出结果中的 E 大写；
%le 以指数形式输出 double 类型，输出结果中的 e 小写；
%lE 以指数形式输出 double 类型，输出结果中的 E 大写。
    */
    float a = 0.302;
    float b = 128.101;
    double c = 123;
    float d = 112.64E3;
    double e = 0.7623e-2;
    float f = 1.23002398;
    printf("a=%e \nb=%f \nc=%lf \nd=%lE \ne=%lf \nf=%f\n", a, b, c, d, e, f);
    return 0;
}