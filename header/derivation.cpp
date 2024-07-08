#include <iostream>
#include <string>

using namespace std;

//基类
class Employee {
    string name;
public:
    Employee(string n);
    virtual void print();
    //如果这个函数需要具有多态性，就要声明为virtual,之后就会根据实际指向的对象调用相应的函数
};

//派生类
class Manager:public Employee{
    int level;
    public:
        Manager(string n,int lev =1);
        //void display();
        void print(); //这里加不加virtual都可
};

Employee::Employee(string n):name(n){
    //函数外初始化，等价于函数内 name = n;
}

void Employee::print(){
    cout << name << endl;
}

//派生函数不能直接初始化基类的成员，只能初始化自己的属性（这个不够严谨）
Manager::Manager(string n,int lev):Employee(n),level(lev){
    // == 函数内赋值 name = n; level = lev;
}
/*

void Manager::display(){
    cout << level << "\t";
    //Employee::print();
    print(); 
    //Employee类中的public成员函数print在Manager类中依然是public的，
    //可以在Manager类的display函数中直接调用。
}
*/

void Manager::print(){
    cout << level << "\t";
    Employee::print();
    //print();
}


int main(){
#if 0
    Manager m("zhang",4);
    Employee e("wang");
    m.display();
    m.print(); // 派生类继承基类的print
    e.print();

    Employee* employees[100];
    int num = 0;

    employees[num] = &e;
    num++;
    employees[num] = &m;//派生类的指针可以自动转化为基类的指针
    //可以用一个指向基类的指针分别指向基类对象和派生类对
#endif
    Employee *p;
    Manager m("zhang",4);
    Employee e("wang");
    p = &m;
    p->print(); //多态性
    p = &e;
    p->print();

}