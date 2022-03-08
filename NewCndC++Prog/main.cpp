#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include<bits/stdc++.h>
using namespace std;

/*
Typerwriter#####################3
int main(){
	system("color 4A");
	int size;
	cin>>size;
    string arr;
    cin>>arr;
	int i=0;
	while(i<size){
	cout<<arr[i];
	fflush(stdout);
        sleep(1);
    	i++;
	}
		return 0;
	}
*/

/*
DIGITAL CLOCK################################
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	system("color 4A");
	int hour,minute,second;
	hour=minute=second=0;
	while(1){
		system("cls");
		printf("Digital clock:\t%.2d:%.2d:%.2d",hour,minute,second);
		fflush(stdout);
		second++;
		if(second==60){
			minute+=1;
			second =0;
		}
		if(minute==60){
			hour+=1;
			minute=0;
		}
		if(hour==24){
		
		hour=0;
		minute=0;
		second=0;}
        sleep(1);}
		return 0;
		}
*/
/*#include <iostream>
using namespace std;
void swap(int *a,int *b){
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
	return i+1;
}
void quicksort(int arr[],int p,int r){
    if(p<r){
    	int q=partition(arr,p,r);
    	quicksort(arr,p,q-1);
    	quicksort(arr,q+1,r);
	}
}
void printarray(int arr[],int size){
	for(int i =0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
}
int main(){
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	quicksort(arr,0,num-1);
	printarray(arr,num);
}
*/
