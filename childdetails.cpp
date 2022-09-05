/*2. Create two class name Parent and Child which has function name called childdetails(),
 Use Data Abstraction to Display childdetails using parent class.*/
 
 
 #include<iostream>
 using namespace std;
 
 class Parent{
 	public:
 	virtual void childdetails(){
 	 	cout<<"the parent"<<endl;
 	 	
	  }
 };
 class Child:public Parent{
 	public:
 		char name[20];
 		int birth_date;
 		char surname[20];
 		char address[20];
 		
 		void childdetails(){
		
 		
 		cout<<"enter the name:"<<endl;
 		cin>>name;
 		cout<<"enter the birth_date:"<<endl;
 		cin>>birth_date;
 		cout<<"eneter the surname :"<<endl;
 		cin>>surname;
 		cout<<"enter the address:"<<endl;
 		cin>>address;
 		
 	 }	
 		
 		
 };
 main(){
 	Child c;
 	Parent *P;
 	P = &c;
 	P->childdetails();
 	
 }
 
