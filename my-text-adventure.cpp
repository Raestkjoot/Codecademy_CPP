#include <iostream>
#include <string>
#include <limits>
#include <stdio.h>

using namespace std;

void EnterToContinue();

int main () {
    int choice;

    //Adventure starts here!
    cout << "You stand outside the door of Odd Jobs Gin.\n";
    cout << "    ___________ " << "\n" <<
            "   |___________|" << "\n" <<
            "   | | | | | | |" << "\n" <<
            "   |_|_|_|_|_|_|" << "\n" <<
            "   | | | | | | |" << "\n" <<
            "   |_|_|_|_|_|_|" << "\n" <<
            "   | | | | | | |" << "\n" <<
            "   |_|_|_|_|_|_|" << "\n" <<
            "   |___________|" << "\n";
    cout << "You are here because you are in desperate need of help.\n";
    cout << "   Options:\n" <<
            "   1) Open door.\n";
    cout << "  >";
    cin >> choice;

    if(choice == 1) {
        cout << "*You open the door*\n";
    } else {
        cout << "*You kick open the door.* (Why would you do that?)\n";
    }

    cout << "Gintoki: Ah! The door!\n";
    cout << "Gintoki: We don't want any...\n";
    cout << "*Gintoki's expression gets serious.*\n";
    cout << "Gintoki: You look like you are in desperate need of help.\n";
    cout << "Gintoki: What's your name?\n";

    string name;
    cout << "   Input your name\n";
    cout << "  >";
    cin >> name;

    cout << "Gintoki: " << name << "? What an odd name.\n";
    cout << "Gintoki: So uh anyways... what do you need help with, " << name << "?\n";

    int choice_helpWith;
    cout << "   Options:\n";
    cout << "   1) New haircut.\n";
    cout << "   2) Learn handstand.\n";
    cout << "  >";
    cin >> choice_helpWith;

    if(choice_helpWith == 1) {
        cout << name << ": I want to get a new haircut!\n";
        cout << "Gintoki: Ah, yes. We are very good at cutting hair, we are especially experienced with poo...\n";
        cout << "Gintoki: uhh... with chonmage hairstyles.\n";
        cout << "Gintoki: You can choose one of my expert haircutters to cut your hair: Kagura or Shinpachi.\n";
        cout << "   Options:\n";
        cout << "   1) Kagura\n";
        cout << "   2) Shinpachi\n";
        cout << "  >";
        cin >> choice;

        if(choice == 1) {
            cout << "Kagura: Yes! I'll cut your hair really good mister!\n";
            cout << "She says, while flicking away a bugger and then pulls out a giant pair of scissors.\n";
            EnterToContinue();
            cout << "A few moments later.\n";
            cout << "Kagura: All done!\n";
            cout << "She cut a little too much of one side, but she glued some of Sadaharu's fur on to fix it.\n";
            cout << "It looks a little weird.\n";
            cout << "The end.\n";
            return 0;
        } else {
            cout << "Shinpachi: All right, I'll do it.\n";
            EnterToContinue();
            cout << "A few moments later.\n";
            cout << "Sinpachi: All done!\n";
            cout << "Your hair looks plain and boring.\n";
            cout << "Shinpachi: What do you mean plain and boring? That's my hairstyle!\n";
            cout << "The end.\n";
            return 0;
        }
    } else if (choice_helpWith == 2) {
        cout << name << ": I want to learn how to do a handstand!\n";
        cout << "Gintoki: Hmm. I see, a serious request.\n";
        cout << "Gintoki: Kagura, Shinpachi, let's go!\n";
        cout << "Kagura and Shinpachi: OU!\n";
        EnterToContinue();
        cout << "You are at the riverside training handstands.\n";
        
        int giveUp;
        do {
            cout << "You try to stand on your hands, but fail to do so.\n";
            cout << "   Try again?\n";
            cout << "   1) Yes, try again.\n";
            cout << "   2) No, I give up\n";
            cout << "  >";
            cin >> giveUp;
        } while (giveUp != 2);
        cout << "Gintoki: Us humans aren't meant to walk on our hands anyway.\n";
        cout << "Gintoki: We were given feet so we could use our hands to grab our dreams.\n";
        cout << "Gintoki: Well, if you continue to put in the effort again tomorrow and the day after tomorrow and so on...\n";
        cout << "Gintoki: Maybe you'll be able to do it.\n";
        cout << "The end.\n";
        return 0;
    } else {
        cout << "You died.\n";
        return 0;
    }


}

void EnterToContinue() {
    int cont;
    cout << "   Continue:\n";
    cout << "   1) Continue.\n";
    cout << "  >";
    cin >> cont;
    if(cont != 1) {
        cout << "Continue is the only option.\n";
    }

}