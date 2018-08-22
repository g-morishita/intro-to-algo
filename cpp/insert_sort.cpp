#include <iostream>
#include <cassert>
#include <array>

void insert_sort(int a[], int len, bool reverse = false) {
    for ( int j = 1; j < len; j++ ) {
        int key = a[j];
        int i = j - 1;
        if ( reverse ) {
            while ( i >= 0 && a[i] < key ) {
                a[i+1] = a[i];
                i--;
            }
            a[i+1] = key;
        } else {
            while ( i >= 0 && a[i] > key ) {
                a[i+1] = a[i];
                i--;
            }
            a[i+1] = key;
        }
    }
}

int main() {
    int a[] = {5, 9, 3, 2, 7, 1, 10};
    int n = 7;
    insert_sort(a, n);
    for ( int i = 0; i < n; i ++ ) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
