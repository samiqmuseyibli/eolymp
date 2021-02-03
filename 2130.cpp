#include <math.h>
#include <stdio.h>


int main() {
  int x1, y1, x2, y2;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
  double angle = acos((x1 * x2 + y1 * y2) / (sqrt(pow(x1, 2) + pow(y1, 2)) *
                                             sqrt((pow(x2, 2) + pow(y2, 2)))));
  printf("%.5lf", angle);
}