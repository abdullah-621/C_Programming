#include <stdio.h>
int main()
{

  int n;
  scanf("%d", &n);
  while (n--)
  {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int arr[3] = {a, b, c};

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2 - i; j++)
      {
        if (arr[j] > arr[j + 1])
        {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
    if (arr[1] + arr[2] >= 10)
    {
      printf("Yes\n");
    }
    else
    {
      printf("No\n");
    }
  }

  return 0;
}