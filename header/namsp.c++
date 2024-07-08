#include <iostream>

using namespace std;

int main(){
    double a = 12*3.15;
    double b = a+1.113;
    cout << "a contains: " << a << endl;
    cout << "b contains: " << b << endl;

    a = a*2 +b;
    double c = a+b*a; //变量“即用即定义”，且可用表达式初始化
    cout << "c contains: " << c << endl;

}