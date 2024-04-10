#include "binary_trees.h"

/**
 * binary_tree_nodes - funct. counts the nodes wth at least 1 child binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0, If tree is NULL, A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	} else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_nodes = binary_tree_nodes(tree->left);
		size_t right_nodes = binary_tree_nodes(tree->right);

		return (left_nodes + right_nodes + 1);
	}
}
