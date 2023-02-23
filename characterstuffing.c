//code
#include <stdio.h>
#include <string.h>
int main(){
char s[100];
char c[100];
char temp[10];
char st,end;

printf("Enter characters to be stuffed:");
 scanf("%s", s);
        printf("\nEnter a character that represents starting delimiter:");
        scanf(" %c", &st);
        printf("\nEnter a character that represents ending delimiter:");
        scanf(" %c", &end);

c[0]=st;
int j=1;
for (int i=0;i<strlen(s);i++){
if (s[i]==st || s[i]==end){
c[j]=s[i];
c[j+1]=s[i];
j=j+2;}
else{
c[j]=s[i];
j++;}
}
c[j]=end;
printf("%s",c);
    return 0;
}

/*output:
21VV1A0559@admincse-610-1110in:~$ nano characterstuffing.c
21VV1A0559@admincse-610-1110in:~$ gcc characterstuffing.c
21VV1A0559@admincse-610-1110in:~$ ./a.out
Enter characters to be stuffed:helloworld

Enter a character that represents starting delimiter:o

Enter a character that represents ending delimiter:d
ohelloowoorlddd*/
