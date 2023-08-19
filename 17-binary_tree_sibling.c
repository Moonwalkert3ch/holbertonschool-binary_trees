#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibline of a node
 * @node: pointer to the node to find sibling
 * Return: sibling node or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
	return (NULL);
if (node != node->parent->left && node != node->parent->right)
	return (NULL);
if (node == node->parent->left)
	return (node->parent->right);
return (node->parent->left);
}


