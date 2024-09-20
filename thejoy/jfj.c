#include<stdio.h>
int main()
{
	
int i=0;	
int sam = 90;
char ap[10] = "hello";
int *p;
int *p1;
p = &sam; 							//dereferencing//

p1 = &ap;
printf("%p\n",&sam);
printf("%d\n",sam);
printf("%p\n",p);
printf("%d\n",*p);

printf("%p\n",ap);
printf("%p\n",&ap);
printf("%p\n",p1);
printf("%p\n",*p1);
printf("%c\n",*(p1));
 /*printf("%c\n",*(p1+1));
printf("%c\n",*(p1+2));
printf("%c\n",*(p1+3));
*/printf();
for(i=0;ap[i]!='\0';i++)
{
	printf(" %c",*(ap+i));			//array pointers//
}

return 0;
}

