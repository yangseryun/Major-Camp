#include <stdio.h>
int main() {
	int a;
	printf("점수 입력 : ");
	scanf("%d", &a);

	char g = grade(a);

	printf("%c", g);
}
int grade(int score) {
	char grade;
	if (score <= 100 && score >= 90) {
		grade = 'A'
			;
	}
	else if (score < 90 && score >= 80) {
		grade = 'B'
			;
	}
	else if (score < 80 && score >= 70) {
		grade = 'C'
			;
	}
	else if (score < 70 && score >= 60) {
		grade = 'D'
			;
	}
	else {
		grade = 'F'
			;
	}

	return grade;
}



#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);

	printf("%d", fun(a));
}
int fun(int n) {
	int count = 0;
	for (int i = 1; i <= n-1; i++) {
		count += i % 5;
	}

	return count;
}


#include <stdio.h>
int main() {
	char a[100];
	int len;

	printf("Enter Sentence : ");
	gets(a);
	len = strlen(a);
	wordlist(a,len);
}
int wordlist(char *str,int len) {
	for (int i = 0; i <= len; i++) {
		if (str[i] >= 97&&str[i]<= 122) {
			printf("%c", str[i] - 32);
		}
		else {
			printf("%c", str[i]);
		}
		if (str[i] == ' ') {
			printf("\n");
		}
	}
}



#include <stdio.h>
int main() {
	char a[100];
	
	scanf("%s", a);
	int len = strlen(a);
	word(a, len);

}
int word(char *str,int len) {

	int n1=0, n2=0, n3=0;
	for (int i = 0; str[i]!='\0'; i++) {
		if (str[i]>=97 && str[i]<=122 ) {
			n1 = 1;
		}
		if (str[i] >= 65 && str[i] <= 90) {
			n2 = 1;
		}
		if (str[i] >= '0' && str[i] <= '9') {
			n3 = 1;
		}

	}
	
	if (n1 == 1 && n2 == 1 && n3 == 1 && len >= 6 && len <= 20) {
		printf("%s", str);
	}
	else {
		printf("다시 만들라");
	}

}



#include <stdio.h>
int main() {
	int num,result;
	printf("Enter the number : ");
	scanf("%d", &num);


	result = word(num);

	if (result == 1) {
		printf("True");
	}
	else
		printf("false");

}
int word(int num) {
	int count;
	int a=0,flag=1;
	for (int i = 0; i <= 5; i++) {
		a = num;
		count = 0;
		while (a > 0) {
			if (a % 10 == i) {
				count++;
			}
			a = a / 10;
		}
		if (count!=1) {
			flag = 0;
			break;
		}
		
	}
	return flag;
}



#include <stdio.h>
void name(char *a, int b) {
	for (int i = 0; i < b; i++) {
		printf("%s\n", a);
	}
}
int main() {
	char a[100] = "yang se ryun";
	int b;
	b = strlen(a);
	name(a, b);

	printf("%s\n", a);
	printf("%d", b);
}

