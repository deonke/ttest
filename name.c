#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void write_file() {
	FILE* fp = fopen("test.txt", "w");
	char str[] = "Hello World!";

	fputs(str, fp);

	fclose(fp);
}

void read_file() {
	FILE* fp = fopen("test.txt", "r");
	char str[100];

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	
	fclose(fp);
}
int main() {
	write_file();
	read_file();
}
