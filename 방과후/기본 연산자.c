#include <stdio.h>
int main() {
	int a = 1, b = 2, c = 3;
	a += b;
	b += c;
	c++; c++;

	printf("%d\n%d\n%d", a, b, c);
}
 

 
#include <stdio.h>
int main() {
	int a = 2, b = 4;
	double c = 1.6;
	b = b + a;
	double d = b / c;
	c = d++ + c;
	printf("%d %d %f %f", a, b, c, d);
}



#include <stdio.h>
int main() {
	int a = 2, b = 5;
	printf("%d\n", ++a);
	a++; b++;
	printf("%d\n", ++a);
	b += a;
	printf("%d\n", b);
}


#include <stdio.h>
int main() {
	int a = 1, b = 2, c = 3;
	a += b++ + c;
	b += ++b + c;
	c += c++ + ++c;
	printf("%d\n%d\n%d", a, b, c);
}



#include <stdio.h>
int main() {
	int a = 1;
	printf("%d\n",a++);
	printf("%d\n", a + (++a));
	printf("%d\n",a++ + ++a * a);
}



#include <stdio.h>
int main() {
	int a = 1;
	int b = a * a + 9;
	int c = a * a + 6;

	printf("%d\n", b + c);
}



#include <stdio.h>
int main() {
	int a = 1, b = 2;
	a += b += 3;
	printf("%d %d\n", a, b);

	a *= a++ - a++ * b;
	printf("%d\n", a + b);
}