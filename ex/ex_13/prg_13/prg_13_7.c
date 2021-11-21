#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 255
#define MAXLENSTR 4096

char * s_gets(char * str, FILE *fp, int len);

int main(void)
{
	char file1[MAXLEN];
	char file2[MAXLEN];
	char fstr1[MAXLENSTR];
	char fstr2[MAXLENSTR];
	char *pstr1;
	char *pstr2;
	
	//char ch1, ch2;
	
	FILE *fp1, *fp2;

	printf("Enter first file name: ");
	scanf("%s", file1);
	
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open file %s\n", file1);
		exit(EXIT_FAILURE);
	}
	
	printf("Enter second file name: ");
	scanf("%s", file2);
	
	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "Can't open file %s\n", file2);
		exit(EXIT_FAILURE);
	}
	
	pstr1 = s_gets(fstr1, fp1, MAXLENSTR);
	pstr2 = s_gets(fstr2, fp2, MAXLENSTR);
	
	while (pstr1 || pstr2)
	{
		if (pstr1)
		{	
			printf("%s", pstr1);
			pstr1 = s_gets(fstr1, fp1, MAXLENSTR);
		}
		if (pstr2)
		{
			printf("%s", pstr2);
			pstr2 = s_gets(fstr2, fp2, MAXLENSTR);
		}
	}
	
	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error closing files.\n");
		
	return 0;
}

char * s_gets(char * str, FILE *fp, int len)
{
        return fgets(str, len, fp);
}
