#include<stdio.h>
int main()
{
    int arr[5]={10,2,3,4,5};
    int min1=arr[0];
    int min2=arr[1];
    for(int i=0;i<5;i++)
     { if(arr[i]<min1)
      {
          min2=min1;
          min1=arr[i];
      }
      else if(arr[i]<min2)
      {min2=arr[i];}
}
      printf("Second smallest : %d",min2);
    
}