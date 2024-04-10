#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0, If tree is NULL, a NULL pointer is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		size_t left_leaves = binary_tree_leaves(tree->left);
		size_t right_leaves = binary_tree_leaves(tree->right);

		return (left_leaves + right_leaves);
	}
}
