//Program to find the second largest element present in the array.
#include <stdio.h>

void main() {
    int arr[50], n, i, j = 0, lrg, lrg2nd;

    printf("Input the size of the array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) 
      {
        scanf("%d", &arr[i]);
      }

    // Find the location of the largest element in the array
    lrg = 0;
    for (i = 0; i < n; i++) 
      {
        if (lrg < arr[i]) 
          {
            lrg = arr[i];
            j = i;
          }
      }

    // Ignore the largest element and find the second largest element in the array
    lrg2nd = 0;
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;  // Ignore the largest element
            
        } else {
            if (lrg2nd < arr[i]) {
                lrg2nd = arr[i];
            }
        }
    }

    // Display the second largest element
    printf("The Second largest element in the array is :  %d \n\n", lrg2nd);
}

/*
    OUTPUT
Input the size of the array : 7
Input 7 elements in the array :
67
89
44
56
32
12
70
The Second largest element in the array is :  70 
*/
