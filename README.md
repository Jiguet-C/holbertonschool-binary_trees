# <p align="center">Binary_Trees</p>

<p align="center">
<img src="https://3.bp.blogspot.com/-iBcT1IK-xtw/Up5BdgDtefI/AAAAAAAABuM/vnvGCT65TxI/s640/C+Program+to+Create+a+Binary+Tree+Using+Recursion+[Linked+Representation]+2.jpg" width="350" alt="accessibility text">
</p>

A binary tree is a hierarchical data structure in which each node has at most two children, called the left child and the right child. It is a fundamental structure in computing, used for efficient storage and retrieval of data. Here are some key points about binary trees:

- Nodes: Each node in the tree contains data and can have up to two children.
- Root: The top node of the tree is called the root.
- Subtrees: Each child of a node can be the root of its own binary subtree.
- Types: There are different types of binary trees, such as Binary Search Trees (BST), where the nodes are organized in a way that makes it easy to quickly search for data.
- Operations: Common operations on binary trees include insertion, deletion, and traversal (inorder, preorder, postorder).
Binary trees are essential in many applications, ranging from sorting algorithms to advanced data structures like binary heaps and balanced binary search trees.


# <p align="center">Examples</p>

```
#include <stdio.h>
#include <stdlib.h>

/*A structure to represent a node in a binary tree*/
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

/*Function to create a new node with the given data*/
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
```
```
/*Function to insert a new node with the given data in the binary search tree*/
struct Node* insert(struct Node* node, int data)
{
    /*If the tree is empty, return a new node*/
    if (node == NULL) return newNode(data);

    /*Otherwise, recur down the tree*/
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    /*Return the (unchanged) node pointer*/
    return node;
}
```
```
/*Function to do inorder traversal of the binary tree*/
void inorder(struct Node* root)
{
    if (root != NULL)
{
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
```
```
/*Main function to demonstrate the above functions*/
int main()
{
    /* Let us create the following binary search tree
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    /*Print inoder traversal of the binary search tree*/
    inorder(root);

    return 0;
}
```
This code snippet creates a binary search tree (BST) and performs an inorder traversal to print the elements in ascending order.

# <p align="center">Installation Instructions</p>

```
- A C compiler: All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
## Installation Instructions

To compile and run this doubly linked list project in C, follow the steps below:

1. **Install a C compiler**:
    Make sure you have a C compiler installed on your system. GCC is a popular choice for Unix-like systems, while Visual Studio is commonly used on Windows.

2. **Download the source code**:
    Clone or download the project source code from the GitHub repository or any other code sharing platform.

3. **Compile the project**:
Open a terminal or command prompt and navigate to the directory containing the source code. Compile the code using the following command:
```bash
gcc -o source_program_name.c

```

- you are given [this function](https://github.com/hs-hq/0x1C.c)

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```

- Please use the following data structures and types for binary trees:

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
Binary Search Tree :
```
typedef struct binary_tree_s bst_t;
```
AVL Tree :

```
typedef struct binary_tree_s avl_t;
```
Max Binary Heap

```
typedef struct binary_tree_s heap_t;
```

# <p align="center">Compilation commands for each task</p>

```
0. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

```
1. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
```

```
2. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
```

```
3. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del
```

```
4. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf
```

```
5. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
```

```
6. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre
```

```
7. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in
```

```
8. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post
```

```
9. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-bi
```

```
10. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth
```

```
11. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size
```

```
12. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves
```

```
13. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes
```

```
14. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance
```

```
15. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full
```

```
16. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect
```

```
17. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling
```

```
18. gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle
```

# <p align="center">Prototypes</p>

```
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```

# <p align="center">Tutorials</p>

- [Binary Tree](https://en.wikipedia.org/wiki/Binary_tree)
- [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8&ab_channel=mycodeschool)

## ➤ License
Distributed under the MIT License. See [LICENSE](https://www.holbertonschool.fr/) for more information.

## 🙇 Author
#### Stephanie Carvalho
- Linkedin: [@stefani-web](https://www.linkedin.com/in/stefani-web/)
- Github: [@stefani-web](https://github.com/Stefani-web)
