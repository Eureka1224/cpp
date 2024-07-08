#include <iostream>
#include <cstdlib>

using namespace std;

struct student {
    char *name;
    int age;
    student(char *n = (char*)"no_name",int a = 0){
        name = new char[100];
        strcpy(name,n);
        age = a;
        cout << "构造函数,申请了100个char元素的动态空间" << endl;
    }

    //构造自己的拷贝函数
    student(const student &copy_from){
        name = new char[100];
        strcpy(name,copy_from.name);
        age = copy_from.age;
        cout << "拷贝构造函数" << endl;
    }

    student& operator=(const student &value_from){
        name = new char[100];
        strcpy(name,value_from.name);
        age = value_from.age;
        cout << "赋值运算符" << endl;
        return *this;
    }

    virtual ~student(){
        delete [] name;
        cout << "析构函数,释放了100个char元素的动态空间" << endl;
    }
};

int main(){
    student s; //默认初始化
    student k((char*)"John",56);
    //cout << k.name << ", age " << k.age <<endl;

    //用编译器自动生成的可能会出错
    student m(s);//定义了一个m,用s来构造它 -- 拷贝构造函数(编译器自动生成)
    s = k; //赋值运算符（编译器自动生成）;s.name = k.name,都指向k的name那块内存，s的name丢失
    //最后同样会对同一块内存释放两次 -- 出错
    
    cout << s.name << ", age " << s.age << endl;
    cout << k.name << ", age " << k.age << endl;
    cout << m.name << ", age " << m.age << endl;
    //delete[] m.name     delete[] s.name 
    //两个name指向同一块内存 -- 硬拷贝 （直接复制值）


    return 0;


}