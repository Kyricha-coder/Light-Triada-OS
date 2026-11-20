#include "memset.h"

void my_memset(char* ptr, char value, int count) {
    for (int i = 0; i < count; i++) {
        ptr[i] = value;
    }
}
