#include <iostream>
#include <cmath>
using namespace std;
int main(){
     cout<<"=====CALCULATOR=====\n ";

    
     float a,b,angle;            // Here,angle is in radian.
    
       int choice;
     cout<<" Enter choice = ";
     cin>>choice;

     switch(choice){

        case 1:
            cout<<" enter a and b = ";
            cin>>a>>b;             
            cout<<"addition= "<<a+b<<endl;
            break;


         
        case 2:
            cout<<" enter a and b = ";
            cin>>a>>b;   
            cout<<" subtraction= "<<a-b<<endl;
            cin>>a>>b;
            break;
         
        case 3:
            cout<<" enter a and b = ";
            cin>>a>>b;   
            cout<<" Multiplication = "<<a*b<<endl;
            break;
         
         case 4:
             cout<<" enter a and b = ";
             cin>>a>>b;   
    
             if(b!=0){
            cout<<" divisionn = "<<a/b<<endl;
             }

            else{
                 cout<<" UNDEFINED ";
            }
           break;

         case 5: 
             cout<<" enter a and b = ";
             cin>>a>>b;   
             cout<<" power "<<pow(a,b);
             break;

         case 6:
             cout<<" enter a = ";
             cin>>a;   
             cout<<" square root =  "<<sqrt(a);
;             break;
         
         case 7:
             cout<<" enter a = ";
             cin>>a;   
             cout<<" Absolute value = "<<abs(a);
             break;

         case 8: 
             cout<<" enter a = ";
             cin>>a;   
             cout<<" Natural Logarithm =  "<<log(a);
             break;

         case 9:
             cout<<" enter angle = ";
             cin>>angle;
             cout<<" sin = "<<sin(angle * M_PI);
             break;

         case 10: 
             cout<<" enter angle = ";
             cin>>angle;
             cout<<" cos = "<<cos(angle * M_PI);
             break;

         case 11:
             cout<<" enter angle = ";
             cin>>angle;
             cout<<" tan = "<<tan(angle * M_PI);
             break;
         
          default:
          cout<<" INVALID CHOICE ";  
         

         
     }
   return 0;
} 
   