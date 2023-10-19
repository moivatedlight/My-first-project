// Alfonso David Perez
// CSC 5 CIS - 47113
// The pruose of this prject is to make a very small fighting game that will allow me to build upon it more as the semester goes on. In the beginning we will focus on getting the main game down, as the semester goes on I want to add unique character voice lines, more complicated in the moves and how they work, along with a more balace between the characters so they are all fun to play
// Last modified Date

#include <iostream>
#include <iomanip>

using namespace std;

char dollface;
int dollfaceH = 150;
int dollfaceH2 = 150;
int Hairsnag = 30;
int Daydream = 20;
int HouseSmash = 40;
int flowerbasket = 25;

char bonkers;
int bonkersH = 350;
int bonkersH2 = 350;
int BONK = 20;
int BAM = 10;
int BOOM = 25;
int CRUNCH = 15;

char hackeyslashy;
int hackeyslashH = 100;
int hackeyslashH2 = 100;
int slash = 50;
int hacknslash = 30;
int dashslash = 20;
int deepcuts = 20;

char doctorPlague;
int doctorPlagueH = 200;
int doctorPlagueH2 = 200;
int Pbomb = 20;
int Hconcoction = 10;
int Thebigone = 35;
int smokewall = 5;

int PlayeroneCharC;
int PlayertwoCharC;
int PlayeroneMoveC;
int PlayertwoMoveC;
void characterVoicelineP (char, char, char, char);
void characterVoicelineP2 (char, char, char, char);
void charactersfightingdollndoll (int, int, int, int, int, int, int);
void charactersfightingdollbonk (int, int, int, int, int, int, int, int, int, int);
void charactersfightingdollhackey (int, int, int, int, int, int, int, int, int, int);
void charactersfightingdollplag (int, int, int, int, int, int, int, int, int, int);
void charactersfightingbonkdoll (int, int, int, int, int, int, int, int, int, int);
void charactersfightingbonknbonk (int, int, int, int, int, int);
void charactersfightingbonkhakcey (int, int, int, int, int, int, int, int, int, int);
void charactersfightingbonkplag (int, int, int, int, int, int, int, int, int, int);
void charactersfightinghackeydoll (int, int, int, int, int, int, int, int, int, int);
void charactersfightinghackeybonk (int, int, int, int, int, int, int, int, int, int);
void charactersfightinghackeynhackey (int, int, int, int, int, int);
void characterfightinghackeyplag (int, int, int, int, int, int, int, int, int, int);
void characterfightingplagdoll (int, int, int, int, int, int, int, int, int, int);
void characterfightingplaghackey (int, int, int, int, int, int, int, int, int, int);
void characterfightingplagbonk (int, int, int, int, int, int, int, int, int, int);
void characterfightingplagnplag (int, int, int, int, int, int);
int charmovesdollface (int, int, int, int, int);
int charmovesbonkers (int, int, int, int, int);
int charmoveshackeyslashy (int, int, int, int, int);
int charmovesdoctorPlague (int, int, int, int, int);


