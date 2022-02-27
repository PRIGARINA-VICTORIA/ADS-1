// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <climits>


bool checkPrime(uint64_t value) {
// вставьте код функции
bool num = true;
	if (value > 1) {
		for (uint64_t i = 2; i < value; i++) {
			if (value % i == 0) {
				num = false;
				break;
			}
			else {
				num = true;
			}
		}
	}
	else {
		num = false;
	}
	return num;
}
uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t num = 0;
	uint64_t res = 0;
	for (uint64_t i = 2; i <= INT_MAX; ++i) {
		if (checkPrime(i)) {
			++num;
			if (num == n) {
				res = i;
				break;
			}
		}
	}
	return res;
}
uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t res = 0;
	for (uint64_t i = value + 1; i <= INT_MAX; i++) {
		if (checkPrime(i)) {
			res = i; 
			break;
		}
	}
	return res;
}
uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
	for (uint64_t i = 2; i < hbound; i++) {
		if (checkPrime(i)) {
			sum += i;
		}
	}
	return sum;
}
