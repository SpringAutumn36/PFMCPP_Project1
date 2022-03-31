#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.

 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.
        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action

 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:  guitarist
//  action 1:  the guitarist plays guitar
guitarist.playGuitar();
//  action 2:  the guitarist uses guitar padels
guitarist.useGuitarPadels();
//  action 3:  the guitarist wirtes songs
guitarist.wirteSongs();

//  2)
//  Noun:  cat
//  action 1:  the cat eats fish
cat.eatFish();
//  action 2:  the cat runs
cat.run();
//  action 3:  the cat drinks water
cat.drinkWater();

//  3)
//  Noun:  egnineer
//  action 1:  the engineer writes code
engineer.writeCodes();
//  action 2:  the engineer designs circuits
engineer.designCircuit();
//  action 3:  the engineer cooperates with team
engineer.cooperateWithTeam();

//  4)
//  Noun:  basketballPlayer
//  action 1:  basketballPlayer plays games
basketballPlayer.playGame();
//  action 2:  basketballPlayer practices
basketballPlayer.practice();
//  action 3:  basketballPlayer watches films
basketballPlayer.watchFilm();

//  5)
//  Noun:  manufacturer
//  action 1:  manufacturer produces
    manufacturer.produce();
//  action 2:  manufacturer manufacures products
    manufacturer.manufacureProduct();
//  action 3:  manufacturer collaborates with brands
    manufacturer.collaborateWithBrand();
      
//  6)
//  Noun:  phone
//  action 1:  phone rings
phone.ring();     
//  action 2:  phone transmitts information
phone.transmitInformation();  
//  action 3:  phone receives texts
phone.receiveText();

//  7)
//  Noun:  wind
//  action 1:  wind blows
wind.blow();
//  action 2:  wind forms hurricane
wind.formHurricane();
//  action 3:  wind brings flower seeds
wind.bringFlowerSeed();

//  8)
//  Noun:  speaker
//  action 1:  speaker plays
speaker.play();  
//  action 2:  speaker connect with phone
speaker.connectWithPhone();
//  action 3:  speaker vibrates
speaker.vibrate();

//  9)
//  Noun:  man in black
//  action 1:  the man in black attack the alien 
manInBlack.attackAlien();   
//  action 2:  the man in black protect people
manInBlack.protectPeople();
//  action 3:  the man in black distinguish the species of aliens
manInBlack.distinguishSpeciesOfAliens();

//  10)
//  Noun:  bus
//  action 1:  bus stops at bus station
bus.stopAtBusStation();
//  action 2:  bus slows down 
bus.slow();
//  action 3:  bus accelerates
bus.accelerate();    

  
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
