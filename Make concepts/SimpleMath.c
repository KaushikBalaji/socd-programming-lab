#include "headers.h"

int SimpleMath(int a, int b, int choice){

	switch(choice){
		case 1:
			printf("Inside Add function\n");
			return Add(a, b);
		case 2:
			return Sub(a, b);
		case 3:
			return Mul(a, b);
		case 4:
			return Div(a, b);
		
	}

}
