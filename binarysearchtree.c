#include<stdio.h>
#include<stdlib.h>


struct Node
{
    struct Node* left;
    int data;
    struct Node* right;

};

struct Node *root=NULL;

void insertData(struct Node* ptr,int data)
{
    if(root==NULL)
    {
        
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data=data;
        newNode->left=NULL;
        newNode->right=NULL;
        root=newNode;
        
         
    }
    else if (data < ptr->data)
    {
        if(ptr->left!=NULL)
        {
            insertData(ptr->left,data);
        }
        else
        {
          struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
          newNode->data=data;
          newNode->left=NULL;
          newNode->right=NULL;
          ptr->left=newNode;
         
        }
        
        
    }
    else if (data > ptr->data)
    {
        if(ptr->right!=NULL)
        {
            insertData(ptr->right,data);
        }
        else
        {
          struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
          newNode->data=data;
          newNode->left=NULL;
          newNode->right=NULL;
          ptr->right=newNode;
         
        }
    }
    else
    {
        printf("\n element Already Exists");
    }
    
}

void inOrderTraversal(struct Node* tmp)
{
    if(tmp!=NULL)
    {
        inOrderTraversal(tmp->left);
        printf("\n%d,",tmp->data);
        inOrderTraversal(tmp->right);
    }
 }

 int searchElement(struct Node* tmp,int data)
 {
     int flag=0;
    while(tmp!=NULL)
    {
        if(tmp->data == data)
        {
            printf("\nGiven data found in the tree\n");
            flag=1;
            break;
        }

        else if(data > tmp->data)
        {
            tmp=tmp->right;
        }
        else
        {
            tmp=tmp->left;
        }
        
    }

    if(flag==0)
    {
        printf("\nGiven element not found in tree\n");
    }
    
 }

struct Node* maxNode(struct Node* tmp)
 {
     return tmp->left;
 }

struct Node* deleteElement(struct Node* tmp,int data)
{
    if(tmp==NULL)
    {
        return tmp;
    }

    else if(data > tmp->data)
    {
        tmp->right = deleteElement(tmp->right,data);
    }

    else if(data < tmp->data )
    {
        tmp->left = deleteElement(tmp->left,data);
    }

    else
    {
        if(tmp->right==NULL && tmp->left==NULL)
        {
            struct Node* ptr=tmp->right;
            free(tmp);
            return ptr;
        }

        else if(tmp->right!=NULL && tmp->left==NULL)
        {
            struct Node* ptr=tmp->right;
            free(tmp);
            return ptr;
        }
        
        else if(tmp->left!=NULL && tmp->left==NULL)
        {
           struct Node* ptr=tmp->left;
            free(tmp);
            return ptr;
        }

        else
        {
            struct Node* newNode = maxNode(tmp);
            tmp->data=newNode->data;
            tmp->left=deleteElement(tmp->left,newNode->data);
        }
        
        
    }
    return tmp;
    
}

void main()
{
    insertData(root,5);
    insertData(root,10);
    insertData(root,15);
    insertData(root,1);
    insertData(root,20);
    insertData(root,33);
    insertData(root,23);
    insertData(root,203);
    insertData(root,13);
    deleteElement(root,5);
    inOrderTraversal(root);
    
}