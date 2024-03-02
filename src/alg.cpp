// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <vector>

bool checkPrime(uint64_t value) {
if (value <= 1) {
        return false;
    }
    
    for (int i = 2; i <= value / 2; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    
    return true;
}

uint64_t nPrime(uint64_t n) {
 std::vector<uint64_t> primes;
    uint64_t number = 2;
    
    while (primes.size() < n) {
        if (isPrime(number)) {
            primes.push_back(number);
        }
        number++;
    }
    
    return primes.back();
}

uint64_t nextPrime(uint64_t value) {
uint64_t number = value + 1;
    
    while (!isPrime(number)) {
        number++;
    }
    
    return number;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
    
    for (uint64_t i = 2; i < hbound; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    
    return sum;
}
