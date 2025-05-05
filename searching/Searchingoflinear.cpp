#include <iostream>
#include <ctime>
using namespace std;

int main()
{   clock_t t1,t2;
     t1=clock();
	int n ,key,index=-1;
	cout<<"enter how many elment\n";
	cin>>n;
	int A[n];

	// input the data
		for(int i=0;i<n;++i){
			cout<<"enter the "<<i<<" index of element\n";
        cin>>A[i];
	       	
	}
	
	// search the key element in the data
	    cout<<"enter the searching of element from the list\n";
		cin>>key;
	for(int i=0;i<n;++i){
		if(key==A[i])
		   index=1;
	       	
	}
	
	if(index!=-1)
		cout<<"the key element is found in index "<<index<<endl;
	else
	cout<<"the searching key element is not found in list \n";
    t2=clock();
    cout<<"the program run time is "<<(t2-t1)/CLOCKS_PER_SEC<<endl;

	return 0;
}