int main()
{
    cout << "****************************************************************************" << endl;
    cout << "Welcome to the Quad Rumble! Choose one of the four characters you would like to play, and who your second player would like to play and get ready to fight!" << endl;
    cout << "****************************************************************************" << endl;
    cout << "Player 1 choose who you would like to play." << endl
    << "Press 1 if you would like to play Dollface" << endl
    << "Press 2 if you would like to play Bonkers" << endl
    << "Press 3 if you would like to play Hackeys Slashy" << endl
    << "Press 4 if you would like to play Doctor Plague" << endl;
    cin >> PlayeroneCharC;
    cout << endl;
    
    characterVoicelineP(dollface, bonkers, hackeyslashy, doctorPlague);
    cout << endl;
    
    cout << "Player 2 choose who you would like to play." << endl
    << "Press 1 if you would like to play Dollface" << endl
    << "Press 2 if you would like to play Bonkers" << endl
    << "Press 3 if you would like to play Hackeys Slashy" << endl
    << "Press 4 if you would like to play Doctor Plague" << endl;
    cin >> PlayertwoCharC;
    cout << endl;
    
    characterVoicelineP2(dollface, bonkers, hackeyslashy, doctorPlague);
    cout << endl;

    cout << "So fighters this is how it is going to go, it will be a back in forth turn by turn fight." << endl
    <<" Player one will move first and then player two. Be careful and don't get over confident." << endl
    << " This fight can go either way. ALRIGHT FIGHTERS BEGIN!" << endl;
    
    cout << endl;
    
    if (PlayeroneCharC == 1 && PlayertwoCharC == 1)
    {
         charactersfightingdollndoll (dollfaceH, dollfaceH2, Hairsnag, Daydream, flowerbasket, PlayeroneMoveC, PlayertwoCharC);

    }
    else if (PlayeroneCharC == 1 && PlayertwoCharC == 2)
    {
        charactersfightingdollbonk (dollfaceH, Hairsnag, Daydream, HouseSmash, flowerbasket, bonkersH, BONK, BAM, BOOM, CRUNCH);

    }
    else if (PlayeroneCharC == 1 && PlayertwoCharC == 3)
    {
        charactersfightingdollhackey (dollfaceH, Hairsnag, Daydream, HouseSmash, flowerbasket, hackeyslashH, slash, hacknslash, dashslash, deepcuts);

    }
    else if (PlayeroneCharC == 1 && PlayertwoCharC == 4)
    {
        charactersfightingdollplag (dollfaceH, Hairsnag, Daydream, HouseSmash, flowerbasket, doctorPlagueH, Pbomb, Hconcoction, Thebigone, smokewall);

    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 1)
    {
        charactersfightingbonkdoll (bonkersH, BONK, BAM, BOOM, CRUNCH, dollfaceH, Hairsnag, Daydream, HouseSmash, flowerbasket);

    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 2)
    {
        charactersfightingbonknbonk (bonkersH, BONK, BAM, CRUNCH, BOOM, bonkersH2);
    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 3)
    {
        charactersfightingbonkhakcey (bonkersH, BONK, BAM, BOOM, CRUNCH, hackeyslashH, slash, hacknslash, deepcuts, deepcuts);

    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 4)
    {
        charactersfightingbonkplag (bonkersH, BONK, BAM, BOOM, CRUNCH, doctorPlagueH, Pbomb, Hconcoction, Thebigone, smokewall);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 1)
    {
        charactersfightinghackeydoll (hackeyslashH, slash, hacknslash, dashslash, deepcuts, dollfaceH, Hairsnag, Daydream, HouseSmash, flowerbasket);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 2)
    {
        charactersfightinghackeybonk (hackeyslashH, slash, hacknslash, dashslash, deepcuts, bonkersH, BONK, BAM, BOOM, CRUNCH);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 3)
    {
        charactersfightinghackeynhackey (hackeyslashH, hackeyslashH2, slash, dashslash, deepcuts, hacknslash);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 4)
    {
        characterfightinghackeyplag (hackeyslashH, slash, hacknslash, dashslash, deepcuts, doctorPlagueH, Pbomb, Hconcoction, Thebigone, smokewall);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 1)
    {
        characterfightingplagdoll (doctorPlagueH, Pbomb, Hconcoction, Thebigone, smokewall, dollfaceH, Hairsnag,Daydream, HouseSmash, flowerbasket);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 2)
    {
        characterfightingplagbonk (doctorPlagueH, Pbomb, Hconcoction, Thebigone, smokewall, bonkersH, BONK, BAM, BOOM, CRUNCH);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 3)
    {
        characterfightingplaghackey (doctorPlagueH, Pbomb, Hconcoction, Thebigone, smokewall, hackeyslashH, slash, hacknslash, dashslash, deepcuts);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 4)
    {
        characterfightingplagnplag (doctorPlagueH, doctorPlagueH2, Pbomb, Hconcoction, Thebigone, smokewall);

    }
    else
        cout << "Error I have no idea how you got here because you should not pass the other check, but if you manage to." << endl
        << "HOW DARE YOU, YOU BROKE MY CODE" << endl;
    
    return 0;
}
void characterVoicelineP (char dollface, char bonkers, char hackeyslashy, char doctorPlague)
{
    do
    {
        
        if (PlayeroneCharC == 1)
        {
            cout << "Let's shove them in the Dollhouse!" << endl;
        }
        else if (PlayeroneCharC == 2)
        {
            cout << "I'm gonna Bonkya down to size" << endl;
        }
        else if (PlayeroneCharC == 3)
        {
            cout << "You are going to get chopped to bits" << endl;
        }
        else if (PlayeroneCharC == 4)
        {
            cout << "You cannot outlast the Plague, many have tired and all have failed" << endl;
        }
        else
            cout << "Not a valid choice please try again" << endl;
    }
    while (PlayeroneCharC < 1 && PlayeroneCharC > 4);
    
}

