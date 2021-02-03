#include <algorithm>
#include <cstdio>
#include <set>
#include <string.h>

using namespace std;
int main() {
  char str[101];
  scanf("%s", str);

  sort(str, str + strlen(str));
  printf("%s\n", str);
  sort(str, str + strlen(str), greater<char>());
  printf("%s\n", str);
}