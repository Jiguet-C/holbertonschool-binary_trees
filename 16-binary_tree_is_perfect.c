#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL ^ tree->right == NULL)
	{
		return (0);
	}

	int left_dep = binary_tree_depth(tree->left);
	int right_dep = binary_tree_depth(tree->right);

	if (left_dep != right_dep)
	{
		return (1);
	}
		else if (tree->left == NULL && tree->right == NULL)
			return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if the tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftindex = 0, rightindex = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftindex = binary_tree_height(tree->left) + 1;


	if (tree->right != NULL)
		rightindex = binary_tree_height(tree->right) + 1;


	if (leftindex > rightindex)
		return (leftindex);

	return (rightindex);
}
