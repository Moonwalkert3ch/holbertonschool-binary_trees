#include "binary_trees.h"
#include <stdio.h>
#include  <stdio.h>

/**
 * binary_tree_insert_right - inserts node as the right-child
 * @parent: pointer to node to insert in right child in
 * @value: data to store
 * Return: created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *tmp;

tmp = malloc(sizeof(binary_tree_t));

if (parent == NULL && tmp == NULL)
	return (NULL);

tmp->n = value;
tmp->left = NULL;
tmp->parent = parent;
tmp->right = NULL;

if (parent->right != NULL)
{
tmp->right = parent->right;
parent->right->parent = tmp;
parent->right = tmp;
}
parent->right = tmp;

return (tmp);
}
