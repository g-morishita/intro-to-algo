#include <iostream>
#include <cassert>
#include <array>

void insert_sort(int a[], int len) {
    for ( int j = 1; j < len; j++ ) {
        int key = a[j];
        int i = j - 1;
        while ( i >= 0 && a[i] > key ) {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}

int main() {
    int a[] = {5, 9, 3, 2, 1};
    int n = 5;
    insert_sort(a, n);
    for ( int i = 0; i < n; i ++ ) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
