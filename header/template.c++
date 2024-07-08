#include <iostream>
using namespace std;

template<class T1,class T2>
T1 minValue(T1 a, T2 b){
    if(a<b) return a;
    else return (T1)b; //强制转化为T1类型  -- T1好像可省
}


#if 0
只能生成针对某一具体数据类型的具体函数
template<class T>
T minof(T a, T b){
    if(a<b) return a;
    else return b;
}
#endif

int main(){
    int i = 3,j = 4;
    cout << "min of " << i << " and " << j << " is " << minValue(i, j ) << endl;

    double x = 3.5, y = 2.56;
    cout << "min of " << x << " and " << y << " is " << minValue(x, y ) << endl;

    cout << "min of " << j << " and " << y << " is " << minValue(j, y ) << endl;
}