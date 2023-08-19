#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - measure the height of a tree
 * @tree: pointer to the rot node
 * Return: nothing
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right, left, height;

if (!tree)
	return (0);
if (!tree->right && !tree->left)
	return (0);
left = binary_tree_height(tree->left) + 1;
right = binary_tree_height(tree->right) + 1;

if (right > left)
	height = right;
else
	height = left;

return (height);
}
