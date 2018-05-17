#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ID,Sum;/*變數宣告*/ 
int main(int argc, char *argv[]) {
	for(ID=0;ID<10;ID++)/*從0加到9*/
	{
		Sum=Sum+ID;/*和*/ 
	}
	printf("Sum=%d",Sum);/*印出和*/ 
		return 0;
}
