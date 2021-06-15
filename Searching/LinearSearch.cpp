//This code was written by Sumanth Palla
#include<iostream>
#include<cstdio>
using namespace std;
//Linear Search is probably the easiest search method which completes the search in 
//O(n) time and O(1) space complexity
int linear_search(int *arr,int n,int key){
    for(int i=0;i<n;i++)
            if(arr[i]==key)return i;
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of array elements: ";
    scanf("%d",&n);
    // Using Dynamic Memory allocation based on the user input
    int * arr = (int*)malloc(n* sizeof(int));
    int key;
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    printf("Enter the key which you want to search: ");
    scanf("%d",&key);    
    printf("The position at which the key is found is %d",linear_search(arr,n,key));
    delete arr;
    return 0;    

}
