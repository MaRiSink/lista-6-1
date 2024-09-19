#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;

int main()
{

    //1
   /* srand (time (NULL));

    int i = rand() % 2;

    if ( i == 0 )
    {
        cout << 1;
    }
    else
    {
        cout <<2;
    }*/




    //2
    /*
    srand (time(NULL));

    int i = rand() % 2;

    if ( i == 0 )
    {
        cout << "#";
    }
    else
    {
        cout << "*";
    }*/







    //3
   /* srand (time(NULL));

    int i = 1 + rand() % 10;

    if ( i == 1 || i == 2 || i == 3 )
    {
        cout << "#";
    }
    else
    {
        cout << "&";
    }*/





    //4

    /* srand (time(NULL));

    int i = 1 + rand() % 10;

    for (int n = 0; n < 10; n++)
    {
     i = 1 + rand() % 10;
        if ( i == 1 )
        {
            cout << 1 << endl;
        }
        else
        {
            if ( i == 2 || i ==3 || i == 4 || i == 5 || i == 6 || i ==7 || i == 8 || i == 9 || i == 10)
            {
                cout << 9 << endl;
            }

        }
    }*/



    //5
    srand (time(NULL));

    int i = 1 + rand() % 10;


    for (int a = 0; a < 10; a++)
    {

        for (int n = 0; n < 10; n++)
        {
            i = 1 + rand() % 10;

            if ( i == 1 || i == 2 || i ==3 || i == 4 )
            {
                cout << " M ";
            }
            else
            {
                if (  i == 5 || i == 6 || i ==7 || i == 8 || i == 9 || i == 10)
                {
                    cout << " . ";
                }

            }
        }

        cout << endl;

    }


}




