#include<stdio.h>

int main()
{
  int i,n,Sum=0,numbers;
//   first we need to declear i=0 and n and number and sum
// then using float datatypes we declear average 
  float Average;

  printf("\nPlease user, Enter How many Number you want?\n");
  scanf("%d",&n);
  //first n is used for asking user how many number do you want sum and average1

  printf("\nPlease Enter the elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }

  Average = Sum/n;

  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Average);
//   for printing float number we need to take %f but if we want float value after two zeroes then we used %.2f

  return 0;
}