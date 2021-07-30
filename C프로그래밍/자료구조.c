/////////////////////////////////////////////////////////////////////////순차탐색
#include <stdio.h>
int main() {
	int a[] = { 3,5,1,7,49,26,8,11,90,99 };
	int n;
	scanf("%d", &n);

	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		if (n == a[i]) {
			printf("%d방에서 숫자를 찾았습니다.", i);
			return 0;
		}
	}
	
	printf("찾지 못했습니다.");

}




///////////////////////////////////////////////////////////////////////////이분탐색
#include <stdio.h>
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
	int mid, left = 0, right = sizeof(a) / sizeof(int);

	scanf("%d", &n);

	while (left<=right){

		mid = (left + right) / 2;


		if (n == a[mid]) {
			printf("값을 %d방에서 찾았습니다.", mid);
			break;
		}
		else if (n > a[mid]) {
			left = mid + 1;
		}
		else if (n < a[mid]) {
			right = mid - 1;
		}
		
	}
	if (left > right) {
		printf("값을 찾지 못했습니다.");
	}
		

}





//////////////////////////////////////////////////////////selection sort
#include <stdio.h>
void sel_sort(int* a, int len);
void merge_sort(int* a, int* a1, int len);
int main() {
	int a[] = { 8,9,3,7,6 };
	int a1[] = { 1,2,4,0,5 };
	int len = sizeof(a) / sizeof(int);
	//sel_sort(a,len);
	merge_sort(a, a1, len);

}
void sel_sort(int *a,int len) {
	int min, b = 0, temp;

	for (int i = 0; i < len; i++) {
		min = 9999;

		for (int j = i + 1; j < len; j++) {
			if (min > a[j]) {
				min = a[j];
				b = j;
			}
		}
		if (a[i] > a[b]) {
			temp = a[i];
			a[i] = a[b];
			a[b] = temp;
		}

		for (int t = 0; t < len; t++) {
			printf("%d\t", a[t]);
		}
		printf("\n");
	}
}
void merge_sort(int* a, int* a1, int len) {
	int arr[10] = { 0, };
	int pos=0, pos1=0,i=0;

	sel_sort(a, len);
	sel_sort(a1, len);
	while (1) {
		if (pos > 4 ) {
			arr[i] = a1[pos1++];
		}
		else if (pos1 > 4) {
			arr[i] = a[pos++];
		}
		else if (a[pos] < a1[pos1]) {
			arr[i] = a[pos++];

		}
		else
			arr[i] = a1[pos1++];
	
		if (sizeof(arr) / sizeof(int) <= i) {
			break;
		}
		
		i++;
		
	}


	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	
}



////////////////////////////////////////////////////////////////////stack
#include <stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1;
int bottom = 0;

int push(int num) {
	if (IsFull() == 1) {
		printf("stack is Full\n");
	}
	else
		stack[++top] = num;
}

int IsFull() {
	if (top >= MAX_SIZE-1) {
		return 1;
	}
	else
		return 0;
}

int pop() {
	if (IsEmpty() == 1) {
		printf("stack is Empty\n");
	}
	else
		return (stack[top--]);
}

int IsEmpty() {
	if (top < 0) {
		return 1;
	}
	else
		return 0;
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);

	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());

	return 0;
}