#include <iostream>
using namespace std;

// * -- 取值； & —— 取地址
void swap(int *x ,int *y)
{
    cout << "swap前:" << *x << "," << *y<< endl;
    int t = *x;
    *x = *y;
    *y = t;
    cout << "swap后:" << *x << "," << *y<< endl;
}

int main(){
    int a = 3, b = 4;
    swap(&a,&b);
    /*
        &a 赋值给 x ; &b 赋值给 y
        x,y 分别是int*,指向a,b
        *x, *y 就是  a 和 b
    */
    cout << a << " , " << b << endl;
}
