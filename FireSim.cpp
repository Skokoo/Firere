
#include <iostream>
#include <cstdlib>
#include <vector>  
#include <string>
#include <thread>
#include <chrono> 
#include <algorithm>
using namespace std;

#define the_start int main ()          
#define Speed  std::ios_base::sync_with_stdio(false); 
#define printf_v100 cout<<gugu<<flush; 

#define Fire          (UP1 + 1) * WAWI + UP2
#define Wind             rand() % 3
#define spell        fire[HEATP] - (rand() % 3)
#define over             (LASTED > 0) ? LASTED : 0

#define take_some_rest std::this_thread::sleep_for(std::chrono::milliseconds(50));            

struct Position { 
    const int Height = 40;
    const int weidth1 = 40;
} Cons;

const int WAWI = Cons.weidth1; 
const int GUGI = Cons.Height; 

the_start { 
    Speed
    vector<int> fire( WAWI * GUGI, 0);
    string chars = ".^:|-=+*#%@"; 
    
    while(true) {
        int RANDOMA = 0; 
        while(RANDOMA < WAWI) {
            if ( RANDOMA > WAWI/3 && RANDOMA < 2*WAWI/3)  fire[(GUGI - 1)* WAWI + RANDOMA] = 15 + rand() % 15; //Picking random chars, from big to small(. > @).
            else fire[(GUGI - 1) * WAWI + RANDOMA] = 0;  
            RANDOMA++; 
        }
        
        for(int UP1 = 0; UP1 < GUGI-1; UP1++) { 
        for(int UP2 = 0; UP2 < WAWI; UP2++) {
                int DIRECTION = Wind;  
                int HEATP = Fire; 
                int DEST = UP1 * WAWI + ( UP2 + DIRECTION - 1 + WAWI) % WAWI;
                int LASTED = spell; 
                fire[DEST] = over; 
                
            }

        }
        
        string gugu = "\033[H";
        int GRADI = 0;
        while(GRADI < GUGI) {
            if( GRADI > GUGI * 0.7)    gugu+="\033[38;2;0;110;255m"; 
            else if( GRADI > GUGI * 0.5)    gugu +="\033[38;2;0;100;255m";
            else    gugu+="\033[38;2;0;80;255m";
            GRADI++;
            
            int WA = 0;
            while(WA < WAWI) {
                int HMM = fire[GRADI * WAWI + WA];
                gugu += (HMM > 0) ? chars[min((int) chars.size()-1, HMM/3)] : ' ';
                WA++;
            }
            gugu += "\033[0m\n";
        }
        printf_v100 
        take_some_rest   
    }
    return 0;
    }
    