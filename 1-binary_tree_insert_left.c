#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to node to insert the left-child
 * @va1ue: data to store
 * Return: newnode or NULL if fails
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *tmp;

if (parent  == NULL)
	return (NULL);

tmp = malloc(sizeof(binary_tree_t));
if (tmp == NULL)
	return (NULL);

tmp->n = value;
tmp->left = NULL;
tmp->parent = parent;
tmp->right = NULL;

if (parent->left != NULL)
{
	tmp->left = parent->left;
	parent->left->parent = tmp;
	parent->left = tmp;
}
parent->left = tmp;

return (tmp);	
}
