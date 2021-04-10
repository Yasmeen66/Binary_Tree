# include "../include/binary_tree.h"

#include<cstddef>

#include<bits/stdc++.h>

using namespace std;

Tree*Createnewnode(int data){

Tree *newnode = new Tree;

if(newnode == NULL)

return NULL;

else {

	newnode->value = data;

     newnode->left = NULL;

     newnode->right = NULL;
}

}

Tree *Insertnode(Tree *root ,int data){

	if(root == NULL){

		root = Createnewnode(data);

		return root;
	}

	else {

		queue<Tree* >Queue;

		Queue.push(root);

		while(!Queue.empty()){

			Tree *current = Queue.front();

			Queue.pop();

			if(current->left!=NULL)

				Queue.push(current->left);

			else{

				current->left = Createnewnode(data);

				break;

			}

			if(current->right!=NULL)

				Queue.push(current->right);

			else {

				current->right = Createnewnode(data);

				break;
			}

    	}
	}
}

void Pre_order(Tree *root){

	if(root == NULL)

		return ;

	else{

		cout<<root->value<<" ";

		Pre_order(root->left);

		Pre_order(root->right);

	}
}

void In_order(Tree *root){

	if(root == NULL)

		return ;

	else
	{

		In_order(root->left);

		cout<<root->value<<" ";

		In_order(root->right);

	}
}

void Post_order(Tree *root){

	if(root == NULL)

		return ;

	else{

		Post_order(root->left);

		Post_order(root->right);

		cout<<root->value<<" ";

	}
}

void Level_order(Tree *root){

	if(root == NULL)

		return ;

	else{

		queue<Tree* >Queue;

		Queue.push(root);

		while(!Queue.empty()){

			Tree *current = Queue.front();

			cout<<current->value<<" ";

			if(current->left!=NULL)

				Queue.push(current->left);

			if(current->right!=NULL)

				Queue.push(current->right);

			Queue.pop();
		}
	}
}