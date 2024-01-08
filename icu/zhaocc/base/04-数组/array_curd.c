#include <stdio.h>

// 自定义函数，用来输出数组元素
void print_array(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // 改
    // 数组初始化并赋值
    int intArray1 = {1, 2, 3, 4, 5};
    // 或
    int intArray2[4];
    intArray2[0] = 1;
    intArray2[1] = 2;
    intArray2[2] = 3;
    intArray2[3] = 4;
    // 或
    int intArray3[4] = {1, [1] = 2};

    // 查-查找值是6的数
    int array4[] = {1, 2, 3, 4, 5, 6};
    // 获取数组的长度
    int length = sizeof(array4) / sizeof(int);
    // 或者
    int length2 = sizeof(array4) / sizeof(array4[0]);
    for (int i = 0; i < length; i++)
    {
        if (array4[i] == 6)
        {
            printf("%d\n", array4[i]);
            break;
        }
    }

    /**
     * 删：
     * C语言数据是静态的不支持插入或删除元素 如果想要实现该功能我们可以新建一个数组 或者把要删除的值改为默认值从而达到实现删除的目的
     *
     */

    // delete-lab1:删除值为3的数 使用修改默认值的方式
    int deleteArray[] = {1, 2, 3, 4};
    int deleteArrayLength = sizeof(deleteArray) / sizeof(int);
    // puts("deleteBefore:");
    // print_array(deleteArray, deleteArrayLength);
    
    // for (int i = 0; i < deleteArrayLength; i++)
    // {
    //     if (deleteArray[i] == 3)
    //     {
    //         deleteArray[i] = 0;
    //         break;
    //     }
    // }
    //  puts("deleteAfter:");
    // print_array(deleteArray, deleteArrayLength);


    // delete-lab2:删除值为3的数 使用新建数组的方式

    int newArray[deleteArrayLength - 1];
    int index = 0;
    for (int i = 0; i < deleteArrayLength; i++)
    {
        if (deleteArray[i] != 3)
        {
            newArray[index] = deleteArray[i];
            index++;
        }
    }
    puts("oldArray:");
    print_array(deleteArray, deleteArrayLength);
    puts("newArray:");
    print_array(newArray, deleteArrayLength - 1);

    return 0;
}