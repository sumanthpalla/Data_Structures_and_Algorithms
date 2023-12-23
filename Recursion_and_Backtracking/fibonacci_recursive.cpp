#include<bits/stdc++.h>
using namespace std;

// fibonacci series: f(n) = f(n-1) + f(n-2)
// 0 1 1 2 3 5 8 13 21 34 55 89 ......
long long int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

signed main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Printing fibonacci "<<n<<"th term \n";
    cout<<fibonacci(n);
}