#include <stdlib.h>

char randchar()
{
    return 'A' + rand() % ('Z' - 'A' + 1);
}