#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <unistd.h>
#include <crypt.h>

#define _XOPEN_SOURCE

//string matched(char hashed, char password);

int main(int argc, string argv[]) 
{
     //print error if not one argument given 
    if (argc != 2) 
    {
        printf("Please provide one argument\n");
        return 1;
    }

    
    // get user input from passed command line argument.
    string password = argv[1];
    
    string encryptedPasword  = crypt(password, "50");
   { 
    printf("encrypted: %s \n", encryptedPasword);
   }
    
    //crack the given password
    
    string hashed[5];
    
    for (hashed = 'A', int j = strlen(hashed); hashed <= 'Z' ; hashed++)
    { 
    string pass = hashed[i] * int j;
    
            for (int i=0; i < hashed[5]; i++)
            {
            printf("%s\n" , pass);
            return 0;
            }
    
    }

//for (hashed = 'a' , int j = strlen(hashed) ; hashed <= 'z' ; hashed++ )
//{
//}
    
    //    for( int i = 0, j = strlen(hashed) ; i < j ; i++ )
//  string hashed = get_string();
//  for( char i = 'a', j = strlen(hashed); i <= 'z' ; ++i) 
//  {
//      char password = i * j;
//      printf("The password is: %c\n", password);
//      return 0;
    
    //print the password with \n
    
}

//string matched(char hashed, char password)
//{
//    bool strcmp(char hashed, char password) == 1;
//    return 0;
//}
//else return 1;
