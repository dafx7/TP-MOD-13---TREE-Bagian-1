#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#define info(P) P->info
#define left(P)  P->left
#define right(P) P->right
using namespace std;
typedef int infotype;
typedef struct node *adrNode;

struct node {
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_103012300198(infotype x);

adrNode findNode_103012300198(adrNode root, infotype x);

void insertNode_103012300198(adrNode &root, adrNode p);

void printPreOrder_103012300198(adrNode root);

void printDescendant_103012300198(adrNode root, infotype x);

int sumNode_103012300198(adrNode root);

int countLeaves_103012300198(adrNode root);

int heightTree_103012300198(adrNode root);

#endif // TREE_H_INCLUDED
