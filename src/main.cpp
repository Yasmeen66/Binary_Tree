# include"binary_tree.cpp"

#include<bits/stdc++.h>

#include<cstddef>

using namespace std;

int main(){

Tree *t = NULL;

t= Insertnode(t,7);

t= Insertnode(t,12);

t= Insertnode(t,6);

t= Insertnode(t,1);

Pre_order(t);

	return 0;
}