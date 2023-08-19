#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses binary tree using preorder
 * @tree: pointer to the root node
 * @func: pointer to a funct to call for each node
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
