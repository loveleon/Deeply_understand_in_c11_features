#include "test.h"
template <int>
void Fun(int);  // explicit instanced
// template void Fun<int>(int);//also ok.

void test1() { Fun(1); }