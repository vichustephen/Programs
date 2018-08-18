#include <stdio.h>
#include <string.h>
 int main() {
	int i,j,keylen,mlen;
	char input[100], key[30],temp[30],quo[100],rem[30],key1[30];
	printf("Enter Data: ");
	gets(input);
	printf("Enter Key: ");
	gets(key);
	keylen=strlen(key);
	mlen=strlen(input);
	strcpy(key1,key);
	for (i=0;i<keylen-1;i++) {
		input[mlen+i]='0';
	}
	for (i=0;i<keylen;i++)
	 temp[i]=input[i];
	for (i=0;i<mlen;i++) {
		quo[i]=temp[0];
		if(quo[i]=='0')
		 for (j=0;j<keylen;j++)
		 key[j]='0';
		 else
		 for (j=0;j<keylen;j++)
		 key[j]=key1[j];
		for (j=keylen-1;j>0;j--) {
			if(temp[j]==key[j])
			 rem[j-1]='0'; else
			 rem[j-1]='1';
		}
		rem[keylen-1]=input[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	//printf("\nQuotient is ");
	//for (i=0;i<mlen;i++)
	// printf("%c",quo[i]);
	printf("\nRemainder is ");
	for (i=0;i<keylen-1;i++)
	 printf("%c",rem[i]);
	printf("\nFinal data is: ");
	for (i=0;i<mlen;i++)
	 printf("%c",input[i]);
	for (i=0;i<keylen-1;i++)
	 printf("%c",rem[i]);
}
