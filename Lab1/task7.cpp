#include <iostream> 

#include <string>

#include <cctype>

//Defining the macro
#define MIN_LENGTH 8

//Creating a boolean for the length 
bool passLength(std::string password){

    return password.length()>=MIN_LENGTH;

}

int main(){

    //Defining the string which will store the password chosen by the user
    std::string userPass;
    bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;

    //Messages for the user
    std::cout<<"Hello! Lets create a perfect password!"<<std::endl;
    std::cout<<"Your password lenght has to be a minimum of 8 charachers. ";
    std::cout<<"It should contain-> \nOne uppercase letter."<<std::endl;
    std::cout<<"One lowercase letter.\nOne digit.\nOne special character."<<std::endl;
    std::cout<<"Type in your password: ";
    std::cin>>userPass;

    //The FOR loop checks if the previously defined boolean values should be changed to true
    for(char c:userPass){

        if(std::isupper(c)) hasUpper=true;

        else if(std::islower(c)) hasLower=true;

        else if(std::isdigit(c)) hasDigit=true;

        else if(userPass.find("!@#$%^&*")) hasSpecial=true;

    }

    //Checks if the passLength boolean is true or false and prints results accordingly
    if(passLength(userPass)){

        std::cout<<"Your password has the required length."<<std::endl;

        //If boolean is true, the program checks whether all other character conditions are met
        if(hasUpper&&hasLower&&hasDigit&&hasSpecial){

            std::cout<<"Strong password.";

        }

        /*If not all conditions are met, the program checks which ones are missing
        and prints results accordingly*/
        else{

            std::cout<<"Weak password. Here's what you're missing: "<<std::endl;

            if(!hasUpper){

                std::cout<<"An uppercase letter."<<std::endl;

            }

            if(!hasLower){

                std::cout<<"A lowercase letter."<<std::endl;

            }

            if(!hasDigit){

                std::cout<<"A digit."<<std::endl;

            }

            if(!hasSpecial){

                std::cout<<"A special character."<<std::endl;

            }

        }

    }

    else{

        std::cout<<"Your password does not include the required length. Please choose a new password."<<std::endl;

    }
    return 0;

}