#include "TREE.h"
#include <cstdio> // Untuk printf

int main() {
    int x[9] = {5, 3, 9, 10, 4, 7, 1, 8, 6};

    // Menampilkan isi array
    printf("Array x: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    adrNode root = NULL;

    // 1. Tambahkan setiap elemen array ke dalam BST
    for (int i = 0; i < 9; i++) {
        adrNode newNode = newNode_103012300198(x[i]);
        insertNode_103012300198(root, newNode);
    }

    // 2. Tampilkan node BST secara Pre-Order
    printf("\nPre Order: ");
    printPreOrder_103012300198(root);

    // 3. Tampilkan keturunan dari node 9
    printf("\n\nDescendant of Node 9: ");
    printDescendant_103012300198(root, 9);

    // 4. Tampilkan total info semua node pada BST
    int sum = sumNode_103012300198(root);
    printf("\n\nSum of BST Info: %d", sum);

    // 5. Tampilkan banyaknya daun dari BST
    int leavesCount = countLeaves_103012300198(root);
    printf("\nNumber of Leaves: %d", leavesCount);

    // 6. Tampilkan tinggi dari Tree
    int height = heightTree_103012300198(root);
    printf("\nHeight of Tree: %d\n", height);

    return 0;
}
