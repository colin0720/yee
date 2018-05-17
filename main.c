#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ID,Sum; 
int main(int argc, char *argv[]) {
	for(ID=0;ID<10;ID++){
		Sum=Sum+ID; 
	}
	printf("Sum=%d",Sum); 
		return 0;
}
