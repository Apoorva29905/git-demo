#include<stdio.h>
#include<stdlib.h>
int a[10],n,elem,i,pos;
void create()
{
  printf("\nEnter the size of the array elements:");
  scanf("%d",&n);
  printf("\nEnter the elementsfor the array:\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display()
{
  int i;
printf("\nThe arrayelements are:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void insert()
{
  printf("\nEnter the position for the new element:");
scanf("%d",&pos);
printf("\nEnter the element to be inserted:");
scanf("%d",&elem);
for(i=n-1;i>pos;i--)
{
a[i+1]=a[i];
}
a[pos]=elem;
n=n+1;
}
void del()
{
  printf("\nEnter the position of the element to be deleted:");
scanf("%d",&pos);
elem=a[pos];
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
printf("\nThe deleted element is=%d",elem);
}
void main()
{
  int ch;
do{
printf('\n\n____________Menu__________\n");
printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
printf("\nEnter your choice:");
scanf("%d",&ch);
{
case 1:create();break;
case 2:display();break;
case 3:insert();break;
case 4:del();break;
case 5:exit(0);break;
default:printf("\nInvalid choice:\n");break;
}
}
  while(ch!=5);
}
  
