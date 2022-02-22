using namespace std;
#include <stdio.h>

#include <iostream>

int main() {
    unsigned long long n, m, a = 1;
    unsigned long long na, ma, res = 0;

    scanf("%llu%llu%llu", &n, &m, &a);

    na = n / a;
    if (n % a != 0) {
        na++;
    }

    ma = m / a;
    if (m % a != 0) {
        ma++;
    }

    res = na * ma;

    printf("%llu", res);

    return 0;
}

/*
______________
Test 1:
6 6 4
Answer
4
______________
Test 2:
2 1 1
Answer
2
______________
Test 3:
1 2 1
Answer
2
______________
Test 4:
2 2 1
Answer
4
______________
Test 5:
2 3 4
Answer
1
______________
Test 6:
1000000000 1000000000 1
Answer
1000000000000000000
*/
