#include <stdio.h>
/**
 *binary_tree_node- the fuction binary node
 *@value: the value
 *@parent: the parent
 *Return: nuthing
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t newNode = malloc(sizeof(binary_tree_t));
if (!newNode)
return (0);
newNode->value = value;
newNode->parent = parent;
newNode->left = NULL;
newNode->right = NULL;
}
