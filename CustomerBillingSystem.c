#include<stdio.h>
#include <string.h>
#include<stdlib.h>

#define tv_PRICE 11000.00
#define lp_PRICE 80000.00
#define cam_PRICE 21500.00
#define ref_PRICE 15000.00
const double taxRate = 18;
float total_tv;
float total_;
float total_camera;
float total_ref;
float total_laptop;
float subTotal;
float tax;
float bill_Amount;
int tvs=0;
int lps=0;
int cs=0;
int refs=0;
float *mmt=&bill_Amount;
long long a=0;
int mobile(long long mo){
    int length = 0;
    while (mo != 0)
    {
      mo = mo/10;
      length++;
    }
    printf("length of entered mobile number is: %d\n",length);
    if (length==10)
    {
      printf("\nnumber entered succesfully\n");
      return 10;
    }
    else if (length>10)
    {
      printf("Sorry! Invalid mobile number...");
    }
    else
    {
      printf("Sorry! Invalid mobile number...");
    }

  }
int mod(int amt){
    int optio;
    int amtg;
    printf("\n Your total bill to be paid is Rs %d",amt);
    printf("\n Which mode will you prefer to pay \n 1.) Cash  \n 2.) Card \n");

    printf("\n Enter mode of payment:");
    scanf("%d",&optio);
    if (optio==1){
        printf("Amount given by customer Rs:");
        scanf("%d",&amtg);
        if (amtg>=amt){
            printf("\n Change to be returned : Rs %d ",amtg-amt);
        }
        else{
            int remainingamt=amt-amtg;
            printf("\n Sorry...amount is short by Rs %d ",amt-amtg);
            int optio2;
            printf("\n Do you wish to pay the remaining amount? \n 1.)Yes \n 2.) No");
            printf("\n What will you opt:");
            scanf ("%d",&optio2);
            if (optio2==1){
                mod(remainingamt);
            }
        }
    }

}
void Thanks();
int shopping(){
  int z;
  printf("Which of the following products would you like to buy: ");
  printf("\n%d.)TV", 1);
  printf("\n%d.)Laptop", 2);
  printf("\n%d.)Refrigerator", 3);
  printf("\n%d.)Camera", 4);
  printf("\nPlease enter the number of your choice: ");
  scanf("%d", &z);



  int n;
  int c;
    if (z == 1)
    {
      char tv[5];
      printf("How many of TV's would you like to buy: ");
      scanf("%d", &tvs);
      int *aptr;
      aptr=&tvs;
      printf("Order for %d TV(s) is set!!\n",tvs);
      printf("Would like to buy any other product (Yes/No): ");
      scanf("%s", tv);
      if (strcmp(tv , "Y") == 0 || strcmp(tv , "Yes") == 0 || strcmp(tv , "y") == 0 || strcmp(tv , "YES") == 0)
      {
        shopping();
      }
      else
      {
        Thanks();
      }
      return tvs;

    }
    else if (z == 2)
    {
      char lp[5];
      printf("How many of Laptop's would you like to buy: ");
      scanf("%d", &lps);
      int *apt;
      apt=&lps;
      printf("Order for %d laptop(s) is set!!\n",lps);
      printf("Would like to buy any other product (Yes/No): ");
      scanf("%s", lp);
      if (strcmp(lp , "Y") == 0 || strcmp(lp , "Yes") == 0 || strcmp(lp , "y") == 0 || strcmp(lp , "YES") == 0)
      {
        shopping();
      }
      else
      {
        Thanks();
      }
      return lps;
    }
    else if (z == 3)
    {
      char ref[5];
      printf("How many of Refrigerator would you like to buy: ");
      scanf("%d", &refs);
      int *aptr2=&refs;
      printf("Order for %d Refrigerator(s) is set!!\n",refs);
      printf("Would like to buy any other product (Yes/No): ");
      scanf("%s", ref);
      if (strcmp(ref , "Y") == 0 || strcmp(ref , "Yes") == 0 || strcmp(ref , "y") == 0 || strcmp(ref , "YES") == 0)
      {
        shopping();
      }
      else
      {
        Thanks();
        return 0;
      }
      return refs;
    }
    else if (z == 4)
    {
      char cam[5];
      printf("How many of Camera would you like to buy: ");
      scanf("%d", &cs);
      int *aptr3=&cs;
      printf("Order for %d camera(s) is set!!\n",cs);
      printf("Would like to buy any other product (Yes/No): ");
      scanf("%s", cam);
      if (strcmp(cam , "Y") == 0 || strcmp(cam , "Yes") == 0 || strcmp(cam , "y") == 0 || strcmp(cam , "YES") == 0)
      {
        shopping();
      }
      else
      {
        Thanks();
      }
      return cs;
    }
  }

