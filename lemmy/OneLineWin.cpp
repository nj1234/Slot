#include "OneLineWIn.h"

bool OneLineWin::checkIfWin(const std::vector<Field*>& inp)
{
    return (*inp[3] == *inp[4]) && (*inp[4] == *inp[5]);
}
