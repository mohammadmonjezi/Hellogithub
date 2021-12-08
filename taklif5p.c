#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Name_Size 200
#define Parts_Size 100

int Parts_Number = 0;

struct part {

    int partnumber;
    char name[Name_Size];
    int QOH;

}parts[Parts_Size];

void insert();
int search();
void pinfo();
void update();
void printallinformation();
int main()
{
    char operationcode;
    char d;

while (1)
{
    
   printf("Press i for insert new item\nPress s for search\nPress u for update\nPress p for print all information\n");

  fgets()("%c" , &operationcode);
  //operationcode = getch();
    printf("\n this is the fuck - > %c \n" , operationcode);
    if(operationcode =='i'){
    
        insert();
       
    }
    else if(operationcode == 's'){
      
        pinfo();
    }
    else if (operationcode == 'u'){
        
        update();
    }
    else if(operationcode == 'p'){
       
        printallinformation();
    }
}
}
void insert(){
    
    printf("Enter Number : ");
    scanf("%d" , &parts[Parts_Number].partnumber);
    printf("Enter Part Name : ");
    scanf("%s" , &parts[Parts_Number].name);
    printf("Enter Quantity on Hand : ");
    scanf("%d" , &parts[Parts_Number].QOH);
    printf("Done\n");
    Parts_Number++;
}
int search(){

 int partnumber;
    printf("Enter Part Number : ");
   
    scanf("%d" , &partnumber);
    
    for(int i = 0 ; i <= Parts_Number ; i++){

        if(parts[i].partnumber == partnumber){
            
           return i;
        }
    }
    return -1;
}
void pinfo(){
int index = search();
    if(index!=-1){
            printf("Part Name : %s\n" , parts[index].name);
            printf("Part QOH : %d\n" , parts[index].QOH);
            return;
    }
    printf("Not found!\n");
}
void update(){
int index = search();

if(index!=-1){

    printf("Enter new QOH : ");
    scanf("%d" , &parts[index].QOH);
    printf("Done\n");
    return;
}
printf("Not Found!\n");
return;
}

void printallinformation(){

    printf("Part Number    Part Name                  Quantity on Hand\n");
    
    for(int i = 0 ; i < Parts_Number ; i++){
        printf("%d" , parts[i].partnumber);
        printf("        %s" , parts[i].name);
        printf("                 %d\n" , parts[i].QOH);
    }
}


