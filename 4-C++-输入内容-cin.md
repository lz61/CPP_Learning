1.`std::cin`初识

```
#include <iostream>
int main() {
    int x;
    std::cin >> x;
    std::cout << "输入的数据为" << x << std::endl;
    return 0;
}
```

2.`std::cin`处理多个变量的输入

```
#include <iostream>
int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    return 0;
}
```



习题1.

1.接收用户输入的整数,并输出到屏幕上.

2.接收用户输入的: 整数1,浮点数1,整数2,并以倒序输出到屏幕上.