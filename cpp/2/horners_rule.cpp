#include <iostream>
#include <vector>
typedef std::vector<float> f_vec;

float horner(f_vec a, float x) {
    float y = 0;
    int i = a.size() - 1;
    while ( i >= 0 ) {
        y = a[i] + x * y;
        i--;
    }
}

int main() {
    f_vec a = {1.1, 2.1, 3.5};
    float x = 6.2;
    float ans = horner(a, x);
    std::cout << ans << std::endl;
}