void characterVoicelineP2 (char dollface, char bonkers, char hackeyslashy, char doctorPlague)
{
    do
    {
        
        if (PlayertwoCharC == 1)
        {
            cout << "Lets's show that first player what it means to play house" << endl;
        }
        else if (PlayertwoCharC == 2)
        {
            cout << "Leave it up to me, I'll bonk them like a mole" << endl;
        }
        else if (PlayertwoCharC == 3)
        {
            cout << "I'll slice you in two" << endl;
        }
        else if (PlayertwoCharC == 4)
        {
            cout << "Plague often favors those who are decisive and fast, don't fall behind" << endl;
        }
        else
            cout << "Not a valid choice please try again" << endl;
    }
    while (PlayertwoCharC < 1 && PlayertwoCharC > 4);
    
}
void charactersfightingdollndoll (int dollfaceH, int dollfaceH2, int Hairsnag, int Daydream, int flowerbasket, int PlayeroneMoveC, int PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25)" << endl;
        cin >> PlayeroneMoveC;
        if (PlayeroneMoveC == 1)
        {
            dollfaceH2 = dollfaceH2 - Hairsnag;
        }
        else if (PlayeroneMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + Daydream;
        }
        else if (PlayeroneMoveC == 3)
        {
            dollfaceH2 = dollfaceH2 - HouseSmash;
        }
        else if (PlayeroneMoveC == 4)
        {
            dollfaceH = dollfaceH2 - flowerbasket;
        }
            cout
            << "1. Hair Snag (Base Damage 30)" << endl
            << "2. Day Dream (Heal for 20)" << endl
            << "3. House Smash (Base Damage 40)" << endl
            << "4. Flower Basket (Base Damage 25)" << endl;
            cin >> PlayertwoMoveC;
            if (PlayertwoMoveC == 1)
            {
                dollfaceH = dollfaceH - Hairsnag;
            }
            else if (PlayertwoMoveC == 2 && dollfaceH2 < 150)
            {
                dollfaceH2 = dollfaceH2 + Daydream;
            }
            else if (PlayertwoMoveC == 3)
            {
                dollfaceH = dollfaceH - HouseSmash;
            }
            else if (PlayertwoMoveC == 4)
            {
                dollfaceH = dollfaceH - flowerbasket;
            }
    }
    while (dollfaceH >= 0 && dollfaceH2 >= 0);

}
void charactersfightingdollbonk (int dollfaceH, int Hairsnag, int Daydream, int Housesmash, int flowerbasket, int bonkersH, int BONK, int BAM, int BOOM, int CRUNCH)
{
    cout
    << "1. Hair Snag (Base Damage 30)" << endl
    << "2. Day Dream (Heal for 20)" << endl
    << "3. House Smash (Base Damage 40)" << endl
    << "4. Flower Basket (Base Damage 25)" << endl;
cin >> PlayeroneMoveC;
    if (PlayeroneMoveC == 1)
    {
        bonkersH = bonkersH - Hairsnag;
    }
    else if (PlayeroneMoveC == 2 && dollfaceH < 150)
    {
        dollfaceH = dollfaceH + Daydream;
    }
    else if (PlayeroneCharC == 3)
    {
        bonkersH = bonkersH - Housesmash;
    }
    else if (PlayeroneCharC == 4)
    {
        bonkersH = bonkersH - flowerbasket;
    }
    
    cout
    << "1. BONK (Base Damage 20)" << endl
    << "2. BAM (Base Damage 10)" << endl
    << "3. BOOM (Base Damage 25)" << endl
    << "4. CRUNCH (Base Damage 15)" << endl;
    cin >> PlayertwoMoveC;
    if (PlayertwoMoveC == 1)
    {
        dollfaceH = dollfaceH - BONK;
    }
    else if (PlayertwoMoveC == 2)
    {
        dollfaceH = dollfaceH - BAM;
    }
    else if (PlayertwoMoveC == 3)
    {
        dollfaceH = dollfaceH - BOOM;
    }
    else if (PlayertwoMoveC == 4)
    {
        dollfaceH = dollface - CRUNCH;
    }
}
void charactersfightingdollhackey (int dollfaceH, int Hairsnag, int Daydream, int HouseSmash, int flowerbasket, int hackeyslashH, int slash, int hacknslash, int dashslash, int deepcuts)
{
    cout
    << "1. Hair Snag (Base Damage 30)" << endl
    << "2. Day Dream (Heal for 20)" << endl
    << "3. House Smash (Base Damage 40)" << endl
    << "4. Flower Basket (Base Damage 25)" << endl;
    if (PlayeroneMoveC == 1)
    {
        hackeyslashH = hackeyslashH - Hairsnag;
    }
    else if (PlayeroneMoveC == 2 && dollfaceH < 150)
    {
        dollfaceH = dollfaceH + Daydream;
    }
    else if (PlayeroneMoveC == 3)
    {
        hackeyslashH = hackeyslashH - HouseSmash;
    }
    else if (PlayeroneMoveC == 4)
    {
        hackeyslashH = hackeyslashH - flowerbasket;
    }
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayertwoMoveC;
    if (PlayertwoMoveC == 1)
    {
        dollfaceH = dollfaceH - slash;
    }
    else if (PlayertwoMoveC == 2)
    {
        dollface = dollfaceH - hacknslash;
    }
    else if (PlayertwoMoveC == 3)
    {
        dollfaceH = dollfaceH - hacknslash;
    }
    else if (PlayertwoMoveC == 4)
    {
        dollfaceH = dollfaceH - deepcuts;
    }
}

