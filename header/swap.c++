#include <iostream>
using namespace std;
//void swap(int x ,int y) -- a,b的值不交换
void swap(int &x ,int &y)
{
    cout << "swap前:" << x << "," << y<< endl;
    int t = x;
    x = y;
    y = t;
    cout << "swap后:" << x << "," << y<< endl;
}

int main(){
    int a = 3, b = 4;
    swap(a,b);//x,y将分别是a,b的引用，即x就是a,y就是b
    cout << a << " , " << b << endl;
}
