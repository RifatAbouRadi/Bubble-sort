#include <stdio.h>
#include "sort.h"

int main() {
    char letter_arr[] = {'z', 's', 'S', 's', 'a', '\0'};
    char number_arr[] = {4, -1, 2, 9, '\0'};

    printf("Before sorting letters: ");
    for (int i = 0; letter_arr[i] != '\0'; i++)
        printf("%c ", letter_arr[i]);
    printf("\n");

    bubble_sort(letter_arr, letters_in_order);

    printf("After sorting letters: ");
    for (int i = 0; letter_arr[i] != '\0'; i++)
        printf("%c ", letter_arr[i]);
    printf("\n");

    printf("\nBefore sorting numbers: ");
    for (int i = 0; number_arr[i] != '\0'; i++)
        printf("%d ", number_arr[i]);
    printf("\n");

    bubble_sort(number_arr, numbers_in_ascending_order);

    printf("After sorting numbers: ");
    for (int i = 0; number_arr[i] != '\0'; i++)
        printf("%d ", number_arr[i]);
    printf("\n");

    return 0;
}
