#include <stdio.h>

int main() {
    int a[100], i, n, position;
    
    printf("Enter no of elements in an array: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("Which element do you want to delete? Enter its position: ");
    scanf("%d", &position);
    
    if (position < 1 || position > n) {
        printf("Deletion not possible\n");
    } else {
        for (i = position - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        
        printf("Resultant array:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    
    return 0;
}
