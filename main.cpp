#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog sleeps
dog.isSleeping ();
//  action 3: the dog runs
dog.isRunning();
 
//  2)
//  Noun: computer
//  action 1: the computer calculates
computer.calculate();
//  action 2: the computer communicates
computer.communicate();
//  action 3: the computer records
computer.record();
 
//  3)
//  Noun: eye 
//  action 1:the eye focuses
eye.focus();
//  action 2: the eye closes
eye.close();
//  action 3: the eye blinks
eye.blink();
 
//  4) 
//  Noun: speaker cone
//  action 1: the speaker cone pushes
speakerCone.push();
//  action 2: the speaker cone pulls
speakerCone.pull();
//  action 3: the speaker cone vibrates
speakerCone.vibrate();
//  5)
//  Noun: sun
//  action 1: the sun burns
sun.burn();
//  action 2: the sun heats
sun.heat();
//  action 3: the sun shoots rays
sun.shootRays();
//  6) 
//  Noun: printer
//  action 1: the printer prints
printer.print();
//  action 2: the printer scans
printer.scan();
//  action 3: the printer copies
printer.copy(); 
//  7) 
//  Noun: hard drive
//  action 1: the hard drive stores
hardDrive.store();
//  action 2: the hard drive writes
hardDrive.writes();
//  action 3: the hard drive reads
hardDrive.reads(); 
//  8)
//  Noun: fire
//  action 1: fire burns
fire.burn();
//  action 2: fire heats
fire.heat();
//  action 3: fire illuminates
fire.illuminate();
//  9) 
//  Noun: ball
//  action 1: the ball bounces
ball.bounce();
//  action 2: the ball rolls
ball.roll();
//  action 3: the ball deflates
ball.deflate();
//  10) 
//  Noun: phone
//  action 1: the phone rings
phone.ring();
//  action 2: the phone texts
phone.text();
//  action 3: the phone takes pictures
phone.takePicture();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
