// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value > 1)
	{
		for (uint64_t i = 2; i < value; i++) 
		  if (value % i == 0)
				return false;
		
		return true;
	}
	else
		return false;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t num = 0;
	for (uint64_t i = 2; ; ++i) {
		num += 1;
		if (num == n) {
			return i;
		}
	}
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  for (uint64_t i = value + 1; i++;) {
		if (checkPrime(i)) {
			return i;
		}
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
	for (uint64_t i = 2; i < hbound; i++) {
		if (checkPrime(i)){
			sum += 1;
	}
		return sum;
}
}
