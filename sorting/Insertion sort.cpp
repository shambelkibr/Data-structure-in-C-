#include <iostream>
using namespace std;

// function definition 
 void printsoted(int list[],int n){
	for (int i=0;i<n;++i){
	cout<<list[i]<<" ";
	}
	cout<<endl;
}

void Insertionsort(int list[],int n){
	for(int i=1;i<=n-2;i++){
		for(int j=i;j>=1;j--){
			if(list[j-1]>list[j]){
				int temp=list[j-1];
				list[j-1]=list[j];
				list[j]=temp;
			}
		}
	}
}


// Main function definition
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
   Insertionsort(A,n);
   cout <<"After sorted the data of Araay list is\n";
   printsoted(A,n);
   
	return 0;
}