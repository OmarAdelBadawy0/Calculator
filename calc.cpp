#include <iostream>
#include <bits\stdc++.h>
#include <regex>
#include <string>
using namespace std;

class BigDecimalInt{

    private:
    string decimalNum;

    public:

        BigDecimalInt (string decStr){
            decimalNum = decStr;

        //     if(regex_match("(-|\\+)?[0-9]+")){
        //         decStr = decimalNum;
        //     }else{
        //         cout << "Invalid input !! " << endl;
        //     }
        }


        BigDecimalInt (int decInt);

        BigDecimalInt operator+ (BigDecimalInt anotherDec);

        BigDecimalInt operator- (BigDecimalInt anotherDec);

        bool operator< (BigDecimalInt anotherDec);  // Done by Omar
        
        bool operator> (BigDecimalInt anotherDec);  // Done by Omar

        bool operator==(BigDecimalInt anotherDec);  // Done by Omar
        BigDecimalInt operator= (BigDecimalInt anotherDec);
        int size();
        int sign();


        int operator[] (int index)
        {
            return decimalNum[index];
        }


};



int main(){

    

    return 0;
}


bool BigDecimalInt:: operator< (BigDecimalInt anotherDec){

        if(decimalNum.size() > anotherDec.decimalNum.size()){
            return false;
        }

        for (int i = 0; i < decimalNum.size(); i++)
        {
            if (decimalNum[i] > anotherDec.decimalNum[i])
            {
                return false;
            }
        }

        return true;
    }


bool BigDecimalInt:: operator> (BigDecimalInt anotherDec){

        if(decimalNum.size() < anotherDec.decimalNum.size()){
            return false;
        }

        for (int i = 0; i < decimalNum.size(); i++)
        {
            if (decimalNum[i] < anotherDec.decimalNum[i])
            {
                return false;
            }
        }

        return true;
    }

bool BigDecimalInt:: operator==(BigDecimalInt anotherDec){

        if(decimalNum.size() != anotherDec.decimalNum.size()){
            return false;
        }

        for (int i = 0; i < decimalNum.size(); i++)
        {
            if (decimalNum[i] < anotherDec.decimalNum[i])
            {
                return false;
            }else if (decimalNum[i] > anotherDec.decimalNum[i])
            {
                return false;
            }
        }

        return true;

    }
