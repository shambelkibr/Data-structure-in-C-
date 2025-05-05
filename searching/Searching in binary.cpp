#include <iostream>
using namespace std;

//function defination
int  Binary_searching(int A[],int key,int n){
	int top=n-1,bottom=0;
	int middle,found=0,index=0;
	do{
			middle=(top+bottom)/2;
			if(key==A[middle])
				found=1;
			else
			{
				if(key<A[middle]){
				   top=middle-1;	
				}
					
				else
				{
				bottom=middle+1;	
				}
			}
		
	}while(top>=bottom&&found==0);
	
		
		if(found==0)
			index=-1;
		else
			index=middle;
	
	return index;
}


int main()
{
    int n ,key;
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
        cout<<"the result is := "<<Binary_searching(A,key,n)<<endl;	
  return 0;
}

