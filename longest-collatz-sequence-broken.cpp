#include <iostream>
using namespace std;

long collatz_next(long n) {
    if(n % 2 == 0) {
        return (n/2);
    } else {
        return (3*n+1);
    }
}

long collatz_length(long start) {
    long count = 1;
    long n = start;
    while(n > 1) {
        n = collatz_next(n);
        count++;
    }
    return count;
}

int main() {
    long max_length = 0;
    long max_start;
    long this_length;
    for(long start = 1; start <= 1000000; start++) {
        this_length = collatz_length(start);
        if(this_length > max_length) {
            max_length = this_length;
            max_start = start;
        }
    }
    cout << max_start << endl;
}

