#include <iostream>
#include <vector>
#include <limits>
typedef std::vector<int> int_vec;

void merge(int_vec *a, int p, int q, int r) {
    int n = q - p + 1;
    int m = r - q;
    int_vec left_subarray(n + 1);
    int_vec right_subarray(m + 1);
    for ( int i = 0; i < n; i++ ) {
        left_subarray[i] = a->at(p + i);
    }
    left_subarray[n] = std::numeric_limits<int>::max();

    for ( int i = 0; i < m; i++ ) {
        right_subarray[i] = a->at(q + i + 1);
    }
    right_subarray[n] = std::numeric_limits<int>::max();

    int left_i = 0;
    int right_i = 0;
    for ( int i = p; i <= r; i++ ) {
        if ( left_subarray[left_i] > right_subarray[right_i] ) {
            a->at(i) = right_subarray[right_i];
            right_i++;
        } else {
            a->at(i) = left_subarray[left_i];
            left_i++;
        }
    }
}

void merge_sort(int_vec *a, int p, int q) {
    if ( p < q ) {
        int r = ( p + q ) / 2;
        merge_sort(a, p, r);
        merge_sort(a, r + 1, q);
        merge(a, p, r, q);
    }
    // for debug 
    // for ( int i = 0; i < a->size(); i++ ) {
    //     std::cout << a->at(i) << " ";
    // }
    // std::cout << std::endl;

}
int main() {
    int_vec a = {3, 41, 52, 26, 38, 57, 9, 49};
    merge_sort(&a, 0, a.size()- 1);
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << a[i] << ",";
    }
    std::cout << std::endl;
}
