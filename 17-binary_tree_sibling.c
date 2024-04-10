#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * description: function must return a pointer to the sibling node
 * Return: NULL, If node is NULL or the parent is NULL, If node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*If node or its parent is NULL, return NULL*/
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/*If node is the left child of its parent, return the right child*/
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}

	/*If node is the right child of its parent, return the left child*/
	else
	{
		return (node->parent->left);
	}
}
