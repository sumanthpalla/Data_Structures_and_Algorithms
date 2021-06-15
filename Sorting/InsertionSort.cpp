//This code was written by Sumanth Palla
#include<iostream>
#include<new>
using namespace std;
// Insertion Sort is the best efficient algorithm for sorting small size arrays.
// The Time Complexity is O(n^2) and it takes O(n) swaps.
void insertionSort(int *arr,int n){
     //step-1 finding out appropirate position for the current key
     int key;
     for(int i=1;i<n;i++){
         key = arr[i];
         int j=i-1;
         //step-2 is shifting the array elements
         while(arr[j]>key && j>=0)
         {
            arr[j+1]=arr[j];
            j-=1;
         }
         arr[j+1] = key;
     }
     return ;
}
int main(){
    int arr[]={-2,-20,1,8,30,2,-21,-23,0,5,83,92,32};
    insertionSort(arr,13);
    for(int i=0;i<13;i++)cout<<arr[i]<<" ";
    return 0;
}