//Mina Ünal

#include <stdio.h>

struct node{
	int data;
	struct node* next;
};
struct node* head1;
struct node* head2;
struct node* tail1;
struct node* tail2;

int main(){
	
	struct node* first;
	struct node* sec;
	
	add(1);
	add(2);
	add(3);
	add(4);
	add(7);
	add(5);
	add(6);
	
    
    
    add2(4);
    add2(1);
    add2(8);
    add2(7);
    
    add2(5);
    add2(6);
    

	compare(first,sec);
	 
	
	
}
int add(int data){
	if (head1==NULL){
	struct node *new;
	new=malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		head1=tail1=new;
	}
	else {
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		tail1->next=new;
		tail1=new;
		
	}return 1;
}
int add2(int data){
	if (head2==NULL){
	struct node *new;
	new=malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		head2=tail2=new;
	}
	else {
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		tail2->next=new;
		tail2=new;
		
	}return 1;
}



int compare(struct node* first , struct node* sec){
	struct node* ptres;
	struct node* ptr1;
	struct node* ptr2;
	struct node* ptrson;
	
	ptr1=first=head1;
	ptr2=sec=head2;
		
	
	int a=yazdir1();
	int b=yazdir2();

	if(a>b){
		while(a-b!=0){
			
			ptr1=ptr1->next;
			a--;
		}
		
		while(ptr1->data!=sec->data){
			
			ptr1=ptr1->next;
			sec=sec->next;
		}
		ptrson=ptr1;
	}
	else{
		while(b-a!=0){
			
			ptr2=ptr2->next;
			b--;
		}
			
		while(ptr2->data!=first->data){
			
			ptr2=ptr2->next;
			first=first->next;
		}
		ptrson=ptr2;
	}


struct node *index=ptrson;
	while(ptrson->next!=NULL){
		
	printf("%d ", index->data);
	index=index->next;}		
	
}
int yazdir1(){
	int i=0;
	struct node *index=head1;
	while(index!=NULL){
		index=index->next;
		i++;
	}
	return i;
			
}

int yazdir2(){
	int i=0;
	struct node *index=head2;
	while(index!=NULL){
		index=index->next;
i++;
}
	
return i;		
}




