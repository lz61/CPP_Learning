#include <iostream>
class Car
{
public:
    int year;
    std::string name;
    Car()
    {
        year = 0;
        name = "";
    }
    void showName()
    {
        std::cout << name << std::endl;
    }
};

int main(void)
{
    Car car=Car();
    car.name = "lizeng";
    car.showName();
}