//TODO Make an version of ANJALI INFOCOM INDIA SHOPPING EXP. for vscode.
//Header file declartion.
#include<stdio.h>
#include <stdlib.h>
//Global Variable Declartion.
long int total=0;      //Total of selected products.
int ptry=0;            //Counts No. of trys of password.
int pass=0;	       //Pass for idetification of Luxe.
//Functions Declartion.
int clearScreen();
int cred();           //Creditional Page
int homepage();       //Homepage Page
int Smartphone();     //Smartphone Page
int Television();     //Television Page
int Laptop();         //Laptop Page
int Printer();        //Printer Page
int Pass();	       //Pass Page
int Billing();        //Billing Page
int main()
{
	clearScreen();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	cred();
}
int clearScreen() {
    #ifdef _WIN32
        clearScreen();
    #else
        system("clear");
    #endif
}

int cred()
{
	int p,opt; //p for password and opt for option of retry and exit.

	if(ptry!=5)
	{
		printf("\n\nEnter Password : ");
		scanf("%d",&p);
	}
	else
	{
		return 0; //Exit the program if 5 trys is reched.
	}

	if(p==9115 || p==8103)
	{
		homepage(); //Goes To Homepage function if password is correct.
	}
	else
	{
		ptry++; //Counts Password Trys.
		printf("You have %d try remaining!",5-ptry);
		printf("Retry or Exit [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			main(); //If 1 then again password try.
		}
		else
		{
			return 0; //If 2 then exit the program.
		}
	}
}

int homepage()
{
	int category; //category for selecting category
	clearScreen();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t===============");
	printf("\n\t\t\t\tChoose Category");
	printf("\n\t\t\t\t===============");

	printf("\n\n1>. Smartphone");
	printf("\t\t\t\t\t\t4>. Printer");
	printf("\n\n2>. Television");
	printf("\t\t\t\t\t\t5>. Luxe");
	printf("\n\n3>. Laptop");
	printf("\t\t\t\t\t\t6>. Exit");

	printf("\n\nSelect Category : ");
	scanf("%d",&category);

	if(category==1)
	{
		Smartphone();
	}
	else if(category==2)
	{
		Television();
	}
	else if(category==3)
	{
		Laptop();
	}
	else if(category==4)
	{
		Printer();
	}
	else if(category==5)
	{
		Pass();
	}
	else if(category==6)
	{
		return 0;
	}
	else
	{
		homepage();
	}
}
int Smartphone()
{
	int opt,product,qty;  //opt for asking buy or billling and product for selecting product and qty for entering qauntiti.
	clearScreen();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t=================");
	printf("\n\t\t\t\tChoose Smartphone");
	printf("\n\t\t\t\t=================");

	printf("\n\n       Name                   Price");
	printf("\n-----------------------------------------");

	printf("\n\n1>. Samsung S23 Ultra      Rs. 1000");
	printf("\n\n2>. Oneplus 11R            Rs. 4000");
	printf("\n\n3>. Apple iphone 15        Rs. 8000");
	printf("\n\n4>. Homepage               Rs. Free");

	printf("\n\n-----------------------------------------");

	printf("\n\nSelect Product : ");
	scanf("%d",&product);

	if(product==1)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=1000*qty+total;  //process of multiplication of qty and product price to total variable.

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==2)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=4000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==3)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=8000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==4)
	{
		homepage();
	}
	else
	{
		Smartphone();
	}
}

