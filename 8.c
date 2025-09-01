#include <stdio.h>

int main() {
    int n, m;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n);
    printf("Enter size of second sorted array: ");
    scanf("%d", &m);

    int arr1[n], arr2[m], merged[n+m];
    printf("Enter %d sorted elements for first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d sorted elements for second array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n) {
        merged[k++] = arr1[i++];
    }

    while (j < m) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array:\n");
    for (int x = 0; x < n + m; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}
