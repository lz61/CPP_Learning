#include <vector> // 使用std::vector必需的头文件
#include <iostream>
int main(void)
{
    std::vector<int> iv; // 申请一个批量存放int的vector,类似int a[10].
    // 注: vector可以在运行时动态改变自身的长度,因此不需要像数组一样,在声明时就指定长度.
    // 没有初始化的vector默认长度为0.
    // 可以通过iv.size()得到vector的长度
    std::cout << "iv's size is " << iv.size() << "now" << std::endl; // 目前长度为0
    iv.push_back(1);                                            // 此时iv的长度为1,iv={1};
    iv.push_back(2);                                            // 此时iv的长度为2,iv={1,2};
    iv.push_back(1);                                            // 此时iv的长度为3,iv={1,2,1};
    // 可以通过下标访问iv中的元素
    std::cout << "First element of iv is" << iv[0] << std::endl;
    // 注意: 就像数组一样,如果iv的长度为n,只能支持访问iv[0]-iv[n-1]的元素.
    // 访问iv[n](新手最常见的错误)是导致程序bug的重要原因之一.
    // 批量输出iv中的元素
    for (int i = 0; i < iv.size(); i++)
    {
        std::cout << iv[i] << std::endl;
    }
}