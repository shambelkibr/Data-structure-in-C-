# include<iostream>
#include <ctime>
using namespace std;
// to declare function 
int linear_search(int list[] ,int key){	
	int index =-1;
	for (int i=0;i<5;++i){
		if (list[i]==key){
         return i;
		}
	}
	return index;
}
// main function 
int main(){
	clock_t t1,t2;
t1=	clock();
	int k ,n;
	
	cout<<"enterthe number of data element"<<endl; // the maximum of limit of the data
	cin>>n;
	int list[n];
	cout<<"enter the---"<<n<<"---element of data list \n"; // accept the data from user
	for(int i=0;i<n;++i){
		cin>>list[i];
	}
	cout<<"enter the search key\n";// enter the search of element from the give data
	cin>>n;
	int result =linear_search(list,n);
    cout<< "the esarch of index is : "<<result<<endl;
    t2=clock();
    cout<<"the excuted time is = "<<(t2-t1)/CLOCKS_PER_SEC<<endl;
	return 0;
}