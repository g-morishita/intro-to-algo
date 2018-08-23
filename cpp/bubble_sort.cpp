#include <iostream>
#include <vector>
typedef std::vector<int> int_vec;

void bubble_sort(int_vec *a) {
    int len = a->size();
    for ( int i = 0; i < len; i++ ) {
        for ( int j = len -  1; j > i ; j-- ) {
            if ( a->at(j) < a->at(j-1) ) {
                int tmp = a->at(j);
                a->at(j) = a->at(j-1);
                a->at(j-1) = tmp;
            }
        }
    }
}

int main() {
    int_vec a = {5, 1, 20, 9, 12, 2, 0, 92, 5};
    bubble_sort(&a);
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
