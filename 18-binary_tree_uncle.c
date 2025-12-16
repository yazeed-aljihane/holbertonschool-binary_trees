#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent && grandparent->right != NULL)
		return (grandparent->right);
	else if (grandparent->right == parent && grandparent->left != NULL)
		return (grandparent->left);

	return (NULL);
}
