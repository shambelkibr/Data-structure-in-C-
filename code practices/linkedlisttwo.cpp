#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
// declaration for structure
struct Student
{
	char name[10];
	int age;
	Student *start=NULL;
	
}*next=NULL;

// to each funtion declaration or proto typing of the function
 void display();
 void insert_bing();
 void insertend();
 void Deletebegin();
 void Deleteend();
 void AddData();
 
 // to declaration for main function defination the starting and the ending point of the program
 
int main()
{
	int choose;
	cout<<"enter your choose to operform any operation :\n";
	cin>>choose;
	
	while(true)
	{
		cout<<"1, to display the list of data \n";
			cout<<"2, to insert thebegining of the list of data \n";
				cout<<"3, to ending of the list of data \n";
					cout<<"4, to deleting the bigining of the list of data \n";
						cout<<"1, to deleting the ending of the list of data \n";
							cout<<"1, to AddData the list into the list of data \n";
		switch(choose)
		{
		case 1: display();break;
		case 2: insert_bing();break;
		case 3: insertend();break;
		case 4: Deletebegin();break;
		case 5: Deleteend();break;
		case 6:AddData();break;
		default:
			cout <<"please entr the correct choose\n";
		}
	}
  return 0;
}
			
 void display(){
	 
 }
 
 void insert_bing(){
	 
 }
 
 void insertend(){
	 
 }
 
 void Deletebegin(){
	 
 }
 
 void Deleteend(){
	 
 }
 
 void AddData(){
	 
 }
 
 
 
 
 
 
 