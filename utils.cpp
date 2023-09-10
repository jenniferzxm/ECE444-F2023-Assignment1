#include "utils.h"
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int reversed(int num) {
    if (typeid(num) != typeid(int)) {
        return -2;
    }

    int reversed = 0, tmp = 0;
    while (num > 0) {
        tmp = num%10;
        reversed = tmp + (reversed*10);
        num = num/10;
    }

    return reversed;
}

tuple<int, int> formatter(int num) {
    if (typeid(num) != typeid(int)) {
        return {-2, -2};
    }

    int binary = 0, octal = 0, tmp = 0, multiplier = 1;
    int copy = num;

    while (num > 0) {
        tmp = num%2;
        binary = (tmp*multiplier) + binary;
        multiplier *= 10;
        num = num/2;
    }

    multiplier = 1; 
    while (copy > 0) {
        tmp = copy%8;
        octal = (tmp*multiplier) + octal;
        multiplier *= 10;
        copy = copy/8;
    }
    cout << binary << endl;
    cout << octal << endl;
    return {binary, octal};
}


int main() {
    cout << reversed(123.67) << endl;
    //auto[binary, octal] = formatter(123.11);
    //cout << "base 2: " << binary << ", base 8: " << octal << endl;
}
