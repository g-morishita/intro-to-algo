#include <iostream>
#include <vector>
typedef std::vector<int> int_vec;

int binary_search(int s, int e, int_vec a, int v) {
    if ( e < s ) {
        return -1;
    } else {
        int m = ( e + s ) / 2;
        if ( m == s ) {
            return -1;
        }
        if ( a[m] == v ) {
            return m;
        } else if ( a[m] < v ) {
            return binary_search(m, e, a, v);
        } else {
            return binary_search(s, m, a, v);
        }
    }
}

int main() {
    int_vec a = {1, 3, 5, 9, 11};
    int index = binary_search(0, a.size(), a, 10);
    std::cout << index << std::endl;
}
