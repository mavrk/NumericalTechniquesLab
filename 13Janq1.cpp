#include <bits/stdc++.h>
using namespace std;
double f(double x){
    return x - exp(-x);
}

int main(){
    //f(x) = x - e^(-x) = 0
    double a=0.0,b=1.0,c;
    int itr = 0;
    //[a,b] = [0,1]
    while((b-a)>0.000001){
        c = (a+b)/2;
        itr ++;
        if(f(c) * f(a) < 0)
            b = c;
        else if(f(a) * f(c) > 0)
            a = c;
        else
            break;
     }
    cout << "Answer is " << c;
    cout << "\nIterations taken " << itr;
}

