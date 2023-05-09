#include <stdio.h>

int main() {
	int a, b, s;
	a = 1;
	b = 10;
	s = 0;
	while (a <= 5) {
		if (a < b) {
			s = s + (a * b);
		} else {
			s = s - (a * b);
		}
		a++;
		b--;
	}
	printf("%i, %i, %i\n", a, b, s);

	return 0;
}
