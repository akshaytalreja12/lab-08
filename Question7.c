#include <stdio.h>

int main() {
    int i, j, k;
    char ch = 'A';
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        for (k = rows - i; k > 0; k--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; 
            if (ch > 'Z')  
                ch = 'A';
        }

        printf("\n"); 
    }

    return 0;
}
