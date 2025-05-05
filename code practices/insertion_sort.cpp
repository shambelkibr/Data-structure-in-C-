#include <iostream>
#include "insertion_sort.h"
using namespace std;

int A[] = {1, -90, 89, 0, 3, 4};
int n = sizeof(A) / sizeof(int);

void insertion_sort() {
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i; j >= 1; j--) {
            if (A[j - 1] > A[j]) {
                int temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}