int Television()
{
	int opt,product,qty;
	clearScreen();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t=================");
	printf("\n\t\t\t\tChoose Television");
	printf("\n\t\t\t\t=================");

	printf("\n\n       Name                          Price");
	printf("\n-----------------------------------------------");

	printf("\n\n1>. Samsung Neo QLED 4k           Rs. 1000");
	printf("\n\n2>. Oneplus Y21 4K LED            Rs. 8000");
	printf("\n\n3>. Sony Bravia 8k                Rs. 9000");
	printf("\n\n4>. Homepage                      Rs. Free");

	printf("\n\n-----------------------------------------------");

	printf("\n\nSelect Product : ");
	scanf("%d",&product);

	if(product==1)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=1000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==2)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=8000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==3)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=9000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==4)
	{
		homepage();
	}
	else
	{
		Television();
	}
}
int Laptop()
{
	int opt,product,qty;
	clearScreen();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t=============");
	printf("\n\t\t\t\tChoose Laptop");
	printf("\n\t\t\t\t=============");

	printf("\n\n       Name                           Price");
	printf("\n----------------------------------------------");

	printf("\n\n1>. Samsung Book 3                  Rs. 6000");
	printf("\n\n2>. Asus Zenbook 17 Fold            Rs. 5000");
	printf("\n\n3>. Apple Macbook Air M2            Rs. 4000");
	printf("\n\n4>. Homepage                        Rs. Free");

	printf("\n\n----------------------------------------------");

	printf("\n\nSelect Product : ");
	scanf("%d",&product);

	if(product==1)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=6000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==2)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=5000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==3)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=4000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==4)
	{
		homepage();
	}
	else
	{
		Laptop();
	}
}
int Printer()
{
	int opt,product,qty;
	clearScreen();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t==============");
	printf("\n\t\t\t\tChoose Printer");
	printf("\n\t\t\t\t==============");

	printf("\n\n       Name                           Price");
	printf("\n----------------------------------------------");

	printf("\n\n1>. Canon LBP2900B                  Rs. 6000");
	printf("\n\n2>. Epson L100                      Rs. 5000");
	printf("\n\n3>. HP DeskJet 108w                 Rs. 4000");
	printf("\n\n4>. Homepage                        Rs. Free");

	printf("\n\n----------------------------------------------");

	printf("\n\nSelect Product : ");
	scanf("%d",&product);

	if(product==1)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=6000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==2)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=5000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==3)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=4000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			return 0;
		}
	}
	else if(product==4)
	{
		homepage();
	}
	else
	{
		Printer();
	}
}
int Pass()
{
	int opt,product;
	clearScreen();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t  ===========");
	printf("\n\t\t\t\t  Choose Luxe");
	printf("\n\t\t\t\t  ===========");

	if(pass==0)
	{

		printf("\n\n       Name                           Price");
		printf("\n----------------------------------------------");
		printf("\n\n1>. Siliver [2% Discount]           Rs. 200");
		printf("\n\n2>. Gold [5% Discount]              Rs. 500");
		printf("\n\n3>. Platinum [10% Discount]         Rs. 1000");
		printf("\n\n4>. Homepage                        Rs. Free");

		printf("\n\n----------------------------------------------");

		printf("\n\nSelect Product : ");
		scanf("%d",&product);

		if(product==1) //Condition for checking if user has buyed luxe or not.
		{

			total=200*1+total;
			pass=1; //Sets pass variable to 1 for iden. of pass at billing.

			printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
			scanf("%d",&opt);

			if(opt==1)
			{
				homepage();
			}
			else if(opt==2)
			{
				Billing();
			}
			else
			{
				return 0;
			}
		}
		else if(product==2)
		{
			total=500*1+total;
			pass=2;

			printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
			scanf("%d",&opt);

			if(opt==1)
			{
				homepage();
			}
			else if(opt==2)
			{
				Billing();
			}
			else
			{
				return 0;
			}
		}
		else if(product==3)
		{

			total=1000*1+total;
			pass=3;

			printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
			scanf("%d",&opt);

			if(opt==1)
			{
				homepage();
			}
			else if(opt==2)
			{
				Billing();
			}
			else
			{
				return 0;
			}
		}
		else if(product==4)
		{
			homepage();
		}
		else
		{
			Pass();
		}
	}
	else //If User has already buyed the luxe then below is showed.
	{
		printf("\n\nYou Have Already Buyed An Pass.");
		printf("\n\nDo You Want To Go Homepage / Exit? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
}
int Billing()
{
	int taxes;  //taxes for counting 18% tax on amount.
	float discount;        //discount for counting discount based on luxe.
	long int total1=total; //Storing Total for printing at last.
	clearScreen();

	if(pass==1) //Iden. luxe and calculates dicount according.
	{
		discount=total*0.02;
		total=total-discount;
	}
	else if(pass==2)
	{
		discount=total*0.05;
		total=total-discount;
	}
	else if(pass==3)
	{
		discount=total*0.1;
		total=total-discount;
	}
	else
	{
		discount=0;
	}

	taxes=total*0.18; //Calculates the tax on discounted price total.

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n--------Billing-------");
	printf("\nGross Amount : %ld",total1);
	printf("\nDiscount     : %.2f",discount);
	printf("\nTaxes        : %d",taxes);
	printf("\nTotal Amount : %ld",total+taxes);
	printf("\n----------------------");

	printf("\n\n\t\t=============================================");
	printf("\n\t\tThanks For Shopping with Anjali Infocom India");
	printf("\n\t\t=============================================");
}