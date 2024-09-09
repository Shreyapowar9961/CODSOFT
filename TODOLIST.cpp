#include<iostream>
#include<string>
using namespace std;
int main()
{
    string task[500];
    bool completed[500] = {false};
    int countoftask = 0 ;
    int  i,option;
    do
    {
        cout<<"\n********TO-DO LIST********\n";
        cout<<"i.Add a Task"<<endl;
        cout<<"ii.View All Task"<<endl;
        cout<<"iii.Mark a Task as Completed"<<endl;
        cout<<"iv. Remove Task"<<endl;
        cout<<"v.Exit"<<endl;
        cout<<"Enter Your Option You Want To Perform :- "<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
            {
                if(countoftask < 500)
                {
                    cin.ignore();
                    cout<<"Enter The Task :- ";
                    getline(cin,task[countoftask]);
                    completed[countoftask]=false;
                    countoftask++;
                    cout<<"Task Added Sucessfully"<<endl;
                }
                else{
                    cout<<"Task List Is Full" <<endl;

                }
            }
            break;
        case 2:{
            if(countoftask==0)
            {
                cout<<"No Task Available"<<endl;

            }
            else{
                cout<<"\n******** To-Do List ********\n";
                for(i= 0 ;i <countoftask;i++)
                {
                    cout<<i+1<<"."<<task[i]<<"("<<(completed[i] ? "Completed" :
                    "Not Completed" ) << ")" <<endl;  
                              }
                                            
            }
        break;
        }
        case 3:
        {
       int taskno; 
       cout<<"Enter The Task Number to as Completed : ";
       cin>> taskno;
       if(taskno >=1 && taskno <= countoftask)
       {
        completed[taskno-1]=true;
        cout<<"Task"<<taskno<<"Marked as Completed"<<endl;
       }
       else{
        cout<<"Invalid Task Number!"<<endl;

       }
       break;
        }
        case 4:{
        int i,taskno;
        cout<<"Enter the Task Number to Remove: ";
        cin>>taskno;
        if(taskno >=1 && taskno<= countoftask)
        {
            for(i=taskno-1;i<countoftask-1;i++)
            {
                task[i]=task[i+1];
                completed[i]=completed[i+1];

            }
            countoftask--;
            cout<<"Task"<<taskno<<"Removed Sucessfully..!"<<endl;
        }
        else{
          cout<<"Invalid task number!"<<endl;
        }
        break;
        }
         case 5:
        cout<<"Exiting The Program"<<endl;
        break;
        default:
        cout<<"Please Enter The Valid Choice"<<endl;
            break;
        }
    } while (option !=5);
    
}