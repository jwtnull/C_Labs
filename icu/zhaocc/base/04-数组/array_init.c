#include <stdio.h>
int main()
{
    // 数组初始化
    int intArray1 = {1, 2, 3, 4, 5};
    int intArray2[3] = {1, 2, 3};
    int intArray3[4] = {[0] = 1, [3] = 2};
    // 搭配使用
    int intArray4[3] = {1, [1] = 2};

    // 为数组默认初始化为0
    int intArray5 = {0};

    // 数组的默认值
    int nums[10] = {0};
    char str[10] = {0};
    float scores[10] = {0.0};
    printf("nums=%d\n", nums[0]);
    printf("str=%c\n", str[0]);
    printf("scores=%f\n", scores[0]);

    return 0;
}