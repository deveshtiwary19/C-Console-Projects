#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<conio.h>
//Following are the 6 standard C libraries used in the project.
char ext[]= "COLOR ";
int r,a;
char Color[20];
//Following are the globally declared variables used in all the functions as well as the driver program.
int AddMember()//Following is the function used here to create new Record.
{
    system(Color);
    char Gn[10];
    char ext[]=".txt";
    char Name[50];
    char FN[50];
    char MN[50];
    char sex[10];
    char mail[70];
    char address[80];
    char contact[20];
    char profession[20];
    float weight;

     int age;
     int choice;
     time_t t;
     time(&t);

dev1:
  printf("Enter the gym card number:\n");
  scanf("%s",&Gn);

  system("CLS");
  printf("Now Enter The Following Details:\n\n");
  printf("==============================================================\n");
  printf("Name: ");
  scanf(" %[^\n]s",&Name);
  printf("Father's Name: ");
  scanf(" %[^\n]s",&FN);
  printf("Mother's Name: ");
  scanf(" %[^\n]s",&MN);
  printf("Sex: ");
  scanf(" %[^\n]s",&sex);
  printf("Address: ");
  scanf(" %[^\n]s",&address);
  printf("Profession/Occupation: ");
  scanf(" %[^\n]s",&profession);
  printf("Contact Number: ");
  scanf("%s",&contact);
  printf("Weight: ");
  scanf(" %f",&weight);
  printf("Age: ");
  scanf(" %d",&age);
  printf("E-mail: ");
  scanf(" %s",&mail);

  system("CLS");
  dev2:
  printf("\t|---------------------------------------------|\n\t|==============B.C.E.T Durgapur===============|\n\t|*********THE GYM MANGAEMENT SYSTEM***********|\n\t|---------------------------------------------|\n\t|Confirm The Details:			      |\n\t|Name: %s\n\t|Fathers Name: %s\n\t|Mothers Name: %s\n\t|Age: %d\n\t|Sex: %s\n\t|Weight: %f\n\t|Address: %s\n\t|Profession: %s\n\t|Contact Number: %s\n\t|E-mail: %s\n\t|---------------------------------------------|\n\t|*********************************************|\n\t|=============================================|\n",Name,FN,MN,age,sex,weight,address,profession,contact,mail);
    printf("\n\n\t|***********BCET,Durgapur*************|\n\t|-------------------------------------|\n\t|=====================================|\n\t|Enter 1 to Confirm		      |\n\t|Enter 2 to Re-Enter Deatils          |\n\t|=====================================|\n\t|-------------------------------------|\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        strcat(Gn,ext);
        FILE *ptr=NULL;
        char *filename=Gn;
        ptr=fopen(filename,"w");
        fprintf(ptr,"\t\tGYM CARD NO. %s\n1.Name: %s\n2.Fathers Name: %s\n3.Mothers Name: %s\n4.Age: %d\n5.Sex: %s\n6.Weight: %f\n7.Address: %s\n8.Profession: %s\n9.Contact number: %d\n10.E-mail: %s\n",Gn,Name,FN,MN,age,sex,weight,address,profession,contact,mail);
        fprintf(ptr,"\nDate and Time Of Admission: %s",ctime(&t));
        fclose(ptr);
        system("CLS");
        a:
        printf("==============================================\n");
        printf("NEW MEMBER ADDED SUCESSFULLY\n");
        printf("==============================================\n");
        printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }
    }
    else if(choice==2)
    {
        system("CLS");
        goto dev1;
    }
    else
    {
        system("CLS");
        printf("WRONG CHOICE!!TRY AGAIN\n");
        goto dev2;

    }
    return 0;
}
int GetDetail()//Following is the function to view the record.
{
    char name[20],ext[]=".txt";
    int ch;
    system(Color);
    printf("Enter the gym card number you want to view Details:\n");
    scanf("%s",&name);
    strcat(name,ext);

    FILE *ptr=NULL;
    char *filename=name;
    ptr=fopen(filename,"r");
    ch=getc(ptr);
            while(ch!=EOF)
            {
                putchar(ch);
                ch=getc(ptr);
            }
            fclose(ptr);
            a:
            printf("\n\n=================================================\n");
            printf("Following are the details found in the record\n");
            printf("=================================================\n");
            printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }

      return 0;
}

