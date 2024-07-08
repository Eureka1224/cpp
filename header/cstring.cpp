#include <cstring>
#include <iostream>
using namespace std;

class student
{
private:
    char *name;
    int age;
public:
    char *get_name(){return name;} //使用的前提是类已经有了具有实例
    int get_age(){return age;}

    //传参赋值 -- 最终的目的初始化name
    void set_name(char *n = (char*)"new_name"){  //new_name 默认值
        delete [] name;
        int len = strlen(n);
        name = new char[len+1];
        strcpy(name,n);
    }

    void set_age(int new_age){age = new_age;}

    student(char *n = (char*)"no_name",int a=15){ // no_name,15 -- 默认值
        int len = strlen(n);
        name = new char[len+1];
        strcpy(name,n);
        age = a;
        cout << "constructor of "<< name << endl;
    }

    virtual ~student(){
        cout << "destructor of "<< name << endl;
        delete [] name; //防止内存泄漏
    }
    
};

void f(){
    student stu1;
    student stu2((char*)"wang");
    student stu3((char*)"zhang",36);
    cout << stu1.get_name() << "\t" << stu1.get_age() << endl;
    cout << stu2.get_name() << "\t" << stu2.get_age() << endl;
    cout << stu3.get_name() << "\t" << stu3.get_age() << endl;
    stu1.set_name((char*)"li");
    stu1.set_age(20);
    cout << stu1.get_name() << "\t" << stu1.get_age() << endl;

}

int main(){
    f();
    return 0;
}