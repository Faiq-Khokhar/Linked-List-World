#include<iostream>
#include<windows.h>
using namespace std;

int choice,choice1,search,newData;;

struct node
{
	int data;
	node *next;
	node *prev;
};

class linkedList
{
	private:
		node *head=new node();
	public:
		linkedList()
		{
			head=NULL;
		}	
	
	void Welcome()
	{
		cout<<"\t\t********************** Welcome To The Linked List World **********************\t\t";
	}
	
	void addathead(node *n)
					{
						cout<<"Enter value to insert at head ? ";
						cin>>newData;
						node *addnode=new node();
						addNode->data=newData;
		
						addNode->next=head->next;
						head=addNode;	
					
					while(head!=NULL)
					{
						cout<<head->data<<"\t";
						head=head->next;
					}	
						
					}
	
	void addatEnd(node *head)
					{
						node *addNode=new node();
						addNode->data=2;
		
						if(head == NULL)
						{
							head=addNode;
						}
						else{
							node *p=head;
			
							while(p->next != NULL)
							{
								p=p->next;
							}
		
							addNode->next=p->next;
							p->next=addNode;
							}	
					}				
	
	void deleteatFirst(node *head)
				{
   						if(head==NULL)
						{
      						return;
   						}
   						else
						{
						   	node *temp=head;
   							head= head->next;
   							delete temp;
   							return;
   					}
				}
	int deleteatLast(node* head)
					{
   						if (head == NULL)
   						return 0;
 
   						if (head->next == NULL) 
					{
      					node *temp=head;
      					delete temp;
      					return 0;
   					}
					}
					
	
				
	int addatMid(node *head)     //If nodes aren't known
					{
						node *slow=head;
						node *fast=head;
	
					if(head==NULL)
					{
						return -1;
					}
	
					while(fast!=NULL && fast->next!=NULL)
					{
						fast=fast->next->next;
						slow=slow->next;
					}
	
					node *temp=slow;
    				delete temp;
    				return 0;
					}	
	
	void Display()
					{
						while(head != NULL)
					{
						cout<<head->data<<endl;
						head=head->next;
					}
					}
					
	void reversePrint(node *head) 
					{
    				if (head != NULL) 
					{
        				reversePrint(head->next);
        				cout<<head->data;
    				}
					}		
	
	void valueSearch(node *head)
					{ 
					cout<<"Enter value to be Searched ? ";
					cin>>search;
					
					while(head != NULL)
					{
						if(head->data==search)
						{
							cout<<head->data;
						}
					}
					}							
	
	void SinglyScr4()
	{
		cout<<"\n\nSelect any of the operation you want to perform : ";
		cout<<"\n\n\t1. Insert at the beginning ";
		cout<<"\n\t2. Insert at the end ";
		cout<<"\n\t3. Insert after or before any location ";
		cout<<"\n\t4. Delete at the head ";
		cout<<"\n\t5. Delete at the End ";
		cout<<"\n\t6. Delete In between ";
		cout<<"\n\t7. Delete Using key Word ";
		cout<<"\n\t8. Print all the elements";
		cout<<"\n\t9. Print reverse ";
		cout<<"\n\t10. Search an element ";
		
		cout<<"\n\nSelect your Option : ";
		cin>>choice1;
		
		switch(choice1)
		{
			case 1:
				{
				/*	node *head=new node();
					node *n1=new node();
					node *n2=new node();
					node *n3=new node();
					node *n4=new node();
					
					n1->data=4;
					n2->data=6;
					n3->data=8;
					n4->data=10;
					
					head->next=n1;
					n1->next=n2;
					n2->next=n3;
					n3->next=n4;
					n4->next=NULL;*/
					
					addathead(head);
					break;
				}
			
			case 2:
				{
					addatEnd(head);
			        break;
				}
				
			case 3:
				{
					
				}		
				
			case 4:
				{
					deleteatFirst(head);
					break;
				}
				
			case 5:
				{
					deleteatLast(head);
					break;
				}
				
			case 6:
				{
					addatMid(head);    //If nodes aren't known
					break;
				}
				
			case 7:
				{
					
				}
				
			case 8:
				{
			  //DISPLAY
					void Display();	
					break;
				}
			
			case 9:
				{
					reversePrint(head); 
					break;
				}
				
			case 10:
				{
					valueSearch(head);
					break;
				}	
				
		}
	}
	
	void Screen2()
	{
		cout<<"\n\nPress Option Number Accordingly to open specific Linked list Type : \n\n\n";
		cout<<"\t1. Singly Linked List\n";
		cout<<"\t1. Doubly Linked List\n";
		cout<<"\t1. Circular Linked List\n";
		
		cout<<"\n\nEnter Your Choice : ";
		cin>>choice;
		system("cls");
		switch(choice)
		{
			case 1:
				{
					SinglyScr4();
				}
			
			case 2:
				{
					
				}
				
			case 3:
				{
					
				}		
		}
	}
};

int main()
{
	linkedList L1;
	
	node *head=new node();
					node *n1=new node();
					node *n2=new node();
					node *n3=new node();
					node *n4=new node();
					
					n1->data=4;
					n2->data=6;
					n3->data=8;
					n4->data=10;
					
					head->next=n1;
					n1->next=n2;
					n2->next=n3;
					n3->next=n4;
					n4->next=NULL;
	
	L1.Welcome();
	Sleep(1000);
	system("cls");
	L1.Screen2();
	
	return 0;
}