int DelRecord()//Following is the function to delete a record from system.
{

    int remove();
   char Name[20],ext[]=".txt";
   int ch,choice,x;
   system(Color);
   tag1:
   printf("Enter the gym card no. you want the delete the record for:\n");
   scanf("%s",&Name);
   tag2:
   strcat(Name,ext);

   FILE *ptr=NULL;
       char *filename=Name;
       ptr=fopen(filename,"r");
        ch=getc(ptr);

            while(ch!=EOF)
            {
                putchar(ch);
                ch=getc(ptr);
            }
            fclose(ptr);
            printf("\n===================================================================\n");

    printf("\n\t\t|********BCET GYM RECORD**********|\n\t\t|---------------------------------|\n\t\t|Following are the details found  |\n\t\t|in the record.       	  	  |\n\t\t|=================================|\n\t\t|Enter 1 to confirm Deletion	  |\n\t\t|Enter 2 to RETRY!!		  |\n\t\t|---------------------------------|\n");
    printf("\t\t");
    scanf("%d",&choice);
    if(choice==1)
    {
        system("CLS");

        x= remove(filename);
        a:
        printf("RECORD DELETED SUCESSFULLY!!\n");
        printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }
    }
    else if(choice==2)
    {
        system("CLS");
        goto tag1;
    }
    else
    {
        system("CLS");
        printf("WRONG CHOICE!!");
        goto tag2;
    }
