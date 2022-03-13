#include <stdbool.h>
#include <stdlib.h>
#define array int *

bool isSorted(array A, int size) {
    if (size <= 1)
        return true;
    if (*A > *(A + 1))
        return false;
    return isSorted(A + 1, size - 1);
}

/* Bubble Sort */

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(array A, int size) {
    int i;

    if (size-- <= 1)
        return;
    for (i = 0; i < size; i++)
        if (A[i] > A[i + 1])
            swap(&A[i], &A[i + 1]);
    bubbleSort(A, size);
}

/* Selection Sort */

int *minimalValue(array A, int size) {
    int i, pos = 0;

    for (i = 1; i < size; i++)
        if (A[i] < A[pos])
            pos = i;
    return A + pos;
}

void selectionSort(array A, int size) {
    if (size <= 1)
        return;
    swap(A, minimalValue(A, size));
    selectionSort(A + 1, size - 1);
}

/* Insertion Sort */

void insertionSort(array A, int size) {
    int i, tmp;

    if (size-- <= 1)
        return;
    insertionSort(A, size);
    tmp = A[size];
    for (i = size; i > 0 && A[i - 1] > tmp; i--)
        A[i] = A[i - 1];
    A[i] = tmp;
}

/* Shell sort */

void insertionSortMod(array A, int size, int start, int gap) {
    int i = start + gap, tmp;

    if (i >= size)
        return;
    tmp = A[i];
    while (i >= gap && A[i - gap] > tmp) {
        A[i] = A[i - gap];
        i -= gap;
    }
    A[i] = tmp;
    insertionSortMod(A, size, start + gap, gap);
}

void shellSort(array A, int size) {
    int i, sublist_lenght;

    for (sublist_lenght = size / 2; sublist_lenght > 0; sublist_lenght /= 2)
        for (i = 0; i < sublist_lenght; i++)
            insertionSortMod(A, size, i, sublist_lenght);
}

/* Merge Sort */

void merge(array A, int pivot, int size) {
    int i, k, j = pivot;
    array tmp = malloc(size * sizeof(int));

    for (i = k = 0; k < size; k++)
        tmp[k] = (j == size || (i < pivot && A[i] <= A[j])) ? A[i++] : A[j++];
    for (k = 0; k < size; k++)
        A[k] = tmp[k];
    free(tmp);
}

void mergeSort(array A, int size) {
    int pivot;

    if (size <= 1)
        return;
    pivot = size / 2;
    mergeSort(A, pivot);
    mergeSort(A + pivot, size - pivot);
    merge(A, pivot, size);
}

/* Quick Sort */

int *median(int *a, int *b, int *c) {
    if ((*a > *b) ^ (*a > *c))
        return a;
    if ((*b < *a) ^ (*b < *c))
        return b;
    return c;
}

int partition(array A, int size) {
    int i, j, last = size - 1;

    swap(A + last, median(A, A + size / 2, A + last));
    for (i = j = 0; i < last; i++)
        if (A[i] <= A[last])
            swap(&A[i], &A[j++]);
    swap(A + i, A + j);
    return j;
}

void quickSort(array A, int size) {
    int pivot;

    if (size <= 1)
        return;
    pivot = partition(A, size);
    quickSort(A, pivot++);
    quickSort(A + pivot, size - pivot);
}

/* Heap Sort */

void heapify(array A, int size, int i) {
    int max = i, left = 2 * max + 1, right = left + 1;

    if (left >= size)
        return;
    if (A[left] > A[max])
        max = left;
    if (right < size && A[right] > A[max])
        max = right;
    else if (max == i)
        return;

    swap(A + i, A + max);
    heapify(A, size, max);
}

void heapSort(array A, int size) {
    int i;

    if (size <= 1)
        return;

    for (i = (size - 1) / 2; i <= 0; i--)
        heapify(A, size, i);

    for (i = size - 1; i > 0; i--) {
        swap(A, A + i);
        heapify(A, i, 0);
    }
}

/* Counting Sort */

array cumulativeFrequency(array A, int size, int max) {
    int i;
    array frequency = calloc((max + 1), sizeof(int));

    for (i = 0; i < size; i++)
        frequency[A[i] + 1]++;
    for (i = 1; i <= max; i++)
        frequency[i] += frequency[i - 1];
    return frequency;
}

void countingSort(array *A, int size, int max) {
    int i;
    array count = cumulativeFrequency(*A, size, max);
    array sorted = malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
        sorted[count[(*A)[i]]++] = (*A)[i];
    free(*A);
    free(count);
    *A = sorted;
}

/* Radix Sort */

array cumulativeFreq(array A, int size, int exp) {
    int i, radix;
    array frequency = calloc(19, sizeof(int));

    for (i = 0; i < size; i++) {
        radix = A[i] / exp % 10;
        frequency[10 + radix]++;
    }
    for (i = 1; i < 18; i++)
        frequency[i] += frequency[i - 1];
    return frequency;
}

void countingSortMod(array *A, int size, int exp) {
    int i, radix;
    array count = cumulativeFreq(*A, size, exp);
    array sorted = malloc(size * sizeof(int));

    for (i = 0; i < size; i++) {
        radix = (*A)[i] / exp % 10;
        sorted[count[9 + radix]++] = (*A)[i];
    }
    free(*A);
    free(count);
    *A = sorted;
}

void radixSort(array *A, int size, int max) {
    int exp;

    for (exp = 1; max / exp > 0; exp *= 10)
        countingSortMod(A, size, exp);
}
