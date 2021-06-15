//This code was written by Sumanth Palla 
#include<iostream>
#include<new>
#include<cstdio>
using namespace std;
void swap(int &a, int &b)
{
    int * temp = new int;
    *temp=a;
     a=b;
    b = *temp;

    delete temp;
    return;
}
//Selection Sort is one of the inefficient Algorithm since it takes O(n^2) in time 
//complexity and Selection Sort is better than Bubble Sort because the latter takes O(n^2) swaps whereas the 
//former takes O(n) swaps only.
void selectionSort(int *arr, int n){
    for(int i=0;i<n;i++){
        int min = i ;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    return ;
}
int main(){
    int arr[]={-2,39,20,-23,0,3,4,-29,6,84,94,9};
    selectionSort(arr,12);
    for(int i=0;i<12;i++)cout<<arr[i]<<" ";
    return 0;
}