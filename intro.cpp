#include <iostream>
#include <ctime>

void Intro(int VaultId)
{
    std ::cout << "\n\nYou are BlackHat Hacker breaking into the VAULT " << VaultId << std::endl;
    std ::cout << "Hack a code so that Heist can be successful....." << std ::endl;
}
bool PlayGame(int VaultId)
{
    Intro(VaultId);

    const int a = rand() % VaultId+ VaultId;
    const int b = rand() % VaultId+ VaultId;
    const int c = rand() % VaultId+ VaultId;

    const int CodeSum = a + b + c;
    const int CodeProduct = a * b * c;

    std::cout << "There are 3 number in code\n";
    std::cout << "+ The code adds-up to " << CodeSum << "\n";
    std::cout << "+ The code multiply to give " << CodeProduct << "\n";

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You Entered: " << GuessA << GuessB << GuessC<<std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int Guessproduct = GuessA * GuessB * GuessC;

    if ((GuessSum == CodeSum) && (Guessproduct == CodeProduct))
    {
        std::cout << "\nGreat Work Keep going...."<<std::endl;
        std::cout << "*****CONGRATS YOU HAVE EARNED $"<< VaultId <<" MILLION*****"<< std::endl;
        std::cout << "**GO FOR VAULT "<< VaultId+1 << std::endl;
        return true;
    }

    else
        std::cout << "\n\nBetter Luck next time** :( !!\n";
        std::cout << "\n**RETURNING TO VAULT "<<VaultId << std::endl;
    return false;
}

int main()
{
    srand(time(NULL));
    int VaultId = 1;
    int FinalVault = 5;

    while (VaultId <= FinalVault)
    {
        bool LvlComplete = PlayGame(VaultId);
        std::cin.clear();
        std::cin.ignore();

        if (LvlComplete)
        {
            ++VaultId;
        }
    }
        std::cout << "\n\nCONGRATULATIONS YOU WON !! ;)";
        std::cout << "\nHEIST IS SUCCESSFULLY COMPLETED";
        std::cout << "\nYOU  HAVE EARNED $15,000,000";
        std::cout << "\nBELLA CIAO BELLA CIAO BELLA CIAO ;) \n";

    return 0;
}