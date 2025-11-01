
#include<stdio.h>
#include<string.h>

// information of books - global
int isbns[100] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112};
char titles[100][50] = {"little-women", "oliver-twist", "silent-patient", "harry-potter",
                        "lost-key", "matilda", "never-lie", "wimpy-kid",
                        "lord-of-rings", "alchemist", "atomic-habits", "the-maidens"};
float prices[100] = {5000, 690, 3000, 700, 1200, 1500, 2100, 2300, 4500, 900, 380, 1500};
int quantities[100] = {8, 9, 6, 4, 9, 1, 3, 5, 2, 7, 10, 7};

int totalbooks = 12;


void purchase(){
    int sale , n;
        printf("enter isbn of book you want to purchase:");
        scanf("%d" , &sale);
        
        
        for (int i =0 ; i<totalbooks ; i++){
             if (quantities[i] > 0) {
                quantities[i]--;
             }
                else{
                    printf("out of stock");
                }
        
        }
        
        
         for(int i=0 ; i<totalbooks; i++){
       printf("\nBook#%d" , i +1 );
        printf(" isbn:%d", isbns[i]); 
        printf("  title:%s" , titles[i]);
        printf("   price:%.2f" , prices[i]);
        printf("   quantity:%d\n" , quantities[i]);
         }    
}

void addnew(){
     int isbn;
        printf("enter details of new book (isbn):");
        scanf("%d", &isbn);
        
        
        for (int i =0 ; i<12 ; i++){
            if (isbns[i] == isbn){
                printf("already exist");
            }
            
        }
isbns[totalbooks] = isbn;
        printf("enter details of new book (title):");
        scanf("%s", titles[totalbooks]);
        printf("enter details of new book (price):");
        scanf("%f", &prices[totalbooks]);
        printf("enter details of new book (quantity):");
        scanf("%d", &quantities[totalbooks]);
        
         for(int i=0 ; i<14; i++){
       printf("\nBook#%d" , i +1 );
        
        printf(" isbn:%d", isbns[i]); 
        printf("  title:%s" , titles[i]);
        printf("   price:%.2f" , prices[i]);
        printf("   quantity:%d\n" , quantities[i]);
         }    

}

void lowstock(){
     for (int i = 0 ; i<totalbooks ; i++){
            if(quantities[i]<5){
               printf(" isbn:%d", isbns[i]); 
        printf("  title:%s" , titles[i]);
        printf("   price:%.2f" , prices[i]);
        printf("   quantity:%d\n" , quantities[i]);
         }    
            }
        }

int main() {
    int menu;
    printf("menu :\n1.add new book \n2.process a sale \n3.Generate Low-stock report\n");
    scanf("%d", &menu);

    switch(menu){
        
        case 1:
        addnew();
        break;
        
        case 2:
        purchase();
        break;
        
        case 3:
        lowstock();
        break;
    
        default:
        printf("error");

}
}

