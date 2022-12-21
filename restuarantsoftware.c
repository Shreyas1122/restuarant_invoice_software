#include<stdio.h>
#include<conio.h>

float sgst=2.5;
float cgst=2.5;
float totalgst= sgst + cgst;

void  shreyas();

int main(){
	
	printf("\t\t\t************ SADGURU RESTUARANTS**************\n\n\n");
	
	shreyas ();

return 0;	
}

void shreyas(){
		char nameofc[10];
	printf("please enter your customer name :");
	scanf("%s",&nameofc);
	int y;
	printf("please enter number of products :");
	scanf("%d",&y);
	if(y==1){
		char nameofproduct[15];
		printf("enter your item name :");
		scanf("%s",&nameofproduct);
		printf("\nplease enter the price of each Item:");
		int price;
		scanf("%d",&price);
		printf("\nplease enter the quantity of each Item:");
		int q;
		scanf("%d",&q);
		int total = price*q;
		float gst=total*5/100;
		int grandtotal = total +gst;
		printf("\t\t\t************GRAND TOTAL***************\n\n");
		printf("\t\t\tNAME OF CUSTOMER:\t%s\n\n",nameofc);
		printf("\t\t\t CGST:\t\t\t%f\n\n",cgst);
		printf("\t\t\t SGST:\t\t\t%f\n\n",sgst);
		printf("\t\t\t YOUR GRAND TOTAL IS\t %d\n\n\n",grandtotal);
		printf("\t\t         ---------------------------------\n\n");
		printf("\t\t\t\ THANK YOU %s VISIT AGAIN",nameofc);
		}
		
		
		else if (y==2){
			char nameofproduct[15];
		printf("enter your 1 item name :");
		scanf("%s",&nameofproduct);
		printf("\nplease enter the price of 1 Item:");
		int price;
		scanf("%d",&price);
		printf("\nplease enter the quantity of 1 Item:");
		int q;
		scanf("%d",&q);
		int total = price*q;
		float gst=total*5/100;
		int grandtotal = total +gst;
		
		char nameofproduct1[15];
		printf("\n\n\n\nenter your  2 item name :");
		scanf("%s",&nameofproduct1);
		printf("\nplease enter the price of 2 Item:");
		int price1;
		scanf("%d",&price1);
		printf("\nplease enter the quantity of each Item:");
		int q1;
		scanf("%d",&q1);
		int total1 = price1*q1;
		float gst1=total1*5/100;
		int grandtotal1 = total1 +gst1;
		
		int greatgrandtotal=grandtotal+grandtotal1;
		
			printf("\t\t\t************GRAND TOTAL***************\n\n");
		printf("\t\t\tNAME OF CUSTOMER:\t%s\n\n",nameofc);
		printf("\t\t\t CGST:\t\t\t%f\n\n",cgst);
		printf("\t\t\t SGST:\t\t\t%f\n\n",sgst);
		printf("\t\t\t YOUR GRAND TOTAL IS\t %d\n\n",greatgrandtotal);
			printf("\t\t         ---------------------------------\n\n");
		printf("\t\t\t\ THANK YOU %s VISIT AGAIN",nameofc);
		}  
		
		
		else if (y==3){
			char nameofproduct[15];
		printf("enter your 1 item name :");
		scanf("%s",&nameofproduct);
		printf("\nplease enter the price of 1 Item:");
		int price;
		scanf("%d",&price);
		printf("\nplease enter the quantity of 1 Item:");
		int q;
		scanf("%d",&q);
		int total = price*q;
		float gst=total*5/100;
		int grandtotal = total +gst;
		
		char nameofproduct1[15];
		printf("\n\n\n\nenter your  2 item name :");
		scanf("%s",&nameofproduct1);
		printf("\nplease enter the price of 2 Item:");
		int price1;
		scanf("%d",&price1);
		printf("\nplease enter the quantity of 2 Item:");
		int q1;
		scanf("%d",&q1);
		int total1 = price1*q1;
		float gst1=total1*5/100;
		int grandtotal1 = total1 +gst1;
		
			char nameofproduct2[15];
		printf("\n\n\n\nenter your  3 item name :");
		scanf("%s",&nameofproduct2);
		printf("\nplease enter the price of 3 Item:");
		int price2;
		scanf("%d",&price2);
		printf("\nplease enter the quantity of 3 Item:");
		int q2;
		scanf("%d",&q2);
		int total2 = price2*q2;
		float gst2=total2*5/100;
		int grandtotal2 = total2 +gst2;
		int greatgrandtotal1=grandtotal+grandtotal1 +grandtotal2;
			printf("\t\t\t************GRAND TOTAL***************\n\n");
		printf("\t\t\tNAME OF CUSTOMER:\t%s\n\n",nameofc);
		printf("\t\t\t CGST:\t\t\t%f\n\n",cgst);
		printf("\t\t\t SGST:\t\t\t%f\n\n",sgst);
		printf("\t\t\t YOUR GRAND TOTAL IS\t %d\n\n",greatgrandtotal1);
			printf("\t\t          ---------------------------------\n\n");
		printf("\t\t\t\ THANK YOU %s VISIT AGAIN",nameofc);
		}  
		
		
		else if(y==4){
			char nameofproduct[15];
		printf("enter your 1 item name :");
		scanf("%s",&nameofproduct);
		printf("\nplease enter the price of 1 Item:");
		int price;
		scanf("%d",&price);
		printf("\nplease enter the quantity of 1 Item:");
		int q;
		scanf("%d",&q);
		int total = price*q;
		float gst=total*5/100;
		int grandtotal = total +gst;
		
		char nameofproduct1[15];
		printf("\n\n\n\nenter your  2 item name :");
		scanf("%s",&nameofproduct1);
		printf("\nplease enter the price of 2 Item:");
		int price1;
		scanf("%d",&price1);
		printf("\nplease enter the quantity of 2 Item:");
		int q1;
		scanf("%d",&q1);
		int total1 = price1*q1;
		float gst1=total1*5/100;
		int grandtotal1 = total1 +gst1;
		
			char nameofproduct2[15];
		printf("\n\n\n\nenter your  3 item name :");
		scanf("%s",&nameofproduct2);
		printf("\nplease enter the price of 3 Item:");
		int price2;
		scanf("%d",&price2);
		printf("\nplease enter the quantity of 3 Item:");
		int q2;
		scanf("%d",&q2);
		int total2 = price2*q2;
		float gst2=total2*5/100;
		int grandtotal2 = total2 +gst2;
		
		char nameofproduct3[15];
		printf("\n\n\n\nenter your  4 item name :");
		scanf("%s",&nameofproduct3);
		printf("\nplease enter the price of 4 Item:");
		int price3;
		scanf("%d",&price3);
		printf("\nplease enter the quantity of 4 Item:");
		int q3;
		scanf("%d",&q3);
		int total3 = price3*q3;
		float gst3=total3*5/100;
		int grandtotal3 = total3 +gst3;
		int greatgrandtotal2=grandtotal+grandtotal1+grandtotal2+grandtotal3;
			printf("\t\t\t************GRAND TOTAL***************\n\n");
		printf("\t\t\tNAME OF CUSTOMER:\t%s\n\n",nameofc);
		printf("\t\t\t CGST:\t\t\t%f\n\n",cgst);
		printf("\t\t\t SGST:\t\t\t%f\n\n",sgst);
		printf("\t\t\t YOUR GRAND TOTAL IS\t %d\n\n",greatgrandtotal2);
			printf("\t\t         ---------------------------------\n\n");
		printf("\t\t\t\ THANK YOU %s VISIT AGAIN",nameofc);
		}  
		
		
			
			
		
		
	   
			
			
		
		
		
		
			
		}
		