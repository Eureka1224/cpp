#include <iostream>
#include <cstring>

using namespace std;

int main(){
    double d =3.14;
    double *dp;
    dp = &d;
    *dp = 4.14;
    cout << "*dp = " << *dp << " d =  "<<d << endl;
    cout << "Type a number: ";
    cin >> *dp;
    cout << "*dp = " << *dp << " d =  "<<d << endl;

    dp = new double;
    *dp = 45.3;
    cout << "*dp = " << *dp << " d =  "<<d << endl;
    cout << "Type a number: ";
    cin >> *dp;
    cout << "*dp = " << *dp<< endl;
    *dp = *dp + 5;
    cout << "*dp = " << *dp<< endl;
    delete dp;

    dp = new double[5];
    dp[0] = 4456; // *(dp+0) = 4456
    dp[1] = dp[0] + 567; // *(dp+1)
    cout << "dp[0]= " << dp[0] << " dp[1]= "<< dp[1] << endl;
    delete[] dp;

    int n = 8;
    dp = new double[n];
    for(int i = 0; i<n ; i++){
        dp[i]=i;
    }
    double *p = dp;
    for(int i=0;i<n;i++){
        cout << *(p+i) << " ";
    }
    cout << endl;
    for(double *p = dp,*q = dp+n; p<q; p++){ // q指向数组最后一个元素的下一个地址
        cout << *p << " ";
    }
    cout << endl;
    delete[] dp;

    char *s = new char[100];
    strcpy(s,"Hello!");
    cout << s << endl;
    delete [] s;


    return 0;

}