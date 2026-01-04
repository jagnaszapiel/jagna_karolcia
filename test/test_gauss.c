#include <assert.h>
#include <math.h>
#include "../src/gauss.h"
#include "../src/back_substitution.h"
int main() {
    int n = 2;
    double A[2][2] = {
        {2, 1},
        {1, 3}
    };
    double b[2] = {3, 4};
    double x[2];
    gauss_elimination(n, A, b);
    back_substitution(n, A, b, x);
    assert(fabs(x[0] - 1.0) < 1e-6);
    assert(fabs(x[1] - 1.0) < 1e-6);
    return 0;
}
