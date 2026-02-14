#include<stdio.h>
int main()
 {
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=(size-1);i++)
   {
        printf("Enter the %d value:\n",(i+1));
        scanf("%d",&a[i]);
   }   
    int buy=0;
    int sell=0;
    int profit=0;
    for(int i=0;i<=(size-1);i++)
       {
         for(int j=i+1;j<size;j++)
         {
             int pur=a[j]-a[i];
             if(pur>profit)
             {
                buy=a[i];
                sell=a[j];
                profit=pur;
              }
          }
      }          
        printf("buy=%d \t sell=%d \t profit=%d\n",buy,sell,profit);
        return 0;
 }