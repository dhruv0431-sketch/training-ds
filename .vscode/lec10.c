#include<stdio.h> 
#include<string.h>
 
//   int main(){ 
//      char name[ ] = " hii"; 
//      int i=0; 

 

//   while (name[i]  != '\0') { 
//       printf("%c\n", name[i]);  
//         i++; 
//   }

//   }
   
// int main(){  
//     char name[] = " hii"; 
//     char data[10];
     

//     for( int i=0;name[i]!='\0';i++){ 
//         printf("%c", name[i]); 
//         data[i]= name[i]; 
//     } 
//     printf("%s",data);

// }  
 
int main(){ 
     
    char name[] =" madam"; 
    int ln= strlen(name); 
    int istrue=1; 
    for( int i=0;i<ln/2;i++){ 
        if(name[i] !=name[ln-i-1]){ 
            istrue=0; 
            break;
        }
    }   
    printf("%s", name); 

    }
   
