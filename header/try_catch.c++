#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int a,b;

    cout << "Type a number: ";
    cin >> a;
    cout << endl;

    try{
        if(a>100) throw 100;
        if(a<10)  throw 10;
        throw "hello";
    }

    catch(int result){
        cout << "Result is: " << result << endl;
        b = result + 1;
    }

    catch(char *s){
        cout << "haha" << string(s) << endl;
    }

    cout << "b contains: " << b << endl;
    cout << endl;

    return 0;
}