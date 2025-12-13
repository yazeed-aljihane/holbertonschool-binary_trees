#include <stdlib.h>
#include "binary_trees.h"




/**
* binary_tree_node - function that creates a binary tree node
* @parent: parint of node
* @value: the value in node
* Return: pointer to the node if success or NULL if fail
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newtree;

	newtree = malloc(sizeof(binary_tree_t));
	if (newtree == NULL)
		return (NULL);

	newtree->parent = parent;
	newtree->n = value;
	newtree->left = NULL;
	newtree->right = NULL;

	return (newtree);
}
