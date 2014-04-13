//
//  main.cpp
//  MCAT Drill Bit
//
//  Created by Alex Crist on 4/12/14.
//  Copyright (c) 2014 WH External Projects. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

const char MAX_TERM=15;


int main(int argc, const char * argv[])
{
    int piterations;
    cout << "MCAT DrillBit v0.1c" << endl << endl;
    cout << "Practice Iterations: ";
    cin >> piterations;
    
    int correct = 0;
    int starttime = (int)time(0);
    
    for( int i = 0; i < piterations; i++ )
    {
        srand( (int)time(0) );
        short int term1 = rand() % MAX_TERM;
        short int term2 = rand() % MAX_TERM;

        int answer;

        cout << "Fact:" << endl << endl;

        cout << term1 << " * " << term2 << " : ";
        cin >> answer;

        if ( answer == term1 * term2 )
        {
            cout << endl << endl << "ESO!" << endl << endl;
            correct++;
        }
        
        else
        {
            cout << endl << endl << "NO PO!" << endl;
            cout << "WAS : " << term1 * term2 << endl << endl;
        }
    }
    
    int endtime = (int) time(0);
    
    cout << "Workout Report:" << endl;
    cout << "Correct: \t" << correct << "\t" << (double)correct/piterations*100 << "%" << endl;
    cout << "Incorrect: \t" << piterations - correct << "\t" << (double)(piterations - correct)/piterations*100 << "%" << endl;
    cout << "(Total:) \t" << piterations << endl;
    cout << "Time : " << "\t\t" << endtime - starttime << "s" << endl;
    cout << "T/Fact: " << "\t" << (double)((endtime - starttime) / piterations) << "s" << endl;
    
    cout << endl << "Input any character to continue..." << endl;
    cin >> piterations;
    
    return 0;
}