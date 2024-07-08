#include <iostream>
#include <cstdlib>
#include <stdexcept>
using namespace std;

#if 0
class Array{
    int size;
    double *data;
public:
    Array(int s){
        size = s;
        data = new double [s];
    }

    ~Array(){
        delete [] data;
    }

    double& operator [] (int i){  //该运算重载符返回一个double类型的引用
        if(i<0 || i>=size){
            cerr << endl << "out of bounds" << endl;
            exit(EXIT_FAILURE);
        }
        else return data[i]; 
    }
};
#endif

template<class T>
class Array{
    T size;
    T *data;
public:
    Array(int s){
        size = s;
        data = new T[s];
    }

    ~Array(){
        delete [] data;
    }

    T& operator[] (int i){  
        if(i<0 || i>=size){
            cerr << endl << "out of bounds" << endl;
            throw  out_of_range("index out of range");
        }
        else return data[i]; 
    }
};

int main(){
    Array<int> data(5);

    data[0] =89;
    data[4] = data[0] + 8;
    cout << data[4] << endl;

    data[10] = 76;

    return 0;
}