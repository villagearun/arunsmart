#include<stdio.h>

void main() 
{
    int a[10],n,i,j;
    printf("Enter the total element");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

for(i=0;i<n-1;i++)
{
    int temp;
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])  
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
    }
    }
    printf("The sorted array is:");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
    printf("\t");
}
printf("\nthe size is%d",a[n/2]);
}
