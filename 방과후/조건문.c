#include <stdio.h>
int main() {
	int a;
	printf("Enter the number : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("even number");

	}printf("odd number");
}


#include <stdio.h>
int main() {
	int a;
	printf("Enter the number : ");
	scanf("%d", &a);

	if (a >= 530101)
	{
		printf("old");
	}
}



#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	
	if (num % 2==0 || num % 3==0)
	{
		printf("2�Ǵ� 3�� ����̴�.");
	}
	else {
		printf("2�Ǵ� 3�� ����� �ƴϴ�.");
	}
}



#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		a++;
	}
	else if (a == b) {
		b += a;
	}
	else if (a < b) {
		b++;
	}
	printf("%d %d", a, b);
}



#include <stdio.h>
int main() {
	char score;
	scanf("%c", &score);

	if (a == 'A' || a == 'B') {
		printf("�� ���߽��ϴ�.\n");
	}
	else if (a == 'C' || a == 'D') {
		printf("�� �� ����ϼ���.\n");
	}
	else {
		printf("���� �б⿡ �ٽ� �����ϼ���.\n");
	}
}


#include <stdio.h>
int main() {
	int name, with;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &name);
	
	if (name >= 12) {
		printf(">>���");
	}
	else {
		printf("�θ�԰� �����Ͽ����ϱ�?(Y/N) : ");
		scanf(" %c", &with);
		
		if (with == 'Y') {
			printf(">>���");
		}
		else {
			printf(">>����");
		}
	}
}


#include <stdio.h>
int main() {
	int a, b,c;
	scanf("%d %d", &a, &b);

	if (a > b) {
		c = a - b;
	}
	else
	{
		c= b - a;
	}
	printf("���� %d�Դϴ�.", c);
}


#include <stdio.h>
int main() {
	char op;
	int n1, n2;
	printf("Enter : ");
	scanf("%d %c %d", &n1,&op,&n2);

	if (op== '+')
	{
		printf("%d %c %d =%d",n1,op,n2,n1+n2 );
	}
	else if (op == '-')
	{
		printf("%d %c %d =%d", n1, op, n2, n1 - n2);
	}
	else if (op == '*')
	{
		printf("%d %c %d =%d", n1, op, n2, n1 * n2);
	}
	else if (op == '/')
	{
		printf("%d %c %d =%d", n1, op, n2, n1 / n2);
	}
}





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


#include <stdio.h>
int main() {
	int i = 2;
	while (i <= 20) {
		printf("%d ", i);
		i = i * 2;
	}
}


#include <stdio.h>
int main() {
	char a[20] = "abcdefghijklmn";
	int i, j;
	scanf("%d %d", &i, &j);

	while (i <= j) {
		printf("%c", a[i]);
		i++;
	}
}


#include <stdio.h>
int main() {
	char a='\0';

	while (a != 'q') {
	printf("Enter the alphabet : ");
	scanf(" %c", &a);

	}
printf("Finish");
}



#include <stdio.h>
int main() {
	int a, b,temp;

	printf("frist num : ");
	scanf("%d", &a);

	printf("second num : ");
	scanf("%d", &b);

	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	while (a <= b) {
		if (a % 5 == 0) {
			printf("%d\n", a);
		}
		a++;
	}

}


