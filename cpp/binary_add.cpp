#include <iostream>
#include <vector>
typedef std::vector<int> int_vec;

int_vec add_binary(int_vec a, int_vec b) {
    int len = a.size();
    int_vec c(len + 1);
    bool is_rise = false;
    for ( int i = len; i > 0; i-- ) {
        c[i] = (a[i-1] + b[i-1] + is_rise) % 2;
        is_rise = ( a[i-1] + b[i-1] == 2 );
    }
    c[0] = is_rise;
    return c;
}

int main() {
    int_vec a = {1, 1, 0, 1};
    int_vec b = {1, 0, 0, 1};

    int_vec c = add_binary(a, b);
    for ( int i = 0; i < c.size(); i++ ) {
        std::cout << c[i];
    }
    std::cout << std::endl;
}
