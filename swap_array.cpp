#include<iostream>
using namespace std;

void swapno(int A[], int n) {
    for(int i = 0; i < n; i += 2) {
        if(i + 1 < n) {
            swap(A[i], A[i + 1]);
        }
    }
}

int main() {
    int n;
    cout << "Enter total no. of elements: ";
    cin >> n;
    int A[n];
    
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    swapno(A, n);

    cout << "Array after swapping adjacent elements: ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
