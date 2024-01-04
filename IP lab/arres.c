#include <stdio.h>

int main()
{
  int myArray[10], largeNum[10];
  int i, n = 10, sum = 0;
  float average;

  printf("Enter the number series: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &myArray[i]);
    sum += myArray[i];
  }

  average = (float)sum / n;
  printf("\nAverage: %.1f\n", average);


  for (i = 0; i < n; i++)
  {
    printf("\nmyArray:%d ", myArray[i]);
  }

  int j = 0;
  for (i = 0; i < n; i++)
  {
    if (myArray[i] > average)
    {
      largeNum[i] = myArray[i];
      j++;
    }
  }

 
  for (i = 0; i < j; i++)
  {
    printf("\n\nlargeNum:%d ", largeNum[i]);
  }

  return 0;
}
