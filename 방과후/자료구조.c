/////////////////////////////////////////////////////////////////////////����Ž��
//#include <stdio.h>
//int main() {
//	int a[] = { 3,5,1,7,49,26,8,11,90,99 };
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
//		if (n == a[i]) {
//			printf("%d�濡�� ���ڸ� ã�ҽ��ϴ�.", i);
//			return 0;
//		}
//	}
//	
//	printf("ã�� ���߽��ϴ�.");
//
//}




///////////////////////////////////////////////////////////////////////////�̺�Ž��
#include <stdio.h>
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
	int mid, left = 0, right = sizeof(a) / sizeof(int);

	scanf("%d", &n);

	while (left<=right){

		mid = (left + right) / 2;


		if (n == a[mid]) {
			printf("���� %d�濡�� ã�ҽ��ϴ�.", mid);
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
		printf("���� ã�� ���߽��ϴ�.");
	}
		

}