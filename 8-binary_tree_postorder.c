#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* The left subtree is processed first, the right subtree then current node */
	binary_tree_postorder(tree->left, func);  /* Traverse the left subtree */
	binary_tree_postorder(tree->right, func); /* Traverse the right subtree */
	func(tree->n); /* Process the current node */
}
