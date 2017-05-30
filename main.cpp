#include <iostream>
#include "MathUtil.h"

using namespace std;

int is_pow_of_two_test();

int turn_off_test();

int main() {
    cout << "Hello, Clion!" << endl;
    cout << is_pow_of_two_test() << endl;
    cout << turn_off_test() << endl;
    return 0;
}

int is_pow_of_two_test() {
    if (!is_pow_of_two(1)) {
        return 1;
    }
    if (!is_pow_of_two(2)) {
        return 2;
    }
    if (is_pow_of_two(3)) {
        return 3;
    }
    if (!is_pow_of_two(4)) {
        return 4;
    }
    if (is_pow_of_two(0)) {
        return 5;
    }
    if (is_pow_of_two(6)) {
        return 6;
    }
    return 0;
}

int turn_off_test() {
    if (turn_off(0b00101000) != 0b00101001) {
        return 1;
    }
    if (turn_off(0b10101001) != 0b10101011) {
        return 2;
    }
    if (turn_off(0b10101010) != 0b10101011) {
        return 3;
    }
    // Here int takes 4 bytes = 32 bits
    if (turn_off(0b11111111111111111111111111111111) != 0b11111111111111111111111111111111) {
        return 4;
    }
//    cout << "turn_off " << 0b11111111 << " " << turn_off(0b11111111) << endl;
    return 0;
}