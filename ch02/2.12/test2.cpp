#include "test.h"
template void Fun<int>(int);  // explicit instanced
void test2() { Fun(2); }