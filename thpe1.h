/** **********************************************************************
* @file
************************************************************************/
#pragma once
#include <string>
#include <cctype>
using namespace std;

string getCCType (string cardnumber);
bool AmericanExpressTest (string cardnumber);
bool VisaTest (string cardnumber);
bool MastercardTest (string cardnumber);
bool DiscoverTest (string cardnumber);

bool isValidCC (string cardnumber);
int LuhnAlg16 (string cardnumber);
int LuhnAlg13 (string cardnumber);
int LuhnAlg15 (string cardnumber);