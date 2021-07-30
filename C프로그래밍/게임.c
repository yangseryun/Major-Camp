#include <stdio.h>
int main() {
	int n0 = 0, n1 = 0;
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		if (rand() % 2 == 0) {
			n0++;
		}
		else {
			n1++;
		}
	}printf("앞면 : %d, 뒷면 : %d", n0, n1);

}



#include <stdio.h>
int main() {
	int a,b;
	printf("0 : 가위  1 : 바위  2 : 보\n");
	scanf("%d", &a);

	srand(time(NULL));
	b = rand() % 3;

	printf("%d\n",b);

	if (a == b) {
		printf("비겼습니다.");
	}
	else if (a < b || b == 0 && a == 2){
		printf("졌습니다.");
	}
	else if (a > b || b == 0 && a == 2) {
		printf("이겼습니다.");
	}

}



#include <stdio.h>
int main() {
	int a=0,come=0,count=0;
	

	srand(time(NULL));

	come = rand()%101;

	

	do{
		scanf("%d", &a);
		
		if (come < a) {
			printf("down\n");
		}

		else if(come>a){
		
			printf("up\n");
		}
		count++;

	} while (come != a);

	
		printf("%d번만에 맞췄습니다.", count);

}



#include <stdio.h>
#include <time.h>
#pragma warning (disable : 4996) 
int main() {
	int a[3] = { 0 };
	int b[3] = { 0 };
	int temp, i, j;
	int strike = 0, ball = 0, out = 0;

	srand(time(NULL));

	for (i = 0; i <= 2; i++) {
		temp = rand() % 9 + 1;

		for (j = 0; j < i; j++) {
			if (a[j] == temp) {
				break;
			}

		}
		if (i <= j) {
			a[i] = temp;
		}


	}




	while(1) {
		printf("숫자를 입력하세요 : ");
		scanf("%d %d %d", &b[0], &b[1], &b[2]);
		strike = 0; ball = 0;
		for (j = 0; j <= 2; j++) {
			for (int t = 0; t <= 2; t++) {
				if (a[j] == b[t] && j == t) {
					strike++;
				}
				else if (a[j] == b[t] && j != t) {
					ball++;
				}
			}
		}
		
		if (strike == 3) {
			printf("%d strike\n", strike);
			break;
		}
		if (strike <= 2 && strike > 0) {
			printf("%d strike\n", strike);
		}
		if (ball > 1 && ball <= 3) {
			printf("%d ball\n", ball);
		}
		if (ball==0&&strike==0) {
			printf("3 out\n");
		}


	} 
}