void charactersfightingdollplag (int dollfaceH, int Hairsnag, int Daydream, int HouseSmash, int flowerbasket, int doctorplagueH, int Pbomb, int Hconcoction, int Thebigone, int smokewall)
{
    cout
    << "1. Hair Snag (Base Damage 30)" << endl
    << "2. Day Dream (Heal for 20)" << endl
    << "3. House Smash (Base Damage 40)" << endl
    << "4. Flower Basket (Base Damage 25)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        doctorplagueH = doctorplagueH - Hairsnag;
    }
    else if (PlayeroneMoveC == 2 && dollfaceH < 150)
    {
        dollfaceH = dollfaceH + Daydream;
    }
    else if (PlayeroneMoveC == 3)
    {
        doctorplagueH = doctorplagueH - HouseSmash;
    }
    else if (PlayeroneMoveC == 4)
    {
        doctorplagueH = doctorplagueH - flowerbasket;
    }
    
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayertwoMoveC;
    if (PlayertwoMoveC == 1)
    {
        dollfaceH = dollfaceH - Pbomb;
    }
    else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH = doctorplagueH + Hconcoction;
    }
    else if (PlayertwoMoveC == 3)
    {
        dollfaceH = dollfaceH - Thebigone;
    }
    else if (PlayertwoMoveC == 4)
    {
        dollfaceH = dollfaceH - smokewall;
    }
    
}
void charactersfightingbonkdoll (int bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int dollfaceH, int Hairsnag, int Daydream, int Housesmash, int flowerbasket)
{
    cout
    << "1. BONK (Base Damage 20)" << endl
    << "2. BAM (Base Damage 10)" << endl
    << "3. BOOM (Base Damage 25)" << endl
    << "4. CRUNCH (Base Damage 15)" << endl;
    cin >> PlayeroneMoveC;
    if (PlayeroneMoveC == 1)
    {
        dollfaceH = dollfaceH - BONK;
    }
    else if (PlayeroneMoveC == 2)
    {
        dollfaceH = dollfaceH - BAM;
    }
    else if (PlayeroneMoveC == 3)
    {
        dollfaceH = dollfaceH - BOOM;
    }
    else if (PlayeroneMoveC == 4)
    {
        dollfaceH = dollface - CRUNCH;
    }
    cout
    << "1. Hair Snag (Base Damage 30)" << endl
    << "2. Day Dream (Heal for 20)" << endl
    << "3. House Smash (Base Damage 40)" << endl
    << "4. Flower Basket (Base Damage 25)" << endl;
cin >> PlayertwoMoveC;
    if (PlayertwoMoveC == 1)
    {
        bonkersH = bonkersH - Hairsnag;
    }
    else if (PlayertwoMoveC == 2 && dollfaceH < 150)
    {
        dollfaceH = dollfaceH + Daydream;
    }
    else if (PlayertwoCharC == 3)
    {
        bonkersH = bonkersH - Housesmash;
    }
    else if (PlayertwoCharC == 4)
    {
        bonkersH = bonkersH - flowerbasket;
    }
    
}
void charactersfightingbonknbonk (int bonkersH, int BONK, int BAM, int CRUNCH, int BOOM, int bonkersH2)
{
    cout
    << "1. BONK (Base Damage 20)" << endl
    << "2. BAM (Base Damage 10)" << endl
    << "3. BOOM (Base Damage 25)" << endl
    << "4. CRUNCH (Base Damage 15)" << endl;
    cin >> PlayeroneMoveC;
    if (PlayeroneMoveC == 1)
    {
        bonkersH2 = bonkersH2 - BONK;
    }
    else if (PlayeroneMoveC == 2)
    {
        bonkersH2 = bonkersH2 - BAM;
    }
    else if (PlayertwoMoveC == 3)
    {
        bonkersH2 = bonkersH2 - BOOM;
    }
    else if (PlayertwoMoveC == 4)
    {
        bonkersH2 = bonkersH2 - CRUNCH;
    }
    
    
    cout
    << "1. BONK (Base Damage 20)" << endl
    << "2. BAM (Base Damage 10)" << endl
    << "3. BOOM (Base Damage 25)" << endl
    << "4. CRUNCH (Base Damage 15)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        bonkersH = bonkersH - BONK;
    }
    else if (PlayertwoMoveC == 2)
    {
        bonkersH = bonkersH - BAM;
    }
    else if (PlayertwoMoveC == 3)
    {
        bonkersH = bonkersH - BOOM;
    }
    else if (PlayertwoMoveC == 4)
    {
        bonkersH = bonkersH - CRUNCH;
    }
    
}

