#include "include/ComputerScientist.h"
#include "include/FileData.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
     FileData F("LOL.txt");
     F.Save("TESTING.txt");
    return 0;
}
