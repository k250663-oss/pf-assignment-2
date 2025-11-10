# include <stdio.h>

	//functions declare
	void push (int stack[], int *i, int maxsize);
    void pop (int stack[], int *i);
    void peek (int stack[], int *i);
    void display (int stack[], int *i, int maxsize);
    
    
    void push(int stack[], int *i, int maxsize){
    	if(*i<maxsize){
    		int element;
    		printf("enter number you would like to push:");
    		scanf("%d" , &element);
    		stack[*i] = element;
	        (*i)++;
    	    printf("\nElement (%d) added successfully!\n", element);
		}
		else{
			printf("stack overflowed");
		}
    	
	}
	void pop(int stack [] , int *i){
		
	    if(*i>0){	        
	        (*i)--;
		    printf("\nTop most element removed!\n");
		}
		else{
			printf("Stack Underflow Detected. Stack is empty. \n");			
		}
	}
	
	void peek(int stack [] , int *i){
        if(*i>0){

		    printf("\n\nPeek element is: %d\n", stack[*i-1]);			    
		}
	    else{
			printf("Stack is empty\n");
		}
	}
	
	void display(int stack [] , int *i, int maxsize){
		int j;
		printf("\n\nDisplaying the stack: \n\n");
		for(j=(maxsize-1) ; j>=0 ; j--){
			if(j>((*i)-1)){
			    printf("   | |  \n");
			    printf("   |-|  \n");
			}
		}
	}
    
    
int main(){
	    
	int stack[100];
	int choice;
	int i = 0 ;    
	int maxsize;
	
	printf("enter maxsize:");
	scanf("%d" , &maxsize);
	do{
	
	 printf("\n\n MENU \n");
	    printf("Enter your desired operation option:  \n");
	    printf("1) PUSH: Insert element into stack\n");
	    printf("2) POP: Remove the top element \n");
	    printf("3) PEEK: Display the top element \n");
	    printf("4) DISPLAY: Show all elements \n");
	    printf("5) EXIT\n");
	    scanf("%d", &choice);

	switch(choice){
	    	case 1: 
	    	    push(stack , &i , maxsize);
				break;
				
			case 2: 
			    pop(stack , &i);
				break;
				
			case 3:
				peek(stack, &i);
				break;
			case 4:
				display(stack, &i, maxsize);
				break;
			case 5:
				return 0;
				break;
			default: printf("Invalid option choice entered.");
		}
	}while (choice != 5);
}
