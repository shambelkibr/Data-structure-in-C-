#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

	struct Student{
	char name[10];
	int id;
    Student *next;	
	} *start=NULL;
	
	
void insert_big();
void insert_end();
void del_big();
void del_end();
void display();

  // the main function  definathio
int main(){
		do{
			int chhose=1;
			system("cls");
			cout<<"1 insert the list in the bigining of the data\n";
			cout<<"2 insert the list in the ending of the data\n";
			cout<<"3 delet the list from the bigining of the data\n";
	        cout<<"4 delet the list from the ending of the data\n";
	        cout<<"5 display the  list of the all data recorded\n";
	        cout<<"6 exit the loop \n";
	        
	        cout<<"enter your chhose \n";
	        cin>>chhose;
	        
	        switch(chhose){
			case 1:insert_big();break;
	        case 2:	insert_end();break;
			case 3:del_big();	break;
			case 4:del_end();	break;
			case 5:display();   break;	
			case 6: exit(0);
			default:cout<<"your enter not correct plese enter the correct choose\n";
			}
		}while(true);

	return 0;
}

// the insert  begining of function data list

void insert_big(){	   

	Student *temp=new Student;
	cout<<"enter your id \n";
	cin>>temp->id;
   cout<<"enter your name \n";
   cin>>temp->name;
   
   if (start==NULL){
	   start=temp;
      temp->next=NULL;
	   }  
	   else{
	   	 temp->next=start;
         start=temp;
   }  

   
      }

	  // the insert the ending data list
void insert_end(){
   
   	Student *temp=new Student;
	cout<<"enter your id \n";
	cin>>temp->id;
    cout<<"enter your name \n";
    cin>>temp->name;
    temp->next=NULL;
   
   if (start==NULL){
	   start=temp;
      
	   } 
	    
  else{
	   	Student *curr=start;
	   	while(curr->next!=NULL){
			   curr=curr->next;
		   }
	   	 curr->next=temp;
   }      
}

// the delete the begining of data list

void del_big(){


	
	
}

// the delete the ending of the list

void del_end(){
	
Student *curr=start;

	if(start=NULL){
		cout<<"the list is empty \n";
		getch();	
	}
	else if(start->next==NULL){
		start=NULL;
		delete curr;
	}
	else{
		while(curr->next!=NULL){
			curr=curr->next;
		}
		
		delete curr;
		cout <<"the one student information is deleted insert from the end is succefull\n";
	}	
 }

//display the all record of the data list

void display(){
	    Student *curr=start;
	
		if(start==NULL){
			cout<<"the list is empty\n";
			getch();
		}
		
		else{
	        cout<<"id"<<" "<<"name\n";
			
			while(curr!=NULL)
			{
				cout<<curr->id<<" "<<curr->name<<endl;
				curr=curr->next;
			}
			getch();
		}}

		











