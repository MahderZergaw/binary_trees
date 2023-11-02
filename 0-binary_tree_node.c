#include <stdio.h>
/**
 *binary_tree_node- the fuction binary node
 *@value: the value
 *@parent: the parent
 *Return: nuthing
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t newNode =malloc(sizeof(binary_tree_t));
if(value === null)
return 0;
newNode -> value = value
newNode ->left = binary_tree_node(newNode, value);
newNode ->right = binary_tree_node(newNode, value);
}
