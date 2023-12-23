#include<bits/stdc++.h>
using namespace std;

void print_one_to_n(int n){
    if(n==0)return;
    print_one_to_n(n-1);
    cout<<n<<" ";
}

signed main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Printing 1 to n: \n";
    print_one_to_n(n);
}