1.代码示例:

```
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void){
	// 设置本地化环境以支持宽字符输出
    setlocale(LC_ALL, "");

    // 定义一个宽字符字符串
    char x[] = "你好,世界!";
    wchar_t wstr[] = L"你好，世界！";

    // 输出宽字符字符串
    wprintf(L"宽字符字符串: %ls\n", wstr);

    // 获取宽字符字符串的长度
    size_t len = wcslen(wstr);
    wprintf(L"字符串长度: %zu\n", len);
}
```

