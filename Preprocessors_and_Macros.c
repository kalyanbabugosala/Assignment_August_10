/*#include<stdio.h>
#define CONDITION(i) printf("preprocessor works\n");                         
int main()
{
	CONDITION(1);//displaying preprocerror works 
	return 0;
}*/
/*#include<stdio.h>
# define loop while(1);
int main()
{
	loop //it will infinite loop
  
		printf("preprocessor-aptitude"); ;
	return 0;
}*/
/*#include<stdio.h>
#define x --5;//macro should not allow increment or decrement values.
int main()
{
	printf("%d",x);
	return 0;
}*/

/*#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     //++x*++x returns 25
	a -= 3;
	printf("%d %d", sqr(a), z);//sqr(a) returns 4*4=16.
	return 0;
}*/

/*#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;//replaced with 1+2*1+2*1+2 ie.1+2+2+2=7
	printf("%d",i);
}*/

/*#include<stdio.h>
#define a =
int main()
{
	int num a 6;//a is replaced with =
	printf("%d",num);
	return 0;
}*/

/*#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));//fun(x,y) is replaced with x*y 
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );//Aug 09 2021
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);//22:06:52
	return 0;
}*/

/*#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );//Line :82
	return 0;
}*/
/*#include<stdio.h>
#define  preprocessor_works(x, y)  printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}*/
/*#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}*/
/*#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)// will givemacro25 = 47
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}*/
/*#include<stdio.h>
#include<string.h>
#define dis(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	//printf("%d",num);//string length is 12
	printf("%s  ", dis(ptr));//it will not display p from the string
	printf("%d", dis(num));//it will return 13.
	return 0;
}*/
/*#include<stdio.h>
#define i 10//it is global declaration
void display()
{
	printf("%d",i);
}
int main()
{
	#define i 20//it is for local
	printf("%d",i);
	display();
	return 0;
}*/
/*#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}*/
/*#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}*/
//Extra question
/*#include <stdio.h>  
#define PI 3.1415 
main() 
{  
   printf("%f",PI);  
} */

/*#include <stdio.h>  
#define MIN(a,b) ((a)<(b)?(a):(b))  
void main() {  
   printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));    
} */ 
/*#include <stdio.h>  
#define PI 3.1415  
//#undef PI  

main() {  
#ifdef PI  
  printf("this is pi");
#endif
   printf("%f",PI);  //error as PI Has undeclared
} */

/*#include<stdio.h>  
#include <math.h>
#ifdef math.h
#error First include then compile  
#else  
void main(){  
    float a;  
    a=sqrt(7);  //2.645751
    printf("%f",a);  
}  
#endif*/

/*#include <stdio.h>  
#include <conio.h>  
#define NUMBER 0
void main() {  
#if NUMBER==0  
printf("Value of Number is: %d",NUMBER);  
#else  
print("Value of Number is non-zero");  
#endif         
  
} */

/*#include<stdio.h>//this is depending on compilers it will not checking #pragma directives  
#include<conio.h>  
  
void func() ;  
  
#pragma startup func  
#pragma exit func  
  
void main(){  
printf("\nI am in main");  
getch();  
}  
  
void func(){  
printf("\nI am in func");  
getch();  
}  
*/






