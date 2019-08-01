#include "test.h"


using namespace std;



int main(){
    bleed = 0;

    typewrite("Hououin Kyouma: The organization is upon us!");
    typewrite("Should we run or hide? (Type 'run' or 'hide')");
    typewrite("Answer: ");
    
    
    string ans;
    getline(cin,ans);
    cout << endl;

    if (ans == "run"){
        pathRunOne();
    } else{
        pathHideOne();
        
    }
    
}

void pathRunOne() {
    typewrite("You decide to run with the world renowned HOUOUIN KYOUMA.");
    typewrite("You open a door but behind it there is a dead end.");
    typewrite("Kyouma: El Psy Congroo.");
    end();
}

void pathHideOne(){
    typewrite("You see a crate in the corner of the room and you go inside it with Okarin.");
    typewrite("You hear many footsteps in the room, you estimate that there are about three soldiers.");
    typewrite("You have advanced military experience, and you think you can take all three of them.");
    typewrite("Stay hidden or fight (stay or fight)?");
    typewrite("Answer: ");

    string ans;
    cin >> ans;
    cout << endl;

    if (ans == "stay") {
        pathHideTwo();
    } else {
        pathFightTwo();
    }
}

void pathHideTwo() {
    typewrite("You remain hidden in the crates, and eventually the soldiers find you!");
    end();
}

void pathFightTwo() {
    typewrite("You spring out of the crate and luckily for you there are only two soldiers, and the one closest to you does not have a weapon.");
    typewrite("You grab him and choke him. The other one raises his weapon and you yell 'LOWER YOUR WEAPON OR HE DIES'");
    typewrite("You motion Kyouma to grab the other one's weapon...");
    typewrite(". . .");
    typewrite(". . .");
    typewrite("Kyouma takes the other soldier's gun.");
    typewrite(". . .");
    typewrite(". . .");
    typewrite("And points it to your face!");

    typewrite("You: How could you betray me?!"); 
    typewrite("Kyouma: Sorry Christina, the Organization they have what I need");
    typewrite("You start to back up slowly, and realize your back is against a window");
    typewrite("Your options: Jump out of the window and hope God got you, or keep talking to Kyouma and try change his mind (jump or talk)");
    typewrite("Answer: ");

    string ans;
    cin >> ans;
    cout << endl;

    if (ans == "jump") {
        pathJumpThree();
    } else {
        pathTalkThree();
    }


}

void pathJumpThree() {
    typewrite("You push your prisoner against them and in that brief moment, eagle dive head first into the window and fall on pile of hay");
    typewrite("You look at the starts in the sky while the moonlight hits your face");
    typewrite("For a brief moment, you are relieved and oblivious to your current situation");
    typewrite("Your brief honeymoon is cut short when you 'She jumped out of the window! Quick let's get her while she still there'");
    typewrite("You get out of the pile and find yourself in an alley way.");
    typewrite("Do you turn left or right?");

    typewrite("Answer: ");

    string ans;
    cin >> ans;
    cout << endl;

    if (ans == "left") {
        direction = 0;
    } else {
        direction = 1;
    }

    street();    
}


void pathTalkThree(){
    typewrite("As you circle slowly around the room to get closer to the door, you tell Kyouma: 'I trusted you!'");
    typewrite("Kyouma: You think I have a choice! I the great HOUOUIN KYOUMA, the greatest genius the world has ever seen, am being blackmailed.");
    typewrite("After circling a bit more, you find yourself with your back to the hallway, you can see stairs in the next room.");
    typewrite("Do you let go of the enemy and run down the stairs, or keep holding on to your enemy and go up the stairs (let go or hold on)"); 

    typewrite("Answer: ");

    string ans;
    cin >> ans;
    cout << endl;

    if (ans == "let go") {
        stairsDown();
    } else {
        stairsUp();
    }
}

void street() {

}

void stairsDown() {
    typewrite("You kick the soldier and sprint towards the stairs while the gunshots start to come");
    typewrite("Fortunately, you are not hit but one managed to graze your arm and you start to bleed a little bit");
    bleed = 1;
    typewrite("Luckily for you, you were on the second floor and going down one set of stairs brings you the main floor");
    typewrite("There are no soldiers and upon finding the first exit, jump out onto the street");
    street();
}

void stairsUp(){

}


void end(){
    typewrite("The organization shoots you and you fall on the cold concrete");
    typewrite("MISSION FAILED");
}

void typewrite(string s){    // inspired by http://www.cplusplus.com/forum/unices/23581/
    int x = 0;
    while (s[x] != '\0'){
        cout << s[x];
        cout.flush();
        usleep(10000);
        x++;
    }
    cout <<endl;
}

void typewrite(string s, int y){    // inspired by http://www.cplusplus.com/forum/unices/23581/
    int x = 0;
    while (s[x] != '\0'){
        cout << s[x];
        cout.flush();
        usleep(y);
        x++;
    }
    cout <<endl;
}
