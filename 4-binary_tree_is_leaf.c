#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to the node
 * Return: 1 on success otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
	return (0);
if (node->left != NULL)
	return (0);
if (node->right != NULL)
	return (0);

return (1);
}
