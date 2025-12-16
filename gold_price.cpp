/*
    Write a cpp program to calculate fine an cost for gold ornaments .
    pure gold (24k) 
    from user as follwing things 
    1) total weight (grams) 
    2) Carrat (18,22,24)
    3) Current price per 10 grams 
    4) Copper per 10 gram price
    5) Making charge in percentage or  500 (which one is maximum)
    6) for total amount
*/ 
#include<iostream>
#include<algorithm>  // <-- for max()
using namespace std;

int main(){
    double t_weight, g_price, c_price, total_amount, g_weight, c_weight;
    int k, m_charge;

    cout<<"Enter the Total Weight :- ";
    cin>>t_weight;
    cout<<"Enter the Gold rate (per 10 grams) :- ";
    cin>> g_price;
    cout<<"Enter the Copper rate (per 10 grams) :- ";
    cin>> c_price;
    cout<<"Enter the Carat (18/22/24)k :- ";
    cin>>k;
    cout<<"Enter the making charges (percentage) :- ";
    cin>>m_charge;

    // Calculate pure gold and copper weight
    g_weight = (t_weight * k) / 24;
    c_weight = t_weight - g_weight;

    // Calculate basic material amount
    total_amount = ( (g_price / 10.0) * g_weight ) + ( (c_price / 10.0) * c_weight );

    // Calculate making charge based on max(percentage, fixed 500)
    double percent_charge = total_amount * m_charge / 100.0;
    double making_charge = max(percent_charge, 500.0);

    total_amount += making_charge;

    cout << "\n-----------------------\n";
    cout << "Total Amount Payable : " << total_amount << endl;
    cout << "-----------------------\n";

    return 0;
}
