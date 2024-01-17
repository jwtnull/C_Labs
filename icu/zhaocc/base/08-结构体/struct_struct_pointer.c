#include <stdio.h>
int main(void)
{
    // struct 结构体名 *变量名;
    // 结构体
    struct stu
    {
        char *name;  // 姓名
        int num;     // 学号
        int age;     // 年龄
        char group;  // 所在小组
        float score; // 成绩
    } stu1 = {"Tom", 12, 18, 'A', 136.5};

    //结构体指针
    struct stu* pstu=&stu1;

    //获取结构体成员
    int age =pstu->age;
    //或
    int age2=(*pstu).age;



    return 0;
}