#include <bits/stdc++.h>
using namespace std;
double f(double x){
    return (x*x*x) - x - 1;
}

int main(){
    //f(x) = x^3 - x - 1= 0
    double a=1.0,b=2.0,c;
    int itr = 0;
    //[a,b] = [1,2]
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
