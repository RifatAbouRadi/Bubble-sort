#include "sort.h"
#include <ctype.h>  // for tolower()

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

bool letters_in_order(char a, char b) {
    // Compare letters case-insensitively
    return tolower(a) <= tolower(b);
}

bool numbers_in_ascending_order(char a, char b) {
    // Compare numbers as integers
    return a <= b;
}

void bubble_sort(char arr[], bool (*pair_is_in_order)(char a, char b)) {
    int n = 0;
    while (arr[n] != '\0') n++;  // determine length for strings
    if (n == 0) return;

    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (!pair_is_in_order(arr[i], arr[i + 1])) {
                swap(&arr[i], &arr[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}
