/////////////////////////////////////////////////////////////////////////순차탐색
//#include <stdio.h>
//int main() {
//	int a[] = { 3,5,1,7,49,26,8,11,90,99 };
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
//		if (n == a[i]) {
//			printf("%d방에서 숫자를 찾았습니다.", i);
//			return 0;
//		}
//	}
//	
//	printf("찾지 못했습니다.");
//
//}




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