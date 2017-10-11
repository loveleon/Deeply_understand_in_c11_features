#include "test.h"
// template void Fun<int>(int);  // explicit instanced
extern template void Fun<int>(int);
void test2() { Fun(22); }