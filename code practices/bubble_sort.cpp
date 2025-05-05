#include <iostream>
#include <ctime>
using namespace std;
// decalaration of the method 
int Bubble_sort(int Data[],int limit,int search){
	for (int i=0;i<limit-2;++i){
		for(int j=1;j<limit-1;++j){
			
		}
	}
	
	
	
	
return ;	
}



// to deaclaration of the main mehtod 
int main(){
	clock_t t1,t2;
    t1=clock();
	cout<<"enter the number of the limit the data list element \n";
	int key,n;
	cin>>n;
		cout<<"enter the "<<n<<" number of sorted element data list \n";
		int Array[n];
		for (int i=0;i<n;++i)
			cout<<"enter the--"<<i<<"--index element of data list\n";
			cin>>Array[i];
		
	    cout<<"enter the searching element of the data set:\n ";
        cin>>key;
        cout<<"the searching element of index is "<<Bubble_sort(Array,n,key)<<endl;
		t2=clock();
		cout<<"the running time excutted of the program is := "<<(t2-t1)/CLOCKS_PER_SEC<<endl;
return 0;

}