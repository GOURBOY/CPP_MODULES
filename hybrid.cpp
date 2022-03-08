#include <iostream>
using namespace std;
class Base{
	public:
	void base(){
		int base;
		cout<<"enter the base number: ";
		cin>>base;
		
	}
	};
class Base::public Derive{
	public:
 int aDerive1(){	
		int Derive1;
	cout<<"enter the derive1";
	cin>>Derive1;		
    return Derive1;
	}
	};
	class Derive2:: public Base{
		public:
			int aDerive2(){
				int Derive2;
				cout<<"enter the derive2";
				cin>>Derive2;
				return Derive2;
			}
			
	};
	class inherit{
		int ainherit(){
			int inherit;
				cout<<"enter the inherit";
				cin>>inherit;
		return inherit;
		}
		
	};
	
	
	
