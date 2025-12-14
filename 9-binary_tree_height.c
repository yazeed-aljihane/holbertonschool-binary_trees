#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"



/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (tree == NULL)
		return (0);

	i = binary_tree_height(tree->left);
	if (tree->left != NULL)
	i++;
	j = binary_tree_height(tree->right);
	if (tree->right != NULL)
	j++;
	if (i > j)
		return (i);
	else
		return (j);
}
