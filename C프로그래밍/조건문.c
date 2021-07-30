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
		printf("2또는 3의 배수이다.");
	}
	else {
		printf("2또는 3의 배수가 아니다.");
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
		printf("참 잘했습니다.\n");
	}
	else if (a == 'C' || a == 'D') {
		printf("좀 더 노력하세요.\n");
	}
	else {
		printf("다음 학기에 다시 수강하세요.\n");
	}
}


#include <stdio.h>
int main() {
	int name, with;
	printf("나이를 입력하세요 : ");
	scanf("%d", &name);
	
	if (name >= 12) {
		printf(">>통과");
	}
	else {
		printf("부모님과 동행하였습니까?(Y/N) : ");
		scanf(" %c", &with);
		
		if (with == 'Y') {
			printf(">>통과");
		}
		else {
			printf(">>거절");
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
	printf("차는 %d입니다.", c);
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


