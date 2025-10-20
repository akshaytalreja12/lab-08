#include <stdio.h>
int main() {
    int n, m,i,j;

    
    printf("Enter number of students (rows): ");
    scanf("%d", &n);

    printf("Enter number of subjects (columns): ");
    scanf("%d", &m);

    int marks[n][m];
    int trns[m][n];

    
    printf("\nEnter the marks for each student:\n");
    for ( i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        for ( j = 0; j < m; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

   
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            trns[j][i] = marks[i][j];
        }
    }

   
    printf("\nOriginal Marks Table (Students x Subjects):\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }


    printf("\nTransposed Marks Table (Subjects x Students):\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", trns[i][j]);
        }
        printf("\n");
    }

    return 0;
}

