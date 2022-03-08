#include <iostream>
using namespace std;
class ab{
	public:
	void g(){
		
	cout<<"abhay\n";
		
	}
	void h(){
		
		cout<<"sharad";
		
	}
	
	
};
class cs: public ab{
	public:
	
 virtual void g(){
		
		cout<<"naitik"<<endl;
	}
	void h(){
		
		cout<<"hrishu";
		
	}
	
	
};

int main(){
	ab *d;
	cs f;
	d= &f;
	
	d->g();
	d->h();
	
	return 0;
	
	
}