void Thanks(){
//	Calculation Statements
	printf("\nPlease Enter the following details. \n\n");

//Newpart Raunak

	// char name[50];
	// printf("Cashier's Name: \n");
	// scanf("%s",name);
	// char cname[50];
	// printf("Customer's Name: \n");
	// scanf("%s",cname);

  char s[50],e[40],p[30];
  long long a;
  int m;
  printf("Enter cashier's name : ");
  scanf("%s",p);
  printf("Enter the password : ");
  scanf("%d",&m);

  if (m==1234)
  {
    printf("\nACCESS GRANTED\n");
    printf("*********************************************\n");
    printf("START BILLING\n\n");

    printf("Enter the name of the customer : ");
    scanf("%s",s);
    long long a;
    printf("\nEnter the mobile number : ");
    scanf("%lld",&a);
    while (mobile(a)!=10){
      printf("\nEnter the mobile number : ");
      scanf("%lld",&a);
    }
    char e[50];
    printf("Enter the email id :  ");
    scanf("%s",e);


    void checkemail(char *em){
        char emm[50];
        int lenmail=strlen(em);
        if (em[lenmail-1]=='m' && em[lenmail-2]=='o' && em[lenmail-3]=='c' && em[lenmail-4]=='.'){
            for (int i=0;i<lenmail;i++){
                if (e[i]=='@'){
                    printf("email check successful\n");

                }
            }
        }
        else{
            printf("email id incorrect!!\n");
            printf("Enter the email id again:  ");
            scanf("%s",e);
           checkemail(e);
        }
    }

       checkemail(e);
    printf("\n Generating bill...\n ... \n BILL GENERATED SUCCESSFULLY\n ");
  total_tv = tvs * tv_PRICE;
	total_camera = cs * cam_PRICE;
	total_ref = refs * ref_PRICE;
	total_laptop = lps * lp_PRICE;
	subTotal = total_tv + total_camera + total_ref + total_laptop;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;
    FILE *fp= fopen("proj.txt","w");
    fprintf(fp,"\t\t\t\t\tOrder Summary for %s \n\n",s);


    printf("\n");
    printf("\t\t\t==========================================================================\n");
    printf("\t\t\t\t                     Electronics Store Bill\n");
    printf("\t\t\t==========================================================================\n");

    printf("\n\n\t\t\t");


    printf("\n\t\t\tDate:%s \n\t\t\tTime: %s", __DATE__,__TIME__);

  printf("\n \n \n");
	printf("\t\t\tQTY \t   Description  \t Unit Price(Rs.)\t   Total Price(Rs.)\n");
	printf("\t\t\t--- \t   -----------  \t --------------- \t  ----------------\n\n");
  if (tvs){
	  printf("\t\t\t%02d  \t TV           \t        %.2f            \t %10.2f   \n", tvs, tv_PRICE, total_tv);
    fprintf(fp,"\t\tTVs bought: %d and costs Rs %d per piece, total cost for TVs: Rs %d     \n ",tvs, 11000, tvs*11000);
  }
  if (cs){
    printf("\t\t\t%02d  \t Camera       \t        %.2f            \t %10.2f   \n", cs, cam_PRICE, total_camera);
    fprintf(fp,"\t\tCameras bought: %d and costs Rs %d per piece, total cost for Cameras: Rs %d     \n ",cs, 21500, cs*21500);
  }
  if (refs){
  printf("\t\t\t%02d  \t Refrigerator \t        %.2f            \t %10.2f   \n", refs, ref_PRICE, total_ref);
  fprintf(fp,"\t\tRefrigerators bought: %d and costs Rs %d per piece, total cost for Refrigerators: Rs %d   \n   ",refs, 15000, refs*15000);
  }
  if (lps){
    printf("\t\t\t%02d  \t Laptop       \t        %.2f            \t %10.2f   \n", lps, lp_PRICE, total_laptop);
    fprintf(fp,"\t\tLaptops bought: %d and costs Rs %d per piece, total cost for Laptops: Rs %d      \n",lps, 80000, lps*80000);
  }
  printf("\n \n \n \n");
  printf("\t\t\t--------------------------------------------------------------------------\n\n");
	printf("\t\t\t                      \t\t\t   SUBTOTAL       %10.2f   \n", subTotal);
	printf("\t\t\t                      \t\t\t   TAX            %10.2f   \n", tax);
	printf("\t\t\t                      \t\t\t   Total Amount   %10.2f   \n", bill_Amount);
	printf("\t\t\t                      \t\t\t   Cashier name       %s     \n", p);
  printf("\t\t\t                      \t\t\t   Customer name      %s     \n", s);
  printf("\t\t\t                      \t\t\t   Customer number    %lld     \n", a);
  printf("\t\t\t                      \t\t\t   Customer email id  %s    \n", e);

	printf("\t\t\t==========================================================================\n\n");
  printf("\t\t\t\t\t                  End of bill\n\n");


	printf("\n\t\t\t\t\t\t     Thank you For Shopping!!\n\n");
  printf("\t\t\tContact us: 0755 2762121 \n \t\t\tvrsr_electricals@gmail.com \n \n \t\t\tfor more info: visit: www.vrsrelectricals.in \n \t\t\t instagram: vrsr_electricals \n  ");
  printf("\t\t\t==========================================================================\n\n");
  printf("\n\n\n\n\n\n");

  int amt=bill_Amount;
  fprintf(fp,"\t\t.......................................................................................\n\t\t\t\t\t\t=>Total amount Rs(inclusive of GST): %d     ",amt);
  mod(amt);
	//main();
  fclose(fp);
  }

  else
  {
    printf("incorrect password");
  }
  }



int main()
{


//	Local Declarations
  printf("\t\t\t\t\tWelcome To Electronics Store \n");

  shopping();
 /* Part end*/

  printf("\n\nDear Customer, a pop up will appear that will display your order summary.. \n Thank you for choosing VRSR\n Have a Great day ");
  printf("\nEnter any letter to continue");

  int system ( const char * command );
  system("proj.txt");
  return 0;
}
