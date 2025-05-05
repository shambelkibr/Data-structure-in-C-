#include <iostream>
using namespace std;

// function definition

void printsoted(int list[],int n){
	for (int i=0;i<n;++i){
	cout<<list[i]<<" ";
	}
	cout<<endl;
}

 void Selectionsort(int list[],int n){
	int temp,minidex;
	for(int i=0;i<=n-2;i++){
		minidex=i;
		for(int j=i+1;j<=n-1;++j){
			if(list[j]<list[minidex])
			minidex=j;
	   }
	   if(i!=minidex){
				temp=list[i];
				list[i]=list[minidex];
				list[minidex]=temp;
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
   Selectionsort(A,n);
   cout <<"After sorted the data of Araay list is\n";
   printsoted(A,n);
	
	
	return 0;
}