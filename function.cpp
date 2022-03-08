#include <iostream>
using namespace std;

int add(int a,int b);
	int main(){
		
		cout<<add(4);
		
	}
	int add(int a=10,int b){
	
	int c=a+b;
	return c;
	}
