/*4. WAP to perform some basic mathematical operationsusing Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations*/

#include<iostream>

using namespace std;

class A{
	public:
	virtual void data()=0;
};
class fun: public A{
	//( A = r² )
	public:
	int r=10;
	int A;
	int h=40;
	int l=30;
	int b=40;
	float c=0.5;
	int area;
	int triangle;
	int rectangle;
	void data(){
	
	//a=r*r
	
	cout<<"the area of circle:"<<r*r<<endl;
	
	//A = 1/2 * b * h

	cout<<"the area of triangle:"<<c*b*h<<endl;
	
	//A = l * b

	cout<<"the area of rectangle:"<<l*b<<endl;

}
	
	
};
main(){
	
fun f;
A  *a;
a = &f;
a->data();
}



