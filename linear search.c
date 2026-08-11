#include <stdio.h>

int main()
{
  int arr[10];
  int key,n=5, count=0,comparision=0;
  
  
  printf("Enter 5 numbers: ");
  
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  
  printf("Enter searching no.: ");
  scanf("%d",&key);
  
  for (int i=0;i<n;i++)
  {
     if(arr[i]==key){
         printf("Your value is found: %d at index %d\n", key, i);
     count++;
     }  
      comparision++;
  }
  
  if(count==0){
      printf("value is not found");
  }
  else{
   printf("Your value count is: %d",count);
  }
  printf("comparision of your no.: %d",comparision);
    return 0;
}
