#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	int i;
	printf("���� :%s\n", src);
	for(i=0; src[i]!= NULL; i++)
	    dst[i] = src[i];
	dst[i] = NULL;
	
	printf("���纻 : %s", dst);
	
	return 0;
}
