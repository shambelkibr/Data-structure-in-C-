#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	    clock_t t1,t2;
	    t1=clock();
		int n;
		cout<<"enter how many data list:\n";
		cin>>n;
	     cout<<"enter "<<n<<" number of data list:\n";
		int Array[n];
		for(int i=0;i<n;++i){
	        cout<<" enter the ---- "<<i<<"---indax of Array of element of the data list:\n";
			cin>>Array[i];
		}
		int size=sizeof(Array)/sizeof(Array[0]);
		for (int i=0;i<size-1;++i){
			for(int j=i+1;j<size;++j){
				if (Array[j]<Array[i]){
					int temp=Array[i];
					Array[i]=Array[j];
					Array[j]=temp;
				}
			}
		}
		cout<<"after sorting the data list is \n";
		for (int i=0;i<size;++i){
	        cout<<Array[i]<<" ";
		}
		t2=clock();
		cout<<"\ntime comsuming for excuting of the  progrmaing is := "<<(t2-t1)/CLOCKS_PER_SEC<<endl;
	
		
	return 0;
}