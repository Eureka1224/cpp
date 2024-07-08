#include <iostream>
#include <string>
using namespace std;
typedef string String;

int main(){
    string s1; //默认构造函数
    String s2("hello"); //普通构造函数
    s1="Alnataily";
    String s3(s1); //拷贝构造函数 string s3 = s1;

    string s4("this isac_string",10);
    string s5(s4,6,4);
    string s6(6,'*');
    string s7(s4.begin(),s4.end()-4);
    string s8 = s1 + "hello" + s2;

    cout << "s1 is : " << s1 << endl;
    cout << "s2 is : " << s2 << endl;
    cout << "s3 is : " << s3 << endl;
    cout << "s4 is : " << s4 << endl;
    cout << "s5 is : " << s5 << endl;
    cout << "s6 is : " << s6 << endl;
    cout << "s7 is : " << s7 << endl;
    cout << "s8 is : " << s8 << endl;

    return 0;
}