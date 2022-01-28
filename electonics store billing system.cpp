#include<stdio.h>
#include <conio.h>

#define TV_PRICE 1000.00
#define VCR_PRICE 800.00
#define REMOTE_PRICE 90.20


int main(void)
{
	const double LCD_PRICE = 5000.00;
	const double TAPE_PRICE = 480.00;
	const double taxRate = 80.25; 

	int tvQTY;
	int vcrQTY;
	int remoteQTY;
	int lcdQTY;
	int tapeQTY;

	float total_tv;
	float total_vcr;
	float total_remote;
	float total_lcd;
	float total_tape;
	float subTotal;
	float tax;
	float bill_Amount;
	char name[250];
	char cname[250];


	printf("\t\tWelcome To Electronics Store Billing System\n");
	printf("\n Please Enter the following details. \n\n");
	
	printf("Cashier's Name: \n");
	scanf("%s",name);
	printf("Customer's Name: \n");
	scanf("%s",cname);
	
	printf("\n\t***Enter 0 for none****");

	printf("\nNumber of TVs  sold? \n");
	scanf("%d", &tvQTY);

	printf("Number of VCRs sold? \n");
	scanf("%d", &vcrQTY);

	printf("Number of Remote Controllers sold? \n");
	scanf("%d", &remoteQTY);

	printf("Number of LCDs  sold? \n");
	scanf("%d", &lcdQTY);

	printf("Number of Tape Recorders sold? \n");
	scanf("%d", &tapeQTY);
	
	printf("\n Press Any Key To Generate Bill");
	getch();

printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
int a;
   	for( a=1;a<8;a++) 
	{
	
		printf("...");
	}
    printf("\n\n\t\t\t\t\tBill Generated. \n\n");
	total_tv = tvQTY * TV_PRICE;
	total_vcr = vcrQTY * VCR_PRICE;
	total_remote = remoteQTY * REMOTE_PRICE;
	total_lcd = lcdQTY * LCD_PRICE;
	total_tape = tapeQTY * TAPE_PRICE;
	subTotal = total_tv + total_vcr + total_remote + total_lcd + total_tape;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;
    printf("\n");
    printf("\t\t\t====================================================\n");
	printf("\t\t\t\t      Electronics Store Bill\n");
	printf("\t\t\t====================================================\n");
	printf("\t\t\tQTY \t Description \t Unit Price\t Total Price\n");
	printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
	printf("\t\t\t%02d \t TV                  %.2f       %10.2f \n", tvQTY, TV_PRICE, total_tv);
	printf("\t\t\t%02d  \t VCR                  %.2f       %10.2f  \n", vcrQTY, VCR_PRICE, total_vcr);
	printf("\t\t\t%02d   \t Remote CTRLR          %.2f       %10.2f   \n", remoteQTY, REMOTE_PRICE, total_remote);
	printf("\t\t\t%02d    \t LCD                 %.2f       %10.2f    \n", lcdQTY, LCD_PRICE, total_lcd);
	printf("\t\t\t%02d     \t Tape Recorder        %.2f       %10.2f     \n\n", tapeQTY, TAPE_PRICE, total_tape);
	printf("\t\t\t                                           ---------\n\n");
	printf("\t\t\t                           SUBTOTAL       %10.2f   \n", subTotal);
	printf("\t\t\t                           TAX            %10.2f    \n", tax);
	printf("\t\t\t                           Total         %10.2f     \n", bill_Amount);
	printf("\t\t\t                           Customer         %s     \n", cname);
	printf("\t\t\t                           Cashier          %s     \n", name);
	printf("\t\t\t====================================================\n\n");
	printf("\t\t\t\t\t\tEnd of bill\n\n");

	return 0;
	
} 

