#include <stdio.h>
#include <string.h>

void encode_msg();
void decode_msg();

int main(){
	
	int i, j, k, n, m, choice;
	char str[80], reverse[80], decoded[80];
	
    do{
		printf("MENU\n");
		printf("1. Encode Message\n2.Decode message\n3.Exit\n.enter your choice\n");
		scanf(" %d", &choice);
		
	switch (choice){
	
        case 1: //encode
	        encode_msg();
	        break;
	
       case 2: //decode
            decode_msg();
            break;
	    
	    case 3:
	    	return 0;
	        break;
	        
	    default: printf("Invalid");
	    
        }
    }while(choice!=3);
	
	return 0;
}

    void encode_msg(){
    	char str[80], reverse[80];
        int i, j, m;
        
    	printf("\nEnter the message:\n");
	    scanf(" %[^\n]", str);
	
	    //reversal:
	    j = 0;
	    for (i= (strlen(str)-1) ; i>=0 ; i--){
	        reverse[j] = str[i];
	        j++;
	    }
	    reverse[j] = '\0';
	    printf("\n\n");
	    
		//bit toggling:
	    
		printf("Encoded message: ");
	    for(m=0 ; reverse[m] != '\0' ; m++){
		    reverse[m] = reverse[m] ^ 18;
		    printf("%c", reverse[m]);
	    }
	    printf("\n\n");
    	
	}
	
	
	void decode_msg(){
		char decoded[80], reverse[80], str[80];
		int i,m,k;
		
		printf("\nEnter the encoded message:\n");
        scanf(" %[^\n]", str);
            
        //untoggle    
        for(m=0 ; str[m] != '\0' ; m++){
		    reverse[m] = str[m] ^ 18;
	    }
	    reverse[m] = '\0';
	    
	    //reverse:
	    k = 0;
	    for (i=(strlen(reverse)-1) ; i>=0 ; i--){
	        decoded[k] = reverse[i];
	        k++;
	    }
	    decoded[k] ='\0';
	    printf("\nDecoded-Message: %s\n", decoded);	
	}