void characterfightingbonkhackey (int bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int hackeyslashH, int slash, int hacknslash, int deepslash, int deepcuts)
    {
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            hackeyslashH = hackeyslashH - BONK;
        }
        else if (PlayeroneMoveC == 2)
        {
            hackeyslashH = hackeyslashH - BAM;
        }
        else if (PlayeroneMoveC == 3)
        {
            hackeyslashH = hackeyslashH - BOOM;
        }
        else if (PlayeroneMoveC == 4)
        {
            hackeyslashH = hackeyslashH - CRUNCH;
        }
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        bonkersH = bonkersH - slash;
    }
    else if (PlayertwoMoveC == 2)
    {
        bonkersH = bonkersH - hacknslash;
    }
    else if (PlayertwoMoveC == 3)
    {
        bonkersH = bonkersH - dashslash;
    }
    else if (PlayertwoMoveC == 4)
    {
        bonkersH = bonkersH - deepcuts;
    }
    }
void characterfightingbonkplag (int bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int doctorplagueH, int Pbomb, int Hconcoction, int Thebigone, int smokewall)
{
    cout
    << "1. BONK (Base Damage 20)" << endl
    << "2. BAM (Base Damage 10)" << endl
    << "3. BOOM (Base Damage 25)" << endl
    << "4. CRUNCH (Base Damage 15)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        doctorplagueH = doctorplagueH - BONK;
    }
    else if (PlayeroneMoveC == 2)
    {
        doctorplagueH = doctorplagueH - BAM;
    }
    else if (PlayeroneMoveC == 3)
    {
        doctorplagueH = doctorplagueH - BOOM;
    }
    else if (PlayeroneMoveC == 4)
    {
        doctorplagueH = doctorplagueH - CRUNCH;
    }
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        bonkersH = bonkersH - Pbomb;
    }
    else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH = doctorplagueH + Hconcoction;
    }
    else if (PlayertwoMoveC == 3)
    {
        bonkersH = bonkersH - Thebigone;
    }
    else if (PlayertwoMoveC == 4)
    {
        bonkersH = bonkersH - smokewall;
    }
}
void charactersfightinghackeydoll (int hackeyslashH, int slash, int hacknslash, int dashslash, int deepcuts, int dollfaceH, int Hairsnag,  int Daydream, int HouseSmash, int flowerbasker)
{
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        dollfaceH = dollfaceH - slash;
    }
    else if (PlayeroneMoveC == 2)
    {
        dollfaceH = dollfaceH - hacknslash;
    }
    else if (PlayeroneMoveC == 3)
    {
        dollfaceH = dollfaceH - dashslash;
    }
    else if (PlayeroneMoveC == 4)
    {
        dollfaceH = dollfaceH - deepcuts;
    }
    
    cout
    << "1. Hair Snag (Base Damage 30)" << endl
    << "2. Day Dream (Heal for 20)" << endl
    << "3. House Smash (Base Damage 40)" << endl
    << "4. Flower Basket (Base Damage 25)" << endl;
