
 #include <iostream>
 using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, f;
    n=12;
    f = fibonacci(n);
    cout << f << endl;
    return 0;
}
