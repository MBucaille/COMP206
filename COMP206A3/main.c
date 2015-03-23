#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Please enter the file or path to file that you would like to read in:\n");
	char filename[50]; //this could also be the absolute path to the file (ubiquitous here)
	scanf("%s",filename);
	FILE *fptr;
	fptr=(fopen(filename,"r+"));
	while (fptr==NULL){
		printf("Sorry! The file could not be opened. Please enter the file or path again:\n");
		scanf("%s",filename);
		fptr=(fopen(filename,"r+"));
	}
}