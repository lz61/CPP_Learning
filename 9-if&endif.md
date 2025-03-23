1.实例代码:

```
#include <iostream>
int main(void){
	//int x = 0;
	#if 0
		std::cout<< "Do not print" << std::endl;
	#endif
}
```

2.不要这样写:

```
	int x = 1;
	#if x
		std::cout<< "X is not 0" << std::endl;
	#endif
```

原因:

```
#if, #endif 属于预处理指令,预处理指令不会管变量的值,所以默认x都是0.
```

3.希望条件输出时:

```
#include <iostream>
#define x 1
int main(void)
{
    #if x
        std::cout << "x is not 0" << std::endl;
    #endif
}
```

4.`#if`,`#else`,`endif`:

```
#include <iostream>
#define x 0
int main(void)
{
    #if x
        std::cout << "x is not 0" << std::endl;
    #else
    	std::cout << "x is 0" << std::endl;
    #endif
}
```

