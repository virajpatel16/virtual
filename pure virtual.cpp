/*1. Demonstrate the use of pure virtual function.*/

#include<iostream>
using namespace std;

class fun{
	public:
	virtual void data()=0;
};
class user:public fun{
	public:
		void data(){
			cout<<"the function is virtual"<<endl;
		}	
};
main(){
	user obj;
	obj.data();
}
