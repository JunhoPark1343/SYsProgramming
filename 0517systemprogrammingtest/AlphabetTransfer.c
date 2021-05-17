#include <stdio.h>
#include <stdlib.h>
int main(){

	char ch = 0;
	
	while(1){
	scanf(" %c", &ch);
	
	if(ch=='0')break;
	if(ch>=65&&ch<=90){
	printf("입력한 %c의 소문자는 %c입니다\n",ch,ch+32);
	}
	if(ch>=97&&ch<=122){
	printf("입력한 %c의 대문자는 %c입니다\n",ch,ch-32);
	}
	}
	exit(0);
}

