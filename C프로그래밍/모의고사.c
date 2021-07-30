#include <stdio.h>
int main() {
	int a,c;
	int b =2017;
	printf("년도를 입력하세요 : ");
	scanf("%d", &a);

	c = a - b+20;

	printf("%d년 지수의 나이는 %d세입니다.\n", a, c);
}



#include <stdio.h>
int main() {
	char str[100];

	printf("문장을 입력하세요 : ");
	gets_s(str, sizeof(str));

	printf("해당 문장의 길이는 %d입니다.", strlen(str));
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
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	temp = a % 10;

	if (temp == 3 || temp == 6 || temp == 9) {
		printf("짝");
	}
	temp = a / 10;

	if (temp == 3 || temp == 6 || temp == 9) {
		printf("짝");
	}
}


