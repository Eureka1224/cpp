#include <iostream>
#include <ostream>

using namespace std;

struct vectormy{
    double x;
    double y;
};

//ostream -- output stream
ostream& operator<< (ostream& o,vectormy a)
{
    o << "(" << a.x << "," << a.y << ")" ;
    return o;
}

int main(){
    vectormy a;

    a.x = 35;
    a.y = 23;

    cout << a << endl;
     // <<  == operator<< (cout,a)
     // cout << "(" << a.x << "," << a.y << ")" << endl;
    return 0;
}