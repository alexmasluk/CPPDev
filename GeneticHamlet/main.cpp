#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
#include <random>
#include <algorithm>
using namespace std;

const string TARGET = "TO BE OR NOT TO BE THAT IS THE QUESTION";
const string DEAD   = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const int POP_SIZE = 800;

void printPatSample(string* pop, int* pat, int numPat);
int lcs(string x);
bool targetFound(string* pop);

int main()
{
    srand(time(NULL));
    int length = TARGET.length();
    string population[POP_SIZE];
    for (int i=0; i<POP_SIZE; i++)
        population[i]=DEAD;

    //fill with random characters
    for (int i=0; i<POP_SIZE; i++)
    {
        for (int j=0; j<length; j++)
        {
            char c = char(rand()%27+65);
            if (!isalpha(c)) c=' ';
            population[i][j]=c;
        }
    }


    cout << "Initial Population sample::" << endl;
    for (int i=0; i<POP_SIZE; i+=500)
        cout << population[i] << endl;
    cout << endl << "INITIATE EUGENIC PROGRAM" << endl;

    while (!targetFound(population))
    {
        //find indices of potential parents and kill unfit individuals
        int max=0, total=0, maxIndex;
        int score[POP_SIZE];
        for (int i=0; i<POP_SIZE; i++)
        {
            score[i] = lcs(population[i]);
            if (score[i]>max)
            {
                maxIndex=i;
                max=score[i];
            }
        }
        sort(score, score+POP_SIZE);
        int median = score[POP_SIZE/2];

        cout << population[maxIndex] << endl
//             << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
             << "---------------------------------------" << endl;

        int patricians[POP_SIZE], numPatricians=0, numDead=0;
        float avg = float(total)/POP_SIZE;
        for (int i=0; i<POP_SIZE; i++)
        {
            if (lcs(population[i])>avg && population[i].find('x')==-1)
                patricians[numPatricians++]=i;
            else
            {
                population[i]=DEAD;
                numDead++;
            }
        }

        cout << "Patricians: " << numPatricians << endl;
        //repopulate dead with superior genetics
        int cCount=0, pCount=0, current=0;
        while (cCount<numDead)
        {
            //find first dead;
            while (population[current]!=DEAD)
                current++;

            //find two first two parents
            if (pCount>numPatricians-1) pCount=0;

            string dad=population[patricians[pCount]],
                   mom=population[patricians[pCount+1]],
                   child=DEAD;
//            cout << "dad: " << dad << " mom: " << mom << endl;
            for (int j=0; j<dad.length(); j++)
            {
                if (j<TARGET.length()/2) child[j]=dad[j];
                else child[j]=mom[j];

                //x-men
                if (rand()%1000==0)
                {
                    char c = char(rand()%27+65);
                    if (!isalpha(c)) c=' ';
                    child[j]=c;
                }
            }
            population[current++]=child;
            pCount+=2; cCount++;
        }
        cout << "(g)o forward  or (s)tats? > ";
        char response;
        cin >> response;
        if (response=='s')
            printPatSample(population, patricians, numPatricians);

    }

    int hamlet;
    for (int i=0; i<POP_SIZE; i++)
    {
        if (lcs(population[i])==TARGET.length())
            hamlet=i;
    }

    cout << "Final Population: " << endl;
    for (int i=0; i<POP_SIZE; i+=500)
        cout << population[i] << endl;
    cout << "You successfully bred Hamlet. His first words: " << endl;
    cout <<  population[hamlet] << endl;
}

void printPatSample(string* pop, int* pat, int numPat)
{
    for (int i=0; i<numPat; i++)
        cout << pop[pat[i]] << endl;

}
bool targetFound(string* pop)
{
    bool found=false;
    for (int i=0; i<POP_SIZE; i++)
        if (lcs(pop[i])==TARGET.length())
            found=true;
    return found;
}

int lcs(string x)
{
    int side = TARGET.length()+1;
    int c[side][side];
    string a = " " + x;
    string b = " " + TARGET;
    for (int i=0; i<side; i++)
        c[i][0] = 0;
    for (int j=0; j<side; j++)
        c[0][j] = 0;
    for (int i=1; i<side; i++)
        for (int j=1; j<side; j++)
        {
            if (a[i] == b[j])
                c[i][j] = c[i-1][j-1]+1;
            else
                c[i][j] = max(c[i][j-1], c[i-1][j]);
        }
    return c[side-1][side-1];
}
