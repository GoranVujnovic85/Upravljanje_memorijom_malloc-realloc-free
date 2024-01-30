/*
 ============================================================================
 Name        : Upravljanje_memorijom_malloc_calloc_free.c
 Author      : Goran Vujnovic
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	int brojSlova;
	char* ime;

	printf("Koliko slova ima vase ime? ");
	fflush(stdout);
	scanf("%d", &brojSlova);


	ime = malloc(sizeof(char) * brojSlova);

	printf("Kako se zovete? ");
	fflush(stdout);
	scanf("%s", ime);


	ime = realloc(ime, sizeof(char) * (brojSlova + 20));

	strcat(ime, " uci programiranje!");

	printf("\n");
	printf("%s\n", ime);
	fflush(stdout);

	free(ime);

	return 0;
}
