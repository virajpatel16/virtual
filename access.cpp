/*3. Demonstrate the use of public,private and protected access modifiers.*/

#include<iostream>
using namespace std;

class A{
	public:
		void fun(){
			cout<<"the class is public"<<endl;
		}
};
class B:public A{
	private:
		void data(){
			cout<<"the class is private"<<endl;
			
		}
};
class C:public B{
	protected:
		void user(){
			cout<<"the class is protected"<<endl;
		}
};

main(){
	
	C obj;
	obj.fun();
}
