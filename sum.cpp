#include <bits/stdc++.h>
using namespace std;

struct node {
    int key;
    struct node *left, *right;
};

// Create a node
struct node* newNode(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* node, int key) {
    // Return a new node if the tree is empty
    if (node == NULL) return newNode(key);

    // Traverse to the right place and insert the node
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

// node* leftmost(node* root, stack<node*>& s) {
//     while (root->left != NULL) {
//         root = root->left;
//         s.push(root);
//     }
//     return root;
// };
// node* rightmost(node* root, stack<node*>& s) {
//     while (root->right != NULL) {
//         root = root->right;
//         s.push(root);
//     }
//     return root;
// };

// node* next(node* curr, stack<node*>& s) {
//     if (curr->right != NULL) {
//         return leftmost(curr->right, s);
//     }
//     node* root = s.top();
//     s.pop();
//     return root;
// }
// node* prev(node* curr, stack<node*>& s) {
//     if (curr->left != NULL) {
//         return rightmost(curr->left, s);
//     }
//     node* root = s.top();
//     s.pop();
//     return root;
// }

node* MakeTree(node* root, int i, int j, vector<int> A) {
    int ans = INT_MIN;
    if (i == A.size()) {
        return root;
    }
    while (i != j) {
        ans = max(ans, A[i]);
        i++;
    }

    j = i - 1;
    if (root == NULL) {
        root = newNode(ans);
    }
    root->left = MakeTree(root->left, 0, j, A);
    root->right = MakeTree(root->right, j, i, A);
    
    return root;
}

// node* buildTreeUtil(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
//     if (preStart > preEnd || inStart > inEnd) return nullptr;
//     node* root = newNode(preorder[preStart]);
//     int k = 0;
//     for (int i = inStart; i <= inEnd; i++) {
//         if (inorder[i] == preorder[preStart]) {
//             k = i;
//             break;
//         }
//     }
//     root->left = buildTreeUtil(preorder, inorder, preStart + 1, preStart + (k - inStart), inStart, k - 1);
//     root->right = buildTreeUtil(preorder, inorder, preStart + (k - inStart + 1), preEnd, k + 1, inEnd);
//     return root;
// }

// int preIndex = 0;

// node* buildTreeUtil(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd) {
//     if (inStart > inEnd) {
//         return NULL;
//     }

//     node* root = newNode(preorder[preIndex]);
//     preIndex++;
//     if (inStart == inEnd) {
//         return root;
//     }
//     int k = 0;
//     for (int i = inStart; i <= inEnd; i++) {
//         if (inorder[i] == preorder[preIndex - 1]) {
//             k = i;
//             break;
//         }
//     }

//     root->right = buildTreeUtil(preorder, inorder, k + 1, inEnd);
//     root->left = buildTreeUtil(preorder, inorder, inStart, k - 1);
//     return root;
// }

// Driver code
int main() {
    // stack<node *> s;
    struct node* root = NULL;
    int B = 17;
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 1);
    // root = insert(root, 6);
    // root = insert(root, 7);
    // root = insert(root, 10);
    // root = insert(root, 14);
    // root = insert(root, 4);
    // root = insert(root, 2);

    // root = insert(root, 9);
    // root = insert(root, 12);
    // root = insert(root, 4);
    // root = insert(root, 19);
    // root = insert(root, -1);
    // root = insert(root, 5);
    // root = insert(root, -1);
    // root = insert(root, -1);
    // root = insert(root, -1);
    // root = insert(root, -1);

    // vector<int> A = {};
    // vector<int> B = {2, 3, 1};
    // reverse(B.begin(), B.end());
    // node* root = buildTreeUtil(B, A, 0, B.size() - 1);

    // stack<node*> left;
    // stack<node*> right;
    // left.push(root);
    // right.push(root);
    // node* p1 = leftmost(root, left);
    // node* p2 = rightmost(root, right);
    // while (!left.empty() or !right.empty()) {
    //     if (p1->key + p2->key == B) {
    //         cout << p2->key + p1->key << "        1" << endl;
    //         return 1;
    //     }
    //     if (p1->key + p2->key > B) {
    //         if (left.empty() or right.empty()) {
    //             break;
    //         }
    //         cout << p2->key << endl;
    //         p2 = prev(p2, right);
    //     } else {
    //         if (left.empty() or right.empty()) {
    //             break;
    //         }
    //         cout << p1->key << endl;
    //         p1 = next(p1, left);
    //     }
    // }
    // cout << '0';

    stack<node*> s;
    // s.push(root);
    vector<int> ans = {};
    while (!s.empty() or root != nullptr) {
     if(root != NULL){
         s.push(root);
          root = root->left;
     }else{
         root = s.top();
         s.pop();
         ans.push_back(root->key);
         root = root->right;
     }

    }
    int x = 10;
    return 0;
}