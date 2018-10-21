/*
File: main.cpp
Description: This program will input a string and input a character to count
Author: Nathan Trujillo
Email: trujillon@student.vvc.edu
Date Created: 10-18-2018
*/

#include<iostream>
#include<string>

using namespace std;

/**
Will prompt the user to enter a string and return the string
@param ask_the_user_something will prompt the user to input a string from main
@return will return the string provided by the user
*/
string get_string(string ask_the_user_something)
{
    string input;
    cout << ask_the_user_something;
    getline (cin, input);
    
    return input;
}

/** 
Will count the characters the user provides in a string
@param s is the string provided by the user
@param c is the user provided character to be counted
@return will return the number of characters counted
*/
int char_count(string s, char c)
{    
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char character = s.at(i);
        if (character == c)
        {
            count++;   
        }
    }

    return count;
}


int main()
{
    string here_is_the_string  = get_string("Enter a string: ");

    char input;
    cout << "Please enter a character to count: ";
    cin >> input;
    
    int here_is_the_count = char_count(here_is_the_string, input);
    cout << "There are " <<  here_is_the_count <<  " " << input << "'s in your string. " << endl;
    
    return 0;
}
