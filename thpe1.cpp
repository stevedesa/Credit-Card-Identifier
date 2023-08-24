/** **********************************************************************
* @file
************************************************************************/

#include <string>
#include "thpe1.h"

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Given a credit card number, the function will determine which credit 
* card company the card belongs to by passing the card number to defined 
* functions of known credit card number patterns.
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns Which card company does the credit card belong to.
*
* @par Example
* @verbatim
string result;
string cardnumberA1 = "341672348908765";
string cardnumberV1 = "4137820820754";
string cardnumberD1 = "6517823965782345";
string cardnumberM1 = "5017846270971474";
result = getCCType(cardnumberA1); // result would be "American Express"
result = getCCType(cardnumberV1); // result would be "Visa"
result = getCCType(cardnumberD1); // result would be "Discover"
result = getCCType(cardnumberM1); // result would be "Mastercard"
@endverbatim
************************************************************************/
string getCCType (string cardnumber)
{
    if(AmericanExpressTest(cardnumber)==true)
    return "American Express";

    else if(VisaTest(cardnumber)==true)
    return "Visa";

    else if(MastercardTest(cardnumber)==true)
    return "Mastercard";

    else if(DiscoverTest(cardnumber)==true)
    return "Discover";

    else 
    return "Unknown";
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* If the first 2 digits of the given credit card number are 34 or 37
* and the length of the credit card number is 15 digits long, then the 
* function returns true, else false
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if the credit card belongs to American Express.
*
* @par Example
* @verbatim
string result;
string cardnumberA1 = "341672348908765";
string cardnumberV1 = "4137820820754";
result = getCCType(cardnumberA1); // result would be true
result = getCCType(cardnumberV1); // result would be false
@endverbatim
************************************************************************/
bool AmericanExpressTest (string cardnumber)
{
    if(int(cardnumber[0])==(48+3) && (int(cardnumber[1])==(48+4) || int(cardnumber[1])==(48+7)) && cardnumber.length()==15)
    return true;
    else
    return false;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* If the first digit of the given credit card number is 4 and the length
* of the credit card number is either 13 or 16 digits long, then the 
* function returns true, else false
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if the credit card belongs to Visa.
*
* @par Example
* @verbatim
string result;
string cardnumberA1 = "341672348908765";
string cardnumberV1 = "4137820820754";
result = getCCType(cardnumberA1); // result would be false
result = getCCType(cardnumberV1); // result would be true
@endverbatim
************************************************************************/
bool VisaTest (string cardnumber)
{
    if(int(cardnumber[0])==(48+4) && (cardnumber.length()==13 || cardnumber.length()==16))
    return true;
    else
    return false;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* If the first 2 digits of the given credit card number are in the range of
* 50 to 55 and the length of the credit card number is 16 digits long, then 
* the function returns true, else false
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if the credit card belongs to MasterCard.
*
* @par Example
* @verbatim
string result;
string cardnumberD1 = "6517823965782345";
string cardnumberM1 = "5017846270971474";
result = getCCType(cardnumberD1); // result would be false
result = getCCType(cardnumberM1); // result would be true
@endverbatim
************************************************************************/
bool MastercardTest (string cardnumber)
{
    if(int(cardnumber[0])==(48+5) && int(cardnumber[1])<=(48+5) && cardnumber.length()==16)
    return true;
    else
    return false;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* If the digits of the given credit card number start with one of the following:
* 65, 644 to 649, 6011, 622126 to 622926 and the length of the credit card 
* number is 16 digits long, then the function returns true, else false
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if the credit card belongs to Discover.
*
* @par Example
* @verbatim
string result;
string cardnumberD1 = "6517823965782345";
string cardnumberM1 = "5017846270971474";
result = getCCType(cardnumberD1); // result would be true
result = getCCType(cardnumberM1); // result would be false
@endverbatim
************************************************************************/
bool DiscoverTest (string cardnumber)
{
    if(int(cardnumber[0])==(48+6) && cardnumber.length()==16)
    {
        if(int(cardnumber[1])==(48+5))
        return true;

        else if(int(cardnumber[1])==(48+4) && int(cardnumber[2])>=(48+4) && int(cardnumber[2])<=(48+9))
        return true;

        else if(int(cardnumber[1])==(48+0) && int(cardnumber[2])==(48+1) && int(cardnumber[3])==(48+1))
        return true;

        else if(int(cardnumber[1])==(48+2) && int(cardnumber[2])==(48+2) && int(cardnumber[3])>=(48+1) && int(cardnumber[3])<=(48+9) && int(cardnumber[4])==(48+2) && int(cardnumber[5])==(48+6))
        return true;

        else 
        return false;
    }
    else
    return false;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Given a credit card number, the function will determine whether the credit 
* card number is valid by first checking to see if all digits of the card are 
* numbers and if so will pass the card number to defined functions depending 
* on the length of the card number that will determine if Luhn's algorithm 
* applies and if the credit card number is valid.
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if credit card number is valid.
*
* @par Example
* @verbatim
string result;
string cardnumberC1 = "4716150722142577" //16 digit cc number
string cardnumberC3 = "4456895832624"; //13 digit cc number
string cardnumberC5 = "345649595062090"; //15 digit cc number
string cardnumberI1 = "4425473125791"; //13 digit cc number
result = isValidCC(cardnumberC1); // result would be true
result = isValidCC(cardnumberC3); // result would be true
result = isValidCC(cardnumberC5); // result would be true
result = isValidCC(cardnumberI1); // result would be false
@endverbatim
************************************************************************/
bool isValidCC (string cardnumber)
{
    int length = int(cardnumber.length());
    int i=0;
    bool validity = true;

    for(i=0; i<cardnumber.length(); i++)
    {
        if(int(cardnumber[i])<48 || int(cardnumber[i])>57)
        {
            validity = false;
            break;
        }
    }
    
    if (validity == true)
    {
        if (length==16)
        {
            if(LuhnAlg16(cardnumber)!=0)
            return true;
            else
            return false;
        }

        else if (length==13)
        {
            if(LuhnAlg13(cardnumber)!=0)
            return true;
            else
            return false;
        }

        else if (length==15)
        {
            if(LuhnAlg15(cardnumber)!=0)
            return true;
            else
            return false;
        }

        else 
        return false;
    }
    else
    return false;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Given a credit card number, the function will determine whether the credit 
* card number is valid by summing all the digits in the odd location. The digits
* in the even locations will be doubled and if this value is greater than 9 then
* the individual digits of the number will be summed and added to the sum. If the 
* sum of all the digits is divisible by 10 evenly, the credit card is a valid number.
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if credit card number is valid.
*
* @par Example
* @verbatim
string result;
string cardnumberC1 = "4716150722142577" //16 digit cc number
string cardnumberI1 = "3456495950680907" //16 digit cc number
result = isValidCC(cardnumberC1); // result would be true
result = isValidCC(cardnumberI1); // result would be false
@endverbatim
************************************************************************/
int LuhnAlg16 (string cardnumber)
{
    int i=0,j=0,l=0;
    int sum=0;
    for(i=0; i<=15; i++)
    {
        if(i%2==0)
        {
            j=2*(int(cardnumber[i])-48);
            if(j>9)
            {
                int add=0;
                while(j>0)
                {
                    l=j%10;
                    add+=l;
                    j=j/10;
                }
                sum+=add;
            }
            else
            {
                sum+=j;
            }    
        }
        else
        {
            sum+=(int(cardnumber[i])-48);
        }
    }    
    return !(sum%10);
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Given a credit card number, the function will determine whether the credit 
* card number is valid by summing all the digits in the even location. The digits
* in the odd locations will be doubled and if this value is greater than 9 then
* the individual digits of the number will be summed and added to the sum. If the 
* sum of all the digits is divisible by 10 evenly, the credit card is a valid number.
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if credit card number is valid.
*
* @par Example
* @verbatim
string result;
string cardnumberC1 = "4456895832624" //13 digit cc number
string cardnumberI1 = "4425473125791" //13 digit cc number
result = isValidCC(cardnumberC1); // result would be true
result = isValidCC(cardnumberI1); // result would be false
@endverbatim
************************************************************************/
int LuhnAlg13 (string cardnumber)
{
    int i=0,j=0,l=0;
    int sum=0;
    for(i=1; i<=11; i+=2)
        {
            j=2*(int(cardnumber[i])-48); 
            int add=0;
            while(j>0)
            {
                l=j%10;
                add+=l;
                j=j/10;
            }
            sum+=add;
        }   
        for(i=0; i<=12; i+=2)
        {
            sum+=(int(cardnumber[i])-48);
        }   
    return !(sum%10);
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Given a credit card number, the function will determine whether the credit 
* card number is valid by summing all the digits in the even location. The digits
* in the odd locations will be doubled and if this value is greater than 9 then
* the individual digits of the number will be summed and added to the sum. If the 
* sum of all the digits is divisible by 10 evenly, the credit card is a valid number.
*
* @param[in] cardnumber The string containing the credit card number.
*
* @returns (true/false) True: if credit card number is valid.
*
* @par Example
* @verbatim
string result;
string cardnumberC1 = "345649595062090" //15 digit cc number
string cardnumberI1 = "345643595068094" //15 digit cc number
result = isValidCC(cardnumberC1); // result would be true
result = isValidCC(cardnumberI1); // result would be false
@endverbatim
************************************************************************/
int LuhnAlg15 (string cardnumber)
{
    int i=0,j=0,l=0;
    int sum=0;
    for(i=1; i<=13; i+=2)
        {
            j=2*(int(cardnumber[i])-48); 
            int add=0;
            while(j>0)
            {
                l=j%10;
                add+=l;
                j=j/10;
            }
            sum+=add;
        }   
        for(i=0; i<=14; i+=2)
        {
            sum+=(int(cardnumber[i])-48);
        }  
    return !(sum%10);
}