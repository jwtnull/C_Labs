#include <stdio.h>
int main(void)
{
    // 结构体定义
    struct stu
    {
        char *name;  // 姓名
        int num;     // 学号
        int age;     // 年龄
        char group;  // 所在学习小组
        float score; // 成绩
    } stu1, stu2 ={ "Tom", 12, 18, 'A', 136.5 };

    // 给结构体成员赋值
    stu1.name = "张三";
    stu1.age = 20;

    return 0;
}