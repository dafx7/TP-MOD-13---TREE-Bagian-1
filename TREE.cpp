#include <iostream>
#include "TREE.h"
adrNode newNode_103012300198(infotype x)
{
    adrNode P = new node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;
    return P;
}

adrNode findNode_103012300198(adrNode root, infotype x)
{
    if (root == NULL || info(root) == x) {
        return root;
    }

    if (x < info(root)) {
        return findNode_103012300198(left(root), x);
    }

    return findNode_103012300198(right(root), x);
}

void insertNode_103012300198(adrNode &root, adrNode p)
{
    if (root == NULL) {
        root = p;
    } else if (info(p) < info(root)) {
        insertNode_103012300198(left(root), p);
    } else {
        insertNode_103012300198(right(root), p);
    }
}

void printPreOrder_103012300198(adrNode root)
{
    if (root != NULL)
    {
        cout << info(root) << " ";
        printPreOrder_103012300198(left(root));
        printPreOrder_103012300198(right(root));
    }
}

void printDescendant_103012300198(adrNode root, infotype x)
{
    adrNode keturunan = findNode_103012300198(root, x);
    if (keturunan != NULL)
    {
        printPreOrder_103012300198(left(keturunan));
        printPreOrder_103012300198(right(keturunan));
    } else {
        cout << "Node dengan nilai x tidak ditemukan" << endl;
    }
}

int sumNode_103012300198(adrNode root)
{
    if (root == NULL) {
        return 0;
    }

    return info(root) + sumNode_103012300198(left(root)) + sumNode_103012300198(right(root));
}

int countLeaves_103012300198(adrNode root)
{
    if (root == NULL) {
        return 0;
    }

    if (left(root) == NULL && right(root) == NULL) {
        return 1;
    }

    return countLeaves_103012300198(left(root)) + countLeaves_103012300198(right(root));
}

int heightTree_103012300198(adrNode root)
{
    if (left(root) == NULL && right(root) == NULL) {
        return 0;
    }

    int heightKiri = heightTree_103012300198(left(root));
    int heightKanan = heightTree_103012300198(right(root));

    return 1 + max(heightKiri, heightKanan);
}
