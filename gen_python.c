#include <stdio.h>

int main() {
	FILE *fp = fopen("is_even.py", "w");

	fprintf(fp, "def is_even(n):\n");
	fprintf(fp, "\tif n == 0:\n");
	fprintf(fp, "\t\treturn True\n");

	for (int i = 1; i < __INT_MAX__; i += 2) {
		fprintf(fp, "\telif n == %d:\n", i);
		fprintf(fp, "\t\treturn False\n");
		fprintf(fp, "\telif n == %d:\n", i + 1);
		fprintf(fp, "\t\treturn True\n");
	}

	fprintf(fp, "\telse:\n");
	fprintf(fp, "\t\traise Exception(\"Not implemented\")\n");

	fclose(fp);
}