//#include <stdio.h>
//int main() {
//	char str[12] = "strawberry";
//	printf("%s\n", str);
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%c", str[i]);
//	}
//}


//#include <stdio.h>
//int main() {
//	char str[12] = "strawberry";
//	for (int i = 0; i<12; i++) {
//		for (int j = i; j<12; j++) {
//			printf("%c", str[j]);
//		}printf("\n");
//	}
//}



//#include <stdio.h>
//int main() {
//	char* str1 = "BITCODING";
//	char str2[10] = "HELLO";
//	printf("%s %p\n", str1, str2);
//	printf("%s %p", str2, str2);
//}



//#include <stdio.h>
//int main() {
//	char* str1 = "BITCODING";
//	char* str2 = "K";
//	printf("%c %c %s\n", str1[0], str1[4], str1[9]);
//	printf("%c %s", str2[0], str2[1]);
// 
//}



//#include <stdio.h>
//#include <string.h>
//int main() {
//	char str1[] = "BITCODING";
//	char* p = strchr(str1, 'B');
//	printf("%d\n", strlen(str1));
//	printf("%d %d", p - str1, strchr(str1, 'I')-str1);
//
//	char* str2 = "ABCDEFG";
//	char* s = strstr(str2, "CG");
//	printf("%s %d\n", s, s);
//
//	char* t = strstr(str2, "DE");
//	printf("%S %d %d\n", t, t, t - str2);
//}



//#include <stdio.h>
//#include <string.h>
//int main() {
//	char str1[] = "bac";
//	char str2[] = "abc";
//	char str3[] = "bad";
//	char str4[] = "ABC";
//
//	printf("%d\n", strcmp(str1, str2));
//	printf("%d\n", strncmp(str1, str3, 2));
//	printf("%d %d", strcmp(str1, str4), _stricmp(str2, str4));
//}



//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char str1[100] = "melon";
//	char str2[100] = "melody";
//	char str3[100] = "music";
//
//	printf("%d\n", strspn(str1, str2));
//	printf("%s\n", strcat(str2, str3));
//	printf("%s\n", str2);
//	printf("%s %s\n", strcpy(str2, str3), str2);
//}



//#include <stdio.h>
//int main() {
//	char nation[5] = "korea";
//	printf("%s", nation);
//}



//#include <stdio.h>
//int main() {
//	for (int i = 2; i <=9; i++) {
//		for (int j = 1; j  <= 9; j++) {
//			printf("%d x %d = %d\n", i, j, i * j);
//		}
//	}
//}



//#include <stdio.h>
//int main() {
//	int i = 2,j;
//
//	while (i <= 8) {
//		i++;
//		j = 1;
//		while (j <= 9) {
//			printf("%d x %d = %d\n", i, j, i * j);
//			j++;
//		}
//	}
//}




//#include <stdio.h>
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 2; j <= 9; j++) {
//			printf("%d x %d = %d\t", j, i, i * j);
//		}printf("\n");
//	}
//}



#include <stdio.h>
int main() {
	for (int a = 0; a < 3; a++) {
		for (int j = a; j < 3; j++) {
			printf("*");
		}printf("\n");

	}

	for (int i = 1; i < 3; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
}