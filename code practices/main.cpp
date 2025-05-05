#include <iostream>
#include "insertion_sort.h"
using namespace std;

int main() {
    // Before sorting
    cout << "Before sorted value is:\n";
    printArray(A, n);

    // After sorting
    insertion_sort();
    cout << "After sorted value is:\n";
    printArray(A, n);

    return 0;
}