#include "test.h"
#include <iostream>


using namespace std;

int main(){
    cout << "Hououin Kyouma: The organization is upon us!" << endl;
    cout << "Should we run or hide? (Type 'run' or 'hide')" << endl;
    cout << "Answer: ";
    
    string ans;
    getline(cin,ans);

    if (ans == "run"){
        pathRunOne();
    } else{
        pathHideOne();
    }
    
}

void pathRunOne() {
    cout << "You decide to run with the world renowned HOUOUIN KYOUMA" << endl;
    cout << "You open a door but behind it there is a dead end" << endl;
    cout << "Kyouma: El Psy Congroo" << endl;
    end();
}

void pathHideOne(){
    cout << "You see a crate in the corner of the room and you go inside it with Okarin" << endl;
    cout << "You hear many footsteps in the room, you estimate that there are about three soldier" << endl;
    cout << "You have advanced military experience, and you think you can take all three of them" << endl;
    cout << "Stay hidden or fight (stay or fight)?" << endl;
    cout << "Answer: " << endl;

    string ans;
    cin >> ans;

    if (ans == "stay") {
        pathHideTwo();
    } else {
        pathFightTwo();
    }
}

void pathHideTwo() {
    cout << "You remain hidden in the crates, and eventually the soldiers find you" << endl;
    end();
}

void pathFightTwo() {
    cout << "You spring out of the crate and luckily for you there are only two soldiers, and the one closest to you does not have a weapon." << endl;
    cout << "You grab him and choke him. The other one raises his weapon and you yell 'LOWER YOUR WEAPON OR HE DIES'" << endl;
    cout << "You motion Kyouma to grab the other one's weapon" << endl;
    cout << "He does but do your surprise he raises it back at you" << endl;
    cout << endl;

    cout << "You: How could you betray me?!" << endl << "Kyouma: Sorry Christina, the Organization they have what I need" << endl;
    cout << "You start to back up slowly, and realize your back is against a window" << endl;
    cout << "Your options: Jump out of the window and hope God got you, or keep talking to Kyouma and try change his mind (jump or talk)" << endl;
    cout << "Answer: " << endl;

    string ans;
    cin >> ans;

    if (ans == "jump") {
        pathJumpThree();
    } else {
        pathTalkThree();
    }


}

void pathJumpThree() {
    cout << "You push your prisoner against them and in that brief moment dive head first into the window and fall on pile of hay" << endl;
    cout << "You look"
}


void pathTalkThree(){

}


void end(){
    cout << "The organization shoots you and you fall on the cold concrete" << endl;
    cout << "MISSION FAILED" << endl;
}