return 0;
}
int newSheet()//A function to create a new attendance sheet.
{
    system(Color);
    char date[25],ext[]=".txt";
    int n,i,j;
    int choice1;
    time_t t;
    time(&t);
    printf("Enter today's Date to create the new attendance sheet(DD-MM-YYYY):\n");
    scanf("%s",&date);
    strcat(date,ext);
    FILE *ptr=NULL;
    char *filename=date;
    ptr=fopen(filename,"w");
        fclose(ptr);


    system("CLS");
    printf("\t\t|---------------------------------------------|\n\t\t|	  BCET GYM MANAGEMENT SYSTEM	      |\n\t\t|=============================================|\n\t\t|   ATTENDANCE SHEET CREATED SUCESSFULLY!!    |\n\t\t|Enter 1 to start Taking Attandance    	      |\n\t\t|Enter anything to Exit			      |\n\t\t|=============================================|\n\t\t|---------------------------------------------|\n  ");
   scanf("%d",&choice1);
    if(choice1==1)
    {
        system("CLS");
        printf("Enter the total number of members present today:\n");
        scanf("%d",&n);
        n=n-1;
        system("CLS");
        char B[n];
        for(i=0;i<=n;i++)
        {
            printf("Enter the gym card number of student %d\n",i+1);
            scanf("%d",&B[i]);
        }
    ptr=fopen(filename,"r+");
    fprintf(ptr,"Last Updated On %s\nList Of present GYM Card numbers\n",ctime(&t));
    for(j=0;j<=n;j++)
    {
        fprintf(ptr,"Gym Card Number:%d\n",B[j]);
    }
    fclose(ptr);
    a:
    printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }

    }
    else
        return 0;
}
int viewSheet()//A function to view existing attendance sheet.
{
    system(Color);
    int ch;
    char date[25],ext[]=".txt";
    tag1:
   printf("Enter the date you want to view attendance sheet for:\n");
   scanf("%s",&date);
   strcat(date,ext);
   FILE *ptr=NULL;
   char *filename=date;
   ptr=fopen(filename,"r");
   system("CLS");
    ch=getc(ptr);
            while(ch!=EOF)
            {
                putchar(ch);
                ch=getc(ptr);
            }
        if(ptr==NULL)
        {
            system("CLS");

            printf("File for following date not found!!PLEASE RETRY\n");
            goto tag1;
        }
        else
        {

            a:
            printf("\nFOLLOWING IS THE ATTANDANCE SHEET FOR RESPECTIVE DATE!!\n");
            printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }
        }
}
int delSheet()//A function to delete a existing attendance sheet.
{
    system(Color);
    int x;
    char date[25],ext[]=".txt";
    tag:
  printf("Enter the date for which you want to update the attendance sheet:\n");
  scanf("%s",&date);
  strcat(date,ext);

  x=remove(date);
  if(x!=NULL)
  {
      system("CLS");
      printf("FILE NOT FOUND!! PLEASE RETRY\n");
      goto tag;
  }
  else
  {
      a:
      printf("Attendance Sheet deleted sucessfully!!\n");
      printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }
  }

}
int settings()//The function to call the settings of the application.
{
    system(Color);
    int choice1;

    tag:
   printf("\t\t|----------------------------------------|\n\t\t|	       BCET GYM			 |\n\t\t|============APP SETTINGS================|\n\t\t|Select Your Choice:			 |\n\t\t|1.Change Console Colors.                |\n\t\t|2.Chnage password.			 |\n\t\t|========================================|\n\t\t|----------------------------------------|\n");
    scanf("%d",&choice1);

    if(choice1==1)
    {
        system("CLS");

        printf("FOLLOWING IS THE LIST OF COLORS:\n");
        printf("CODE\t\tCOLOR\n=======================\n0\t\tBLACK\n1\t\tBLUE\n2\t\tGREEN\n3\t\tAQUA\n4\t\tRED\n5\t\tPURPLE\n6\t\tYELLOW\n7\t\tWHITE\n8\t\tGREY\n=======================\n");
        printf("Enter The COLOR CODE(02 for Green text on Black Background):\n");
        scanf("%s",&Color);
        strcat(ext,Color);
        system(ext);
        system("CLS");
        a:
        printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }
    }
    else if(choice1==2)
    {
        d:
        system("CLS");
        printf("Being a console app,password for this can not be chnaged!!\nContact customer support to chnage the password!!\n(1111) is the present password for your app!!\n");

        printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto d;
        }
    }
    else
    {
        system("CLS");
        printf("WRONG CHOICE!!\n");
        goto tag;
    }
}
int help()//The function to call the customer support details of the application.
{
    a:
    printf("\t\t|-------------------------------------------|\n\t\t|	      B.C.E.T,Durgapur.		    |\n\t\t|___________________________________________|\n\t\t|THE GYM MANAGEMENT SYSTEM  		    |\n\t\t|*******************************************|\n\t\t|Developed By: CODEFREAKS     		    |\n\t\t|Contact:7491036593        		    |\n\t\t|Email:codefreaks1234@gmail.com		    |\n\t\t|Dveloped for:  			    |\n\t\t| 	      BCET,DURGAPUR		    |\n\t\t|For service or app related issues contact  |\n\t\t|'customer service support codefreaks'.     |\n\t\t|*******************************************|\n\t\t|___________________________________________|\n");
   printf("1.BACK\n2.EXIT");
        scanf("%d",&a);
        if(a==1)
        {
            system("CLS");

            r=restart();
        }
        else if(a==2)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY!!\nTHE CODE FREAKS\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("WRONG CHOICE!!RETRY\n");
            goto a;
        }
    return 0;
}
int restart()//The function to restart the application according to the user's choice.
{
  int password,choice,choice1,x;

        system("CLS");
        tag2:
        printf("\t\t\t|--------------------------------|\n\t\t\t|	B.C.E.T,Durgapur         |\n\t\t\t|================================|\n\t\t\t|  The Gym Management System     |\n\t\t\t|********************************|\n\t\t\t|1.Add Member			 |\n\t\t\t|2.Search Record		 |\n\t\t\t|3.Delete Record		 |\n\t\t\t|4.Attandance Forum		 |\n\t\t\t|5.Appliaction settings		 |\n\t\t\t|6.Customer support/Help	 |\n\t\t\t|7.Exit the Appliaction	         |\n\t\t\t|________________________________|\n\t\t\t|******************Developed By: |\n\t\t\t|*****************THE CODEFREAKS |\n\t\t\t|________________________________|\n");
        scanf("%d",&choice);

        if(choice==1)
        {
            system("CLS");
            x=AddMember();
        }
        else if(choice==2)
        {
            system("CLS");
            x=GetDetail();
        }
        else if(choice==3)
        {
            system("CLS");
            x=DelRecord();
        }
        else if(choice==4)
        {
            system("CLS");
            tag3:
            printf("\t\t\t|----------------------------------------|\n\t\t\t|	   B.C.E.T, Durgapur	  	 |\n\t\t\t|========================================|\n\t\t\t|        THE ATTENDANCE FORUM		 |\n\t\t\t|****************************************|\n\t\t\t|1.Create new attendance sheet           |\n\t\t\t|2.Open a attendance sheet		 |\n\t\t\t|3.Delete a attendance sheet	 	 |\n\t\t\t|========================================|\n\t\t\t|________________________________________|\n");
            scanf("%d",&choice1);
            if(choice1==1)
            {
                system("CLS");
                x=newSheet();
            }
            else if(choice1==2)
            {
                system("CLS");
                x=viewSheet();
            }
            else if(choice1==3)
            {
                system("CLS");
                x=delSheet();
            }
            else
            {
                system("ClS");
                printf("WRONG INPUT!! Try Again\n");
                goto tag3;
            }
        }
        else if(choice==5)
        {
            system("CLS");
            x=settings();
        }
        else if(choice==6)
        {
            system("CLS");
            x=help();
        }
        else if(choice==7)
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY\nTHANKS FOR USING!!\nTHE CODEFREAKS\n\n\n\n\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("Wrong input!! Enter correct choice:\n");
            goto tag2;
        }


}

