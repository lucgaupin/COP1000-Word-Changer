//**********************************************
//** Created By: Luc Gaupin	
//** Date......: 18th Nov. 2018
//** Reason....: playingwithletters assignment
//**********************************************

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define CLS system("CLS")
#define PAUSE system("pause")
#define _CRT_SECURE_NO_WARNINGS
#define FLUSH myFlush()

//===================== PROTOTYPE FUNCTION HERE ====================

void displayWord(char myWord[], int eSize);
void displayWordBackwards(char myWord[], int eSize);
void displayVerically(char myWord[], int eSize);
void displayVerticallyUpsideDown(char myWord[], int eSize);

//===================== MAIN() GOES HERE ====================

main()
{
	char myWord[1000] = {' '};
	int eSize = 0;

	printf("Enter A Word: ");
	gets(myWord);
	
	printf("\n");
	printf("The Word Is: ");
	displayWord(myWord, eSize);
	printf("\n");
	printf("The Word Backwards Is: ");
	displayWordBackwards(myWord, eSize);
	printf("\n\n");
	printf("The Word Vertical Is: ");
	displayVerically(myWord, eSize);
	printf("\n");
	printf("The Word Vertical Upside Down Is: ");
	displayVerticallyUpsideDown(myWord, eSize);
}

//===================== FUNCTION'S GO HERE ====================

void displayWord(char myWord[], int eSize)
{
	printf("\n");
	puts(myWord);
}// End displayWord()

void displayWordBackwards(char myWord[], int eSize)
{
	char end;
	char i;
	end = strlen(myWord) - 1;
	printf("\n");
	for (i = end; i >= 0; --i)
	{
		printf("%c", myWord[i]);
	}
}

void displayVerically(char myWord[], int eSize)
{
	printf("\n");
	for (int i = 0; i < strlen(myWord); i++)
	{
		printf("%c\n", myWord[i]);
	}
}// end displayVertically()

void displayVerticallyUpsideDown(char myWord[], int eSize)
{
	char end;
	char i;
	end = strlen(myWord) - 1;
	printf("\n");
	for (i = end; i >= eSize; --i)
	{
		printf("%c\n", myWord[i]);
	}
	PAUSE;
}

//============== myFlush() Goes Here ==============
void myFlush()
{
	while (getchar() != '\n');
}
