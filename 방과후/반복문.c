#include <stdio.h>
int main() {
	
	int count=0;
	for (int i = 1; i <= 10000; i++) {
		
		if (i % 7 == 0) {
			continue;
		}
		count++;
	}
	printf("%d ", count);
}



#include <stdio.h>
int main() {
	int a,i;
	printf("enter the number : ");
	scanf("%d", &a);
	
	for ( i = 2; i < a; i++) {
		if (a % i == 0) {
			printf("%d is not prime number", a);
			break;
		}
	}
	if(a==i)
	printf("%d is prime number", a);

}
 
 
 
#include <stdio.h>
int main() {
	char str[100];
	printf("enter the sentence : ");
	gets_s(str, sizeof(str));

	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j <= i; j++) {
			printf("%c", str[j]);
		
		}
		printf("\n");
	}
}



#include <stdio.h>
int main() {
	for (int i = 0; i < 11; i++) {
		for (int j = i;j<11; j++) {
			printf(" ");
		}
	
		for (int j = 0; j <=i; j++) {
			printf("*");
		}
		printf("\n");
	}
}



#include <stdio.h>
int main() {

		for (int i= 0; i < 11; i++)
		{
			for (int j = 0; j < 11 - i; j++)
			{
				printf(" ");
			}

				for (int j = 0; j < i * 2 + 1; j++)
			{
				printf("*");
			}
	
			printf("\n");
		}
}



#include <stdio.h> 
int main() {
	int x, y;
	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 10; y++) {
			if (3 * x + 2 * y == 10) {
				printf("x=%d, y=%d 일때 만족\n", x, y);
			}
		}
	}
}



#include <stdio.h>
int main() {
	int num = 5;
	if (num == 1)goto one;
	else if (num == 2) goto two;
	else goto finish;

one: printf("1");
	goto finish;
two: printf("2");
	goto finish;
finish: printf("finish");
}