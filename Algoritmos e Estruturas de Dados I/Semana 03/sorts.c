void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubbleSort (int *v, int n) {
	int i;

	if (n <= 1)
		return;
	for (i = 0; i < n; i++)
		if (v[i] > v[i + 1])
			swap(&v[i], &v[i + 1]);
	bubbleSort(v, n - 1);
}

void selectionSort (int *v, int n) {
    int i, pos = 0;

    if (n <= 1)
        return;
    for (i = 1; i < n; i++)
        if (v[i] < v[pos])
            pos = i;
    swap(v, &v[pos]);
    selectionSort(v + 1, n - 1);
}

void insertionSort (int *v, int n) {
    int i, tmp;

    if (n <= 1)
        return;
    insertionSort(v, n - 1);
    tmp = v[n - 1];
    for (i = n - 2; i >= 0 && v[i] > tmp; i--)
        v[i + 1] = v[i];
    v[i + 1] = tmp;
}
