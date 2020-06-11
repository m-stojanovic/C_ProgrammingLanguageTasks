// 3. Pronaći sve delioce broja n. (Svi brojevi od 1 do n/2 s kojima deljenje daje ostatak 0)

#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}