cin >> PlayertwoMoveC;
    if (PlayertwoMoveC == 1)
    {
        hackeyslashH = hackeyslashH - Hairsnag;
    }
    else if (PlayertwoMoveC == 2 && dollfaceH < 150)
    {
        dollfaceH = dollfaceH + Daydream;
    }
    else if (PlayertwoCharC == 3)
    {
        hackeyslashH = hackeyslashH - HouseSmash;
    }
    else if (PlayertwoCharC == 4)
    {
        hackeyslashH = hackeyslashH - flowerbasket;
    }
}
void charactersfightinghackeybonk (int hackeyslashH, int slash, int hacknslash, int dashslash, int deepcuts, int bonkersH, int BONK, int BAM, int BOOM, int CRUNCH)
{
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        bonkersH = bonkersH - slash;
    }
    else if (PlayeroneMoveC == 2)
    {
        bonkersH = bonkersH - hacknslash;
    }
    else if (PlayeroneMoveC == 3)
    {
        bonkersH = bonkersH - dashslash;
    }
    else if (PlayeroneMoveC == 4)
    {
        bonkersH = bonkersH - deepcuts;
    }
    cout
    << "1. BONK (Base Damage 20)" << endl
    << "2. BAM (Base Damage 10)" << endl
    << "3. BOOM (Base Damage 25)" << endl
    << "4. CRUNCH (Base Damage 15)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        hackeyslashH = hackeyslashH - BONK;
    }
    else if (PlayertwoMoveC == 2)
    {
        hackeyslashH = hackeyslashH - BAM;
    }
    else if (PlayertwoMoveC == 3)
    {
        hackeyslashH = hackeyslashH - BOOM;
    }
    else if (PlayertwoMoveC == 4)
    {
        hackeyslashH = hackeyslashH - CRUNCH;
    }
}
void charactersfightinghackeynhackey (int hackeyslashH, int hackeyslashH2, int slash, int dashslash, int deeputs, int hackinslash)
{
    
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        hackeyslashH2 = hackeyslashH2 - slash;
    }
    else if (PlayeroneMoveC == 2)
    {
        hackeyslashH2 = hackeyslashH2 - hacknslash;
    }
    else if (PlayeroneMoveC == 3)
    {
        hackeyslashH2 = hackeyslashH2 - dashslash;
    }
    else if (PlayeroneMoveC == 4)
    {
        hackeyslashH2 = hackeyslashH2 - deepcuts;
    }
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        hackeyslashH2 = hackeyslashH2 - slash;
    }
    else if (PlayertwoMoveC == 2)
    {
        hackeyslashH2 = hackeyslashH2 - hacknslash;
    }
    else if (PlayertwoMoveC == 3)
    {
        hackeyslashH2 = hackeyslashH2 - dashslash;
    }
    else if (PlayertwoMoveC == 4)
    {
        hackeyslashH2 = hackeyslashH2 - deepcuts;
    }
}
void characterfightinghackeyplag (int hackeyslashH, int slash, int hacknslash, int dashslash, int deepcuts, int doctorplagueH, int Pbomb, int Hconcotion, int Thebigone, int smokewall)
{
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        doctorplagueH = doctorplagueH - slash;
    }
    else if (PlayeroneMoveC == 2)
    {
        doctorplagueH = doctorplagueH - hacknslash;
    }
    else if (PlayeroneMoveC == 3)
    {
        doctorplagueH = doctorplagueH - dashslash;
    }
    else if (PlayeroneMoveC == 4)
    {
        doctorplagueH = doctorplagueH - deepcuts;
    }
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        hackeyslashH = hackeyslashH - Pbomb;
    }
    else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH = doctorplagueH + Hconcoction;
    }
    else if (PlayertwoMoveC == 3)
    {
        hackeyslashH = hackeyslashH - Thebigone;
    }
    else if (PlayertwoMoveC == 4)
    {
        hackeyslashH = hackeyslashH - smokewall;
    }
}
void characterfightingplagdoll (int doctorplagueH, int Pbomb, int Hconcotion, int Thebigone, int smokewall, int dollfaceH, int Hairsnag, int Daydream, int HouseSmash, int flowerbasket)
{
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        dollfaceH = dollfaceH - Pbomb;
    }
    else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH = doctorplagueH + Hconcoction;
    }
    else if (PlayeroneMoveC == 3)
    {
        dollfaceH = dollfaceH - Thebigone;
    }
    else if (PlayeroneMoveC == 4)
    {
        dollfaceH = dollfaceH - smokewall;
    }
    cout
    << "1. Hair Snag (Base Damage 30)" << endl
    << "2. Day Dream (Heal for 20)" << endl
    << "3. House Smash (Base Damage 40)" << endl
    << "4. Flower Basket (Base Damage 25)" << endl;
