#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class student{


    public:
    string name;
    int id;
    double grade;
    vector<student>students;
    public:
    student(string n,int i,double g){
        name=n;
        id=i;
        grade=g;
    
    }
    student(){

    }
    void print(){
        cout<<name<<" "<<grade<<" "<<id;
    }

        
    
        
        
    
    
    
    
    
    void addstudent(string name,int id,double grade){
        students.push_back( student(name,id,grade));
            
        
    }

    
    void search(string target){
for(int i=0;i<students.size();i++){
if(students[i].name==target){
cout<<"exist";
cout<<endl;
return;
}
}
cout<<-1;
    }







    
    
    
    
    
    
    
        
    
    
    

        
    
        
        
    
    
    
    
    
    
    
    
    void binarysearch(int target){
        int left=0;
        int right=students.size()-1;
        while(left<=right){
int mid=(left+right)/2;
if(students[mid].id==target){
    cout<<mid;
    cout<<endl;
    return;
}
else if(students[mid].id<target){
    left=mid+1;
cout<<endl;
}
else{
    right=mid-1;
    
}




        }
       cout<<-1; 

    }
    void bubsort(){
        for(int i=0;i<students.size()-1;i++){
            for(int j=0;j<students.size()-i-1;j++){
                if(students[j].grade<students[j+1].grade){
                    swap(students[j],students[j+1]);
                }
                
            }

        }
    }
    double  func(int n){
        if(n==0){
            return 0;
        }
        double result=students[n-1].grade + func(n-1);
        
        
        
        
        return result;
        cout<<endl;
        
        
           
        
    }
 void  searchmax_min(){
    double max= students[0].grade;
    double min= students[0].grade;
    for(int i=1;i<students.size();i++){
        if(students[i].grade>max){
            max=students[i].grade;
        }
        else if(students[i].grade<min){
            min=students[i].grade;
        }
    }
    cout<<"maxgrade:"<<endl;
    cout<<max<<endl;
    cout<<"mingrade:"<<endl;
    cout<<min<<endl;
 }
 void avge(int n){
    double result=students[n-1].grade+func(n-1);
    double avg=double(result)/n;
    cout<<avg<<endl;
 }
    
};
    
int main(){
    student s;
    s.addstudent("karim",2345,65);
    s.addstudent("omar",3456,89);
    s.addstudent("ali",7865,50);
    s.binarysearch(3456);
    s.bubsort();
    for(int i=0;i<s.students.size();i++){
        cout<<s.students[i].grade<<endl;
        cout<<s.students[i].name<<endl;
    }
    s.search("omar");
    cout<<"sum of grades:"<<endl;
    cout<<s.func(3)<<endl;
    s.searchmax_min();
    cout<<"avg:"<<endl;
    s.avge(3);
    


    

}