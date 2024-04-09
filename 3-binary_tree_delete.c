#include "binary_trees.h"

/**
 * binary_tree_delete - Delete an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: This function recursively deletes all nodes in a binary tree,
 * starting from the left and right subtrees, and finally freeing
 * the root node. If the tree is NULL, the function does nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
