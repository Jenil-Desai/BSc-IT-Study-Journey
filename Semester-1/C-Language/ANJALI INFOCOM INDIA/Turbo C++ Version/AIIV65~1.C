/*========================================
  ANJALI INFOCOM INDIA CLI SHOPPING EXP..
  VERSION 6.5
  DEVLOPED BY JENIL DESAI M.
  DEVLOPED IN C-LANGUAGE
  =========================================*/

//Header file declartion.
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
//Global Variable Declartion.
long int total=0;      //Total of selected products.
int ptry=5;            //Counts No. of trys of password.
int pass=0;	       //Pass for idetification of pass.
char products[4][3][100];
//Functions Declartion.
void cred();
void homepage();       //Homepage
void Smartphone();     //Smartphone Page
void Television();     //Television Page
void Laptop();         //Laptop Page
void Printer();        //Printer Page
void Pass();	       //Pass Page
void Billing();        //Billing Page
void admin_dashboard();
void main()
{
	clrscr();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	strcpy(products[0][0], "Samsung S23 Ultra (Rs. 1000)");
	strcpy(products[0][1], "Oneplus 11R (Rs. 4000)");
	strcpy(products[0][2], "Apple iphone 15 (Rs. 8000)");

	strcpy(products[1][0], "Samsung Neo QLED 4K (Rs. 1000)");
	strcpy(products[1][1], "Oneplus Y21 4K LED (Rs. 8000)");
	strcpy(products[1][2], "Sony Bravia 8K (Rs. 9000)");

	strcpy(products[2][0], "Samsung Book 3 (Rs. 6000)");
	strcpy(products[2][1], "Asus Zenbook 17 Fold (Rs. 5000)");
	strcpy(products[2][2], "Apple Macbook Air M2 (Rs. 4000)");

	strcpy(products[3][0], "Canon LBP2900B (Rs. 6000)");
	strcpy(products[3][1], "Epson L100 (Rs. 5000)");
	strcpy(products[3][2], "HP Deskjet 108W (Rs. 4000)");


	cred();

	getch();
}

void cred()
{
	int p,opt; //p for password and opt for option of retry and exit.
	char u[20],ru[20]="Jenil";

	if(ptry!=0)
	{
		printf("\n\nEnter Username : ");
		scanf("%s",u);

		printf("\nEnter Password : ");
		scanf("%d",&p);

		if(p==9115 && strcmp(u,ru)==0)
		{
			ptry=5;
			homepage();
		}
		else
		{
			ptry--;
			if(ptry==0)
			{
				printf("\n\n\t\t\t---No Password Trys Remaining---");
				getch();
				exit(0);
			}
			printf("You have %d try remaining!",ptry);
			printf("Retry or Exit [Y-1/N-2] : ");
			scanf("%d",&opt);

			if(opt==1)
			{
				main();
			}
			else
			{
				exit(0);
			}
		}
	}
	else
	{
		exit(0);
	}
}

void homepage()
{
	int category; //category for selecting category
	clrscr();

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
	printf("\n\n7>. Admin Dashboard");
	if(total!=0)
	{
		printf("\t\t\t\t\t8>. Billing [Rs. %ld]",total);
		printf("\n\n9>. Clear Cart");
	}
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
		exit(0);
	}
	else if(category==7)
	{
		admin_dashboard();
	}
	else if(category==8)
	{
		Billing();
	}
	else if(category==9)
	{
		total=0;
		homepage();
	}
	else
	{
		homepage();
	}
}
void Smartphone()
{
	int opt,product,qty,i,j;  //opt for asking buy or billling and product for selecting product and qty for entering qauntiti.
	clrscr();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t=================");
	printf("\n\t\t\t\tChoose Smartphone");
	printf("\n\t\t\t\t=================");

	printf("\n\n       Name                   Price");
	printf("\n-----------------------------------------");

	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n%d>. %s",j+1,products[i][j]);
		}
	}

	printf("\n\n4>. Homepage (Rs. Free)");

/*	printf("\n\n1>. Samsung S23 Ultra      Rs. 1000");
	printf("\n\n2>. Oneplus 11R            Rs. 4000");
	printf("\n\n3>. Apple iphone 15        Rs. 8000");
	printf("\n\n4>. Homepage               Rs. Free"); */

	printf("\n\n-----------------------------------------");

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
			exit(0);
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
			exit(0);
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
			exit(0);
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

void Television()
{
	int opt,product,qty,i,j;
	clrscr();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t=================");
	printf("\n\t\t\t\tChoose Television");
	printf("\n\t\t\t\t=================");

	printf("\n\n       Name                          Price");
	printf("\n-----------------------------------------------");

	for(i=1;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n%d>. %s",j+1,products[i][j]);
		}
	}

	printf("\n\n4>. Homepage (Rs. Free)");

