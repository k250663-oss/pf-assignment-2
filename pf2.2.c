#include <stdio.h>

int stock[4][3] = {{001,50,100} , {002,10,200} , {003,20 ,300} , {004,8,150}};
int prod , qty;
char name[20];  // Global variables for customer info
int cnic; 
int menu;
int total;


void ci(char *name, int *cnic){
    printf("enter name:");
    scanf("%s" ,name);
    printf("enter CNIC:");
    scanf("%d" ,cnic);
}
int inventory(){
   for(int i =0 ; i<4 ; i++){
           printf(" product code:%d , stock:%d , price:%d" , stock[i][0] , stock[i][1] , stock[i][2]);
            printf("\n");
       }
   }
   void uinv(){
   	 for(int i =0 ; i<4 ; i++){
   	 if(stock[i][0] == prod){
          if(stock[i][1] > qty){
              stock[i][1] -= qty;
              printf(" product code:%d , stock:%d , price:%d" , stock[i][0] , stock[i][1] , stock[i][2]);
            printf("\n");
         }
         
		 }
   }
}
void purchase(){
     printf("enter product code you would like to purchase:");
     scanf("%d" , &prod);
     printf("enter quantity you would like to purchase:");
     scanf("%d" , &qty);
     
     for(int i = 0 ; i<4 ; i++){
          if(stock[i][1] > qty){
          
         }
         else{
             printf("not enough stock");
             }
     }
     }
 void totalbill(int *total){
     *total = qty* stock[prod-1][2]; 
     printf("total is :%d\n" , *total);
 }
 void invoice(char *name , int cnic , int total){
 	printf("customer\n name: %s\n" , name);
 	printf("cnic :%d\n" , cnic);
 	printf("product:%d \n quantity:%d\n" , prod , qty);
 	printf("total is :%d\n" , total);
 }
int main() {
	printf("1.customer information \n2.display inventory \n3.add item to cart \n4.update inventory  \n5.display total bill \n6.show invoice\n");
	while(1){
	
   printf("choose :\n");
   scanf("%d" , &menu);
   switch(menu){
       case 1 :
       ci(name , &cnic);
       break ;
       case 2:
       inventory();
       break;
       case 3:
       purchase();
       break;
       case 4:
       	printf("updated inventory");
    	uinv();
    	inventory();
    	break;
       case 5:
    totalbill(&total);
    	break;
       case 6:
       	invoice(name , cnic , total);
      
       break;
       default:
    printf("error");
       
       
   }
}
    return 0;
}

