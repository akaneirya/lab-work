#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum1 = a[0][0] + a[1][1] + a[2][2]; 
    int sum2 = a[0][1] + a[0][2] + a[1][2];
    int sum3 = a[1][0] + a[2][0] + a[2][1]; 

    printf("Sum of 1 5 9 = %d\n", sum1);
    printf("Sum of 2 3 6 = %d\n", sum2);
    printf("Sum of 4 7 8 = %d\n", sum3);

    
}