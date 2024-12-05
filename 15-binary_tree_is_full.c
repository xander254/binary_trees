#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* A NULL tree is not full */
	if (tree == NULL)
		return (0);

	/* A leaf node is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children exist, check recursively for left and right subtrees */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If the node has only one child, it's not a full tree */
	return (0);
}
