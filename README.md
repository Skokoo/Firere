# Fire simulation!
This is the detailed code explanation! 
(Firesim file is the code)

1.That 7 _librarys_, used for arrays, or another syntax.

2.That so many _Macros_, it used to obfuscating the code, but, i like it!

3.Sturct Position {, it is contain important things! like _Height(GUGI)_, and _width(WAWI)_.

4.int RANDOMA = 0; 
        while(RANDOMA < WAWI) {
            if ( RANDOMA > WAWI/3 && RANDOMA < 2*WAWI/3)  fire[(GUGI - 1)* WAWI + RANDOMA] = 15 + rand() % 15; 
            else fire[(GUGI - 1) * WAWI + RANDOMA] = 0;  
            RANDOMA++; 
//This loop is a summoning machine! and a fuel.

5.for(int UP1 = 0; UP1 < GUGI-1; UP1++) { 
        for(int UP2 = 0; UP2 < WAWI; UP2++) {
                int DIRECTION = Wind;  
                int HEATP = Fire; 
                int DEST = UP1 * WAWI + ( UP2 + DIRECTION - 1 + WAWI) % WAWI;
                int LASTED = spell; 
                fire[DEST] = over;
//And... This loop make the fire goes up!(Contain direction, and pixels)

6.string gugu = "\033[H";
        int GRADI = 0;
        while(GRADI < GUGI) {
            if( GRADI > GUGI * 0.7)    gugu+="\033[38;2;0;110;255m"; 
            else if( GRADI > GUGI * 0.5)    gugu +="\033[38;2;0;100;255m";
            else    gugu+="\033[38;2;0;80;255m";
            GRADI++;
//Colors, using color per line beacuse if it was not.... It would crash my device!
