#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, q, t;
    int i, j, k;

    printf("Enter the size of matrix A (m x q): ");
    scanf("%d %d", &m, &q);

    printf("Enter the size of matrix B (q x t): ");
    scanf("%d %d", &q, &t);

    printf("Enter elements of matrix A (%d x %d):\n", m, q);
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B (%d x %d):\n", q, t);
    for(i = 0; i < q; i++) {
        for(j = 0; j < t; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < t; j++) {
            C[i][j] = 0;
            for(k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i = 0; i < q; i++) {
        for(j = 0; j < t; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct Matrix (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < t; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
