#include<stdio.h>
#include<string.h>
#include<windows.h>

//This program is about a simple vending machine just about 8 products in it.
    
    //it is the first array and it contains item name.
    char item[][30] = {

        "Tomato" , "Onion" , "Sugar" , "Rice" ,
        "Dhal" , "Wheat" , "Soya" , "Cashew"

    };

    //it is the second array and it contains how much grams.
    int weight_item[] = {

        500 , 500 , 1000 , 1000 ,
        100 , 1000 , 100 , 50

    };

    //it is the price of the above grams and products.

    float price_item[] = {

        20 , 15 , 70 , 500 ,
        121 , 80 , 100 , 75

    };

void market_display(){

    
    int f = 1;

    //this loop helps to display the products with how much grams the price was.
    for(int i = 0; i < 8 ; i++){

        printf("%d.%s  -   %dg -   %.2f\n", f, item[i], weight_item[i], price_item[i]);
        f++;

    }

}

void admin_pass(){
    char id_admin[10];
    int us_pass;

    int num_change;
    int money_change;


    printf("Enter your admin id --->");
    getchar();
    fgets(id_admin,20,stdin);

    if(strcmp(id_admin,"admin@1") == 1){

        printf("Enter the password>>>");
        scanf("%d",&us_pass);

        if(us_pass == 9876){

            printf("Enter the item that you want to change the price>_<");
            scanf("%d", &num_change);

            printf("enter the price you want to change from selected>-<");
            scanf("%d",&money_change);


            price_item[num_change - 1] = money_change;

        }

    }
    else{
        printf("The password you enter was wrong *!*");

    }
  
}

int prod_uct(int num_case,int weight_wa){

    char pro;
    float money = 0;

    if(num_case == 1){

        printf("you selected tomato.\n");
        pro = 't';

    }
    else if(num_case == 2){

        printf("you selected onion.\n");
        pro = 'o';

    }
    else if(num_case == 3){

        printf("you selected sugar.\n");
        pro = 's';
        
    }
    else if(num_case == 4){

        printf("you selected rice.\n");
        pro = 'r';
        
    }
    else if(num_case == 5){

        printf("you selected dhal.\n");
        pro = 'd';
        
    }
    else if(num_case == 6){

        printf("you selected wheat.\n");
        pro = 'w';
        
    }
    else if(num_case == 7){

        printf("you selected soya.\n");
        pro = 'y';
        
    }
    else if(num_case == 8){

        printf("you selected cashew.\n");
        pro = 'c';
        
    }
    else{
        printf("Enter from 1 to 8 number.");

    }

    if(pro == 't'){

        money = 40.0 *(weight_wa/1000.0);

    }
    else if(pro == 'o'){

        money = 30.0 *(weight_wa/1000.0);

    }
    else if(pro == 's'){

        money = 70.0 *(weight_wa/1000.0);

    }
    else if(pro == 'r'){

        money = 500.0 *(weight_wa/1000.0);

    }
    else if(pro == 'd'){

        money = 1210.0 *(weight_wa/1000.0);

    }
    else if(pro == 'w'){

        money = 80.0 *(weight_wa/1000.0);

    }
    else if(pro == 'y'){

        money = 1000.0 *(weight_wa/1000.0);

    }
    else if(pro == 'c'){

        money = 1500.0 *(weight_wa/1000.0);

    }

    printf("%.2f\n", money);

    return money;
}

int main(){

    printf("                                   WELCOME TO WHOLESALE SUPER MART\n");

    int t = 1;
    int add = 0;

    int num_case;
    int weight_wa;

    float total = 0.0;

    while (t){

        printf("1-Price table\n2-Buy\n3-update<Only for admin>\n");
        int tag;

        printf("Enter from the given option>>>");
        scanf("%d",&tag);

    if(tag == 1){

        market_display();

        printf("enter the product from the given___>");
        scanf("%d",&num_case);

        printf("enter the weight you want<in gram> --->");
        scanf("%d",&weight_wa);

        // prod_uct(num_case,weight_wa);
        total += prod_uct(num_case,weight_wa);
        add++;

    }
    else if(tag == 2){

        Sleep(1500);
        t = 0;
    }
    else if(tag == 3){

        admin_pass();

    }
    else{

        printf("Enter the number from the given slection__\n");

    }

}

    printf("You selected total of %d items\n", add);
    printf("Total %.2f on the things you got.", total);

    return 0;
}