#include <iostream>
#include<new>
using namespace std;
void swap(int &a, int &b){
	int *temp = new int;
	*temp =a ;
	a= b;
	b=*temp;
	delete temp;
	return;
}
//Bubble Sort is most inefficient algorithm sice it it takes O(n^2) time complexity and 
//O(n^2) swaps. Below is the implementation of Bubblesort and main() includes a test case!
void bubbleSort(int *arr,int n){
	bool swapped = true;
	while(swapped){
		swapped=false;
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
				swapped=true;
			}
		}
		if(!swapped)break;
	}
	return ;
}
int main() {
	// your code goes here
	int arr[] = {-2,20,3,23,-1,5,-3,0,8,9,4};
	bubbleSort(arr,11);
	for(int i=0;i<11;i++)cout<<arr[i]<<" ";
	return 0;
}