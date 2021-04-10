struct Tree {

	int value;

	Tree *left;

	Tree *right;
};

Tree *Createnewnode (int );

Tree *Insertnode (Tree *,int );

void Pre_order(Tree *);

void In_order(Tree *);

void Post_order(Tree *);

void Level_order(Tree *);