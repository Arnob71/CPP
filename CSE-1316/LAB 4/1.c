#include <stdio.h>
#include<stdlib.h>

/*

         D
        / \
       /   \
      /     \
     A       F
    / \     / \
   /   \   /   \
  E     B R     T
 / \     /     / \
G   Q   V     J   L
*/

// variable to store maximum number of nodes
int complete_node = 15;

// array to store the tree
char tree[] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

int get_right_child(int index)
{
// node is not null
// and the result must lie within the number of nodes for a complete binary tree
if(tree[index]!='\0' && ((2*index)+1)<=complete_node)
  return (2*index)+1;
// right child doesn't exist
return -1;
}

int get_left_child(int index)
{
// node is not null
// and the result must lie within the number of nodes for a complete binary tree
if(tree[index]!='\0' && (2*index)<=complete_node)
  return 2*index;
// left child doesn't exist
return -1;
}

int get_parent(int index)
{
if(tree[index]!='\0' && index/2!='\0')
  return index/2;
else
  return -1;
}
void main(n){
  if(n != 0)
      print(n.data) // visiting root
      PREORDER(n.left) // visiting left subtree
      PREORDER(n.right) // visiting right subtree
}
