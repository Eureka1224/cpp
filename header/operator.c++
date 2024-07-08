#include <iostream>

using namespace std;

struct vectormy{
    double x;
    double y;
};

vectormy operator*(double a,vectormy b){
    vectormy r;
    r.x = a * b.x;
    r.y = a * b.y;

    return r;
}

vectormy operator+(vectormy a,vectormy b){
    vectormy r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;

    return r;
}

int main(){
    vectormy k,m;
    k.x = 3.14;
    k.y = 5.76;

    m = 1.234 * k; // * == operator*
    cout <<"("<< m.x << "," << m.y << ")"<< endl;
    //m.x = 1.234*3.14; m.y = 1.234*5.76

    vectormy r = k + m; // + == operator+
    cout <<"("<< r.x << "," << r.y << ")"<<endl;
    //r.x = 3.14+m.x;r.y = 5.76+m.y;

    return 0;
}