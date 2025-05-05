#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

// to declare the structure of property
struct Student{
	int id;
	char name[10];
	Student *next;
}*start=NULL;

// to declare the function  or  prototyping
 //add at begin
 void insert_begin();
 void insert_end();
 void del_begin();
 void del_end();
 void display();
 void sortById();
 Student* AddData();
 // to declaration the main funccction
 
 int main(){
	 int choose;
	 while(true)
	 {
         cout<<" please ! enter your  choose\n";
		 cin>>choose;
		 switch(choose)
		 {
 	         case 0:Student* AddData();break;
			 case 1:display();break;
			 case 2:insert_begin();break;
			 case 3:insert_end();break;
			 case 4: del_begin();break;
			 case 5: del_end();break;
			 case 6:exit(0);
			 default:cout<<"PLEASE ENETR AGAIN YOUR CHOOSE IS INCORRECT\n";
			 break;
		 }
   }
	
	 return 0;
 }
 
 // todeclaration of the function defination
 
  Student* AddData(){
	  Student * stu=new Student;// to create the new node to access
	  cout<<" please enter your id\n";
	  cin>>stu->id;
	  cout<<" please enter your name\n";
	  cin>>stu->name;
	  stu->next=NULL;
	  return stu;
  }
 
 void insert_begin(){
	student *stu =* AddData()();	 
		if(start==NULL)
			start=stu; 
		 
		 else{
			 stu->next==atart;
			 start=stu;
		 }
 }
 
 void insert_end(){
	 
 }
 
 void del_begin(){
	 
 }
 
 void del_end(){
	 
 }
 
 void display(){
	 
 }
 
 void sortById(){
	 
 }
 
 
 
 
 
 
 
 
 
 