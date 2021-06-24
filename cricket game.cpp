#include<iostream>
using namespace std;
int main() {
cout<<"----------------------------------------------------------------"<<endl;
cout<<"|"<<"=========================CRIC-IN============================="<<"|"<<endl;
cout<<"|"<<"                                                             "<<"|"<<endl;
cout<<"|"<<"   Welcome to Virtual Cricket Game                           "<<"|"<<endl;
cout<<"----------------------------------------------------------------"<<endl;
cout<<endl;
cout<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"|"<<"======================Instructions==============================="<<"|"<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"|"<<"                                                                 "<<"|"<<endl;
cout<<"|"<<" 1. Create 2 teams (Team-A and Team-B with 5 players each)       "<<"|"<<endl;
cout<<"|"<<"    from a given pool of 11 players                              "<<"|"<<endl;
cout<<"|"<<" 2. Lead the toss and decide bowling or batting.                 "<<"|"<<endl;
cout<<"|"<<" 3. Select which player should bat and bowl first.               "<<"|"<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<endl;
cout<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"|"<<"======================Pool of Players============================"<<"|"<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"                           [0] Virat      "<<endl;
cout<<"                           [1] Rohit      "<<endl;
cout<<"                           [2] Dhawan     "<<endl;
cout<<"                           [3] Pant       "<<endl;
cout<<"                           [4] Karthik    "<<endl;
cout<<"                           [5] Rahul      "<<endl;
cout<<"                           [6] Jadeja     "<<endl;
cout<<"                           [7] Hardik     "<<endl;
cout<<"                           [8] Bumrah     "<<endl;
cout<<"                           [9] Bkumar     "<<endl;
cout<<"                           [10] Ishant     "<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"|"<<"================= Create Team-A and Team-B ===================="<<"|"<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
int count = 1;
int choose;
int choose1;
int TeamA[10];
int TeamB[10];
for(int i=0;i<5;i++) {
    cout<<"Select player " <<count<<" of Team A" <<endl;
    cin>>choose;
    cout<<"Select player " <<count<<" of Team B" <<endl;
    cin>>choose1;
    count++;
}
cout<<"---------------------------"<<endl;
cout<<"|"<<"====== Team-A ======="<<"|"<<endl;
cout<<"---------------------------"<<endl;
cout<<endl;
// for team A
for(int i=0;i<5;i++) {
    if(choose==0) {
        cout<<"             [" <<i<<"]"<<"Virat"<<endl;
    }
    if(choose==1) {
        cout<<"             [" <<i<<"]"<<"Rohit"<<endl;
    }
    if(choose==2) {
        cout<<"             [" <<i<<"]"<<"Dhawan"<<endl;
    }
    if(choose==3) {
        cout<<"             [" <<i<<"]"<<"Pant"<<endl;
    }
    if(choose==4) {
        cout<<"             [" <<i<<"]"<<"Karthik"<<endl;
    }
    if(choose==5) {
        cout<<"             [" <<i<<"]"<<"Rahul"<<endl;
    }
    if(choose==6) {
        cout<<"             [" <<i<<"]"<<"Jadeja"<<endl;
    }
    if(choose==7) {
        cout<<"             [" <<i<<"]"<<"Hardik"<<endl;
    }
    if(choose==8) {
        cout<<"             [" <<i<<"]"<<"Bumrah"<<endl;
    }
    if(choose==9) {
        cout<<"             [" <<i<<"]"<<"BKumar"<<endl;
    }
    if(choose==10) {
        cout<<"             [" <<i<<"]"<<"Ishant"<<endl;
    }
}
cout<<"---------------------------"<<endl;
cout<<"|"<<"====== Team-B ======="<<"|"<<endl;
cout<<"---------------------------"<<endl;
// for team B
for(int i=0;i<5;i++) {
    if(choose1==0) {
        cout<<"             [" <<i<<"]"<<"Virat"<<endl;
    }
    if(choose1==1) {
        cout<<"             [" <<i<<"]"<<"Rohit"<<endl;
    }
    if(choose1==2) {
        cout<<"             [" <<i<<"]"<<"Dhawan"<<endl;
    }
    if(choose1==3) {
        cout<<"             [" <<i<<"]"<<"Pant"<<endl;
    }
    if(choose1==4) {
        cout<<"             [" <<i<<"]"<<"Karthik"<<endl;
    }
    if(choose1==5) {
        cout<<"             [" <<i<<"]"<<"Rahul"<<endl;
    }
    if(choose1==6) {
        cout<<"             [" <<i<<"]"<<"Jadeja"<<endl;
    }
    if(choose1==7) {
        cout<<"             [" <<i<<"]"<<"Hardik"<<endl;
    }
    if(choose1==8) {
        cout<<"             [" <<i<<"]"<<"Bumrah"<<endl;
    }
    if(choose1==9) {
        cout<<"             [" <<i<<"]"<<"BKumar"<<endl;
    }
    if(choose1==10) {
        cout<<"             [" <<i<<"]"<<"Ishant"<<endl;
    }
}
cout<<endl;
cout<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"|"<<"======== Lets Toss =========="<<"|"<<endl;
cout<<"---------------------------------------"<<endl;
cout<<endl;
cout<<"Tossing the coin..."<<endl;
cout<<"Team-B won the toss"<<endl;
int toss;
cout<<"Enter 1 to bat or 2 to bowl first"<<endl;
cout<<"1. Bat"<<endl;
cout<<"2. Bowl"<<endl;
cin>>toss;
int num;
int num1;
if(toss==1) {
    cout<<"Team-B won the toss and elected to bat first"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"|"<<" Team-B select a player to bat"<<"|"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cin>>num;
    if(num==0) {
        cout<<"Team-B - Virat is batting"<<endl;
    }
    if(num==1) {
        cout<<"Team-B - Rohit is batting"<<endl;
    }
    if(num==2) {
        cout<<"Team-B - Dhawan is batting"<<endl;
    }
    if(num==3) {
        cout<<"Team-B - Pant is batting"<<endl;
    }
    if(num==4) {
        cout<<"Team-B - Karthik is batting"<<endl;
    }
    if(num==5) {
        cout<<" Team-B - Rahul is batting"<<endl;
    }
    if(num==6) {
        cout<<"Team-B - Jadeja is batting"<<endl;
    }
    if(num==7) {
        cout<<"Team-B - Hardik is batting"<<endl;
    }
    if(num==8) {
        cout<<"Team-B - Bumrah is batting"<<endl;
    }
    if(num==9) {
        cout<<"Team-B - BKumar is batting"<<endl;
    }
    if(num==10) {
        cout<<"Team-B - Ishant is batting"<<endl;
    }
    cout<<"-------------------------------------------"<<endl;
    cout<<"|"<<" Team-A select a player to bowl"<<"|"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cin>>num1;
    if(num1==0) {
        cout<<"Team-A - Virat is bolwing"<<endl;
    }
    if(num1==1) {
        cout<<"Team-A - Rohit is bolwing"<<endl;
    }
    if(num1==2) {
        cout<<"Team-A - Dhawan is bolwing"<<endl;
    }
    if(num1==3) {
        cout<<"Team-A - Pant is bolwing"<<endl;
    }
    if(num1==4) {
        cout<<"Team-A - Karthik is bolwing"<<endl;
    }
    if(num1==5) {
        cout<<" Team-A - Rahul is bolwing"<<endl;
    }
    if(num1==6) {
        cout<<"Team-A - Jadeja is bolwing"<<endl;
    }
    if(num1==7) {
        cout<<"Team-A - Hardik is bolwing"<<endl;
    }
    if(num1==8) {
        cout<<"Team-A - Bumrah is bolwing"<<endl;
    }
    if(num1==9) {
        cout<<"Team-A - BKumar is bolwing"<<endl;
    }
    if(num1==10) {
        cout<<"Team-A - Ishant is bolwing"<<endl;
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"|"<<"Team-B 0-0(0) |  0(0)       0(0)"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Press enter to bowl"<<endl;
    cout<<"Bowling...."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1 run!"<<endl;
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"|"<<"Team-B 1-0(0) |  1(1)       1(0)"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"ININGS OVER "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Team-B 35 - 1 (2)"<<endl;
    cout<<"Team-A needs 36 runs to win the match"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"|"<<"Team-A 22 - 3(2) | 11(4)      14(1) |"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Team-B won the match"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Team-B   35-1 (2)"<<endl;
    cout<<"Team-A   22-3 (2)"<<endl;

}
else{
    cout<<"Team-B won the toss and elected to bowl first"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"|"<<" Team-B select a player to bowl"<<"|"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cin>>num;
    if(num==0) {
        cout<<"Team-B - Virat is bolwing"<<endl;
    }
    if(num==1) {
        cout<<"Team-B - Rohit is bolwing"<<endl;
    }
    if(num==2) {
        cout<<"Team-B - Dhawan is bolwing"<<endl;
    }
    if(num==3) {
        cout<<"Team-B - Pant is bolwing"<<endl;
    }
    if(num==4) {
        cout<<"Team-B - Karthik is bolwing"<<endl;
    }
    if(num==5) {
        cout<<" Team-B - Rahul is bolwing"<<endl;
    }
    if(num==6) {
        cout<<"Team-B - Jadeja is bolwing"<<endl;
    }
    if(num==7) {
        cout<<"Team-B - Hardik is bolwing"<<endl;
    }
    if(num==8) {
        cout<<"Team-B - Bumrah is bolwing"<<endl;
    }
    if(num==9) {
        cout<<"Team-B - BKumar is bolwing"<<endl;
    }
    if(num==10) {
        cout<<"Team-B - Ishant is bolwing"<<endl;
    }
    cout<<"-------------------------------------------"<<endl;
    cout<<"|"<<" Team-A select a player to bat"<<"|"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cin>>num1;
    if(num1==0) {
        cout<<"Team-A - Virat is batting"<<endl;
    }
    if(num1==1) {
        cout<<"Team-A - Rohit is batting"<<endl;
    }
    if(num1==2) {
        cout<<"Team-A - Dhawan is batting"<<endl;
    }
    if(num1==3) {
        cout<<"Team-A - Pant is batting"<<endl;
    }
    if(num1==4) {
        cout<<"Team-A - Karthik is batting"<<endl;
    }
    if(num1==5) {
        cout<<" Team-A - Rahul is batting"<<endl;
    }
    if(num1==6) {
        cout<<"Team-A - Jadeja is batting"<<endl;
    }
    if(num1==7) {
        cout<<"Team-A - Hardik is batting"<<endl;
    }
    if(num1==8) {
        cout<<"Team-A - Bumrah is batting"<<endl;
    }
    if(num1==9) {
        cout<<"Team-A - BKumar is batting"<<endl;
    }
    if(num1==10) {
        cout<<"Team-A - Ishant is batting"<<endl;
    }
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"|"<<"Team-A 0-0(0) |  0(0)       0(0)"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    cout<<endl;
    cout<<endl;
    cout<<"Press enter to bowl"<<endl;
    cout<<"Bowling..."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1 run!"<<endl;
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"|"<<"Team-A 1-0(0) |  1(1)       1(0)"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"ININGS OVER "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Team-A 35 - 1 (2)"<<endl;
    cout<<"Team-B needs 36 runs to win the match"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"|"<<"Team-B 22 - 3(2) | 11(4)      14(1) |"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Team-A won the match"<<endl;
    cout<<endl;
    cout<<"Team-A   35-1 (2)"<<endl;
    cout<<"Team-B   22-3 (2)"<<endl;

}


}
