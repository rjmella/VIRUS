/* menu */

#include<stdio.h>
#include<stdlib.h>


int main ()

{
	int mainmenu1;
	menu:
	
printf("\n\n\n\t\t\t______________last week_______");
printf("\n\n\t\tYou need chaos to give birth to a dancing star");
printf("________________________________________");
printf("\n\n\n\t\t1)Start");
printf("\n\n\n\t\t2)How to Play");
printf("\n\n\n\t\t3)quit\n\n\t");
printf("___________***__________***______________***_________________***__________***______________***_________________***__________***______________***_________________***__________***______________***______");

	
	scanf("%d",&mainmenu1);
	system("\n\n\tpause");
system("cls");


{
	

		if(mainmenu1 ==1 )
			{
				int choose1;
	  		  char arr[1][32]; 
   			 int i; 
   				printf("\n\n\tinput name\n\t");
  			  for ( i=0;i<1;i++) 
  			  { 
   			     scanf ("\n\n\t\t%31s",&arr[i]); 
   				 } 
 
    			for (i=0;i<1;i++) 
    			
    			
    			
   			 { 
   			 
   			  
   			 
   			 	int	defence[100];
   			 	int	engineering[100];
   			 	int	environmentalist[100];
   			 	int	farmers[100];
   			 	int	medics[100];
   			 	int	happiness[100];
   			 		
   			 	int	funds[100];
   			 	int	citizens[100];
   			 	int	tax[100];
   			 		
   			 	int	enemies[100];
   			 		
   			 		
   			 		
   			 		
  			     		      printf("\n\n\tAI: GOODMORNING  %s and welcome to your first week as the new president",arr[i]);  
  			      printf("\n\n\n\there are your weekly updates");
  			      printf("\n\n\tEngineering: have found a nearby habitable nearby planet,   100 engineering pts will provide the necessary supplies to create a spaceship that will give us a new start. \n\tCurrent pts=0");
  			      printf("\n\n\tDefence department:The enemies are growing in number, last they attacked and took out a number of citizen.  If you want to have a safer society you better fund me quickly\n\tCurrent pts=10");
  			      printf("\n\n\tEnvironmentalist:we are currently tring to create a cure for earth ,100 environmental will be sufficient in reviving our dead planet\n\tCurrent pts=0");
  			      printf("\n\n\tfarmers: we are low on supplies, you better fund us immediately if you dont want your citizens to die \n\tCurrent pts=50");
  			      printf("\n\n\tMedics: funding is neccessary if you want healthy citizens \n\n\t  ");
  			      
  					defence[1]=10;
   			 		engineering[1]=0;
   			 		environmentalist[1]=0;
   			 		farmers[1]=1000;
   			 		medics[1]=100;
   			 		happiness[1]=20;
  			      	
						
					
   			 		citizens[1]=1000;
   			 		tax[1]=10;
   			 		
   			 	
   			 		funds[1]=citizens[1]*tax[1]/100;
   			 		enemies[1]=15;
   			 		
  			      	
  			      system("pause");
  			      system("cls");
  			      printf("week 1\n");
  			      printf("current pts\n");
  			      
  			      printf("funds = %i  ",funds[1]);
  			      printf("\ndefence = %i",defence[1] );
  			      printf("\nengineering = %i", engineering[1]);
  			       printf("\nenvironmentalist = %i", engineering[1]);
  			        
  			      printf("\nfood = %i", farmers[1]);
  			      printf("\nmedics = %i", medics[1]);
  			      printf("\nhappiness = %i", happiness[1]);
  			      printf("\ncitizens =%i", citizens[1]);
  			      printf("\nenemies = %i(note if level of enemies becomes greater than defence by the end of the week, city will be overun and you will lose)", enemies[1]);
  			      
  			      printf("\n______________________________________________________________\n");
  			      printf("\n\n\nAI: each week your task is to allocate funds that was collected the week before\n\t current funds=%i\n",funds[1]);
  			      
  			      
  			      
  			  	funds1: /*************weekly fund allocation***************/
					    printf("\nHow much funds do you want to alocate to defence ?\t");
  			    
			    
  			      scanf("%i",&funds[2]);
  			      funds[3]=funds[1]-funds[2];
  			      	if(funds[2]>funds[1])
  			      	{
  			      		printf("you don't have that much money\n");
  			      		goto funds1;
  			      	}
  			   
  			   funds2:
  			      printf("How much do you want to alocate to farmers?\n");
  			       printf("current funds = %i\t", funds[3]);
  			       
  			       scanf("%i", &funds[4]);
  			    	funds[5]=funds[3]-funds[4];
  			    		if(funds[4]>funds[3])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds2;
  			      	}
  			    funds3:
  					printf("How much do you want to alocate to Medicine?\n");
  			        printf("current funds = %i\t", funds[5]);
  			          
  			       scanf("%i", &funds[6]);
  			    	funds[7]=funds[5]-funds[6];
  			    		if(funds[6]>funds[5])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds3;
					}
				funds4:
  					printf("How much do you want to alocate to Engineering?\n");
  			        printf("current funds = %i\t", funds[7]);
  			          
  			       scanf("%i", &funds[8]);
  			    	funds[9]=funds[7]-funds[8];
  			    		if(funds[7]<funds[8])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds4;
					}
				funds5:
  					printf("How much do you want to alocate to Environmentalist?\n");
  			        printf("current funds = %i\t", funds[9]);
  			          
  			       scanf("%i", &funds[10]);
  			    	funds[11]=funds[9]-funds[10];
  			    		if(funds[9]<funds[10])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds5;
  			      	}
  			     
					/**************end of weekly fund allocation********/
					tax1:/*CONFIRMATION*/
					printf("\n\n\tenter Tax percent (0-100) for next week");
					scanf("%i",&tax[1]);
					if(tax[1]>100)
					{
						printf("enter value within boundary");
						goto tax1;
					}
					
					defence[2]=defence[1]+funds[2];
   			 		
   			 		farmers[2]=farmers[1]+funds[4]*100;
   			 		medics[2]=medics[1]+funds[6]/2;
   			 		engineering[2]=engineering[1]+funds[8];
   			 		environmentalist[2]=environmentalist[1]+funds[10];
   			 		enemies[2]=enemies[1];
   			 		happiness[2]=defence[2]-enemies[2]+medics[2]/4-tax[1]/3;
   			 		citizens[2]=citizens[1]+happiness[2]-enemies[2];
   			 		funds[12]=citizens[2]*tax[1]/200;
   			 		funds[13]=funds[12]+funds[11];
						
					
				printf("\n\n\tend of allocation report");
				printf("\n\n\t\tdefence = %i ", defence[2] );
				printf("\n\n\t\tfarmers = %i", farmers[2] );
				printf("\n\n\t\tmedics = %i", medics[2] );
				printf("\n\n\t\tengineering = %i", engineering[2] );
				printf("\n\n\t\tenvironmentalist = %i", environmentalist[2] );
				printf("\n\n\t\tenemies = %i", enemies[2]);
				printf("\n\n\t\thapinness = %i", happiness[2]);
				printf("\n\n\t\tnumber of citizens = %i", citizens[2]);
					printf("\n\n\t\tfunds for next week = %i", funds[13]);
					
					printf("\n\n\n\n\t are you happy your allocation. \n\t1)yes\n\t2)no");
					int b;
					scanf("%i",&b);
					
					if(b==2)
					{
						system("\npause");
						system("cls");
						goto funds1;
						
					}
					else if(b==1)
					{
						system("pause");
						system("cls");
						printf("______________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^___");
						printf("\n\n\n\n\tthe week passes by with no events \n\n\t");
						system("pause");
						system("cls");
					}
				
				printf("End of Week report");/***************END OF WEEK REPORT*/
					defence[3]=defence[2]-enemies[2];
   			 		
   			 		farmers[3]=farmers[2]-1.5*citizens[2];
   			 		medics[3]=medics[2]-citizens[2]/28;
   			 		engineering[2]=engineering[1]+funds[8];
   			 		environmentalist[2]=environmentalist[1]+funds[10];
   			 			printf("\n\n\t\tdefence (defence - enemies) = %i ", defence[3] );
				printf("\n\n\t\tfarmers (food - citizens)= %i", farmers[3] );
				printf("\n\n\t\tmedics (medics-citizens) = %i", medics[3] );
				printf("\n\n\t\tengineering = %i", engineering[2] );
				printf("\n\n\t\tenvironmentalist = %i\n\n", environmentalist[2] );
   			 	printf("_________________________________________________________________________");
   			 	
   			 	if (defence[3]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\tdefence = %i", defence[3]);
   			 		printf("\n\n\t\tYour City has been overun by enemies");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 	}
						
				 	if (farmers[3]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\farmer = %i", farmers[3]);
   			 		printf("\n\n\t\tYour citezens has starved to death");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
   			 		if (medics[3]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\medics = %i", medics[3]);
   			 		printf("\n\n\t\tdisease has spread");
   			 		printf("\n\n\t\tcharacter analysis\n\n\tcarelessness:100%");
   			 		
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
				
				
						if (engineering[2]>100)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\engineering = %i", engineering[2]);
   			 		printf("\n\n\t\tyou have created a spaceship, you now set forth to the distant planet");
   			 		printf("\n\n\t\t WIN");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
   			 			if (environmentalist[2]>100)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\environmentalist = %i", environmentalist[2]);
   			 		printf("\n\n\t\tyour environmentalist has cured the planet of pollution");
   			 		printf("\n\n\t\t WIN");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}/**************END OF WEEK1*/
			
			
			
				system("pause");
				system("cls");
  			    printf("\n\n\tAI: GOODMORNING  %s and welcome to your second week as president\n\n",arr[i]);  
  			 
  			      
  				
  			      	
  			      system("pause");
  			      system("cls");
  			      printf("week 2\n");
  			      printf("current pts\n");
  			      
  			      printf("funds = %i  ",funds[13]);
  			      printf("\ndefence = %i",defence[3] );
  			      printf("\nengineering = %i", engineering[2]);
  			       printf("\nenvironmentalist = %i", environmentalist[2]);
  			        
  			      printf("\nfood = %i", farmers[3]);
  			      printf("\nmedics = %i", medics[3]);
  			      printf("\nhappiness = %i", happiness[2]);
  			      printf("\ncitizens =%i", citizens[2]);
  			      printf("\nenemies = %i(note if level of enemies becomes greater than defence by the end of the week, city will be overun and you will lose)", enemies[1]);
  			      
  			      printf("\n______________________________________________________________\n");
  			      printf("\n\n\nAI: each week your task is to allocate funds that was collected the week before\n\t current funds=%i\n",funds[13]);
  			      
  			    funds6: /*************weekly fund allocation***************/
					    printf("\nHow much funds do you want to alocate to defence ?\t");
  			    
			    
  			      scanf("%i",&funds[14]);
  			      funds[15]=funds[13]-funds[14];
  			      	if(funds[14]>funds[13])
  			      	{
  			      		printf("you don't have that much money\n");
  			      		goto funds6;
  			      	}
  			   
  			   funds7:
  			      printf("How much do you want to alocate to farmers?\n");
  			       printf("current funds = %i\t", funds[15]);
  			       
  			       scanf("%i", &funds[16]);
  			    	funds[17]=funds[15]-funds[16];
  			    		if(funds[16]>funds[15])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds7;
  			      	}
  			    funds8:
  					printf("How much do you want to alocate to Medicine?\n");
  			        printf("current funds = %i\t", funds[17]);
  			          
  			       scanf("%i", &funds[18]);
  			    	funds[19]=funds[17]-funds[18];
  			    		if(funds[18]>funds[17])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds8;
					}
				funds9:
  					printf("How much do you want to alocate to Engineering?\n");
  			        printf("current funds = %i\t", funds[19]);
  			          
  			       scanf("%i", &funds[20]);
  			    	funds[21]=funds[19]-funds[20];
  			    		if(funds[19]<funds[20])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds9;
					}
				funds10:
  					printf("How much do you want to alocate to Environmentalist?\n");
  			        printf("current funds = %i\t", funds[21]);
  			          
  			       scanf("%i", &funds[22]);
  			    	funds[23]=funds[21]-funds[22];
  			    		if(funds[21]<funds[22])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds10;
  			      	}
  			     
					/**************end of weekly fund allocation********/
			
			
				tax2:/*CONFIRMATION*/
					printf("\n\n\tenter Tax percent (0-100) for next week");
					scanf("%i",&tax[2]);
					if(tax[2]>100)
					{
						printf("enter value within boundary");
						goto tax2;
					}
					
					defence[4]=defence[3]+funds[14];
   			 		
   			 		farmers[4]=farmers[3]+funds[16]*100;
   			 		medics[4]=medics[3]+funds[18]/2;
   			 		engineering[3]=engineering[2]+funds[20];
   			 		environmentalist[3]=environmentalist[2]+funds[22];
   			 		enemies[3]=enemies[2]+3;
   			 		happiness[3]=defence[4]-enemies[3]+medics[4]/4-tax[2]/3;
   			 		citizens[3]=citizens[2]+happiness[3]-enemies[3];
   			 		funds[24]=citizens[3]*tax[2]/200;
   			 		funds[25]=funds[23]+funds[24];
						
					
				printf("\n\n\tend of allocation report");
				printf("\n\n\t\tdefence = %i ", defence[4] );
				printf("\n\n\t\tfarmers = %i", farmers[4] );
				printf("\n\n\t\tmedics = %i", medics[4] );
				printf("\n\n\t\tengineering = %i", engineering[3] );
				printf("\n\n\t\tenvironmentalist = %i", environmentalist[3] );
				printf("\n\n\t\tenemies = %i", enemies[3]);
				printf("\n\n\t\thapinness = %i", happiness[3]);
				printf("\n\n\t\tnumber of citizens = %i", citizens[3]);
					printf("\n\n\t\tfunds for next week = %i", funds[25]);
					
					printf("\n\n\n\n\t are you happy your allocation. \n\t1)yes\n\t2)no");
					int b1;
					scanf("%i",&b1);
					
					if(b1==2)
					{
						system("\npause");
						system("cls");
						goto funds6;
						
					}
					else if(b1==1)
					{
						system("pause");
						system("cls");
						printf("______________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^___");
						printf("\n\n\n\n\tthe week passes by with no events \n\n\t");
						system("pause");
						system("cls");
					}
					
				printf("End of Week report");/***************END OF WEEK REPORT*/
					defence[5]=defence[4]-enemies[3];
   			 		
   			 		farmers[5]=farmers[4]-1.5*citizens[3];
   			 		medics[5]=medics[4]-citizens[3]/28;
   			 		engineering[3]=engineering[2]+funds[20];
   			 		environmentalist[3]=environmentalist[2]+funds[22];
   			 			printf("\n\n\t\tdefence (defence - enemies) = %i ", defence[5] );
				printf("\n\n\t\tfarmers (food - citizens)= %i", farmers[5] );
				printf("\n\n\t\tmedics (medics-citizens) = %i", medics[5] );
				printf("\n\n\t\tengineering = %i", engineering[3] );
				printf("\n\n\t\tenvironmentalist = %i\n\n", environmentalist[3] );
   			 	printf("_________________________________________________________________________");
   			 	
   			 	if (defence[5]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\tdefence = %i", defence[3]);
   			 		printf("\n\n\t\tYour City has been overun by enemies");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 	}
						
				 	if (farmers[5]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\farmer = %i", farmers[3]);
   			 		printf("\n\n\t\tYour citezens has starved to death");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
   			 		if (medics[5]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\medics = %i", medics[5]);
   			 		printf("\n\n\t\tdisease has spread");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
				
				
						if (engineering[3]>100)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\engineering = %i", engineering[2]);
   			 		printf("\n\n\t\tyou have created a spaceship, you now set forth to the distant planet");
   			 		printf("\n\n\t\t WIN");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
   			 			if (environmentalist[3]>100)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\environmentalist = %i", environmentalist[2]);
   			 		printf("\n\n\t\tyour environmentalist has cured the planet of pollution");
   			 		printf("\n\n\t\t WIN");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
				}/* end of week 2*/
				
					
					
					
			
				system("pause");
				system("cls");
  			    printf("\n\n\tAI: GOODMORNING  %s and welcome to your third week as president\n\n",arr[i]);  
  			 	printf("notice: Defence- Our Enemies has created a weapon that could wipe out our whole city. you have several options to win, have a defence that is higher than that of the enemies, have hapiness higher than 90 pts, develop the cure for the environment, or build the spaceship ");
  			      
  				
  			      	
  			      system("pause");
  			      system("cls");
  			      printf("week 3\n");
  			      printf("current pts\n");
  			      
  			      printf("funds = %i  ",funds[25]);
  			      printf("\ndefence = %i",defence[5] );
  			      printf("\nengineering = %i", engineering[3]);
  			       printf("\nenvironmentalist = %i", environmentalist[3]);
  			        
  			      printf("\nfood = %i", farmers[5]);
  			      printf("\nmedics = %i", medics[5]);
  			      printf("\nhappiness = %i", happiness[3]);
  			      printf("\ncitizens =%i", citizens[3]);
  			
  			      
  			      printf("\n______________________________________________________________\n");
  			      printf("\n\n\nAI: each week your task is to allocate funds that was collected the week before\n\t current funds=%i\n",funds[25]);
  			      
  			    funds12: /*************weekly fund allocation***************/
  			    
					    printf("\nHow much funds do you want to alocate to defence ?\t");
  			    
			    
  			      scanf("%i",&funds[26]);
  			      funds[27]=funds[25]-funds[26];
  			      	if(funds[26]>funds[25])
  			      	{
  			      		printf("you don't have that much money\n");
  			      		goto funds12;
  			      	}
  			   
  			   funds13:
  			      printf("How much do you want to alocate to farmers?\n");
  			       printf("current funds = %i\t", funds[27]);
  			       
  			       scanf("%i", &funds[28]);
  			    	funds[29]=funds[27]-funds[28];
  			    		if(funds[28]>funds[27])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds13;
  			      	}
  			    funds14:
  					printf("How much do you want to alocate to Medicine?\n");
  			        printf("current funds = %i\t", funds[29]);
  			          
  			       scanf("%i", &funds[30]);
  			    	funds[31]=funds[29]-funds[30];
  			    		if(funds[30]>funds[29])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds14;
					}
				funds15:
  					printf("How much do you want to alocate to Engineering?\n");
  			        printf("current funds = %i\t", funds[31]);
  			          
  			       scanf("%i", &funds[32]);
  			    	funds[33]=funds[31]-funds[32];
  			    		if(funds[31]<funds[32])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds15;
					}
				funds16:
  					printf("How much do you want to alocate to Environmentalist?\n");
  			        printf("current funds = %i\t", funds[33]);
  			          
  			       scanf("%i", &funds[34]);
  			    	funds[35]=funds[33]-funds[34];
  			    		if(funds[33]<funds[34])
  			    		{
  			      		printf("you don't have that much money\n");
  			      		goto funds16;
  			      	}
  			     
					/**************end of weekly fund allocation********/
			
			
				tax3:/*CONFIRMATION*/
					printf("\n\n\tenter Tax percent (0-100) for next week");
					scanf("%i",&tax[3]);
					if(tax[3]>100)
					{
						printf("enter value within boundary");
						goto tax3;
					}
					
					defence[6]=defence[5]+funds[26];
   			 		
   			 		farmers[6]=farmers[5]+funds[28]*100;
   			 		medics[6]=medics[5]+funds[30]/2;
   			 		engineering[4]=engineering[2]+funds[32];
   			 		environmentalist[4]=environmentalist[2]+funds[34];
   			 		enemies[4]=4*enemies[3]+2;
   			 		happiness[4]=defence[6]-enemies[4]+medics[6]/4-tax[3]/3;
   			 		citizens[4]=citizens[3]+happiness[4]-enemies[4];
   			 		funds[36]=citizens[4]*tax[3]/200;
   			 		funds[37]=funds[36]+funds[35];
						
					
				printf("\n\n\tend of allocation report");
				printf("\n\n\t\tdefence = %i ", defence[6] );
				printf("\n\n\t\tfarmers = %i", farmers[6] );
				printf("\n\n\t\tmedics = %i", medics[6] );
				printf("\n\n\t\tengineering = %i", engineering[4] );
				printf("\n\n\t\tenvironmentalist = %i", environmentalist[4] );
				printf("\n\n\t\tenemies = %i", enemies[4]);
				printf("\n\n\t\thapinness = %i", happiness[4]);
				printf("\n\n\t\tnumber of citizens = %i", citizens[4]);
					printf("\n\n\t\tfunds for next week = %i", funds[37]);
					
					printf("\n\n\n\n\t are you happy your allocation. \n\t1)yes\n\t2)no");
					int b2;
					scanf("%i",&b2);
					
					if(b2==2)
					{
						system("\npause");
						system("cls");
						goto funds12;
						
					}
					else if(b2==1)
					{
						system("pause");
						system("cls");
						printf("______________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^_________________^________________________^___");
						printf("\n\n\n\n\tthe week passes by with no events \n\n\t");
						system("pause");
						system("cls");
					}
					
				printf("End of Week report");/***************END OF WEEK REPORT*/
					defence[7]=defence[6]-enemies[4];
   			 		
   			 		farmers[7]=farmers[6]-1.5*citizens[4];
   			 		medics[7]=medics[6]-citizens[4]/28;
   			 			engineering[4]=engineering[2]+funds[32];
   			 		environmentalist[4]=environmentalist[2]+funds[34];
   			 			printf("\n\n\t\tdefence (defence - enemies) = %i ", defence[7] );
				printf("\n\n\t\tfarmers (food - citizens)= %i", farmers[7] );
				printf("\n\n\t\tmedics (medics-citizens) = %i", medics[7] );
				printf("\n\n\t\tengineering = %i", engineering[4] );
				printf("\n\n\t\tenvironmentalist = %i\n\n", environmentalist[4] );
   			 	printf("_________________________________________________________________________");
   			 	
   			 	
   			 	 	if (defence[7]>enemies[4])
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\tdefence = %i", defence[7]);
   			 		printf("\n\n\t\tYour City has successfully defended against the attack\n\n\t\t WIN\n\n\tcharacter analysis: superior, strong, courageous");
   			 	
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 	}
   			 	if (defence[7]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\tdefence = %i", defence[7]);
   			 		printf("\n\n\t\tYour City has been overun by enemies\n\n\tcharacter analysis:unlucky, disemboweled");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 	}
					
				 	if (farmers[7]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\farmer = %i", farmers[3]);
   			 		printf("\n\n\t\tYour citezens has starved to death\n\n\tcharacter analysis:\n\tcareless and hungry");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
   			 		if (medics[7]<0)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\medics = %i", medics[7]);
   			 		printf("\n\n\t\tdisease has spread");
   			 		printf("\n    ___\n");
   			 		printf(" ____|   |____");
   			 		printf("|____     ____|\n");
   			 		printf("     |____|    \n");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
				
				
						if (engineering[4]>100)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\engineering = %i", engineering[2]);
   			 		printf("\n\n\t\tyou have created a spaceship, you now set forth to the distant planet\n\n\tcharacter analysis:\n\tyou left most of your citizens to perish, \n\tsneaky, smart, decieptful\n\n\n\n\t");
   			 		printf("\n\n\t\t WIN");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
   			 		
   			 	}
   			 			if (environmentalist[4]>100)
   			 	{
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		printf("\n\n\t\environmentalist = %i", environmentalist[2]);
   			 		printf("\n\n\t\tyour environmentalist has cured the planet of pollution\n\tcharacter analysis:\n\tloving, caring");
   			 		printf("\n\n\t\t WIN");
   			 		system("pause");
   			 		system("cls");
   			 		
   			 		goto menu;
   			 		
				}/* end of week 2*/
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				}//DO NOT CROSS
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
			}
					/***************end of start****************/
					
			else if(mainmenu1==2)/**********begin instructions */
			{
				
				printf ("\n\n\t Plot "); 
				printf("\n\nIts the year 2095, Human recklessness has led to  the destruction of the environment, Collapse of the Economy and the decimation of the human population");
				printf("\n\nYou are the Newly Elected Leader of the Last remaining Civilization. You now carry the responsibility of taking care of your people by battling disease, Enemies and unhapiness\n\n\t");
				
			system("pause");
			system("cls");
				
			printf("\n\n Your task is to win via three ways, Military, Environmental or Scientific. While keeping your people safe, cured, well fed and happy.");
			printf("\n\n\tFactors");
			printf("\n\t(T) Tax \n\t\t Each week you set the percentage of tax that you would like");
			printf("\n\n\n\t(m) the funds are used to puchase items\n\n\t\t");
		
		system("pause");
		system("cls");
		
			printf("\n\n\n\t\t ****PRODUCTION ITEMS****");
			printf("\n\n\tDefense\n\t\tProtection from Enemies");
			printf("\n\n\tFood\n\t\tAllow for the survivavility of Citizens");
			printf("\n\n\tScience\n\t\tDevelops Spaceships");
			printf("\n\n\tEnvironment\n\t\tAllows for Environmental Victory");
			printf("\n\n\tHapiness\n\t\tThe Happy have better chance of reproduction");
			printf("\n\n\tCitizens\n\t\tyour tax payer");
			system("pause");
			system("cls");
			goto menu;
		
			}	
			
			
			
		else if ( mainmenu1 == 3 )
		{
			printf("goodbye");
		}
		

	
	}
		
	
  				  
  				  
  	
					

}

