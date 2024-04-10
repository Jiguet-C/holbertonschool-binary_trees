#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * description: Your function must return a pointer to the uncle node
 * Return: NULL, If node is NULL, If node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/*If node or its parent or its grandparent is NULL, return NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	/*If the parent of node is the left child of its parent,*/
	/*then the uncle is the right child of the grandparent*/
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}

	/*If the parent of node is the right child of its parent,*/
	/*then the uncle is the left child of the grandparent*/
	else
	{
		return (node->parent->parent->left);
	}
}
