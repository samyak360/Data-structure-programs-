/* there are many operations on link lists like , inserion , deletion and traversing */
#include <conio.h>
#include <stdio.h>

/* now , in link list there are nodes in which data is stored and a link to another node is present , i.e the address of 
 another node. so first we need to create the layout of the node */
 
 struct node 
 {
 	int info;
 	struct node *link ; // the struct node type pointr will point to the variable i.e. node of type struct node 
 };
 
 struct node *START= NULL ; // a pointer is made of the type struct node 
 struct node* create_node()
 {
 	struct node *n ;
 	n= (struct node *)malloc (sizeof (struct node));
 	
 	return n;
 }
 
void insert_node ()
 { 
 	struct node *temp , *t;
 	temp = create_node();
 	printf(" enter the no. \n");
 	scanf(" %d", &temp-> info);
 	temp ->link =NULL;
 	if ( START == NULL)
 	START = temp; 	
 	else 
 	{ t= START ;
 	  while ( t->link != NULL)
	   {t= t->link;
	   	t->link =temp;
		 }	
 		
	 }
 	
 }
 
 void delete_node();
 {
 	struct node *t ;
 	if( START == NULL )
 	{ printf(" the list is empty ");}
	else
	 {
		t=START ;
	 START =START -> link ;
	 free (t);
	  }
 }
  
 void view_list() 
 {
 	struct node *t;
 	if( START == NULL )
 	{ printf(" the list is empty ");}
 	else
	{ t=START; 
	 while ( t!= NULL)
 	{
 		printf(" %d", t->info );
 		t=t-> link;
	 }
	}
 }
 
 int menu()
 { 
 	char ch ;
 	printf (" 1 for inserting a value in the list ");
	printf (" 2 for deleting a value from the list ");
	printf (" 3 for viewing values of the list ");
	printf (" 4 to exit");
	return ch; 	
 }
int main()
{
	while (1)
	{
		switch ( menu())
		{
		case  1: 
					insert_node();
					break;
		case  2: 	
					delete_node();
					break;
		case  3: 	
					view_list();
					break;
		case  4: 	
					exit (0);
		
		default :  printf(" this is a invalid choice ");
		}
	}	
	getch();
	return 0;
	
}
