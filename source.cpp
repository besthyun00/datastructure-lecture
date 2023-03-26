#include <stdio.h>

int findarraymax(int score[], int n) {
	int tmp = score[0];
	for (int i = 1;i < n;i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

int main(void)
{
	int score[5] = { 12,123,12,24,43 };
	int out;
	out = findarraymax(score, 5);
	printf("result=%d", out);

	return 0;
}