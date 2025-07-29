 // enter address (house no. , block, city , state) of 5 people
 // means making structures for 5 people , so we will also use array
 # include<stdio.h>

 struct address{
int house_number;
int block_number;
char city[100];
char state[100];
 };

 void printaddress(struct address person){
    printf("address is %d, %d, %s, %s\n",person.house_number,person.block_number,person.city,person.state);
 }
 int main(){
    struct address person[100];
    printf("enter address for first person\n");
    scanf("%d",&person[0].house_number);
    scanf("%d",&person[0].block_number);
    scanf("%s",person[0].city);
    scanf("%s",person[0].state);

    printf("enter address for second person\n");
    scanf("%d",&person[1].house_number);
    scanf("%d",&person[1].block_number);
    scanf("%s",person[1].city);
    scanf("%s",person[1].state);

    printf("enter address for third person\n");
    scanf("%d",&person[2].house_number);
    scanf("%d",&person[2].block_number);
    scanf("%s",person[2].city);
    scanf("%s",person[2].state);

    printf("enter address for forth person\n");
    scanf("%d",&person[3].house_number);
    scanf("%d",&person[3].block_number);
    scanf("%s",person[3].city);
    scanf("%s",person[3].state);

    printf("enter address for fifth person\n");
    scanf("%d",&person[4].house_number);
    scanf("%d",&person[4].block_number);
    scanf("%s",person[4].city);
    scanf("%s",person[4].state);

    printaddress(person[0]);
    printaddress(person[1]);
    printaddress(person[2]);
    printaddress(person[3]);
    printaddress(person[4]);
 }

 
 
