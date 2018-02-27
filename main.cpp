#include <iostream>
#include <string>
#include <stack>
// Tree is a recursive data structure
/* Graph is the base line super set.
 * tree is a special kind of graph
 * binary tree is a tree which can have max 2 children
 * BST : binary search tree : special tree in which left < center < right
 * Balanced tree is a special kind of BST : red black  ?
 */


typedef struct node_s
{
     int val;
     struct node_s *left;
     struct node_s *right;
} NODE;

//search
//insert
//delete
//traverse (breadth first)  (for Depth first:  in-order, pre, post )
//size
//height

//BST :depth first :  in order traversal : sorted order
//for depth first : use stack : push element , process event(print + pop children) ,
//Pre-order


//height k
//total element in tree 2 raised to k    ==== n
//total number of leaf nodes 2 raised (k-1) = n/2

class Tree {
    NODE *head;
    int height;
    int size;

    void dffRec(NODE *node) {
        if (node == null) return;

        cout << " : " << node->val;
        dffRec(node->left);
        dffRec(node->right);
    }


//DFT : stack
    void dffIterative(NODE *node) {
        if (node == null) return;
        stack st;
        st.push(node);

        while (!st.empty()) {
            NODE *curr = st.pop();

            if (curr) {
                cout << curr->val;

                if (curr->right)
                    st.push(curr->right);

                if (curr->left)
                    st.push(curr->left);
            }
        }
    }

//Breadth first: qu : level order
    void bftIterative(NODE *node) {
        if (node == null) return;
        queue q;
        q.push_back(node);

        while (!q.empty()) {
            NODE *curr = q.pop();
            if (curr) {
                cout << curr->val;
                q.push_back(curr->right);
                q.push_back(curr->left);
            }
        }
    }


    void printNodeAtLevelN_via_BFT(NODE *node, int n)
    {




    }

    //dft space conplexity is just k
    void printNodeAtLevelN_via_DFT(NODE *node, int k)
    {
        if ( node == null ) return;
        if ( k == 1 ) { out<<node->val; return;}

        printNodeAtLevelN_via_DFT(node->left, k-1);
        printNodeAtLevelN_via_DFT(node->right, k-1);
   }


};

/*segment trees : meant for range queries.
 * works well for
 *
 *
 */


int main() {
    std::cout << "Hello, World!" << std::endl;
    NODE *node;
    dffRec(node);
    return 0;
}