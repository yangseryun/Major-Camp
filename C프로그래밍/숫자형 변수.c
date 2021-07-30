#include <stdio.h>
int main() {
	int x = 5, y = 10, z;
	z = x + y;
	printf("%d", z);

}




#include <stdio.h>
int main() {
	int A = 2, B = 3;

	printf("%d", 2 * (A + B));
}




#include <stdio.h>
int main() {
	int a = 1, b = 2, c = 3;
	printf("%d\n", a*10);
	printf("%d\n", b * 50);
	printf("%d\n", c * 333+1);
}


#include <stdio.h>
int main() {
	int a = 3, b = 5, c = 7;
	a = b = c;
	printf("%d %d %d", a, b, c);

}



#include <stdio.h>
int main() {
	int a = 3, b = 5, c = 7;
	b = b + 1;
	a = a + b;
	c = c + 1 + a;
	printf("%d %d %d", a, b, c);
}
