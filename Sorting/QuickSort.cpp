//This code was written by Sumanth Palla
#include<iostream>
#include<new>
#include<math.h>
using namespace std;
//Implementation of Quick Sort
//Quick Sort is a divide and conquer algorithm which takes O(nlogn) time complexity (has high probability), although to get best time complexity to
//be O(nlogn) we need to have few assumptions
// The assumptions are 1.Not having duplicates 2. randomization
void swap(int &a,int &b){
    int * temp = new int;
    *temp =a;
    a = b;
    b = *temp;
    delete temp;
}
// This function takes length of the array as input and gives out a random integer between (0,len-1) which can be used to pick a random pivot in quick sort
int partition_random(int len){
    int random;
    random = rand()%(len);
    return random;
}
// This partition function takes array and its positions as input and outputs a pivoted index after partitioned array
int partition(int *arr,int l,int r){
    int i,j,pivot=partition_random(r);
    i=l-1;
    j=l;
    for(int j=l;j<=r-1;j++){
        if(arr[j]<arr[r]){
            i+=1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
//Recursive implementation of quickSort 
void quickSort(int *arr,int l, int r){
    int p;
    if(l>=r)return;
    p = partition(arr,l,r);
    quickSort(arr,l,p-1);
    quickSort(arr,p+1,r);
}
int main(){
    //test case of QuickSort
    int arr[] = {-1,-2,0,3,-20,5,8,20,7,10,30,64,-45,-22};
    quickSort(arr,0,13);
    //sort(arr,arr+14);
    for(int i=0;i<14;i++)cout<<arr[i]<<" ";
    return 0;

}