cin >> PlayertwoMoveC;
    if (PlayertwoMoveC == 1)
    {
        doctorplagueH = doctorplagueH - Hairsnag;
    }
    else if (PlayertwoMoveC == 2 && dollfaceH < 150)
    {
        dollfaceH = dollfaceH + Daydream;
    }
    else if (PlayertwoCharC == 3)
    {
        doctorplagueH = doctorplagueH - HouseSmash;
    }
    else if (PlayertwoCharC == 4)
    {
        doctorplagueH = doctorplagueH - flowerbasket;
    }
}
void characterfightingplagbonk (int doctorplagueH, int Pbomb, int Hconcotion, int Thebigone, int smokewall, int bonkersH, int BONK, int BAM, int BOOM, int CRUNCH)
{
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        bonkersH = bonkersH - Pbomb;
    }
    else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH = doctorplagueH + Hconcoction;
    }
    else if (PlayeroneMoveC == 3)
    {
        bonkersH = bonkersH - Thebigone;
    }
    else if (PlayeroneMoveC == 4)
    {
        bonkersH = bonkersH - smokewall;
    }
    cout
    << "1. BONK (Base Damage 20)" << endl
    << "2. BAM (Base Damage 10)" << endl
    << "3. BOOM (Base Damage 25)" << endl
    << "4. CRUNCH (Base Damage 15)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        doctorplagueH = doctorplagueH - BONK;
    }
    else if (PlayertwoMoveC == 2)
    {
        doctorplagueH = doctorplagueH - BAM;
    }
    else if (PlayertwoMoveC == 3)
    {
        doctorplagueH = doctorplagueH - BOOM;
    }
    else if (PlayertwoMoveC == 4)
    {
        doctorplagueH = doctorplagueH - CRUNCH;
    }
}


