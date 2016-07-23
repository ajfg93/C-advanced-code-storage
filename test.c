#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int cnt = 0;
	void *p = 0;
	while((p = malloc(100*1024*1024))){
		cnt++;
	}
	printf("allocated %d00MB memory\n",cnt);
}