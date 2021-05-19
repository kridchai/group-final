
// An integer binary search tree

struct treeNode {                                           
   struct treeNode *leftPtr; // pointer to left subtree 
   int data; // node value                               
   struct treeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode         
typedef struct treeNode TreeNode; // synonym for struct treeNode
typedef TreeNode *TreeNodePtr; // synonym for TreeNode*
                    
typedef struct {
	int size;
	TreeNodePtr rootPtr;
}BST;

// prototypes
void printb(int x);

void insertNode( BST *b, int value ){
	 TreeNodePtr t =b->rootPtr,new_node;
	 int inserted=0;
new_node=(TreeNodePtr) malloc(sizeof(TreeNode));
	if(new_node){
		new_node->leftPtr=NULL;
		new_node->rightPtr=NULL;
		new_node->data=value;
	/*First Node*/
	if(!b->rootPtr)	b->rootPtr=new_node;
	else {
  while(!inserted){
   if(t->data >=value){
     if(t->leftPtr==NULL)
     {
       t->leftPtr = new_node;
       inserted = 1;
       b->size++;
     }
     else{
       t = t->leftPtr;
     }
  }
   else{
     if(t->rightPtr==NULL)
     {
       t->rightPtr = new_node;
       inserted = 1;
        b->size++;
     }
     else{
       t = t->rightPtr;
     }

	}	

  }//end while		
 }//end else;
  }
}//end function


void inOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {                
      inOrder( treePtr->leftPtr ); //Recursion to the left 
      printf( "%3d", treePtr->data );  //print the value    
      inOrder( treePtr->rightPtr ); //Recursion to the right
   } // end if                          
} // end function 

void preOrder( TreeNodePtr treePtr ){
    if(treePtr!=NULL)
    {
        preOrder(treePtr->leftPtr);
    printf("%3d",treePtr->data);
    preOrder(treePtr->rightPtr);
    }
    

}
void postOrder( TreeNodePtr treePtr ){
    if(treePtr!=NULL)
    {
      postOrder(treePtr->leftPtr);
      postOrder(treePtr->rightPtr);
      preOrder(treePtr->rightPtr);
    }
    
}

void rotate(TreeNodePtr treePtr,int level){
       
    if(treePtr!=NULL)
    {
        rotate(treePtr->rightPtr,level+1);
        printb(level);
        printf("%d\n",treePtr->data);
        rotate(treePtr->leftPtr,level+1);
    }
   
}
void printb(int x)
{
  for(int i = 0;i<x;i++)
    printf("      ");
}



int find(BST *b,int x){
    TreeNodePtr t =b->rootPtr;
    
    while(t){
      if(x==t->data)
        return 1;
      else if(x<=t->data)
        t = t->leftPtr;
      else
        t = t->rightPtr;
    }
    
}
