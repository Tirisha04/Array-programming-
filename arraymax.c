#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array \n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=(size-1);i++)
    {
    printf("Enter the %d value :\n",(i+1));
    scanf("%d",&a[i]);
    }
    int max=a[0];
    int index=0;
    for(int i=0;i<=size-1;i++)
    {
        if(a[i]>max)
        {
           index=i;
         }
      }
      for(int i=0;i<index;i++)
      {
          printf("%d\n",a[i]);
       }
       return 0;
  }         