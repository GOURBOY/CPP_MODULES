#include <iostream>
using namespace std;
int main(){
/*	int a[]={-1,-2,-3,-4,-5};
	cout<<a[5];
*/

int a=0;
label1:
cout<<a;
if(a==10){
	return 0;
}
a++;
goto label1;
}
