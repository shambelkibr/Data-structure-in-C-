#include <iostream>
using namespace std;
void adaptiveSelectionSort (int arr [], int n) {
    bool isSorted;
    for (int i = 0; i< n - 1; i++) {
        isSorted = true;
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr [min_index]) 
                min_index = j; 
            if (j > i + 1 && arr[j] < arr[j-1]) 
                isSorted = false;
            
        }
        if (min_index != i) {
            swap(arr[i], arr[min_index]);
            isSorted = false;
        }
        
        if (isSorted) {
            cout<<"Early terminated at pass "<<i + 1<<endl;
            break;
        }
    }
}

void printArray (int arr [], int n) {
     for (int i = 0; i < n; i++) 
        cout <<arr[i] <<" ";
   }

int main () {    
    int n;
    cout<<"How many elements? ";
    cin >> n;
    int arr[n];  
    cout<<"Enter "<< n <<" elements: ";
    for (int i = 0; i< n; i++) {
        cin >>arr[i];
    }
    cout<<"Original array: ";
    printArray (arr, n);
    cout<<endl;
    
   adaptiveSelectionSort (arr, n); // calling of optimized function code
    
    cout<<"Sorted array: ";
    printArray (arr, n);
    
    return 0;
}
