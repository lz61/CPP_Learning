```cpp
// 例1: cout实例
#include <iostream>
int main() {
    std::cout << "Hello World!";
    return 0;
}
```



```cpp
// 例2: cout输出单个变量
int num = 1;
std::cout << num; // 输出1
```



```cpp
// 例3: cout连续输出多个变量
int a = 1, b = 2;
std::cout << a << " " << b; // 输出"1 2"(不包含双引号)
```



```cpp
// 例4: 不同进制输出
// 在C++中，可以使用std::oct、std::dec、std::hex来控制输出的进制
#include <iostream>
int main() {
    int num = 23;
    std::cout << std::oct << num; // 输出27: 2*8+7=23
    std::cout << std::dec << num; // 输出23
    std::cout << std::hex << num; // 输出17
    return 0;
}
```



```cpp
// 例5: cout输出换行
// 可以使用std::endl或者'\n'来实现换行
#include <iostream>
int main() {
    std::cout << "12\n";
    std::cout << "34";
    // 或者
    std::cout << "12" << std::endl;
    std::cout << "34";
    return 0;
}
```



```cpp
// 例6: cout输出小数
#include <iostream>
int main() {
    double num = 1.2;
    std::cout << num; // 默认输出6位小数
    return 0;
}
```



7.cout.put(): 输出字符常量

```
char x='a';
cout.put(x); // 输出a
```



题目1: 输出8进制、10进制、16进制的数字243


题目2: 输出 "1 1.1 2 2.2"



答案:

题目1:

```
#include <iostream>
int main() {
    int num = 243;
    std::cout << std::oct << num << " ";
    std::cout << std::dec << num << " ";
    std::cout << std::hex << num << std::endl;
    return 0;
}
```

题目2:

```
#include <iostream>
#include <iomanip>
int main() {
    int int1 = 1, int2 = 2;
    double double1 = 1.1, double2 = 2.2;
    std::cout << int1 << " " << std::fixed << std::setprecision(1) << double1 << " ";
    std::cout << int2 << " " << double2 << std::endl;
    return 0;
}
```

