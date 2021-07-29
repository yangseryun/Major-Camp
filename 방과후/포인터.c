#include <stdio.h>
void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int x=10,y=100,temp;

	printf("x=%d, y=%d\n",x,y);
	
	swap(&x, &y);

	printf("x=%d, y=%d",x,y);
	
}




#include <stdio.h>
int main() {
	int *num;
	int sue = 6;
	num = &sue;
	printf("%p %d\n", num, *num);
	printf("%d %p", sue, &sue);

}



#include <stdio.h>
int main() {
	int a[] = { 1,2,3,4 };
	printf("*a = %u\n", *a);
	printf("*(a+1) = %u\n", *(a + 1));
	printf("*(a+2) = %u\n", *(a + 2));

	return 0;
}



#include <stdio.h>
int main() {
	int count = 0;
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	count = even(ptr);

	printf("%d", count);
}
int even(int* ptr) {
	int count = 0;

	for (int i = 0; i < 5; i++) {
		if (ptr[i] % 2 == 0) {
			count += ptr[i];
		}
	}
	return count;
}



#include <stdio.h>
int main() {
	
	char* str = "BITCODING";

	printf("%s\n", str);
	printf("%c %c\n", *str, str[0]);
	printf("%c %c\n", *(str + 1), str[1]);
}



#include <stdio.h>
int main() {
	int x = 10;
	int* intptr = &x;

	*intptr = 100;
	printf("%d", *intptr + x);
}


#include <stdio.h>
int main() {
	char* str = "ACEGI";
	printf("%s\n", str);
	printf("%c\n", *str);
	printf("%c\n", *str+1);
	printf("%c\n", *(str+3));
}