#include <stdio.h>

int main(){
	char id[25], name[100], kelas;
	int num;
	scanf("%[^\n]\n", id);
	scanf("%[^\n]\n", name);
	scanf("%c %d", &kelas, &num);

	
	printf("Id    : %s\n", id);
	printf("Name  : %s\n", name);
	printf("Class : %c\n", kelas);
	printf("Num   : %d\n", num);
	
	return 0;
}
