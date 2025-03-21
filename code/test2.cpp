#include <iostream>
int main(void)
{
    int num;
    std::cin >> num;
    std::cout<<std::cin.good()<<std::endl;
    std::cout<<std::cin.fail()<<std::endl;
    if (std::cin.good())
    {
        std::cout << "输入正常，你输入的整数是: " << num << std::endl;
    }
    else
    {
        std::cout << "输入出现错误，请输入有效的整数。" << std::endl;
    }
}