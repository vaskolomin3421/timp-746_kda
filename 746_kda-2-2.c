#include <stdio.h>

int main()
{
  int s, n, z, i;
  scanf("%d", &n);
  s = 1;
  for (i = 0; i < n; i++)
        {
         scanf("%d", &z); // ввод чисел, которые будем умножать
         s = s * z;
        }
  printf("%d\n", s);
  return 0;
}

