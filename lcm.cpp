#include <iostream>
using namespace std;
int main(){
	
	int a,b,max;
	cout<<"enter 1st value"<<endl;
	cin>>a;
	cout<<"enter value 2"<<endl;
	cin>>b;
	max=(a>b)?a:b; 
	do{
		if(max%a==0 && max%b==0){
			
			cout<<"the lcm of"<<a<<" & "<<b<<" is "<<max;
			break;
		}
		else
		++max;
		
	}while(true);
	
}