void characterfightingplaghackey (int doctorplagueH, int Pbomb, int Hconcotion, int Thebigone, int smokewall, int hackeyslashH, int slash, int hacknslash, int dashslash, int deeepcuts)
{
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        hackeyslashH = hackeyslashH - Pbomb;
    }
    else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH = doctorplagueH + Hconcoction;
    }
    else if (PlayeroneMoveC == 3)
    {
        hackeyslashH = hackeyslashH - Thebigone;
    }
    else if (PlayeroneMoveC == 4)
    {
        hackeyslashH = hackeyslashH - smokewall;
    }
    cout
    <<  "1. Slash (Base Damage 50)" << endl
    <<  "2. HacknSlash (Base Damage 30)" << endl
    <<  "3. Dashslash (Base Damage 20)" << endl
    <<  "4. Deepcuts (Base Damage 20)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        doctorplagueH = doctorplagueH - slash;
    }
    else if (PlayertwoMoveC == 2)
    {
        doctorplagueH = doctorplagueH - hacknslash;
    }
    else if (PlayertwoMoveC == 3)
    {
        doctorplagueH = doctorplagueH - dashslash;
    }
    else if (PlayertwoMoveC == 4)
    {
        doctorplagueH = doctorplagueH - deepcuts;
    }
}

void characterfightingplagnplag (int doctorplagueH, int doctorplagueH2, int Pbomb, int Hconcotion, int Thebigone, int smokewall)
{
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayeroneMoveC;
    
    if (PlayeroneMoveC == 1)
    {
        doctorplagueH2 = doctorplagueH2 - Pbomb;
    }
    else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH = doctorplagueH + Hconcoction;
    }
    else if (PlayeroneMoveC == 3)
    {
        doctorplagueH2 = doctorplagueH2 - Thebigone;
    }
    else if (PlayeroneMoveC == 4)
    {
        doctorplagueH2 = doctorplagueH2 - smokewall;
    }
    cout
    << "1. Poison bomb (Base Damage 20)" << endl
    << "2. Health Concotion (Heal for 10)" << endl
    << "3. The Big One (Base Damage 35)" << endl
    << "4. Smokewall (Base Damage 5)" << endl;
    cin >> PlayertwoMoveC;
    
    if (PlayertwoMoveC == 1)
    {
        doctorplagueH = doctorplagueH - Pbomb;
    }
    else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
    {
        doctorplagueH2 = doctorplagueH2 + Hconcoction;
    }
    else if (PlayertwoMoveC == 3)
    {
        hackeyslashH = hackeyslashH - Thebigone;
    }
    else if (PlayertwoMoveC == 4)
    {
        doctorplagueH = doctorplagueH - smokewall;
    }
}

