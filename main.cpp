#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define bag_pula fout.close();return 0;

using namespace std;



int main()
{
    unsigned player_pick , last_player_pick , computer_pick, last_computer_pick;
    char last_result[5]; //5 chosen by random. Don't ask.
    ifstream fin("date.in");
    fin.seekg(0, fin.end);
    int length = fin.tellg();
    fin.seekg(0 , fin.beg);
    if( length < 5 ) //don't you dare asking
        {
            fin.close();
            ofstream fout("date.in");
            srand(time(NULL));
            computer_pick = rand() % 3;

            cin>>player_pick;
            fout<<player_pick<<' ';
            fout<<computer_pick<<' ';

            if(player_pick == computer_pick)
                {
                    cout<<"tie";
                    fout<<"tie";
                    bag_pula
                }
            if(player_pick == 0)
            {
                if(computer_pick == 1)
                    {
                        cout<<"win";
                        fout<<"win";
                        bag_pula
                    }
                if(computer_pick == 2)
                {
                    cout<<"lose";
                    fout<<"lose";
                    bag_pula
                }
            }

            if(player_pick == 1)
            {
                if(computer_pick == 0)
                    {
                        cout<<"lose";
                        fout<<"lose";
                        bag_pula
                    }
                if(computer_pick == 2)
                {
                    cout<<"win";
                    fout<<"win";
                    bag_pula
                }
            }

            if(player_pick == 2)
            {
                if(computer_pick == 0)
                    {
                        cout<<"win";
                        fout<<"win";
                        bag_pula
                    }
                if(computer_pick == 1)
                {
                    cout<<"lose";
                    fout<<"lose";
                    bag_pula
                }
            }

        }

    else
    {
        fin>>last_player_pick>>last_computer_pick>>last_result;
        fin.close();
        cin>>player_pick;
        remove("date.in");

        ofstream fout("date.in");
        fout<<player_pick<<' ';
        if(strcmp(last_result,"win")==0)
        {
            if(last_player_pick==0)
                computer_pick=2;

            if(last_player_pick==1)
                computer_pick=0;

            if(last_player_pick==2)
                computer_pick=1;

        }

        else
        {
            if(last_computer_pick==0)
                computer_pick=1;

            if(last_computer_pick==1)
                computer_pick=2;

            if(last_computer_pick==2)
                computer_pick=0;
        }
        fout<<computer_pick<<' ';

                    if(player_pick == computer_pick)
                {
                    cout<<"tie";
                    fout<<"tie";
                    bag_pula
                }
            if(player_pick == 0)
            {
                if(computer_pick == 1)
                    {
                        cout<<"win";
                        fout<<"win";
                        bag_pula
                    }
                if(computer_pick == 2)
                {
                    cout<<"lose";
                    fout<<"lose";
                    bag_pula
                }
            }

            if(player_pick == 1)
            {
                if(computer_pick == 0)
                    {
                        cout<<"lose";
                        fout<<"lose";
                        bag_pula
                    }
                if(computer_pick == 2)
                {
                    cout<<"win";
                    fout<<"win";
                    bag_pula
                }
            }

            if(player_pick == 2)
            {
                if(computer_pick == 0)
                    {
                        cout<<"win";
                        fout<<"win";
                        bag_pula
                    }
                if(computer_pick == 1)
                {
                    cout<<"lose";
                    fout<<"lose";
                    bag_pula
                }
            }

        }


    return 0;
}
