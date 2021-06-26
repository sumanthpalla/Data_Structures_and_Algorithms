
// C++ program for Count Inversions
#include <iostream>
using namespace std;
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]

int merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int count=0;
    int n2 = r - m;
 
    // Create temp arrays
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
            count+= n1-i;
        }
        k++;
    }
 
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    return count;
}
 
// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
int mergeSort(int arr[],int l,int r){
    if(l>=r){
        return 0;//returns recursively
    }
    int m =l+ (r-l)/2;
    int left =  mergeSort(arr,l,m);
   int right = mergeSort(arr,m+1,r);
    int mid = merge(arr,l,m,r);
    return left+mid+right;
}
 
// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
// Main Consists of inputs of sorted arrays in decreasing order
int main()
{
    int arr1[] = { 3,2,1 },// return 3 inversions
    arr2[]={10,9,8,7,65,4,3,2,1,0},//returns 41
    arr3[]={1,2,3,4,5,6,7,8,9,10};//returns 0
    int arr_size_1 = sizeof(arr1) / sizeof(arr1[0]),
    arr_size_2 = sizeof(arr2) / sizeof(arr2[0]),
    arr_size_3 = sizeof(arr3) / sizeof(arr3[0]);
    printArray(arr1,arr_size_1);
    cout<<"Inversions: "<<mergeSort(arr1,0,arr_size_1-1)<<endl;
    printArray(arr2,arr_size_2);
    cout<<"Inversions: "<<mergeSort(arr2,0,arr_size_2-1)<<endl;
    printArray(arr3,arr_size_3);
    cout<<"Inversions: "<<mergeSort(arr3,0,arr_size_3-1)<<endl;
    return 0;
}
 