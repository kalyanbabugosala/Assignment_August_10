#include<stdio.h>
/*typedef int *ptr;
ptr p1, p2;// these are pointers
*/

/*typedef int *intp;
void main()
{
const intp P;//wild pointer
printf("%d",p);
}*/

/*#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];//array pointer with size 3
    arrfptr x;
    printf("%c",x);
    return 0;
}*/
/*#include<stdio.h>
void main()
{
	int i=10,j=20;
	const int *ptr=&i;
	printf("%d",ptr);//pointer to constant
	//*ptr=100;//error
	ptr=&j;
	printf("%d",ptr);
}*/
//typedef int (*apfArithmatics[3])(int,int);//integer pointer 
//typedef int (*pf)(int);//pointer to the function

/*typedef char *pc;//pinter to char type
typedef pc fpc();//fpe() is function with return type char pointer 
typedef fpc *pfpc;//pointer to the fpc()
typedef pfpc fpfpc();//fpfpc() is function with pointer return type
typedef fpfpc *pfpfpc;//pointer to above function
pfpfpc a[N];//Array of pointers of size N


