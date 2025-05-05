#include <iostream>
using namespace std;
// function defination for simple sort of algorithms 
void Simplesort(int list[],int n){
int temp;
	for(int i=0;i<=n-2;++i){
		for(int j=i+1;j<=n-1;++j){
			if (list[i]>list[j]){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
}

void printsoted(int list[],int n){
	for (int i=0;i<n;++i){
	cout<<list[i]<<" ";
	}
	cout<<endl;
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
   Simplesort(A,n);
   cout <<"After sorted the data of Araay list is\n";
   printsoted(A,n);
   
	
	return 0;
}