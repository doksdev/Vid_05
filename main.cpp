#include "general.hpp"
#include "hang.hpp"
#include <string>



int main(int argc, char const *argv[])
{
    bool inGame;
    int i, j, k;
    Hang::State state = Hang::NOTHING;

    int length_temp;
    std::string usersWord;

    std::cout << "Define a word : ";
    std::cin >> usersWord;
    length_temp = usersWord.length();

    const int LENGTH = length_temp;
    char word[LENGTH];
    bool find[LENGTH];
    char letter;
    int errors = 0;

    // fill in the 'word' array
    // fill the 'find' array with clues to find the word
    for(i = 0; i < LENGTH; i++)
    {
        word[i] = usersWord[i];
        if (LENGTH <= 6)
        {
            if ( i == 2 ) find[i] = true;
            else if ( i == 4 ) find[i] = true;
            else find[i] = false;
        }
        else 
        {
            if (i == 2) find[i] = true;
            else if (i == LENGTH / 2) find[i] = true;
            else if (i == LENGTH - 1) find[i] = true;
            else find[i] = false;
        }
    }

    General::Clear();
    inGame = true;
    while (inGame)
    {
        std::cout << " Word to Guess : " << std::endl;
        for(i = 0; i < LENGTH; i++)
        {
            if(find[i] == true) std::cout << word[i] << " ";
            else std::cout << "_ ";
        }
        std::cout << std::endl << std::endl << "Entrer une lettre : ";
        std::cin >> letter;
        
        // check if 'letter' is in the word
        j = 0;
        for(i = 0; i < LENGTH; i++)
        {
            if(word[i] == letter)
            {
                if(find[i] != true) j++;
                find[i] = true;
            } 
        }

        // if j == 0, 'letter' is not in 'word' so error
        if (j == 0) 
        {
            errors++;
        }

        General::Clear();

        // display the hanged man depending on the number of errors
        if(errors == 1) Hang::printHead();
        else if (errors == 2) Hang::printBody();
        else if (errors == 3) Hang::printLeg();
        else if(errors == 4) Hang::printFoot();
        else if(errors == 5) inGame = false;

        std::cout << std::endl;

        std::cin.get();
        std::cout << errors << " errors ( 5 max )" << std::endl;

        // Check if all 'letter' of the 'word' has been found 
        // if k == LENGTH, the user win
        k = 0;
        for(i = 0; i < LENGTH; i++)
        {
            if(find[i] == true) k++;
        }
        if( k == LENGTH)
        {
            std::cout << std::endl << " [+][+][+] YOU WIN ! :D [+][+][+] " << std::endl;
            inGame = false;
        }
    }

    if(errors == 5) 
    {
        std::cout << std::endl << " [-][-][-] You Lose :( [-][-][-] " << std::endl;
    }
    return 0;
}