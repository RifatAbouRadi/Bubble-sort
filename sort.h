#pragma once
#include <stdbool.h>

void swap(char *a, char *b);
bool letters_in_order(char a, char b);
bool numbers_in_ascending_order(char a, char b);
void bubble_sort(char arr[], bool (*pair_is_in_order)(char a, char b));
