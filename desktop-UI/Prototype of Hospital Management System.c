#include<string.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
  char name[100];
  char patID[100];
  char address[100];
  char phone[100];
  int age;
  int payment;
  char gender;
  char disease[100];
  char doc[100];
  char history[100];
  char date[100];
  char treatment[100];
  char med[100];
  char password[100];
}patient;
typedef struct
{
  char name[100];
  char ID[100];
  patient pa[100];
  char gender;
  char address[100];
  char phone[30];
  char special[100];
  char degree[100];
  char hos_name[100];
  char password[100];
  int no;

 }doctor;
typedef struct
{
  char name[100];
  char ID[100];
  char address[100];
  char job[50];
  char phone[30];
  char gender;
  char hos_name[100];
  char password[100];
}employee;
typedef struct
{
  char name[100];
  char address[100];
  char branches[200];
  char department[200];
  char fac[200];
  char supply[100];
  int medicine1;
  int medicine2;
}hospital;
void pate(patient doo[20],int n,char nam[100])
{
  int i;char ch;
  for(i=0;i<n;i++)
    {
      printf("Name of patient: ");
      scanf(" %[^\n]",doo[i].name);
      int j,flag;
      while(1)
	{     
 
	  flag=0;
             printf("ID:  ");
            //fgets(doo[i].patID,100,stdin);
            scanf(" %[^\n]",doo[i].patID);
            for(j=0;j<i;j++)
	      if(strcmp(doo[i].patID,doo[j].patID)==0)
		flag=1;
	    if(flag==0)break;
            printf("\nID occupied\n");
          }


      printf("Gender(m/f):  ");
       scanf(" %c",&doo[i].gender);
      printf("Address:   ");
      //fgets(doo[i].address,100,stdin);
    scanf(" %[^\n]",doo[i].address);
      printf("Phone:     ");

      //fgets(doo[i].phone,30,stdin);
      scanf(" %[^\n]",doo[i].phone);
      printf("Disease(separated by comma):    ");

      //fgets(doo[i].disease,100,stdin);
      scanf(" %[^\n]",doo[i].disease);
      printf("History(separated by comma):      ");
      //fgets(doo[i].history,100,stdin);
      scanf(" %[^\n]",doo[i].history);
      strcpy(doo[i].doc,nam);
      printf("Treatment:      ");
      //fgets(doo[i].treatment,100,stdin);
      scanf(" %[^\n]",doo[i].treatment);
      printf("Age:   ");
      scanf("%d",&doo[i].age);
      printf("Payment:  ");
      scanf("%d",&doo[i].payment);
      printf("Password:  ");
      scanf(" %[^\n]",doo[i].password);
      printf("Medication:    ");
      //fgets(doo[i].disease,100,stdin);
      scanf(" %[^\n]",doo[i].med);
      printf("Admit Date:    ");
      //fgets(doo[i].disease,100,stdin);
      scanf(" %[^\n]",doo[i].date);
   }


}
void empl(employee doo[20],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("Name of employee: ");
      scanf(" %[^\n]",doo[i].name);
       printf("Hospital+branch:   ");
      //fgets(doo[i].hos_name,100,stdin);
      scanf(" %[^\n]",doo[i].hos_name);
      int j,flag;
      while(1)
	{
            

	  flag=0;

            printf("ID:  ");
            //fgets(doo[i].ID,100,stdin);
            scanf(" %[^\n]",doo[i].ID);
            for(j=0;j<i;j++)
	      if(strcmp(doo[i].ID,doo[j].ID)==0&&strcmp(doo[i].hos_name,doo[j].hos_name)==0)
		flag=1;
	    if(flag==0)
	      break;
	    printf("\nID occupied\n");

       }

      printf("Gender(m/f):  ");
      scanf(" %c",&doo[i].gender);
      printf("Address:   ");
      //fgets(doo[i].address,100,stdin);
      scanf(" %[^\n]",doo[i].address);
      printf("Phone:     ");
      //fgets(doo[i].phone,30,stdin);
      scanf(" %[^\n]",doo[i].phone);
      printf("Job(pharmacist/receptionist/nurse):     ");
      //fgets(doo[i].job,50,stdin);
      scanf(" %[^\n]",doo[i].job);
   
      printf("Password:    ");
      scanf(" %[^\n]",doo[i].password);


    }
}
void doc(doctor doo[20],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("Name of doctor: ");
      scanf(" %[^\n]",doo[i].name);
       printf("Hospital+branch:   ");
      //fgets(doo[i].hos_name,100,stdin);
      scanf(" %[^\n]",doo[i].hos_name);
      int j,flag;

      while(1)
	{

            printf("ID:  ");
            //fgets(doo[i].ID,100,stdin);
            scanf(" %[^\n]",doo[i].ID);flag=0;
            for(j=0;j<i;j++)
	      if(strcmp(doo[i].ID,doo[j].ID)==0&&strcmp(doo[i].hos_name,doo[j].hos_name)==0)
                flag=1;
            if(flag==0)
	      break;
            printf("\nID occupied\n");

	}
      printf("Gender(m/f):  ");
      scanf(" %c",&doo[i].gender);
      printf("Address:   ");
      //fgets(doo[i].address,100,stdin);
      scanf(" %[^\n]",doo[i].address);
      printf("Phone:     ");
      //fgets(doo[i].phone,30,stdin);
      scanf(" %[^\n]",doo[i].phone);
      printf("Specialities(separated by comma):    ");
      //fgets(doo[i].special,100,stdin);
      scanf(" %[^\n]",doo[i].special);
      printf("Degree(separated by comma):      ");
      //fgets(doo[i].degree,100,stdin);
      scanf(" %[^\n]",doo[i].degree);
      printf("Password:  ");
      scanf(" %[^\n]",doo[i].password);
      printf("Number of patients:  ");
      int q;
      scanf("%d",&q);
      doo[i].no=q;
      pate(doo[i].pa,q,doo[i].name);
    }
}
void hos(hospital h[20],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      
      int j,flag;
      while(1)
	{
           printf("Name of hospital: ");
           scanf(" %[^\n]",h[i].name);flag=0;
           for(j=0;j<i;j++)
	     if(strcmp(h[i].name,h[j].name)==0)
	       flag=1;
           if(flag==0)break;
           printf("\nAlready present\n");

        }
      printf("Address: ");
      //fgets(h[i].address,100,stdin);
      scanf(" %[^\n]",h[i].address);
      printf("Branches(separate by comma): ");
      //fgets(h[i].branches,100,stdin);
      scanf(" %[^\n]",h[i].branches);
      printf("Departments(separate by comma):  ");
      //fgets(h[i].department,200,stdin);
      scanf(" %[^\n]",h[i].department);
      printf("Facilities(separate by comma):   ");
      //fgets(h[i].fac,200,stdin);
      scanf(" %[^\n]",h[i].fac);
      strcpy(h[i].supply,"Available");
      h[i].medicine1=10;
      h[i].medicine2=10;
      /*cout<<"Enter no of doctors and employees: ";
      scanf("%d %d",&d1,&e1);
      doc(h[i].d,d1);
      emp(h[i].e,e1);*/
    }
}
int main()
{
  hospital h[20];doctor doct[20];
  employee em[10];
  FILE *p1,*p2,*p3;
  p1=fopen("hospital.bin","rb");
  p2=fopen("doctor.bin","rb");
  p3=fopen("employee.bin","rb");
  static int t=1;
  if(!p3||!p2||!p1)
   t=0;



  int i,n1,n2,n3,flag,flag2;

  if(t==1)
  {
  fread(&n1, sizeof(int), 1, p1);
  fread(&n2, sizeof(int), 1, p2);
  fread(&n3, sizeof(int), 1, p3);
  for(i=0;i<n1;i++)
  fread(&h[i], sizeof(hospital), 1, p1);
  for(i=0;i<n2;i++)
  fread(&doct[i], sizeof(doctor), 1, p2);
  for(i=0;i<n3;i++)
  fread(&em[i], sizeof(employee), 1, p3);
  fclose(p1);
  fclose(p2);
  fclose(p3);
}



  while(1)
   {
        flag=0;
        if(t==0)
        {
          printf("HOSPITAL MANAGEMENT SYSTEM\n");
          printf("________ __________ ______\n\n\n");
          printf("Enter number of hospitals(max 20): ");
          scanf("%d",&n1);
          hos(h,n1);
          printf("No of doctors(max 20): ");
          scanf("%d",&n2);
          doc(doct,n2);
          printf("No of emp(max 10):     ");
          scanf("%d",&n3);
          empl(em,n3);
          printf("%s \n",doct[0].pa[0].patID);
          t=1;
        }//endofif
        else
        {
	  int tem1,tem2,t3,t4,t5,t6,t7,t8,l1,l2,l3,t9;char user[100],pass[100],user1[100],kaam[100],kama[100],kaama[100];

            while(1)
            {
               //system("cls");
               t8=0;
               t7=0;
               printf("LOGIN SCREEN\n");
               printf("_____ ______\n\n\n\n");
               printf("Login as?? \n1)Patient\n2)Doctor\n3)Staff\n4)Admin\n5)Hospital\n6)Exit program\n\nEnter choice: ");
               scanf("%d",&tem1);
               switch(tem1)
               {
                   case 1: //system("cls");
                           printf("Enter name: ");
                           scanf(" %[^\n]",kaam);
                           printf("Enter hospital:  ");
                           scanf(" %[^\n]",kama);
                           printf("Enter doctor ID:   ");
                           scanf(" %[^\n]",kaama);
                           printf("Enter ID: ");
                           scanf(" %[^\n]",user);
                           printf("Enter password:  ");
                           scanf(" %[^\n]",pass);t8=0;
                           for(l1=0;l1<n2;l1++)
      {for(l2=0;l2<doct[l1].no;l2++){if(strcmp(doct[l1].pa[l2].patID,user)==0&&strcmp(doct[l1].pa[l2].password,pass)==0&&strcmp(doct[l1].pa[l2].name,kaam)==0&&strcmp(doct[l1].hos_name,kama)==0&&strcmp(doct[l1].ID,kaama)==0)
                                    {

                                        printf("MEDICAL REPORT AND BILL\n");
                                        printf("_____ ___________\n");
                                        printf("Patient name: %s \n",doct[l1].pa[l2].name);
                                        printf("Patient ID: %s \n",doct[l1].pa[l2].patID);
                                        printf("Patient address: %s \n",doct[l1].pa[l2].address);
                                        printf("Patient phone number: %s \n",doct[l1].pa[l2].phone);
                                        printf("Patient age: %d \n",doct[l1].pa[l2].age);
                                        printf("Bill amount: Rs %d /-\n",doct[l1].pa[l2].payment);
                                        printf("Gender: %c \n",doct[l1].pa[l2].gender);
                                        printf("Ailment: %s \n",doct[l1].pa[l2].disease);
                                        printf("Doctor's name: %s \n",doct[l1].pa[l2].doc);
                                        printf("History: %s \n",doct[l1].pa[l2].history);
                                        printf("Admit date : %s \n",doct[l1].pa[l2].date);
                                        printf("Treatment: %s \n",doct[l1].pa[l2].treatment);
                                        printf("Medication: %s \n",doct[l1].pa[l2].med);
                                        t8=1;t4=0;

                                        while(1)
                                       {
                                          t4=0;
                                          printf("\n1)Change password\n2)Download medical report\n3)Download bill\n4)Exit\nEnter choice: ");
                                          scanf("%d",&t5);  char ss[100];FILE *fp;
                                          switch(t5)
                                          {
                                                case 1:
                                                        printf("Enter old password:   ");
                                                        scanf(" %[^\n]",user1);
                                                        if(strcmp(user1,doct[l1].pa[l2].password)==0)
                                                       {


                                                           printf("Enter new password:  ");
                                                           scanf(" %[^\n]",doct[l1].pa[l2].password);
                                                       }
                                                       else printf("Wrong old password\n");

                                                       break;
                                                case 2:

                                                      strcpy(ss,doct[l1].pa[l2].name);

                                                        strcat(ss,".txt");
                                                        fp=fopen(ss,"w");
                                                        if(fp==NULL)
                                                        {exit(1);}
                                                        fprintf(fp,"MEDICAL REPORT\n");
                                                        fprintf(fp,"_____ ___________\n");
                                                        fprintf(fp,"Patient name: %s \n",doct[l1].pa[l2].name);
                                                        fprintf(fp,"Patient ID: %s \n",doct[l1].pa[l2].patID);
                                                        fprintf(fp,"Patient address: %s \n",doct[l1].pa[l2].address);
                                                        fprintf(fp,"Patient phone number: %s \n",doct[l1].pa[l2].phone);
                                                        fprintf(fp,"Patient age: %d \n",doct[l1].pa[l2].age);
                                                        fprintf(fp,"Gender: %c \n",doct[l1].pa[l2].gender);
                                                        fprintf(fp,"Ailment: %s \n",doct[l1].pa[l2].disease);
                                                        fprintf(fp,"Doctor's name: %s \n",doct[l1].pa[l2].doc);
                                                        fprintf(fp,"History: %s \n",doct[l1].pa[l2].history);
                                                        fprintf(fp,"Admit date : %s \n",doct[l1].pa[l2].date);
                                                        fprintf(fp,"Treatment: %s \n",doct[l1].pa[l2].treatment);
                                                        fprintf(fp,"Medication: %s \n",doct[l1].pa[l2].med);
                                                         fclose(fp);
                                                         printf("Downloaded\n");
                                                         break;

                                               case 3:

                                                       strcpy(ss,doct[l1].pa[l2].name);

                                                        strcat(ss,"bill.txt");
                                                        fp=fopen(ss,"w");
                                                        if(fp==NULL)
                                                        {exit(1);}
                                                        fprintf(fp,"BILL\n");
                                                        fprintf(fp,"____\n");
                                                        fprintf(fp,"Patient name: %s \n",doct[l1].pa[l2].name);
                                                        fprintf(fp,"Patient ID: %s \n",doct[l1].pa[l2].patID);
                                                          fprintf(fp,"Doctor's name: %s \n",doct[l1].pa[l2].doc);
                                                            fprintf(fp,"Medication: %s \n",doct[l1].pa[l2].med);
                                                              fprintf(fp,"Bill amount in rupees: %d \n",doct[l1].pa[l2].payment);
                                                              fclose(fp);
                                                             printf("Downloaded\n");break;
                                                default:t4=1;break;






                                          }

                                           if(t4==1)break;

                                       }
                                   
					if(t4==1)break;
                                   }
				    if(t4==1)break;
                                 }
                            }
                            if(t8==0)printf("\nWrong login details\n");


                            break;
                      case 2:
                               printf("Enter name:  ");
                               scanf(" %[^\n]",kaam);


                               printf("Enter ID: ");
                              scanf(" %[^\n]",user);
                              printf("Enter password:  ");
                              scanf(" %[^\n]",pass);t8=0;t9=0;
                              for(l2=0;l2<n2;l2++)
                               {
                                   if(strcmp(doct[l2].ID,user)==0&&strcmp(doct[l2].password,pass)==0&&strcmp(doct[l2].name,kaam)==0)
                                   {
                                      while(1)
                                      {
					t9=1;
                                       printf("1)Add patients\n2)Delete patient\n3)View patient\n4)Change password\n5)Edit patient details\n6)Exit\nEnter choice: ");
                                       scanf("%d",&t6);
                                       switch(t6)
                                       {

                                           case 1:
                                           printf("Name of patient: ");
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].name);
                                           
                                           int jj,flaj;
                                           while(1)
					     {
                                               printf("ID:  ");flaj=0;
                                               //fgets(doo[i].patID,100,stdin);
                                                scanf(" %[^\n]",doct[l2].pa[doct[l2].no].patID);
                                                for(jj=0;jj<doct[l2].no;jj++)
						  if(strcmp(doct[l2].pa[doct[l2].no].patID,doct[l2].pa[jj].patID)==0)
						    flaj=1;
                                                if(flaj==0)break;
                                                printf("\nID occupied\n");
                                                     

                                             }
                                           printf("Gender(m/f):  ");
                                           scanf(" %c",&doct[l2].pa[doct[l2].no].gender);
                                           printf("Address:   ");
                                           //fgets(doo[i].address,100,stdin);
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].address);
                                           printf("Phone number:   ");
                                           //fgets(doo[i].address,100,stdin);
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].phone);

                                           printf("Disease(separated by comma):    ");
                                           //fgets(doo[i].disease,100,stdin);
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].disease);
                                           printf("History(separated by comma):      ");
                                           //fgets(doo[i].history,100,stdin);
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].history);
                                           strcpy(doct[l2].pa[doct[l2].no].doc,doct[l2].name);
                                           printf("Treatment:      ");
                                           //fgets(doo[i].treatment,100,stdin);
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].treatment);
                                           printf("Age:   ");
                                           scanf("%d",&doct[l2].pa[doct[l2].no].age);
                                           printf("Payment:  ");
                                           scanf("%d",&doct[l2].pa[doct[l2].no].payment);
                                           printf("Password:  ");
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].password);
                                           printf("Medication:  ");
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].med);
                                           printf("Admit date:  ");
                                           scanf(" %[^\n]",doct[l2].pa[doct[l2].no].date);
                                           doct[l2].no++;break;
                                           case 2:
                                                    printf("Enter ID: ");
						    scanf(" %[^\n]",user1);int j;
                                                     for(l1=0;l1<doct[l2].no;l1++)
                                                     {
                                                         if(strcmp(doct[l2].pa[l1].patID,user1)==0)
                                                        {
							  strcpy(doct[l2].pa[l1].patID,"deleted");break;


                                                        }

                                                     }break;
                                          case 3:
                                                     printf("Enter ID: ");
                                                     scanf(" %[^\n]",user1);
                                                     for(l1=0;l1<doct[l2].no;l1++)
                                                     {
                                                         if(strcmp(doct[l2].pa[l1].patID,user1)==0)
                                                        {
                                                          printf("MEDICAL REPORT AND BILL\n");
                                                          printf("_____ ___________\n");
                                                          printf("Patient name: %s \n",doct[l2].pa[l1].name);
                                                          printf("Patient ID: %s \n",doct[l2].pa[l1].patID);
                                                          printf("Patient address: %s \n",doct[l2].pa[l1].address);
                                                          printf("Patient phone number: %s \n",doct[l2].pa[l1].phone);
                                                          printf("Patient age: %d \n",doct[l2].pa[l1].age);
                                                          printf("Bill amount: Rs %d /-\n",doct[l2].pa[l1].payment);
                                                          printf("Gender: %c \n",doct[l2].pa[l1].gender);
                                                          printf("Ailment: %s \n",doct[l2].pa[l1].disease);
                                                          printf("Doctor's name: %s \n",doct[l2].pa[l1].doc);
                                                          printf("History: %s \n",doct[l2].pa[l1].history);
                                                          printf("Admit date : %s \n",doct[l2].pa[l1].date);
                                                          printf("Treatment: %s \n",doct[l2].pa[l1].treatment);
                                                          printf("Medication: %s \n",doct[l2].pa[l1].med);
                                                        }
                                                     }break;
                                          case 4:
                                                    printf("Enter old password:   ");
                                                    scanf(" %[^\n]",user1);
                                                    if(strcmp(user1,doct[l2].password)==0)
                                                   {


                                                        printf("Enter new password:  ");
                                                        scanf(" %[^\n]",doct[l2].password);
                                                   }
                                         else printf("Wrong old password\n");

                                         break;



                                         case 5:
                                                   printf("Enter patient ID:  ");
                                                   scanf(" %[^\n]",user1);
                                                   for(l1=0;l1<doct[l2].no;l1++)
                                                   {

                                                     if(strcmp(doct[l2].pa[l1].patID,user1)==0)
                                                    {
                                                      printf("New treatment:   ");
                                                      scanf(" %[^\n]",doct[l2].pa[l1].treatment);
                                                      printf("New medication:   ");
                                                      scanf(" %[^\n]",doct[l2].pa[l1].med);
                                                      break;
                                                    }








                                                   }

                                                        if(l1==doct[l2].no)
                                                        printf("Patient not found\n");




                                                       break;
                                          default:t8=1;break;

                                      }
                                        if(t8==1)break;
                                     }
                                         if(t8==1)break;
                                   }
                                }
			      if(t9==0)printf("Wrong login\n");
                                     break;
                      case 3:
                                    printf("Enter name:  ");
                                    scanf(" %[^\n]",kaam);


                                    printf("Enter ID: ");
                                     scanf(" %[^\n]",user);
                                    printf("Enter password:  ");
                                    scanf(" %[^\n]",pass);t8=0;t9=0;int tempor,tempora,temporar;
                                    for(l2=0;l2<n3;l2++)
                                   {

                                        if(strcmp(em[l2].ID,user)==0&&strcmp(em[l2].password,pass)==0&&strcmp(em[l2].name,kaam)==0)
                                      {

                                             while(1)
                                             {
                                                 t8=0;
                                                 printf("1)Change password\n2)View information\n3)Update payment\n4)Update supply status\n5)Update meds\n6)Exit\n\nEnter choice:      ");
                                                 scanf("%d",&t6);
                                                 switch(t6)
                                                 {
                                                    case 1:
                                                            printf("Enter old password:   ");
                                                            scanf(" %[^\n]",user1);
                                                            if(strcmp(user1,em[l2].password)==0)
                                                           {


                                                              printf("Enter new password:  ");
                                                              scanf(" %[^\n]",em[l2].password);
                                                           }
                                                           else printf("Wrong old password\n");





                                                                 break;


                                                    case 2:

                                                                printf("EMPLOYEE DETAILS\n");
                                                                printf("Name: %s \n",em[l2].name);

                                                                printf("ID:  %s \n",em[l2].ID);


                                                                printf("Gender:  %c \n",em[l2].gender);

                                                                printf("Address:   %s \n",em[l2].address);


                                                                printf("Phone:     %s \n",em[l2].phone);


                                                                printf("Job:     %s \n",em[l2].job);


                                                                printf("Hospital+branch:   %s \n",em[l2].hos_name);




                                                                 break;
                                                    case 3:

						                if(strcmp(em[l2].job,"receptionist")!=0)
                                                        {printf("Not receptionist\n");break;}
                                                                 printf("Enter patient ID :  ");
                                                                 scanf(" %[^\n]",user1);tempor=0;
                                                                 for(l1=0;l1<n2;l1++)
                                                                 {

                                                                    for(l3=0;l3<doct[l1].no;l3++)
					 if(strcmp(doct[l1].pa[l3].patID,user1)==0&&strcmp(doct[l1].hos_name,em[l2].hos_name)==0&&strcmp(em[l2].job,"receptionist")==0)
                                                                    {
                                                                          printf("Edit payment amount: " );
                                                                         scanf("%d",&doct[l1].pa[l3].payment);
                                                                            tempor=1;




                                                                    }
                                                                  }
                                                                      
                                                                    if(tempor==0)printf("Patient not found in hospital\n");
                                                                 break;

                                                    case 4:
                                                                tempora=0;
                                                               for(l3=0;l3<n1;l3++)
								 if(strcmp(em[l2].hos_name,h[l3].name)==0&&strcmp(em[l2].job,"nurse")==0)
                                                               {
                                                                    printf("Enter new status of supply:   ");
                                                                    scanf(" %[^\n]",h[l3].supply);
                                                                     tempora=1;




                                                               }if(!tempora)printf("Not nurse\n");


                                                                         break;
                                                      case 5:
                                                        temporar=0;
                                                      for(l3=0;l3<n1;l3++)
							if(strcmp(em[l2].hos_name,h[l3].name)==0&&strcmp(em[l2].job,"pharmacist")==0)
                                                      {
                                                           printf("Enter new qty of meds:   ");
                                                           scanf("%d %d",&h[l3].medicine1,&h[l3].medicine2);
                                                            temporar=1;




                                                      }if(!temporar)printf("Not pharmacist\n");


                                                                break;







                                                    default:
                                                                  t8=1;break;
















                                                 }








                                                      if(t8==1)
                                                      break;



                                             }


                                          if(t8==1)break;




                                      }
                                   }
				    if(t9==0)printf("Wrong login details\n");
                                      break;


                      case 4:       printf("Enter ID: ");
                                    scanf(" %[^\n]",user);
                                    printf("Enter password:  ");
                                    scanf(" %[^\n]",pass);t8=0;t9=0;
                                    if(strcmp(user,"admin")==0&&strcmp(pass,"password")==0)
                                    {

                                          while(1)
                                          {
					    t9=1;
                                               printf("1)Add hospital\n2)Remove hospital\n3)Add doctor\n4)Remove doctor\n5)Add staff\n6)Remove staff\n7)Exit\nEnter choice:  ");t9=1;                                                  
                                                scanf("%d",&t5);
                                                switch(t5)
                                                {
                                                    case 1:
                                                             if(n1>=20)
                                                             printf("Capacity exceeded\n");
                                                             else
                                                             {
							       int fla,j;
							       while(1)
								 {
								   printf("Name: ");fla=0;
                                                                    scanf(" %[^\n]",h[n1].name);
                                                                    for(j=0;j<n1;j++)
                                                                      if(strcmp(h[n1].name,h[j].name)==0)
									fla=1;
								    if(fla==0)break;
								    printf("\nID occupied\n");
								 }
                                                               printf("Address: ");
                                                               scanf(" %[^\n]",h[n1].address);
                                                               printf("Branches(separate by comma): ");
                                                               scanf(" %[^\n]",h[n1].branches);
                                                               printf("Departments(separate by comma):  ");
                                                               scanf(" %[^\n]",h[n1].department);
                                                               printf("Facilities(separate by comma):   ");

                                                               scanf(" %[^\n]",h[n1].fac);
                                                               n1++;




                                                             }break;
                                                    case 2:
                                                              if(n1<=0)
                                                              printf("Nothing to remove\n");
                                                              else
                                                              {
                                                                   char naam[100];
                                                                   printf("Enter the hospital to be removed:  ");
                                                                   scanf(" %[^\n]",naam);
                                                                   int k;
                                                                   for(k=0;k<n1;k++)
                                                                   if(strcmp(h[k].name,naam)==0)
                                                                   {
								     strcpy(h[k].name,"Deleted");break;
                                                                    }





                                                              }break;
                                                    case 3:
                                                    if(n2>=20)
                                                    printf("Capacity exceeded\n");
                                                    else
                                                    {


                                                      printf("Name of doctor: ");
                                                      scanf(" %[^\n]",doct[n2].name);
                                                      
                                                         printf("Hospital+branch:   ");
                                                      //fgets(doo[i].hos_name,100,stdin);
                                                      scanf(" %[^\n]",doct[n2].hos_name);
                                                      while(1)
							{
							  int j,fla;
							  printf("ID:  ");fla=0;

                                                           scanf(" %[^\n]",doct[n2].ID);
							   for(j=0;j<n2;j++)
							     if(strcmp(doct[n2].ID,doct[j].ID)==0&&strcmp(doct[n2].hos_name,doct[j].hos_name)==0)
							       fla=1;
							   if(fla==0)break;
							   printf("\nID occupied\n");

                                                          }
                                                      printf("Gender(m/f):  ");
                                                      scanf(" %c",&doct[n2].gender);
                                                      printf("Address:   ");
                                                      //fgets(doo[i].address,100,stdin);
                                                      scanf(" %[^\n]",doct[n2].address);
                                                      printf("Phone:     ");
                                                      //fgets(doo[i].phone,30,stdin);
                                                      scanf(" %[^\n]",doct[n2].phone);
                                                      printf("Specialities(separated by comma):    ");
                                                      //fgets(doo[i].special,100,stdin);
                                                      scanf(" %[^\n]",doct[n2].special);
                                                      printf("Degree(separated by comma):      ");
                                                      //fgets(doo[i].degree,100,stdin);
                                                      scanf(" %[^\n]",doct[n2].degree);
                                                     
                                                      printf("Password:  ");
                                                      scanf(" %[^\n]",doct[n2].password);
                                                      printf("Number of patients:  ");
                                                      int q;
                                                      scanf("%d",&q);
                                                      doct[n2].no=q;
                                                      pate(doct[n2].pa,q,doct[n2].name);
                                                      n2++;



                                                    }break;
                                            case 4:

                                            if(n2<=0)
                                            printf("Nothing to remove\n");
                                            else
                                            {
                                                 char naam[100];
                                                 printf("Enter the doctor ID to be removed:  ");
                                                 scanf(" %[^\n]",naam);
                                                 int k;
                                                 for(k=0;k<n2;k++)
                                                 if(strcmp(doct[k].ID,naam)==0)
                                                 {
						   strcpy(doct[k].ID,"deleted");break;                  
                                                  }





                                            }break;
                                                        break;

                                            case 5:

                                                         if(n1>=10)
                                                         printf("Capacity exceeded\n");
                                                         else
                                                         {
                                                           printf("Name of employee: ");
                                                           scanf(" %[^\n]",em[n3].name);
                                                            printf("Hospital+branch:   ");
                                                           //fgets(doo[i].hos_name,100,stdin);
                                                           scanf(" %[^\n]",em[n3].hos_name);
                                                           while(1)
							     {
							       printf("ID:  ");int j,fla=0;
                                                           //fgets(doo[i].ID,100,stdin);
                                                           scanf(" %[^\n]",em[n3].ID);
							   for(j=0;j<n3;j++)
							     if(strcmp(em[n3].ID,em[j].ID)==0&&strcmp(em[n3].hos_name,em[j].hos_name)==0)
							       fla=1;
							   if(fla==0)break;
							   printf("\nID occupied\n");
							     }
                                                            printf("Gender(m/f):  ");
                                                           scanf(" %c",&em[n3].gender);
                                                           printf("Address:   ");
                                                           //fgets(doo[i].address,100,stdin);
                                                           scanf(" %[^\n]",em[n3].address);
                                                           printf("Phone:     ");
                                                           //fgets(doo[i].phone,30,stdin);
                                                           scanf(" %[^\n]",em[n3].phone);
                                                           printf("Job:     ");
                                                           //fgets(doo[i].job,50,stdin);
                                                           scanf(" %[^\n]",em[n3].job);
                                                          
                                                           printf("Password:      ");
                                                           scanf(" %[^\n]",em[n3].password);
                                                           n3++;
                                                         }
                                                         break;

                                             case 6:


                                             if(n3<=0)
                                             printf("Nothing to remove\n");
                                             else
                                             {
                                                  char naam[100];
                                                  printf("Enter the ID to be removed:  ");
                                                  scanf(" %[^\n]",naam);
                                                  int k;
                                                  for(k=0;k<n2;k++)
                                                  if(strcmp(em[k].ID,naam)==0)
                                                  {
						    strcpy(em[k].ID,"deleted");
                                                   }





                                             }break;






                                                         break;

                                             default:
                                                          t8=1;

                                                       break;



                                                }
                                          if(t8)break;

                                          }
                                    }
                                      
				    if(t9==0)printf("Wrong login\n");
                                       break;
                      case 5:
                                     printf("Enter details of hospital to be displayed:    ");
                                     scanf(" %[^\n]",user);flag2=0;

                                     for(l1=0;l1<n1;l1++)
                                     if(strcmp(h[l1].name,user)==0)
                                     {
                                         flag2=1;
                                         printf("Name:  %s \n",h[l1].name);
                                         printf("Address:  %s \n",h[l1].address);
                                         printf("Branches:  %s \n",h[l1].branches);
                                         printf("Department:  %s \n",h[l1].department);
                                         printf("Supply:  %s \n",h[l1].supply);
                                         printf("Facilities:  %s \n",h[l1].fac);
                                         printf("Qty of medicine 1:  %d \n",h[l1].medicine1);
                                         printf("Qty of medicine 2:  %d \n",h[l1].medicine2);
                                         printf("DOCTORS\n");
                                         for(l2=0;l2<n2;l2++)
					   if(strcmp(doct[l2].hos_name,h[l1].name)==0&&strcmp(doct[l2].ID,"deleted")!=0)
                                          {printf(" %s",doct[l2].name); printf("\n");}
                                          printf("EMPLOYEES\n");
                                          for(l2=0;l2<n3;l2++)
					    if(strcmp(em[l2].hos_name,h[l1].name)==0&&strcmp(em[l2].ID,"deleted")!=0)
                                           {printf(" %s",em[l2].name); printf("\n");}









                                     }
                                      if(flag2==0)printf("Hospital not found\n");

                                      break;
                      default: flag=1;t7=1;break;
                }
                    if(t7==1)break;
              }


            }

         if(flag==1)break;
       }
       p1=fopen("hospital.bin","wb");
       p2=fopen("doctor.bin","wb");
       p3=fopen("employee.bin","wb");
      fwrite(&n1, sizeof(int), 1, p1);
      fwrite(&n2, sizeof(int), 1, p2);
      fwrite(&n3, sizeof(int), 1, p3);
      for(i=0;i<n1;i++)
      fwrite(&h[i], sizeof(hospital), 1, p1);
      for(i=0;i<n2;i++)
      fwrite(&doct[i], sizeof(doctor), 1, p2);
      for(i=0;i<n3;i++)
      fwrite(&em[i], sizeof(employee), 1, p3);
      fclose(p1);
      fclose(p2);
      fclose(p3);













       return 0;
}
