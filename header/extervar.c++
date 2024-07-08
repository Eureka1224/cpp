#include <iostream>

using namespace std;
double a = 126;
int main(){
    double a;
    cout << "Type a number: ";
    cin >> a;

    {
        int a = 1 ; //int a 屏蔽了外部作用域的double a;
        a = a*10 +4;
        cout << "local number: " << a << endl; 
    }

    cout << "you typed a is " << a << endl;//main 作用域的 double a
    cout << "global a is : " << ::a <<endl;//访问和内部作用域变量同名的全局变量，要用全局作用域限定::
}