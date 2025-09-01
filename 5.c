#include <stdio.h>

int main() {
    int n, i, sum = 0, total, missing;

    printf("Enter n (the range 1 to n): ");
    scanf("%d", &n);

    int a[n-1]; 
    
    printf("Enter %d elements (from 1 to %d with one missing):\n", n-1, n);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
        sum += a[i]; 
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("The missing number is: %d\n", missing);
    return 0;
}
