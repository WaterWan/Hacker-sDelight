//
// Created by Water on 2017/5/30.
//
#include "MathUtil.h"

/**
 * Created On 2017/5/30
 * Last modified on 2017/5/30
 * @param x a number
 * @return if x is the power of 2, return true, else, return false
 */
bool is_pow_of_two(unsigned int x) {
    return ((x & (x - 1)) == 0) && (x != 0);
}

/**
 * Created On 2017/5/30
 * Last modified on 2017/5/30
 * @param x a number
 * @return present x in binary, from right select first 0 and change it to 1 and return the result
 * For example
 * 0010 1000 -> 0010 1001
 * 0010 1010 -> 0010 1011
 * 1010 0111 -> 1010 1111
 */
int turn_off(unsigned int x) {
    return x | (x + 1);
}

