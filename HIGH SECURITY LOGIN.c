#include<stdio.h>    	\\ be aware the system gets off when you enter 3 wrong tries
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main()
{

    int limit,i,hr,mi,k=0,z=0,PASSWORD,p1,c[4],p[4],L[6],O,j,tag=0,choice,check1,length;
    char ch,usn[2][20]={"chintu","karthikJ"},ch1,u[20]={0},R[6],str[1000],data[100],chars;
    time_t t;
    FILE *file,*file1,*fp;
    struct tm *a;


  printf("\n\t\tHIGH SECURITY LOGIN\n\n ");
	printf("#####################################################\n\n\n\n\n\n");
    printf("\t\t\t USERNAME :           \n");
    printf("\t\t\t PASSWORD :               ");		//interface
    printf("\n\n\n\n\n\n");
    printf("#####################################################\n");
    limit=0;


	do
    {
//setting time as password
    	t = time(NULL);
    a=localtime(&t);
    hr=a->tm_hour;
    mi=a->tm_min;
    p[0]=hr/10;
	p[1]=hr%10;
    p[2]=mi/10;
    p[3]=mi%10;
    srand(time(NULL));
                                        //captcha generation
	R[0]=rand()%26+65;
	R[1]=rand()%9+48;
	R[2]=rand()%26+97;
	R[3]=rand()%26+65;
	R[4]=rand()%9+48;
	R[5]='\0';



        do
        {
        gets(u);
        system("cls");
        printf("\n\t\tHIGH SECURITY LOGIN ");
        printf("\n\n\n");
    printf("#####################################################\n\n\n\n\n\n");
    printf("\t\t\t user name: ");
  	puts(u);
    printf("\n");
    printf("\t\t\t password: ");
        printf("\n\n\n\n\n\n");
    printf("#####################################################\n");
        ch=strlen(u);
        }while(ch<5);


    system("cls");
    printf("\n\t\tHIGH SECURITY LOGIN\n\n ");
    printf("#####################################################\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n");
    printf("\t\t\tuser name: ");
  puts(u);
    printf("\n");
    printf("\t\t\tpassword: ");


    for(i=0;i<4;i++)
    {
	ch1=getch();
        c[i]=ch1-48;
        ch1='*';
        printf("%c",ch1);
    }


    system("cls");
    printf("\n\t\tHIGH SECURITY LOGIN\n\n ");
    printf("#####################################################\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n");
    printf("\t\t\tUSERNAME : ");
  	puts(u);
    printf("\n");
    printf("\t\t\tPASSWORD : **** \n");
    printf("\n\t\t\tCAPTCHA  : ");
	printf("%s",R);
	printf("\n\n\t\t\t");
	printf("ENTER THE CAPTCHA:");
	gets(L);
    printf("\n\n\n\n\n\n");
    printf("#####################################################\n");
    if(strcmp(L,R)==0)
    z++;


    for(i=0;i<2;i++)
    {

    	if(strcmp(usn[i],u)==0)
			k++;
    }


	      if((p[0]==c[0])&&(p[1]==c[1])&&(p[2]==c[2])&&(p[3]==c[3])&&(z!=0)&&(k!=0))


       {
			system("cls");
		   	printf("\n\n\t\tlogged in succsessfully\n");
		   	fflush(stdin);
		   	fflush(stdout);
		   	printf("enter any key.....\n");
		   	getch();


		    do
		    {
		    	system("cls");
	//menu page
		   	MENU:
            printf("\t\t\t MENU\n");

            printf("\t\t enter the :\n");

            printf("\t\t 1.to write a file \n");

            printf("\t\t 2.to read a file \n");

            printf("\t\t 3.logot\n");

            scanf("%d",&tag);
            switch(tag)
      {

          case 1:
            system("cls");
            printf("\nPlease enter a string:\t");
            fflush(stdin);
            gets(str);
            fp = fopen("karthik.txt","a");
            if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     exit(0);
              }

              for(i = 0; (i < 100 && str[i] != '\0'); i++)
              str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
              fputs(str,fp);
              printf("data successfully added to file\n");
              fclose(fp);
              break;


        case 2:
            system("cls");
            file = fopen("karthik.txt","r");            //Statement   1

              if(file == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     exit(0);
              }

              printf("\nData in file...\n");

              while((fgets(str,80,file))!=NULL)
              {
                  length=strlen(str);
                  for(i=0;i<length;i++)
                  str[i] = str[i] - 3;
                     printf("%s",str);
                     printf("\n");
              }
              fclose(file);
              getch();

              break;


		case 3:
            system("cls");
            printf("\n\t\tlogging off.....");
            exit(1);
         	break;

		default:
            printf("enter the correct key\n");
            printf("enter any key.....\n");
            getch();
            continue;


      }
      printf("\n\n\t\tPRESS '1' TO CONTINUE OR ANY OTHER KEY TO EXIT :  ");
      scanf("%d",&choice);
		    }while(choice==1);
		    exit(1);


   }



 else
    {

	 	system("cls");
	 	printf("\n\n\n");
        printf("\nENTERED CREDENTIALS DO NOT MATCH\n\n");
    	limit++;

     }
    }while(limit<2);

    if(limit==2)
    {

        printf("ARE U ENTERING THE OTHERS FILES\n");
        system("C:\\WINDOWS\\System32\\shutdown /s");
        exit(0);

    }

return 0;
}
