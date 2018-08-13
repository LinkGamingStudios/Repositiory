#include <stdio.h>

void decrease() {
	float a,b;
	printf("Enter a,b value: ");
	scanf("%f %f",&a,&b);
	printf("Your number is %f",a-b);
}
void addition(){
	float a,b;
	printf("Enter a,b value: ");
	scanf("%f %f",&a,&b);
	printf("Your number is %f",a+b);
}
void help() {
	
	printf("h-command list\nq - close aplication\nc - calculator menu");
}
void division() {
    float a,b;
	printf("Enter a,b value: ");
	scanf("%f %f",&a,&b);
	printf("Your number is %f\n",a/b);	
}

void multiplication() {
	float a,b;
	printf("Enter a,b value: ");
	scanf("%f %f",&a,&b);
	printf("Your number is %f",a*b);
}
void calc1() {
	printf("*-multiplication,/- division,+ - addition,- = decrease\n");
	char input = 0;
	while(2) {
		if(scanf("%c",&input) == 1) {
			if(input == '*'){
				multiplication();
			} if (input == '/') {
				division();
			} if (input== '+') {
				addition();
			} if (input == '-'){
				decrease();
			} else if(input == 'q'){
				break;
			} else if(input != '\n') {
				printf("Unknown command '%c'! Ignoring...\n",input);
		}
			
			 if(input == 'r'){
				main();
			}
		}
	}
}	

int main(int argc, char** argv) {
	char input = 0;

	printf("Hello! This is a console application.\n");
	printf("Press h to help, press q to close aplication.\n");
	while(1) {
		if(scanf("%c",&input) == 1) {
			if(input == 'h') {
				help();
			} else if(input == 'q') {
				return 0;
			} if (input == 'c') {
			    calc1();
			} else if(input != '\n') {
				printf("Unknown command '%c'! Ignoring...\n",input);
			}
		} else {
			printf("Invalid input! Ignoring...\n");
		}
	}

	return 0;
}
