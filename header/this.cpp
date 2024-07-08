#include <iostream>
using namespace std;

struct Date{
    int d,m,y;

    
    Date(int dd,int mm,int yy){
        d=dd; m=mm; y=yy;
        cout<<"构造函数"<<endl;
    }

    void print(){ //成员函数
        cout << y << "-" << m << "-"<< d <<endl;
    }

    Date& operator+=(int dd){ // 返回自引用的成员函数（func:运算符重载）
        d=d+dd;
        return *this;
    }

    ~Date(){
        cout<<"析构函数"<<endl;
    }
};

int main(){
    Date day(23,5,1998);
    day.print();
    day += 3; //+= operator+=(3)   d = 23+3   day -- 26,5,1998
    day.print();
    (day += 5) += 7;
    day.print();

    return 0;
}