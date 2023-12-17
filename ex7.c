#include <stdio.h>
#include <stdlib.h>

short int classifyGrades(char * originalFileName, 
					char * aFileName, 
					char * bFileName, 
					char * cFileName,
					FILE * aFile,
					FILE * bFile,
					FILE * cFile){
	aFile=fopen("A.txt","w");
	
	
	return 0;
}

short int readClassifiedGrades(char * aFileName, 
							char * bFileName, 
							char * cFileName,
							FILE * aFile,
							FILE * bFile,
							FILE * cFile){
	//TODO //fill this function
	//it should read and print A.txt, B.txt and C.txt
	
	return 0;
}

int main(){
	char * originalFileName = "grades.txt";
	char * aFileName = "A.txt",* bFileName = "B.txt",* cFileName = "C.txt";
	FILE * aFile, * bFile, * cFile;
	
	short int res = classifyGrades(originalFileName, aFileName, bFileName, cFileName, aFile, bFile, cFile);
	if(res!=0){
		puts("An error occured in the file processing...");
	}
	
	short int res2 = readClassifiedGrades(aFileName, bFileName, cFileName, aFile, bFile, cFile);
	if(res2!=0){
		puts("An error occured in the file processing...");
	}
	
	return 0;
}
