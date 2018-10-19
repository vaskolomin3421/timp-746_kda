#include<stdio.h>
#include<math.h>

int main()
{
  double a, b, c;
  scanf("%lf%lf", &a, &b);
  c = pow((double)a, (double)b);
  printf("%.4lf\n", c);
  return 0;
}
