#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display(); 
void search(); 
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    int choice=0;
   
        printf("\n1.Push\n2.Pop\n3.Display\n4.search\n5.Exit"); 
    while(choice != 5)  
    {  
        
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:push();  
                break;  

            case 2:pop();  
                break;  

            case 3:display();  
                break;  
 	case 4:search();  
                break; 
          
            case 5:printf("Exiting....");  
                break;   
         
            default:printf("Please Enter valid choice ");  
   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("not able to push elements");   
    }  
    else   
    {  
        printf("Enter the value");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed");  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item popped");  
          
    }  
}  
void display()  
{   
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
} 
void search()
{
int data;
struct node *ptr;  
    ptr=head;
printf("\nenter element");
scanf("%d",&data);  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {    
        while(ptr!=NULL)  
        {  
            if(ptr->val==data)
{
printf("\nitem found\n");
return;
}  
            ptr = ptr->next;  
        }
printf("\nitem not found");  
    return;
} 
} 
