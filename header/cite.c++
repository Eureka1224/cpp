#include <iostream>
using namespace std;

int main(){
    double a = 3.13324;
    double &b = a;//&不是C中的取地址，而是代表b是一个引用变量，b就是a的别名
    b = 89;//b a 同一个内存块的不同名字

    cout << "a contains: "<< a <<endl;
}