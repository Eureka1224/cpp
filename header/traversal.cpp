#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "hello";
    string w = "world";

    for(int ii = 0; ii !=s.size();ii++)
    {
        cout << ii << " " << s[ii] << endl;
    }
    cout << endl;

    string::const_iterator cii; //string类型的常量迭代器
    //string::iterator cii; 元素可修改
    int ii = 0;
    for(cii = w.begin();cii != w.end(); cii++)
    {
        //*cii = 'A';
        cout << ii++ << " " << *cii << endl;
    }

    return 0;
}