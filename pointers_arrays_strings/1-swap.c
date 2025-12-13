#include "main.h"
void swap_int(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = *a;
}