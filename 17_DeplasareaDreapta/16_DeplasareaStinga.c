#include <stdio.h>
#include <limits.h>

void main(){
	FILE *f;
	f = fopen("input.txt", "r");
	
	int n, i, t, a[1000] = {0};
	
	fscanf(f, "%d", &n);
	
	for(i = n; i < n * 2; i++)
		fscanf(f, "%d", &a[i]);
		
	for(i = 0; i < n; i++){
		a[i] = a[n + (n - 1 + i) % n];
		printf("%d ", a[i]);
	}
}
