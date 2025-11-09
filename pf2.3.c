#include <stdio.h>
int dec , bin = 0 ,fn ;
int arr[2][2] = {{1,3} , {2 , 5}};


void grid(){
		printf("grid:\n");
	for (int i =0 ; i<2 ; i++){
		for(int j =0 ; j<2 ; j++){
			printf("%d " , arr[i][j]); 
		}
		printf("\n");
	
	}
}
void update(){
	int posi ,posj , value;
	printf("enter position to be updated:[row][column]:");
	scanf("%d  %d" , &posi , &posj);
	
	printf("enter new value:");
	scanf("%d" , &value);
	for(int i =0 ; i<2 ; i++){
		for (int j =0 ; j<2 ; j++){
			if(arr[i][j] == arr[posi-1][posj-1]){
				arr[i][j] = value;
			}
			printf("%d " , arr[i][j]);
		}
		printf("\n");
	}
	
}
void query(){
	int posi , posj;
	printf("enter position [row][column] for report:");
	scanf("%d %d" , &posi , &posj);
	for(int i =0 ; i<2 ; i++){
		for(int j =0 ; j<2 ; j++){
			if(arr[i][j] == arr[posi -1][posj -1]){
				dec = arr[i][j] ;
int i = 0;
	int bin[32];
	while (dec > 0) {
        bin[i] = dec & 1;
        dec = dec >> 1;         
        i++;
    }
printf("binary number is: ");
for(int j = i -1 ; j>=0 ; j--){
	 printf("%d" , bin[j]);
}
			}
		}
	}
	int value = arr[posi - 1][posj - 1];
	
	int pwr = dec & 1;                                 // Bit 0
    int overload = (dec >> 1) & 1;                       // Bit 1
    int maint = (dec >> 2) & 1;       // bit 2
    
     printf("\nREPORT ");
    printf("Power Status: %s\n", pwr ? "ON" : "OFF");
    printf("Overload Warning: %s\n", overload ? "OVERLOADED" : "NORMAL");
    printf("Maintenance Required: %s\n", maint ? "YES" : "NO");
}

int main(){
int menu;
grid();
	printf("menu:\n 1.update sector status \n 2.query sector status\n");
	scanf("%d" , &menu);
	switch(menu){
	case 1:
	update();
	 break;
	 case 2:
	query();
	
}
}
