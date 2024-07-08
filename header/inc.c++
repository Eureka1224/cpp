#include <cstdio>
#include <cmath>
#include <iostream>

namespace first {
    int a;
    void f(){}
    int g(){}
}

namespace second {
    double a;
    double f() {}
    char g;
}

using std::cout; // 使用单个名字，之后可以直接用cout

int main()
{
    first :: a = 2;
    second :: a = 1.23;
    first :: a = first :: g() + second :: f();
    second :: a = first :: g() + 1.23;

    double a = 1.2;
    a = sin(a);
    
    cout << "从键盘输入一个数" << std :: endl; //endl 表示换行符，并强制输出
    std :: cin >> a; //通过 “名字限定” std::cin,
                    //cin代表键盘的输入流对象，>>等待键盘输入一个实数


    cout << a; //cout 是代表屏幕窗口的输出流对象

    printf("%lf\n",a);

    return 0;
}
