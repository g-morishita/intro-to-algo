#include <iostream>
#include <vector>
typedef std::vector<int> int_vec;

int_vec selection_sort(int_vec a) {
    int len = a.size();
    for ( int i = 0; i < len; i++ ) {
        int min = a[i];
        int i_min = i;
        for ( int j = i + 1; j < len; j++ ) {
            if ( min > a[j] ) {
                min = a[j];
                i_min = j;
            }
        }
        a[i_min] = a[i];
        a[i] = min;
    }
    return a;
}

int main() {
    int_vec a = {5, 3, 10, 1, 2};
    int_vec b = selection_sort(a);
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;
}
