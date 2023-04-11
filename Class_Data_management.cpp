#include<iostream>
using namespace std;
string arr1[30],arr2[30],arr3[30],arr4[30],arr5[30];
int Total=0;


void Enter()
{
    int ch=0;
    cout<<" Enter The Number of Students whose Data is to be Entered : ";
    cin>>ch;
    if(Total==0)
    {
        Total=Total+ch;
        for(int i=0;i<ch;i++)
        {
            cout<<"\nEnter the Data of Student "<<i+1<<":"<<endl;
            cout<<" Enter Name of Student : ";
            cin>>arr1[i];
            cout<<"\nEnter Roll Number of Student : ";
            cin>>arr2[i];
            cout<<"\nEnter Course of Student : ";
            cin>>arr3[i];
            cout<<"\nEnter class of Student : ";
            cin>>arr4[i];
            cout<<"\nEnter Contact of Student : ";
            cin>>arr5[i];
        }
    }
    else 
    {
        for(int i=Total;i<ch+Total;i++)
        {
            cout<<"\n Enter the Data of Student "<<i+1<<":"<<endl;
            cout<<" Enter Name of Student : ";
            cin>>arr1[i];
            cout<<" \nEnter Roll Number of Student : ";
            cin>>arr2[i];
            cout<<"\n Enter Course of Student : ";
            cin>>arr3[i];
            cout<<"\n Enter class of Student : ";
            cin>>arr4[i];
            cout<<"\n Enter Contact of Student : ";
            cin>>arr5[i];
        }
        Total=Total+ch;
    }
}
void Show()
{
    if(Total==0)
    {
        cout<<" No Data Found !!!"<<endl;
    }
    else
    {
        for(int i=0;i<Total;i++)
        {
            cout<<"\n Data of Student "<<i+1<<":"<<endl;
            cout<<" Name of Student : "<<arr1[i];
            cout<<"\n Roll Number of Student : "<<arr2[i];
            cout<<"\n Course Opted by Student : "<<arr3[i];
            cout<<"\n Class of Student : "<<arr4[i];
            cout<<"\n Contact Number of Student : "<<arr5[i];
        }
    }
}
void Search()
{
    if(Total==0)
    {
        cout<<" No Data Found !!!"<<endl;
    }
    string rollnumber;
    cout<<" Enter Roll Number of the Student : ";
    cin>>rollnumber;
    for(int i=0;i<Total;i++)
    {
        if(rollnumber==arr2[i])
        {
            cout<<"\n Data of Student "<<i+1<<":";
            cout<<"\n Name of Student : "<<arr1[i];
            cout<<"\n Roll Number of Student : "<<arr2[i];
            cout<<"\n Course Opted by Student : "<<arr3[i];
            cout<<"\n Class of Student : "<<arr4[i];
            cout<<"\n Contact Number of Student : "<<arr5[i];
        }
    }
}
void Update()
{
    if(Total==0)
    {
        cout<<" No Data Found !!!"<<endl;
    }
    string rollnumber;
    cout<<" Enter Roll Number of the Student which is to be Updated : ";
    cin>>rollnumber;
    for(int i=0;i<Total;i++)
    {
        if(rollnumber==arr2[i]){
            cout<<" Previous Data of The Student : ";
            cout<<"\n Data of Student "<<i+1<<":";
            cout<<"\n Name of Student : "<<arr1[i];
            cout<<"\n Roll Number of Student : "<<arr2[i];
            cout<<"\n Course Opted by Student : "<<arr3[i];
            cout<<"\n Class of Student : "<<arr4[i];
            cout<<"\n Contact Number of Student : "<<arr5[i];
            cout<<"Enter New Data for the Student : "<<endl;
            cout<<"\nEnter Name of Student : ";
            cin>>arr1[i];
            cout<<"\nEnter Roll Number of Student : ";
            cin>>arr2[i];
            cout<<"\nEnter Course of Student : ";
            cin>>arr3[i];
            cout<<"\nEnter class of Student : ";
            cin>>arr4[i];
            cout<<"\nEnter Contact of Student : ";
            cin>>arr5[i];
        }
    }
}
void Delete()
{
    if(Total==0)
    {
        cout<<" No Data Found !!!"<<endl;
    }
    else
    {
        int x;
        cout<<" Enter 1 to Delete all Records "<<endl;
        cout<<" Enter 2 to Delete Specified Records "<<endl;
        cin>>x;
        if(x==1)
        {
            Total=0;
            cout<<" All Records habe been Deleted !!!"<<endl;
        }
        else if(x==2)
        {
            string rollnumber;
            cout<<" Enter Roll Number of the Student which is to be Updated : ";
            cin>>rollnumber;
            for(int i=0;i<Total;i++)
            {
                if(rollnumber==arr2[i])
                {
                    for(int j=0;j<Total;j++)
                    {
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                    }
                    Total--;
                    cout<<" Your Specified Record has been Deleted "<<endl;
                }
            }
        }
        else 
        {
            cout<<" Invalid Input "<<endl;
        }
    }
}

int main()
{
    int value;
    while(true)
    {
        cout<<"\nPress 1 to Enter Data ";
        cout<<"\nPress 2 to Show Data ";
        cout<<"\nPress 3 to Search Data ";
        cout<<"\nPress 4 to Update Data ";
        cout<<"\nPress 5 to Delete Data ";
        cout<<"\nPress 6 to Exit "<<endl;
        cin>>value;
        switch(value)
        {
            case 1:
                Enter();
                break;
            case 2:
                Show();
                break;
            case 3:
                Search();
                break;
            case 4:
                Update();
                break;
            case 5:
                Delete();
                break;
            case 6:
                cout<<" Thank You "<<endl;
                exit(0);
                break;
            default:
                cout<<" Invalid Input "<<endl;
                break;                        
        }
    }
}