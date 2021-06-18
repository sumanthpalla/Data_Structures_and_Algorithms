#include<iostream>
#include<cstdio>
// Binary Search takes a sorted array and performs divide and conquer approach in
// O(logn) time and O(1) space complexity.
int binary_search(int * arr, int n, int key){
    int l=0,r=n-1,mid;
    while(l<r)
    {
        mid = l+((r-l)/2);
        if(arr[mid]<key)
        {
            l=mid+1;
        }
        else if(arr[mid]>key)
        {
            r=mid-1;
            //printf("%d ",mid);
        }        
        else return mid;
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int * arr = (int *)malloc(n * sizeof(int));
    int key;
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    printf("Enter the key which you want to search: ");
    scanf("%d",&key);
    printf("The position at which the key was found is: %d",binary_search(arr,n,key));
    delete arr;
    return 0;
}
