#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"




/**
 * binary_tree_insert_left - [Short description goes here]
 * @parent: [Describe what this pointer is]
 * @value: [Describe what this integer represents]
 *
 * Return: [Describe the return value]
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	 binary_tree_t *newtree;

	if (parent == NULL)
		return (NULL);

	newtree = malloc(sizeof(binary_tree_t));
	if (newtree == NULL)
		return (NULL);


	newtree->n = value;
	newtree->right = NULL;
	newtree->left = NULL;
	newtree->parent = parent;
	if (parent->left != NULL)
	{
		(parent->left)->parent = newtree;
		newtree->left = parent->left;
	}
	parent->left = newtree;


	return (newtree);
}