/*	printf("\n\n1>. Samsung Neo QLED 4k           Rs. 1000");
	printf("\n\n2>. Oneplus Y21 4K LED            Rs. 8000");
	printf("\n\n3>. Sony Bravia 8k                Rs. 9000");
	printf("\n\n4>. Homepage                      Rs. Free"); */

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
			exit(0);
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
			exit(0);
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
			exit(0);
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
void Laptop()
{
	int opt,product,qty,i,j;
	clrscr();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t=============");
	printf("\n\t\t\t\tChoose Laptop");
	printf("\n\t\t\t\t=============");

	printf("\n\n       Name                           Price");
	printf("\n----------------------------------------------");

	for(i=2;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n%d>. %s",j+1,products[i][j]);
		}
	}

	printf("\n\n4>. Homepage (Rs. Free)");

/*	printf("\n\n1>. Samsung Book 3                  Rs. 6000");
	printf("\n\n2>. Asus Zenbook 17 Fold            Rs. 5000");
	printf("\n\n3>. Apple Macbook Air M2            Rs. 4000");
	printf("\n\n4>. Homepage                        Rs. Free"); */

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
			exit(0);
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
			exit(0);
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
			exit(0);
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
void Printer()
{
	int opt,product,qty,i,j;
	clrscr();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n\n\t\t\t\t==============");
	printf("\n\t\t\t\tChoose Printer");
	printf("\n\t\t\t\t==============");

	printf("\n\n       Name                           Price");
	printf("\n----------------------------------------------");

	for(i=3;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n%d>. %s",j+1,products[i][j]);
		}
	}

	printf("\n\n4>. Homepage (Rs. Free)");

/*	printf("\n\n1>. Canon LBP2900B                  Rs. 6000");
	printf("\n\n2>. Epson L100                      Rs. 5000");
	printf("\n\n3>. HP DeskJet 108w                 Rs. 4000");
	printf("\n\n4>. Homepage                        Rs. Free"); */

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
			exit(0);
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
			exit(0);
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
			exit(0);
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
void Pass()
{
	int opt,product,qty;
	clrscr();

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

		if(product==1)
		{

			total=200*1+total;
			pass=1;

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
				exit(0);
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
				exit(0);
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
				exit(0);
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
	else
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
			exit(0);
		}
		else
		{
			exit(0);
		}
	}
}
void admin_dashboard()
{
	int i,j,option,cat,pro,p,opt;
	char category[4][50];
	clrscr();

	if(ptry!=0)
	{
		printf("\nEnter Password : ");
		scanf("%d",&p);

		if(p==9115)
		{
			at:
			clrscr();
			printf("\t\t\t===============================");
			printf("\n\t\t\tWelcome To Anjali Infocom India");
			printf("\n\t\t\t===============================");

			printf("\n\n\t\t\t\t  ===============");
			printf("\n\t\t\t\t  Admin Dashboard");
			printf("\n\t\t\t\t  ===============\n\n\n");

			strcpy(category[0], "Smartphone");
			strcpy(category[1], "Laptop");
			strcpy(category[2], "Television");
			strcpy(category[3], "Printer");

			for(i=0;i<4;i++)
			{
				printf("%d>. %s\n",i+1,category[i]);
				for(j=0;j<3;j++)
				{
					printf("\t%d>. %s\n",j+1,products[i][j]);
				}
				printf("\n");
			}

			printf("\n\nEdit Name [Y-1/N-2] : ");
			scanf("%d",&option);

			if(option==1)
			{
				printf("\n\nEdit Name [Category] [Product] : ");
				scanf("%d %d",&cat,&pro);
				cat=cat-1;
				pro=pro-1;
				flushall();
				printf("\n\nNew Name : ");
				gets(products[cat][pro]);
				goto at;
			}
			else if(option==2)
			{
				homepage();
			}
			else
			{
				admin_dashboard();
			}
		}
		else
		{
			ptry--;
			if(ptry==0)
			{
				printf("\n\n\t\t---You are Locked Out Due to Continue Trys---");
				getch();
				homepage();
			}
			printf("You have %d try remaining!",ptry);
			printf("Retry or Homepage [Y-1/N-2] : ");
			scanf("%d",&opt);

			if(opt==1)
			{
				admin_dashboard();
			}
			else
			{
				homepage();
			}
		}
	}
	else
	{
		clrscr();
		printf("\n\n\t\t---You are Locked Out Due to Continue Trys---");
		getch();
		homepage();
	}
}
void Billing()
{
	int taxes;  //taxes for counting 18% tax on amount.
	float discount;        //discount for counting discount.
	long int total1=total; //Storing Total.
	clrscr();

	if(pass==1)
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

	taxes=total*0.18;

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Anjali Infocom India");
	printf("\n\t\t\t===============================");

	printf("\n--------Billing-------");
	printf("\nGross Amount : %ld",total1);
	printf("\nDiscount     : %.2f",discount);
	printf("\nNet Amount   : %ld",total);
	printf("\nTaxes (18%)  : %d",taxes);
	printf("\nTotal Amount : %ld",total+taxes);
	printf("\n----------------------");

	printf("\n\n\t\t=============================================");
	printf("\n\t\tThanks For Shopping with Anjali Infocom India");
	printf("\n\t\t=============================================");
}