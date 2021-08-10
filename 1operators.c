#include<stdio.h>
int main()
{
	//printf("%d\n",1==5==5);
	//int i =10;
   
    //printf("%d %d",i,i++);//from right to left evaluating the values when two or more increments are done in singel stmt.

	//int x=5;
    //printf("%d %d %d\n",x++,x++,x++);

    //int x=2;
    //printf("%d",++x++);//it is giving the error
    //printf("%d\n",x++);

	//int k=1;
    //printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");

	//int i=5;
    //i=i++ - --i + ++i;
	//printf("%d",i);

	//int a=7;
    //a+=a+=a-=6;//a=7-6,a=1+1,a=2+2 returns a=4
    //printf("%d\n",a);

    //int x=10,y=5,p,q;
    //p=x>9;//return 1
    //q=p||(x=5,y=10);//retrun 1
    //printf("%d %d %d\n",q,x,y);

    //int x=2,y=1;
    //y+=x<<=2;//<< operator will leftshift the value by x*2^2.
    //printf("%d %d\n",x,y);

    //int x=2,y=4,z;
    //z=y++*x++|y--;
    //printf("%d \n",y++*x++|y--);//4*2|5

    //int a=5,b=6,c=7,d;
    //d=a&=b&=c&&a;//c&&a then perform 1 & 6 then perform 0&5 result is 0
    //printf("%d\n",d);//returns 0

    //int i=10;
    //i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    //printf("%d\n",i);// 4 will be the output

    //int a=10,b=20;
    //a=(a>5||b==6?40:50);
    //printf("%d\n",a);//it will give 40
	
	//printf("%x\n",-1>>4);//ffffffff
    //printf("%x\n",-1<<4);//fffffff0

	//int x=7;
    //x=(x<<=x%2);//x=x<<x%2   here 7%2=1 so x=x<<1 is x=14
    //printf("%d\n",x);

	//int a=2,b=5,c=1;
    //printf("%d\n",(b>=a>=c?1:0));//5>=2>=1 it is true so 1 will displayed.

	//int a=5;
    //a=a-~a+1;//~a returns -6 after a-(-6)=a+6 resulting 11+1 and finally 12 will displayed.
    //printf("%d\n",a);

	/*int a,b,c,x;
	a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);//this will return 0*/

    /*int a=10;
    int b = -5;
    int c = 2.5;
    printf("%d %d",sizeof(++b*c)+sizeof(a),b);*/

    /*int i=5;
    i=i++ - i;//5-6 will give -1
    printf("%d",i);*/






	

	return 0;
}
