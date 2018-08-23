#include <iostream>
#include <vector>
typedef std::vector<int> int_vec;

void insert(int_vec *a, int n) {
    int key = a->at(n-1);
    int i = n-2;
    while ( i >= 0 && a->at(i) > key ) {
        a->at(i+1) = a->at(i);
        i--;
    }
    a->at(i+1) = key;
}

void insert_sort(int_vec *a, int n) {
    if ( n > 1 ) {
        insert_sort(a, n - 1);
    }
    insert(a, n);
}

int main() {
    int_vec a = {5, 7, 2, 1, 0, 12, 2};
    insert_sort(&a, a.size());
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
