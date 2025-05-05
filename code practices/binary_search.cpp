// write to simple program to find the such element of in binary of function
#include <iostream>
#include <ctime>
using namespace std;
// function declaration
int Binary_search(int list[],int key,int size){
	
	int top=size-1;
	int bottom=0;
	int index=-1;

	
	while((top>=bottom)&&(index==-1))
	{
       int  mid=(top+bottom)/2;
		if(list[mid]==key){
			return mid;
	
		}
		else{
			if(key>list[mid]){
				bottom=mid+1;
		
			}
			
			else{
				top=mid-1;
			 
         	}        
			
		}	
	}	
	return index;
	
}


// main function deaclration
int main(){
	int n;
	clock_t t1,t2;
	t1=clock();
	cout<<"enter the limit of data of list \n";
	cin>>n;
	int A[n];
	cout<<"enter the---"<<n<<"---number of sorted  list of the data \n";
	
	for(int i=0;i<n;++i)  // to store the list of the data element
		cin>>A[i];
	
	cout<<"enter the search of element \n";
	int key ;
	cin>>key;
    cout<<Binary_search(A,key,n)<<endl;
    t2=clock();
    cout<<"the running time of the progrtam is := "<<(t2-t1)/CLOCKS_PER_SEC<<endl;
	return 0;
}