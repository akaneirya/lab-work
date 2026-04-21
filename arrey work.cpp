#include <cstdio>

int main() {
    int arr[3][9] = {
        {1, 2, 3, 9, 8, 7, 10, 10, 10},
        {4, 5, 6, 6, 5, 4, 10, 10, 10},
        {7, 8, 9, 3, 2, 1, 10, 10, 10}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 9; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    } 

    return 0;
}