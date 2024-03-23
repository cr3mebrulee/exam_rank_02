#include <stdlib.h>

int *ft_rrange(int start, int end) {
    // calculate the length
    int length = abs(end - start) + 1;

    // allocate memory
    int *result = (int *)malloc(length * sizeof(int));
    if (result == NULL) {
        return NULL;
    }

    // determine the direction of the array
    int direction = (end > start) ? 1 : -1;

    // fill the array
    int i = 0;
    int current = start;
    while (i < length) {
        result[i] = current;
        current += direction;
        i++;
    }

    // retrun the pointer to the first element of the array
    return result;
}

