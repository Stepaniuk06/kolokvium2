#include <stdio.h>
int main()
{
  int n;
  int c;
  int d;
  int a[100];
  int b[100];
  int e = 101;
  int f = 0;
  printf("Кількість чисел у масиві\n");
  scanf("%d", &n);
  
  while (n < 101 && n>0)
  {

  printf("Введіть масив елементів\n");
  for (c = 0; c < n ; c++)
  scanf("%d", &a[c]);
  // Copying elements into array b starting from the end of array a
  
  for (c = n - 1, d = 0; c >= 0; c--, d++)
  b[d] = a[c];

  
  // Copying reversed array into the original, we are modifying the original array.
  for (c = 0; c < n; c++)
  a[c] = b[c];
  printf("Оберненний масив:\n");
  
  for (c = 0; c < n; c++)
  printf("%d ", a[c]);
  
  return 0;
  }

}