//
// Created by 王青龙 on 2017/2/25.
//

#include "solution.h"

int Solution::findComplement(int num) {
    auto mask = ~0;
    while (num & mask) {
        mask <<= 1;
    }
    return ~mask & ~num;
}
