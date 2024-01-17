#include <stdio.h>
int main(void)
{
    // 结构体定义 标识有五个学生
    struct stu1
    {
        char *name;  // 姓名
        int num;     // 学号
        int age;     // 年龄
        char group;  // 所在学习小组
        float score; // 成绩
    } class[5];

    // 定义并初始化
    struct stu2
    {
        char *name;  // 姓名
        int num;     // 学号
        int age;     // 年龄
        char group;  // 所在学习小组
        float score; // 成绩
    } stus[5] = {
        {"Li ping", 5, 18, 'C', 145.0},
        {"Zhang ping", 4, 19, 'A', 130.5},
        {"He fang", 1, 18, 'A', 148.5},
        {"Cheng ling", 2, 17, 'F', 139.0},
        {"Wang ming", 3, 17, 'B', 144.5}};

    // 取值
    char *name = stus[1].name;
    printf("%s", name);
    // 修改
    stus[1].name = "张三";
    name = stus[1].name;
    printf("%s", name);

    return 0;
}