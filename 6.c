#include <stdio.h>
#define MAX 1000 

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[MAX] = {0};

    printf("Enter elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    printf("Repeated elements: ");
    for(i=0; i<MAX; i++) {
        if(freq[i] > 1)
            printf("%d ", i);
    }

    printf("\nNon-repeated elements: ");
    for(i=0; i<MAX; i++) {
        if(freq[i] == 1)
            printf("%d ", i);
    }

    return 0;
}
