// a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h>
#include <Xinput.h>
#include <iostream>


DWORD dwResult;
for (DWORD i = 0; i < XUSER_MAX_COUNT; i++)
{
    XINPUT_STATE state;
    ZeroMemory(&state, sizeof(XINPUT_STATE));

    // Simply get the state of the controller from XInput.
    dwResult = XInputGetState(i, &state);

    if (dwResult == ERROR_SUCCESS)
    {
        // Controller is connected
    }
    else
    {
        // Controller is not connected
    }
}


int main()
{
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
