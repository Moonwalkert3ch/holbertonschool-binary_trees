#include "binary_trees.h"

/**
 * binary_tree_leaves - checks for a leaf
 * @tree: pointer to the root node
 * Return: result or 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree != NULL && tree->left == NULL && tree->right == NULL)
	return (1);
return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 or result
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left;
size_t right;

if (tree == NULL || binary_tree_leaves(tree))
	return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

if (left >= right)
	return (left + 1);
return (right + 1);
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: NULL or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
binary_tree_t *left, *right;

if (tree == NULL)
	return (0);
left = tree->left;
right = tree->right;
if (binary_tree_leaves(tree))
	return (1);
if (left == NULL || right == NULL)
	return (0);

if (binary_tree_height(left) == binary_tree_height(right))
{
if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
	return (1);
}
return (0);
}
