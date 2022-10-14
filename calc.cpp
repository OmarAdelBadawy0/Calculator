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

        if(decimalNum.size() < anotherDec.size()){
            return true;
        }
        if(decimalNum.size() > anotherDec.size()){
            return false;
        }

        for (int i = 0; i < decimalNum.size(); i++)
        {
            if (decimalNum[i] < anotherDec[i])
            {
                return true;
            }else if (decimalNum[i] > anotherDec[i])
            {
                return false;
            }
        }

        return false;
    }


bool BigDecimalInt:: operator> (BigDecimalInt anotherDec){

        if(decimalNum.size() < anotherDec.size()){
            return false;
        }
        if(decimalNum.size() > anotherDec.size()){
            return true;
        }

        for (int i = 0; i < decimalNum.size(); i++)
        {
            if (decimalNum[i] < anotherDec[i])
            {
                return false;
            }else if (decimalNum[i] > anotherDec[i])
            {
                return true;
            }
        }

        return false;
    }

bool BigDecimalInt:: operator==(BigDecimalInt anotherDec){

        if(decimalNum.size() != anotherDec.size()){
            return false;
        }

        for (int i = 0; i < decimalNum.size(); i++)
        {
            if (decimalNum[i] < anotherDec[i])
            {
                return false;
            }else if (decimalNum[i] > anotherDec[i])
            {
                return false;
            }
        }

        return true;

    }