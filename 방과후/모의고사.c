#include <stdio.h>
int main() {
	int a,c;
	int b =2017;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &a);

	c = a - b+20;

	printf("%d�� ������ ���̴� %d���Դϴ�.\n", a, c);
}



#include <stdio.h>
int main() {
	char str[100];

	printf("������ �Է��ϼ��� : ");
	gets_s(str, sizeof(str));

	printf("�ش� ������ ���̴� %d�Դϴ�.", strlen(str));
}



#include <stdio.h>
int main() {
	int num,a;
	scanf("%d", &num);

	a=(num % 3==0 && num % 4==0) ?0 : 1;
	printf("%d", a);
}



#include <stdio.h>
int main() {
	int a,num;
	scanf("%d", &num);
	a = num * 4;

	printf("%o", a);
}



#include <stdio.h>
int main() {
	char str[10] = "ABCDEFGH";
	printf("%c\n", str[5]);
	printf("%c", str[6]);
	printf("%c", str[7]);
}


#include <stdio.h>
int main() {
	int a,temp;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);

	temp = a % 10;

	if (temp == 3 || temp == 6 || temp == 9) {
		printf("¦");
	}
	temp = a / 10;

	if (temp == 3 || temp == 6 || temp == 9) {
		printf("¦");
	}
}


