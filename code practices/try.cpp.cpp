//SINGL LINKED LIST
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
struct Student
{
		int id;
		char name[20];
		Student* next;	
};
 Student *start = NULL;
 
 
 //add at begin
 void insert_begin();
 void insert_end();
 void del_begin();
 void del_end();
 void display();
 void sortById();
 
 int main(){
	 char ch = 'y';
	 do {
	 	system("cls");
	 	cout<<"1) at begining of the list\n";
	 	cout<<"2) at end of the list\n";
	 	cout<<"3) delete at begining of the list\n";
	 	cout<<"4) delet at end of the list\n";
	 	cout<<"5) to display of the list\n";
	 	cout<<"6) to sort of the list\n";
	 	cout<<"7) exitt\n";
	 	int choice;
	 	cout<<"please enter your choice\n";
	 	cin>>choice;
	 	
	 
	 	
	 	switch(choice)
		 {
		 case 1:
		 insert_begin();
			 break;
          case 2:
		 insert_end();
			 break;
		 
          case 3:
		  del_begin();
			 break;
		 
         case 4:
		 del_end();
			 break;
		 
          case 5:
		 display();
			 break;
		 case 6:
		 	sortById();
		 	break;
		 
          case 7:
		 ch = 'n';
		 cout<<"good bye!!";
			 break;
		 
		 default:
		 	cout<<"enter 1-6";}
		 	if(ch != 7){
			cout<<"to continue any key\n";	
			getch();
			 }
			 
		 
	 }while(ch == 'y');
	 return 0;
 }
 
 
 

 //INSERT AT THE END
  void insert_begin(){
	  Student* temp = new Student;
	  cout<<"enter student id\n";
	  cin>>temp->id;
	  cout<<"enter student name\n";
	  cin>>temp->name;
	  if(start == NULL){
		  start = temp;
		  temp->next = NULL;}
	  else{
		  temp ->next = start;
		  start = temp;}}
  //END HERE
  
  
  
  
  
  //ADDD END
 void insert_end(){
	Student* temp = new Student;
      cout<<"enter student id\n";
	  cin>>temp->id;
	  cout<<"enter student name\n";
	  cin>>temp->name;
	  temp->next = NULL;
	  if(start == NULL){
		  start = temp;
	  }
	  else{
		  Student* curr = start;
		  while(curr->next != NULL){
          curr = curr->next;}
		  curr->next = temp;}}
 // ADD END
 
 
 
 
 
 
 
 //DELETE HERE
 void del_begin(){
 	Student* temp = start;
 	if(start == NULL){
		 cout<<"empty already dleted\n";
	 }
 	start = start->next;
 	delete temp;
	 
 }
 //DELETE OPERATION END HERE
 
 
 
 
 
 
 
 //DELETE AT END
 void del_end(){
 	
 	if(start == NULL){
		 cout<<"empty data\n";}
		 else if(start->next == NULL){
			 delete start;
			  start = NULL;
			 cout<<"one information deleted successfully\n";
		 }
		 
	 else{
	 	Student *curr = start;
		 while(curr->next->next!=NULL){
		 	curr = curr->next;}
			 delete curr->next;
			 curr->next = NULL;
			 cout<<"the last node successfully dleted\n";}}
 //DELETE END OPERATION END HERE
 
 
 
 
 
 //DISPLAY THE DATA HERE
 void display(){
 	
 	Student* curr = start;
 	if(start == NULL){
 		cout<<"the list is an empty \n";
 		getch();
 		return;
	 }
	 
	 else{
		 cout<<"ID"<<" "<<"NAME"<<endl;
		 while(curr != NULL){
			 cout<<curr->id<<" "<<curr->name<<endl;
			 curr = curr->next;
		 }
		 getch();
	 }}
	 //END DISLAY
	 
	 
	 //SORT BY ID
	 void sortById(){
		 if(start == NULL || start->next == NULL){
		 	return;}
		 	
			 bool swapped;
		 
		 
		 do{
			swapped = false; 
			Student* curr = start;
			while(curr->next!=NULL){
				if(curr->id > curr->next->id){
					swap(curr->id, curr->next->id);
					swap(curr->name, curr->next->name);
					swapped = true;}
					curr = curr->next;}}
		 while(swapped);}
 
 
 	
 	