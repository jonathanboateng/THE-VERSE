#include <iostream>
#include <cmath>
using namespace std;
int main (){



 string Student_name,Index_number;  
   int   Quiz,Assignment,Mid_sem,End_of_sem;
     int  Total_score,Percentage,Remaining_score;
      double Average_score_per_assesment;
 
      cout<<"ENTER STUDENT NAME"<<endl;
       cin>>Student_name;
       cout<<"ENTER INDEX NUMBER"<<endl;
          cin>>Index_number;
           cout<<"ENTER QUIZ"<<endl;
            cin>>Quiz;
			  cout<<"ENTER ASSIGNMENT"<<endl;
                cin>>Assignment;
                 cout<<"ENTER MID-SEM"<<endl;
                  cin>>Mid_sem;
                 cout<<"ENTER END Of SEM EXAM"<<endl;
                   cin>>End_of_sem;
 
                     Total_score=Quiz+Assignment+Mid_sem+End_of_sem;
                      Percentage=(Total_score)*100/100;
                         Remaining_score=100-Total_score;
                          Average_score_per_assesment=Total_score/4.0;
  
                            cout<<"STUDENT:"<<Student_name<<endl;
                                  cout<<"INDEX NUMBER:"<<Index_number<<endl;
                                   cout<<"TOTAL_SCORE:"<<Total_score<<endl;
                                     cout<<"PERCENTAGE:"<<Percentage<<"%"<<endl;
                                     cout<<"REMAINING SCORE:"<<Remaining_score<<endl;
                                     cout<<"AVERAGE PER ASSESSMENT:"<<Average_score_per_assesment;
      
  
 
 





	return 0;
	
}