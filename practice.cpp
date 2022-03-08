/*#include <stdio.h>
int main(){
	int a,b,c;
scanf("%d %d %d",&a,&b,&c);
printf("%d\n%d\n%d",a,b,c);	
	
}
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>c;
	cout<<a<<b<<c;
	
}*/
#include<stdio.h>  
 int main()    
{    
int a, b; 
printf("Enter Both The Numbers: ");      
scanf("%d%d",&a,&b);     
printf("Before swap a=%d b=%d",a,b);      
a=a+b;   
b=a-b; 
a=a-b; 
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}  
 
