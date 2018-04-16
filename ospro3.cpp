#include<stdio.h>
#include<conio.h>
int main()
{
	float pnmt;          //time to service a page fault(replaced page is not modified).
	float pmt;           //time to service a page fault(replaced page is modified).
	float mat;           //memory access time.
	float mper;          //percentage of time taken to modify a replaced page.
	float nmper;         //percentage of time left from modification of replaced page.
	float time;          //maximum acceptable page-fault rate.
	float mpfr;          //which page-fault rate access time is not more than the given time.
	
	printf("\nTo find maximum page-fault rate enter the values of the following:-\n");
	printf("\nEnter the time to service a page fault\n \nIf replaced page is not modified (milliseconds) :\n");
	scanf("%f",&pnmt);
	printf("\nIf replaced page is modified (milliseconds) :\n");
	scanf("%f",&pmt);
	printf("\nEnter the memory access time (nanoseconds) :\n");
	scanf("%f",&mat);
	printf("\nEnter the modified percent :\n");
	scanf("%f",&mper);
	printf("\nEnter the not modified percent :\n");
	scanf("%f",&nmper);
	printf("\nEnter the time for which page-fault rate access time is less than :\n");
	scanf("%f",&time);
	mpfr=((time-mat)/(((mper/100)*(pmt*1000000))+((nmper/100)*(pnmt*1000000))-mat));
	mpfr=mpfr*100;
	printf("\naximum acceptable page-fault rate : %f%%\n",mpfr);
}
