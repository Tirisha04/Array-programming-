#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array \n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
    printf("Enter the %d value :\n",(i+1));
    scanf("%d",&a[i]);
    }
    int min=a[0];
    int index=0;
    for(int i=1;i<size;i++)
    {
        if(a[i]<min)
        {
           min=a[i];
           index=i;
         }
      }
      for(int i=index+1;i<size;i++)
      {
          printf("%d\n",a[i]);
       }
       return 0;
  }         