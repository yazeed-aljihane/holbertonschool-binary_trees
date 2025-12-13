#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"




/**
* binary_tree_insert_right - function that inserts a
* node as the right-child of another node
* @parent: the parent node
* @value: the value in node
* Return: new right node in success or NULL if fail
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;



	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);


	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		(parent->right)->parent = newnode;
	}
		parent->right = newnode;

	return (newnode);

}
