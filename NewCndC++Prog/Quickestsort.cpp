#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int* b){
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++){
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	        swap(&arr[i+1],&arr[high]);
	        return (i+1);
	}
void quicksort(int arr[],int p,int r){
	  if(p<r){
	  	int q=partition(arr,p,r);
	  	quicksort(arr,p,q-1);
	  	quicksort(arr,q+1,r);
	  }
}	
void printArray(int arr[],int size){
	
  		for(int i=0;i<size;i++){
  			cout<<arr[i]<<" ";
		  }		
}
int main(){
	int n;
	cout<<"Enter the size of array ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in array ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	printArray(arr,n);
}
// The time complexity of Quick sort is :
/**
       Best Case            AVerage Case                 Worst Case
       nlogn                  nlogn                        n^2
       
Advantages
It is in-place sorting algo, since it uses only a small auxiliary stack.

It requires only n (log n) time to sort n items.

It has an extremely short inner loop.

This algorithm has been subjected to a thorough mathematical analysis, a very precise statement can be made about performance issues.

Disadvantages
It is recursive. Especially, if recursion is not available, the implementation is extremely complicated.

It requires quadratic (i.e., n2) time in the worst-case.

Also it is Unstable Bcz we swap their position according to pivot element instead of their original position.

*/