/*The DRIVER-PROGRAM*/
int main()
{

    int password,choice,choice1,x;
    tag1:
        system(Color);
    printf("\n\n\n");
    printf("\a");
    printf("\t\t|------------	 |----------    |---------   -------------\n\t\t|	     |   |	        |		   |\n\t\t|	     |   |	        |		   |\n\t\t|	     |   |	        |		   |\n\t\t|------------    |	        |--------	   |\n\t\t|	     |   |	        |		   |\n\t\t|	     |   |	        | 		   |\n\t\t|	     |   |	        |                  |\n\t\t|------------  0 |----------- 0 |--------- 0 	   |\n");
    printf("\n\n\t\t\t\tTHE GYM MANAGEMENT SYSTEM\n");
    printf("\n\n\t\tEnter Your password to continue:");
    scanf("%d",&password);Beep(400,300);

    if(password==1111)
    {
        system("CLS");
        tag2:
        printf("\t\t\t|--------------------------------|\n\t\t\t|	B.C.E.T,Durgapur         |\n\t\t\t|================================|\n\t\t\t|  The Gym Management System     |\n\t\t\t|********************************|\n\t\t\t|1.Add Member			 |\n\t\t\t|2.Search Record		 |\n\t\t\t|3.Delete Record		 |\n\t\t\t|4.Attandance Forum		 |\n\t\t\t|5.Appliaction settings		 |\n\t\t\t|6.Customer support/Help	 |\n\t\t\t|7.Exit the Appliaction	         |\n\t\t\t|________________________________|\n\t\t\t|******************Developed By: |\n\t\t\t|*****************THE CODEFREAKS |\n\t\t\t|________________________________|\n");
        scanf("%d",&choice);

        if(choice==1)//Option creates a new Record in the system.
        {
            system("CLS");
            x=AddMember();
        }
        else if(choice==2)//Options gets the record saved in the system on the console application.
        {
            system("CLS");
            x=GetDetail();
        }
        else if(choice==3)//Option deletes the existing record.
        {
            system("CLS");
            x=DelRecord();
        }
        else if(choice==4)//Option calls the attendance forum in the console.
        {
            system("CLS");
            tag3:
            printf("\t\t\t|----------------------------------------|\n\t\t\t|	   B.C.E.T, Durgapur	  	 |\n\t\t\t|========================================|\n\t\t\t|        THE ATTENDANCE FORUM		 |\n\t\t\t|****************************************|\n\t\t\t|1.Create new attendance sheet           |\n\t\t\t|2.Open a attendance sheet		 |\n\t\t\t|3.Delete a attendance sheet	 	 |\n\t\t\t|========================================|\n\t\t\t|________________________________________|\n");
            scanf("%d",&choice1);
            if(choice1==1)//Creates new attendance sheet.
            {
                system("CLS");
                x=newSheet();
            }
            else if(choice1==2)//Views existing attendance sheet.
            {
                system("CLS");
                x=viewSheet();
            }
            else if(choice1==3)//Deletes the existing attendance sheet.
            {
                system("CLS");
                x=delSheet();
            }
            else
            {
                system("ClS");
                printf("WRONG INPUT!! Try Again\n");
                goto tag3;
            }
        }
        else if(choice==5)//Option calls the settings of the console application.
        {
            system("CLS");
            x=settings();
        }
        else if(choice==6)//Option calls the customer support page.
        {
            system("CLS");
            x=help();
        }
        else if(choice==7)//Option to exit the application.
        {
            system("CLS");
            printf("APPLICATION CLOSED SUCESSFULLY\nTHANKS FOR USING!!\nTHE CODEFREAKS\n\n\n\n\n");
            return 0;
        }
        else
        {
            system("CLS");
            printf("Wrong input!! Enter correct choice:\n");
            goto tag2;
        }


    }

    else
    {
        system("CLS");
        printf("INCORRECT PASSWORD!! Either Retry or contact  App Customer support.\n");
        goto tag1;
    }
}
