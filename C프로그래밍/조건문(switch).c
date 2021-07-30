#include <stdio.h>
int main() {
	char op;
	int n1, n2;
	printf("Enter : ");
	scanf("%d %c %d", &n1, &op, &n2);

	switch (op) {
	case '+': printf("%d %c %d =%d", n1, op, n2, n1 + n2);
		break;
	case '-': printf("%d %c %d =%d", n1, op, n2, n1 - n2);
		break;

	case '*': printf("%d %c %d =%d", n1, op, n2, n1 * n2);
		break;
	case '/': printf("%d %c %d =%d", n1, op, n2, n1 / n2);
		break;
	}
}