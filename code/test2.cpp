#include <iostream>
int main(void)
{
    int num;
    std::cin >> num;
    std::cout<<std::cin.good()<<std::endl;
    std::cout<<std::cin.fail()<<std::endl;
    if (std::cin.good())
    {
        std::cout << "�����������������������: " << num << std::endl;
    }
    else
    {
        std::cout << "������ִ�����������Ч��������" << std::endl;
    }
}