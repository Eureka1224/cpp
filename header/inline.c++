#include <iostream>
#include <cmath>

using namespace std;

inline double distance(double a , double b)
{
    return sqrt(a*a + b*b);
}


int main(){
    double x = 2.41, y=5.35;
    cout << distance(x,y) << endl;
    cout << sqrt(x*x + y*y) << endl;
}