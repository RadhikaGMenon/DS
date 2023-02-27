
#include<stdio.h>
void main()
{
int a[10],b[10],c[10],m,n,i,j,k=0;
printf("enter the limit of first array");
scanf("%d",&m);
printf("enter the sorted array");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the limit of second array");
scanf("%d",&n);
printf("enter the sorted array");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
k++;
j++;
}
}
while(i<m)
{
c[k]=a[i];
k++;
i++;
}
while(j<n)
{
c[k]=b[j];
k++;
j++;
}
printf("merged sorted array is:");
for(i=0;i<k;i++)
{
printf("%d\n",c[i]);
}
return;
}
