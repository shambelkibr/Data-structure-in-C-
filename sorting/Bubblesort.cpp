#include <iostream>
using namespace std;

// function defination 

void printsoted(int list[],int n){
	for (int i=0;i<n;++i){
	cout<<list[i]<<" ";
	}
	cout<<endl;
}


void Bubblesort(int list[],int n){
	int temp;
	for(int i=n-2;i>=0;--i){
		for(int j=0;j<=i;++j){
			if(list[j]>list[j+1]){
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
}


// main function defination 
int main(){
	int n;
	cout<<"enter how many data to store\n";
	cin>>n;
	int A[n];
	cout<<"enter the--- "<<n<<" ---number of data list of Array \n";
	for(int i=0;i<n;++i)
	cin>>A[i];

//function calling from main function
   cout <<"Before sorted the data of Araay list is \n";
   printsoted(A,n);
   Bubblesort(A,n);
   cout <<"After sorted the data of Araay list is\n";
   printsoted(A,n);
   

	return 0;
}