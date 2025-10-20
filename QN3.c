#include <stdio.h>

int main() {
    int jt, movm,i,j,k;
    const int cords = 3; 
    printf("Enter number of robot joints: ");
    scanf("%d", &jt);

    printf("Enter number of movements per joint: ");
    scanf("%d", &movm);

    int rds[jt][movm][cords];

  
    printf("\nEnter movement readings (x, y, z) for each joint and movement:\n");
    for (i = 0; i < jt; i++) {
        for (j = 0; j < movm; j++) {
            printf("Joint %d, Movement %d:\n", i + 1, j + 1);
            for ( k = 0; k < cords; k++) {
                char axis = (k == 0) ? 'X' : (k == 1) ? 'Y' : 'Z';
                printf("  %c: ", axis);
                scanf("%d", &rds[i][j][k]);
            }
        }
    }

    
    for ( i = 0; i < jt; i++) {
        for ( j = 0; j < movm; j++) {
            for ( k = 0; k < cords; k++) {
                if (rds[i][j][k] < 0) {
                    rds[i][j][k] = -rds[i][j][k];
                }
            }
        }
    }

    
    printf("\nNormalized Movement Readings:\n");
    for ( i = 0; i < jt; i++) {
        for ( j = 0; j < movm; j++) {
            printf("Joint %d, Movement %d ? X: %d, Y: %d, Z: %d\n",
                   i + 1, j + 1,
                   rds[i][j][0],
                   rds[i][j][1],
                   rds[i][j][2]);
        }
    }

    return 0;
}

