#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
void hanoi(int n, char A, char B, char C)
{
  // przek³ada n kr¹¿ków z A korzystaj¹c z B na C
  if (n > 0)
  {
    hanoi(n-1, A, C, B);
    printf("%d --> %d\n", A-64, C-64);
    hanoi(n-1, B, A, C);
  }
}
 
int main(int argc, char *argv[])
{
	int a;
	scanf("%d", &a);
	hanoi(a, 'A', 'B', 'C');

	system("pause");
	return 0;
}