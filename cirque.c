#include<stdio.h>
int arr[100],n,e,c,front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void search();
void main()
{
printf("Enter the size of array:");
scanf("%d",&n);
printf("\n1.enqueue\n2.dequeue\n3.display\n4.search\n5.exit");
do
{
printf("\nEnter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:enqueue();
	break;
case 2:dequeue();
	break;
case 3:display();
	break;
case 4:search();
	break;
case 5:printf("exited");
	break;
default:printf("invalid choice");
}}
while(c!=5);
}
void enqueue()
{
if((front==rear+1)||(front==0&&rear==n-1))
printf("queue overflow");
else
{
printf("enter the element");
scanf("%d",&e);
if(front==-1)
{
front=0;
}
rear=(rear+1)%n;
arr[rear]=e;
printf("\ninserted %d",e);
}}
void display()
{
int i;
if (front==-1)
printf("queue is empty");
else
{
printf("\nelements\n");
for(i=front;i!=rear;i=(i+1)%n)
{
printf("%d\n",arr[i]);
}
printf("%d",arr[i]);
}}
void dequeue()
{
int data;
if(front==-1)
printf("queue underflow");
else
{
data=arr[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else{
front=(front+1)%n;
printf("\ndeleted element %d\n",data);
}}}
void search()
{
int element,i;
printf("enter the element ");
scanf("%d",&element);
if(arr[rear]==element)
{
printf("\nelement found\n");
return;
}
else
{
for(i=front;i!=((rear+1)%n);i=((i+1)%n))
{
if(element==arr[i])
{
printf("element found\n");
return;
}}
}
printf("element not found");
return;
}
