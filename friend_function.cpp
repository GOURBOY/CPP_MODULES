#include <iostream>
using namespace std;
class Student{
	private:
		int a,b;
		
		public:
			void getdata(){
			cout<<"Enter the number 1: ";
			cin>>a;
			cout<<"Enter the number 2: ";
			cin>>b;
			}
			void fr(){
				
				
			int c= a+b;
			cout<<c;
				
			}
				
};

int main(){
	
	Student s;
	s.getdata();
	s.fr();
	
	
}
