#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "thpe1.h"

//TEST CASES FOR AMERICAN EXPRESS CCs

TEST_CASE ("getCCType - What type of Card is 341672348908765?")
{
    string cardnumberA1 = "341672348908765";
    REQUIRE(getCCType(cardnumberA1) == "American Express");
}

TEST_CASE ("getCCType - What type of Card is 378965432678543?")
{
    string cardnumberA2 = "378965432678543";
    REQUIRE(getCCType(cardnumberA2) == "American Express");
}

//TEST CASES FOR VISA CCs

TEST_CASE ("getCCType - What type of Card is 4137820820754?")
{
    string cardnumberV1 = "4137820820754";
    REQUIRE(getCCType(cardnumberV1) == "Visa");
}

TEST_CASE ("getCCType - What type of Card is 4764972507125897?")
{
    string cardnumberV2 = "4764972507125897";
    REQUIRE(getCCType(cardnumberV2) == "Visa");
}

//TEST CASES FOR MASTERCARD CCs

TEST_CASE ("getCCType - What type of Card is 5017846270971474?")
{
    string cardnumberM1 = "5017846270971474";
    REQUIRE(getCCType(cardnumberM1) == "Mastercard");
}

TEST_CASE ("getCCType - What type of Card is 5398723460972836?")
{
    string cardnumberM2 = "5398723460972836";
    REQUIRE(getCCType(cardnumberM2) == "Mastercard");
}

TEST_CASE ("getCCType - What type of Card is 5589027360987623?")
{
    string cardnumberM3 = "5589027360987623";
    REQUIRE(getCCType(cardnumberM3) == "Mastercard");
}

//TEST CASES FOR DISCOVER CCs

TEST_CASE ("getCCType - What type of Card is 6517823965782345?")
{
    string cardnumberD1 = "6517823965782345";
    REQUIRE(getCCType(cardnumberD1) == "Discover");
}

TEST_CASE ("getCCType - What type of Card is 6448754982736485?")
{
    string cardnumberD2 = "6448754982736485";
    REQUIRE(getCCType(cardnumberD2) == "Discover");
}

TEST_CASE ("getCCType - What type of Card is 6497892746387423?")
{
    string cardnumberD3 = "6497892746387423";
    REQUIRE(getCCType(cardnumberD3) == "Discover");
}

TEST_CASE ("getCCType - What type of Card is 6011728364790234?")
{
    string cardnumberD4 = "6011728364790234";
    REQUIRE(getCCType(cardnumberD4) == "Discover");
}

TEST_CASE ("getCCType - What type of Card is 6221268173694726?")
{
    string cardnumberD5 = "6221268173694726";
    REQUIRE(getCCType(cardnumberD5) == "Discover");
}

TEST_CASE ("getCCType - What type of Card is 6225266892346723?")
{
    string cardnumberD6 = "6225266892346723";
    REQUIRE(getCCType(cardnumberD6) == "Discover");
}

TEST_CASE ("getCCType - What type of Card is 6229261928374610?")
{
    string cardnumberD7 = "6229261928374610";
    REQUIRE(getCCType(cardnumberD7) == "Discover");
}

//TEST CASES FOR UNKNOWN CCS

TEST_CASE ("getCCType - What type of Card is 6229257268374987?")
{
    string cardnumberU1 = "6229257268374987";
    REQUIRE(getCCType(cardnumberU1) == "Unknown");
}

TEST_CASE ("getCCType - What type of Card is 622i257268374907?")
{
    string cardnumberU2 = "622i257268374907";
    REQUIRE(getCCType(cardnumberU2) == "Unknown");
}

//TEST CASES TO CHECK IF 16 DIGIT CC IS VALID

TEST_CASE ("isValidCC - To check validity of 4716150722142577")
{
    string cardnumberC1 = "4716150722142577";
    REQUIRE(isValidCC(cardnumberC1) == true);
}

TEST_CASE ("isValidCC - To check validity of 5023589379548211")
{
    string cardnumberC2 = "5023589379548211";
    REQUIRE(isValidCC(cardnumberC2) == true);
}

//TEST CASES TO CHECK IF 13 DIGIT CC IS VALID

TEST_CASE ("isValidCC - To check validity of 4456895832624")
{
    string cardnumberC3 = "4456895832624";
    REQUIRE(isValidCC(cardnumberC3) == true);
}

TEST_CASE ("isValidCC - To check validity of 7425473237792")
{
    string cardnumberC4 = "7425473237792";
    REQUIRE(isValidCC(cardnumberC4) == true);
}

//TEST CASES TO CHECK IF 15 DIGIT CC IS VALID

TEST_CASE ("isValidCC - To check validity of 345649595062090")
{
    string cardnumberC5 = "345649595062090";
    REQUIRE(isValidCC(cardnumberC5) == true);
}

TEST_CASE ("isValidCC - To check validity of 343669144240775")
{
    string cardnumberC6 = "343669144240775";
    REQUIRE(isValidCC(cardnumberC6) == true);
}

//TEST CASES FOR INVALID CC's

TEST_CASE ("isValidCC - To check validity of 4425473125791")
{
    string cardnumberI1 = "4425473125791";
    REQUIRE(isValidCC(cardnumberI1) == false);
}

TEST_CASE ("isValidCC - To check validity of 345649595068090")
{
    string cardnumberI2 = "345649595068090";
    REQUIRE(isValidCC(cardnumberI2) == false);
}

TEST_CASE ("isValidCC - To check validity of 5385288768768674")
{
    string cardnumberI3 = "5385288768768674";
    REQUIRE(isValidCC(cardnumberI3) == false);
}

TEST_CASE ("isValidCC - To check validity of 6585288877768476")
{
    string cardnumberI4 = "6585288877768476";
    REQUIRE(isValidCC(cardnumberI4) == false);
}

TEST_CASE ("isValidCC - To check validity of 741615u722142577")
{
    string cardnumberI5 = "741615u722142577";
    REQUIRE(isValidCC(cardnumberI5) == false);
}

TEST_CASE ("isValidCC - To check validity of 471W150722o42577")
{
    string cardnumberI6 = "471W150722o42577";
    REQUIRE(isValidCC(cardnumberI6) == false);
}

TEST_CASE ("isValidCC - To check validity of 34R669144240o75")
{
    string cardnumberI7 = "34R669144240o75";
    REQUIRE(isValidCC(cardnumberI7) == false);
}

TEST_CASE ("isValidCC - To check validity of 445689583262p")
{
    string cardnumberI8 = "44568958326p";
    REQUIRE(isValidCC(cardnumberI8) == false);
}
