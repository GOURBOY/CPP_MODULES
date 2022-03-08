#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	cout<<"enter value A";
	cin>>a;
	cout<<"enter value B";
	cin>>b;
	cout<<"enter value C";
	cin>>c;
	
	if(a>b){
		
		if(a>c){
			
			cout<<"A is greater";
			
		}
		else{
		
		cout<<"C is greater";
		}
	   		
	}
	else{
		
		if(b>c){
			
			cout<<"B is greater";
		}
		else{
			
			cout<<"C is greater";
			
		}
		
	}
	
	//cout<<"ABHAY";
	
	return 0;
}
