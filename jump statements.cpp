/*#include<iostream>
using namespace std;
int main(){
	int i;
	for( i=0;i<=10;++i){
		
		cout<<"ABHAY "<<i<<endl;
		continue;
		break;
		return 0;
        goto label1;
	label1:	cout<<"hrishu "<<i<<endl;
	
		//goto label1;
	}
	cout<<"hrishu "<<i<<endl;
}*/
#include<iostream>
using namespace std;
int main()
{
    int n=0;
    while(n<=10)
    {
        if(n==4)
		continue;
        cout<<n<<endl;
        n++;
        
    }
   cout<<"abhay";
}
