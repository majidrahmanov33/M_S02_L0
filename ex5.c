#include <stdio.h>

int length(const char * str){
int i;
for( i = 0 ; str[i] != '\0' ; i++) {
}
return i;
}

void revPrint(const char * str, int len){

for(int i = len ; i > 0 ; i--) {
printf("%c",str[len]);
}
}

int main(){
	char * str = "and this is my code.there may be some problems about counting.but i hope there won't be any";
	int len=length(str);
	printf("%d\n",len);
	revPrint(str,len);
	return 0;
}
