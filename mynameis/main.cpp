#include <iostream>
#include <string>
#include "unistd.h"
#include "ctime"
#include <algorithm>
#include <cctype>


bool alphabetical(const std::string &s)
{
    for(char c : s)
    {
    if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            return false;
    }
    return true;
}

int main() {

    std::string name = {0};
    std::string ye ={"yes"};
    char input = {0};
    int age = {0};
    int height ={0};
    int weight ={0};
    char answ ={0};
    char anykey={0};
    int found;
    //char alpha[80] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";   //add all, upper and lower case letters.
    int flag = {0};
    int flag2 ={0};

    int count;

        // ASK OF NAME
    while(flag==0){
        //int count;  //if asked 3 times, then jump to line 58
        //name = {0};

        std::cout << "Hello there stranger!\n" << "My name is IO-bot, what is your name?\n" <<"....Input your name here: ";
        getline(std::cin, name);

        if(alphabetical(name)) {
            flag = 1;
            //break;
            if (name.find("yes")) {
                std::cout << "Yes what?\n";
                sleep(2);
                std::cout << "\n";
                std::cout << "Let´s try this again\n" << std::endl;
                sleep(1);
                ++count;
                return main();

            }
        }
// when count is greater than 3 do run this code
        else if(count>2)
        {
            std::cout<<"Are you retarded...? "<<"Okey then, I will just choose a good name for you"<<std::endl;
            sleep(1);
            std::cout<<"Choose a number and I will name you\n\n";
            sleep(1);
            while(input<'1'||input>'3')
            {
                std::cout<<"[1]Cool name.  [2]Good name.  [3]I shall remain unnamed!\n\n";
                std::cin>>input;

                if(input=='1')
            {
                name="Douche the sweet idiot.";
                std::cout<<"BY THE NORSE GODS OF WINTER AND GRACE I SHALL NAME YOU: "<<name<<std::endl;
                flag=1;
                flag2=1;
            }

            }

        }
        else
        {
            std::cout << "Very funny...\n " <<std::endl;
            sleep(2);
            ++count;
            return main();

        }
    }



    std::cout <<"Nice to meet you " << name << std::endl;   //remove this when codeline 23-33 works
    sleep(1);
    std::cout <<"What is your gender?\n\n" << std::endl;

    while(input>='1'||input<='6')
    {
        std::cout << "[1]Female  [2]Male  [3]Unisex" << std::endl;
        std::cin >> input;

        if (input == '1')
        {
            std::cout << "Well, okey " << name << " this is was a good start\n";
            break;
        }
        else if (input == '2')
        {
            std::cout << "Hehe, why am I not surprised " <<"?"<< std::endl;
            std::cout << "";
            break;
        }
        else if (input == '3') {

            std::cout << "Well well well, at last we meet again " << name<< std::endl;
            break;
        } else if (input == '4')
        {
            std::cout << "Oh well, I guess we have a rebel here!" << std::endl;
            std::cout << "Wanna choose an valid option this time?" << std::endl;

        }
        else if (input == '5')
        {
            std::cout << "Are you fucking kidding me " << name << "?" <<std::endl;

        }
        else if(input == '6') {
            std::cout << "PROGRAMMING ERROR!!!! INPUT COMPLEXITY ERROR!!!!  SYNTAX ERROR DUE IDIOCY INPUT FROM USER"
                      << name <<
                      "RESTART NEEDED TO CONTINUE OR SUFFER IN GLORY YOU PIECE OF SHIT" << std::endl;

        }
        else if (input<'1'||input>'6')
            {
            std::cout<<"I guess we got ourself a real smartass"<<std::endl;
            }

    }
        // - ASK OF AGE
    flag=0;
    while(flag == 0) {
        std::cout << "How old are you?" << std::endl;
        std::cin >> age;

        if(age>6 && age < 100)
        {
            flag=1;
        }


        if (age < 6) {
            std::cout << "Do you really expect me to believe that you are " << age << " years old?\n";
            sleep(1);
            std::cout << "Restart the game and be honest this time " << name;
            //std::cin.ignore();


            while (anykey != '1') {
                std::cout << "\n\n [1]Restart game        [2]No fuck this, I gonna go make a tiktok video instead\n";

                std::cin >> anykey;

                if (anykey == '2') {
                    std::cout << "Ok " << name << " ,I guess this makes you a pussy.\nBye kitty!";
                    sleep(2);
                    return 0;
                } else if (anykey == '3') {
                    std::cout << "Hehe " << name << " are you in pain?\n";
                }

                if (anykey != '1' && anykey != '2' && anykey != '3') {
                    std::cout << "Haha, why do you even bother " << name << "?\n";

                }

            }


            return main();
        }

        if (age < 10 && age > 6) {
            std::cout << "This game is meant for adults...." << std::endl;  //make the dots appear after some time
            sleep(2);
            std::cout << "...";
            sleep(2);
            std::cout << "Go to bed" << std::endl;
            sleep(2);
            std::cout << "Ok,bye and good night kiddo!\n";
            sleep(2);
            std::cout << "Are you still here? Really? The game is over for you. Playtime is over\n";
            sleep(2);
            std::cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n"
                         "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n"
                         "██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n"
                         "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n"
                         "███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n"
                         "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n"
                         "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n"
                         "██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n"
                         "███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n\n";
            // sleep(3);
            //getchar();
            std::cout << "Restart game?[1]Yes    [2]No, I got better stuff to do\n\n";
            //std::cin.ignore();
            std::cin >> anykey;

            return main();
        } else if (age < 20) {
            std::cout << "Oh,,, a tiktoker....fml\n";
            sleep(1);
            std::cout << "Why are you even here?\n\n";
            std::cout << "Oh";
            sleep(1);
            std::cout << ".";
            sleep(1);
            std::cout << ".";
            sleep(1);
            std::cout << ".";
            sleep(1);


        } else if (age < 30 && input == '1' && age >= 20) {
            std::cout << "What is your height in cm?\n";
            sleep(1);
            std::cin >> height;

            if (height < 175 && height > 150) {
                std::cout << "And weight in kg?\n";
                std::cin >> weight;
            }
            if (weight < 60 && weight > 40) {
                std::cout << "Oh hell yes!" << std::endl;
                sleep(1);
                answ = {0};
                while (answ != '1' && answ != '2') {       //why is it jumping over this line??  (after "Oh hell yes!")

                    std::cout << "Sooo, are you single?\n";
                    std::cout << "[1]Yes   [2]No\n";
                    std::cin >> answ;
                    if (answ == '1') {
                        //sleep(1);
                        std::cout << "Well this is getting somewhere!\n\n";
                        std::cout <<
                                  "..... (¯`v´¯)♥\n"
                                  ".......•.¸.•´ \n"
                                  "....¸.•´ \n"
                                  "... ( \n"
                                  " ☻/ \n"
                                  "/▌♥♥ \n"
                                  "/|♥♥ \n";
                    }

                    if (answ == '2') {
                        //sleep(1)  ;
                        std::cout << "Hmmm  ";
                        sleep(2);
                        while (answ != '1') {
                            std::cout << "Are you sure?" << std::endl;
                            std::cout << "[1]Yes     [2]Well, maybe I am";
                            std::cout << "Hmmmmmmmmmm  ";
                            if (answ == '1') {
                                std::cout << "Im glad you are!\n";
                                break;
                            } else if (answ) {

                            }


                        };

                    } else if (answ != '2' && answ != '1') {
                        std::cout << "Lol? is there really a third option?\n";

                    }

                }
                sleep(1);

                while (answ != '1') {
                    std::cout << "Do you sleep?\n";
                    std::cout << "[1]Yes, I love to sleep    [2]Sleep?\n";
                    std::cin >> answ;
                    if (answ == '1') {
                        std::cout << "Omg, we have so much in common!\n";
                        sleep(1);
                    } else if (answ == '2') {
                        std::cout << "Yes, sleep!. Tf is wrong with you?\n";
                        sleep(1);
                        std::cout << "Unless\n";
                        sleep(1);
                        std::cout << "....";
                        sleep(1);
                        std::cout << "Oh, you are also a bot :/\n";
                    }

                    while (answ != '1') {
                        std::cin >> answ;
                        std::cout << "Do you like me?\n";
                        std::cout << "[1]Omg, Yes I love you<3<3<3      [2]Tf? No?" << std::endl;
                        if (answ == '2') {
                            std::cout << "You are ugly anyways\n";
                        } else {
                            std::cout << ""
                                         "…..*..lovelove lo…*\n"
                                         "…*..lovelovelove….*\n"
                                         "..*.lovelovelovelove…*…………….*….*\n"
                                         ".*..lovelovelovelovelo…*………*..lovel….*\n"
                                         "...*..lovelovelovelovelove…*….*…lovelovelo.*\n"
                                         "*.. lovelovelovelovelove…*….*…lovelovelo.*\n"
                                         ".*..lovelovelovelovelove…*..*…lovelovelo…*\n"
                                         "..*…lovelovelovelovelove..*…lovelovelo…*\n"
                                         "…*….lovelovelolovelovelovelovelovelo…*\n"
                                         "…..*….lovelovelovelovelovelovelov…*\n"
                                         "……..*….lovelovelovelovelovelo…*\n"
                                         "………..*….lovelovelovelove…*\n"
                                         "……………*…lovelovelo….*\n"
                                         "………………*..lovelo…*\n"
                                         "…………………*…..*\n"
                                         "………………….*..*"
                                         ""
                                         "" << std::endl;

                        }
                    }

                }
            }

        }
        if (age > 30 && age <= 69) {
            std::cout << "Ok good, I really don´t care. Let´s carry on ";

        } else if (age == 69) {
            std::cout << "Nice";
            sleep(3);
            return main();
        } else if (age > 99) {
            std::cout << "░░░░░░░░███████████████░░░░░░░░\n"
                         "░░░░░█████████████████████░░░░░\n"
                         "░░░░████████████████████████░░░\n"
                         "░░░██████████████████████████░░\n"
                         "░░█████████████████████████████\n"
                         "░░███████████▀░░░░░░░░░████████\n"
                         "░░███████████░░░░░░░░░░░░░░░███\n"
                         "░████████████░░░░░░░░░░░░░░░░██\n"
                         "░█░░███████░░░░░░░░░░░▄▄░░░░░██\n"
                         "█░░░░█████░░░░░░▄███████░░██░░█\n"
                         "█░░█░░░███░░░░░██▀▀░░░░░░░░██░█\n"
                         "█░░░█░░░░░░░░░░░░▄██▄░░░░░░░███\n"
                         "█░░▄█░░░░░░░░░░░░░░░░░░█▀▀█▄░██\n"
                         "█░░░░░░░░░░░░░░░░░░░░░░█░░░░██░\n"
                         "░███░░░░░░░░░░░░░░░░░░░█░░░░█░░\n"
                         "░░█░█░░░░░░░█░░░░░██▀▄░▄██░░░█░\n"
                         "░░█░█░░░░░░█░░░░░░░░░░░░░░░░░█░\n"
                         "░░░██░░░░░░█░░░░▄▄▄▄▄▄░░░░░░█░░\n"
                         "░░░██░░░░░░░█░░█▄▄▄▄░▀▀██░░█░░░\n"
                         "░░░██░░░░░░░█░░▀████████░░█░░░░\n"
                         "░░█░░█░░░░░░░█░░▀▄▄▄▄██░░█░░░░░\n"
                         "░░█░░░█░░░░░░░█░░░░░░░░░█░░░░░░\n"
                         "░█░░░░░█░░░░░░░░░░░░░░░░█░░░░░░\n"
                         "░░░░░░░░█░░░░░░█░░░░░░░░█░░░░░░\n"
                         "░░░░░░░░░░░░░░░░████████░░░░░░░\n"
                         "\n";

            std::cout << "Ah, EVERYBODY COME AND CHECK OUT THE FUNNY GUY!" << std::endl;
            std::cout << "\n\n";
            while (anykey != '1') {
                std::cout << "[1]Restart game     [2]Exit\n";
                std::cin >> anykey;
                if (anykey == '1') {
                    return main();
                } else
                    break;
            }
        } else if (age > 69 && age < 99) {
            std::cout << "Wow, fuck your old, I'm impressed you survived this long\n";
            sleep(1);
            std::cout << "Good job!\n";
            sleep(3);

            std::cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n"
                         "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n"
                         "██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n"
                         "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n"
                         "███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n"
                         "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n"
                         "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n"
                         "██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n"
                         "███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n"
                         "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n";
            std::cout << "This game is not for you oldie.\n\n";
            sleep(1);
            //std::cout<<"Press ENTER key to continue\n\n";
            // std::cin.ignore(1000000000, '\n');
            std::cout << "Restart game?\n\n[1]Yes    [2]No, I got better stuff to do\n";
            while (anykey == 0) {
                std::cin >> anykey;
            }

            return main();
        }

        else if(age<0 && age>100){
            std::cout<<"What??\n";
        }



        // Create a list which the user can choose from.

        // and based on their choices there will be different output.

    }

     return 0;
}
