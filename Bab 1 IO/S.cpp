#include <stdio.h>

int main(){
	char x[150];
	scanf("%[^\n]", x);
	getchar();
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%%s\\n\",\"%s\");\n", x);
	printf("    return 0;\n");
	printf("}\n");
	return 0;
}
