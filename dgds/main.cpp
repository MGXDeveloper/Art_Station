#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;

class Art_Course{
private:
    int Course_Status;
    string Course_Name;
    int Number_Lectures;
    int Course_evaluation;
    string Course_presenter;
    string Course_level;
    int Course_Cost;

public:
///////////////////////////////////////////
    Art_Course(){

         Course_Status=0;
         Course_Name="Not Found";
         Number_Lectures=0;
         Course_evaluation=0;
         Course_presenter="Not Found";
         Course_level="Not Found";
         Course_Cost=0;
    }
//////////////////////////////////////////

    void Add_Course(){
         cout<<""<<endl;
         cout<<"==========================================="<<endl;
         cout<<"Enter the Course Status : ";
         cin>>Course_Status;
         cout<<"Enter the Course Name : ";
         cin>>Course_Name;
         cout<<"Enter the Number of Lectures : ";
         cin>>Number_Lectures;
         cout<<"Enter the Course Evaluation : ";
         cin>>Course_evaluation;
         cout<<"Enter the Course Presenter : ";
         cin>>Course_presenter;
         cout<<"Enter the Course Level : ";
         cin>>Course_level;
         cout<<"Enter the Cost : ";
         cin>>Course_Cost;
         cout<<"==========================================="<<endl;
         cout<<""<<endl;

    }


//////////////////////////////////////////

    void Delete_Course(){

         Course_Status=0;
         Course_Name="Not Found";
         Number_Lectures=0;
         Course_evaluation=0;
         Course_presenter="Not Found";
         Course_level="Not Found";
         Course_Cost=0;
    }
//////////////////////////////////////////

    void Display(){
        cout<<""<<endl;
        cout<<"==========================================="<<endl;
        cout<<"Course Name : "<<Course_Name<<endl;
        cout<<"Number of Lectures : "<<Number_Lectures<<endl;
        cout<<"Course Evaluation : "<<Course_evaluation<<endl;
        cout<<"Course Presenter : "<<Course_presenter<<endl;
        cout<<"Course Level : "<<Course_level<<endl;
        cout<<"Cost : "<<Course_Cost<<"$"<<endl;
        cout<<"==========================================="<<endl;
        cout<<""<<endl;
    }

//////////////////////////////////////////

    int Status(){
        return Course_Status;
    }

    string NameCours(){
        return Course_Name;
    }


/////////////////////////////////////////
    void changeStatus(int c){
         Course_Status=c;
         }
    void changeName(string c){
         Course_Name=c;
         }
    void changeNumber_Lectures(int c){
         Number_Lectures=c;
         }
    void changeEvaluation(int c){
         Course_evaluation=c;
         }
    void changePresenter(string c){
         Course_presenter=c;
         }
    void changeLevel(string c){
         Course_level=c;
         }
    void changeCost(int c){
         Course_Cost=c;
         }

};


/*//////////////////////////////////////////////////////*/


class Arts_Station{
private:
    #define size 100
    Art_Course Courses[size];


public:

    void Add(){
        for(int i=0;i<size;i++)
        if(Courses[i].Status()==0){
                Courses[i].Add_Course();
                return;
                }
    }


    void Search(){
        string name;
        cout<<"Enter the Name of Course : ";
        cin>>name;
        for(int i=0;i<size;i++)
            if(Courses[i].NameCours()== name){
               Courses[i].Display();
               return;
               }
        cout<<"The Course is Not Found"<<endl;

        }


    void Change(){
        string name;
        int x=0,n;
        cout<<"Enter The Name of Course : ";
        cin>>name;
        for(int i=0;i<size;i++)
            if(Courses[i].NameCours()== name){
               n=i;
               break;
               }
               else{
                cout<<"This Course is Not Found"<<endl;
                return;
               }
        while(x!=8){
                cout<<"What do you Want to Change"<<endl;
                cout<<" 1.Course_Status \n 2.Course_Name \n 3.Number_Lectures \n 4.Course_evaluation \n 5.Course_presenter \n 6.Course_level \n 7.Course_Cost \n 8.Close"<<endl;
                cin>>x;
                if(x==1){
                        int status;
                        cout<<"Enter The Status : ";
                        cin>>status;
                        Courses[n].changeStatus(status);
                }
                else if(x==2){
                        string cname;
                        cout<<"Enter The CourseName : ";
                        cin>>cname;
                        Courses[n].changeName(cname);
                }
                else if(x==3){
                        int nl;
                        cout<<"Enter The Number of Lectures : ";
                        cin>>nl;
                        Courses[n].changeNumber_Lectures(nl);
                }
                else if(x==4){
                        int evaluation;
                        cout<<"Enter The Evaluation : ";
                        cin>>evaluation;
                        Courses[n].changeEvaluation(evaluation);

                }
                else if(x==5){
                        string cp;
                        cout<<"Enter The CoursePresenter : ";
                        cin>>cp;
                        Courses[n].changePresenter(cp);
                }
                else if(x==6){
                        string cl;
                        cout<<"Enter The CourseLevel : ";
                        cin>>cl;
                        Courses[n].changeLevel(cl);
                }
                else if(x==7){
                        int cost;
                        cout<<"Enter The Cost : ";
                        cin>>cost;
                        Courses[n].changeCost(cost);

                }

        }
        }

    void Delete(){
        string name;
        cout<<"Enter the Name of Course : ";
        cin>>name;
        for(int i=0;i<size;i++)
            if(Courses[i].NameCours()== name){
               Courses[i].Delete_Course();
               cout<<"Finish"<<endl;
               return;
               }
        cout<<"The Course is Not Found"<<endl;

        }




    void Admin(){
        int x;

        while(true){
                cout<<endl;
                cout<<"******************************************************************************"<<endl;
                cout<<"1.Add_Course , 2.Search , 3.Change , 4.Delete , 5.Show_All_Courses , 6.LogOut"<<endl;
                cout<<"******************************************************************************"<<endl;
                cout<<"What do you choose ? :";
                cin>>x;
                cout<<endl;

                if(x==1)
                    Add();

                else if(x==2)
                    Search();

                else if(x==3)
                    Change();

                else if(x==4)
                    Delete();

                else if(x==5)
                    DisplayAll();

                else if(x==6)
                    return;

        }


    }


        void User(){
        int x;

        while(true){
                cout<<endl;
                cout<<"*****************************************"<<endl;
                cout<<"1.Search , 2.Show_All_Courses , 3.LogOut"<<endl;
                cout<<"*****************************************"<<endl;
                cout<<"What do you choose ? :";
                cin>>x;
                cout<<endl;

                if(x==1)
                    Search();

                else if(x==2)
                    DisplayAll();

                else if(x==3)
                    return;

        }

    }


    void Admin_or_User(){
        while(true){
                int choose;
                cout<<"Choose How you login : "<<endl;
                cout<<"1.Admen \n2.User"<<endl;
                cin>>choose;

                if(choose==1)
                    Admin();
                else if(choose==2)
                    User();
            }
    }



    void DisplayAll(){
        for(int i=0;i<size;i++){
            if(Courses[i].Status()==1)
                Courses[i].Display();
        }
    }
};



int main()
{
    Arts_Station ob1;
    while(true){
    ob1.Admin_or_User();
    }
    return 0;
}
