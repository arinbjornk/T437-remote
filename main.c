//
//  main.c
//  T-437 Remote Safety Command Console
//
//  Created by Arinbjorn on 26/01/2017.
//  Copyright © 2017 Arinbjorn. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    
    // Start sequence
    system("cls||clear");
    printf("4 bit mode enabled\n");
    sleep(1);
    printf("Loading input and network drivers...\n");
    sleep(1);
    printf("Initializing token ring ethernet LAN configuration...\n\n");
    sleep(2);
    printf("Connecting to SNPP mainframe (7-G)...\n");
    sleep(1);
    printf("CONNECTION ESTABLISHED\n");
    sleep(4);
    
    // Wait screen
    char c;
    system("cls||clear");
    system("read -n 1 -s -p \"TO START \nPRESS ANY KEY\"" );
    system("cls||clear");
    
    // Core temp check
    printf("CHECK CORE TEMPERATURE?\n\n");
    scanf("%s", &c);
    system("cls||clear");
    if(c == 'y' || c == 'Y'){
        printf("CORE TEMPERATURE NORMAL.\n\n");
        sleep(2);
    }
    system("cls||clear");
    
    // Vent gas
    printf("VENT RADIOACTIVE GAS?\n\n");
    scanf("%s", &c);
    while(c != 'y' && c != 'Y'){
        system("cls||clear");
        printf("VENTING PREVENTS EXPLOSION\n\n");
        sleep(2);
        scanf("%s", &c);
    };
    system("cls||clear");
    
    // Sound horn
    printf("SOUND ALERTNESS HORN?\n\n");
    scanf("%s", &c);
    system("cls||clear");
    if(c == 'y' || c == 'Y'){
        printf("SOUNDING HORN.\n\n");
        sleep(2);
    }
    system("cls||clear");
    
    // Decalcify
    printf("DECALCIFY CALCIUM DUCTS?\n\n");
    scanf("%s", &c);
    system("cls||clear");
    if(c == 'y' || c == 'Y'){
        printf("CALCIUM DUCTS DECALCIFYING.\n\n");
        sleep(2);
    }
    system("cls||clear");
    
    int x = 0;
    for(x = 0; x < 5; x++){
        printf("SITUATION CRITICAL.\n\n");
        printf("EXPLOSION IMMINENT.\n");
        
        sleep(1);
        system("cls||clear");
        printf("\n\n\n");
        sleep(1);
        system("cls||clear");
    }
    
    for(x = 0; x < 20; x++){
        printf("VENT RADIOACTIVE GAS?\n\n");
        usleep(80000);
        printf("VENTING PREVENTS EXPLOSION.\n\n");
        usleep(80000);
    }
    
    system("cls||clear");
    printf("VENT RADIOACTIVE GAS?\n\n");
    usleep(80000);
    printf("VENTING PREVENTS EXPLOSION.\n\n");
    usleep(80000);
    
    scanf("%s", &c);
    while(c != 'v' && c != 'V'){
        system("cls||clear");
        printf("VENT RADIOACTIVE GAS?\n\n");
        usleep(80000);
        printf("VENTING PREVENTS EXPLOSION.\n\n");
        usleep(80000);
        scanf("%s", &c);
    };
    while(c != 'q' && c != 'Q'){
        system("cls||clear");
        printf("PRESSURE TOO HIGH.\n\n");
        scanf("%s", &c);
        usleep(80000);
        printf("TANK MUST BE SHUT DOWN MANUALLY.\n\n");
    
        scanf("%s", &c);
    }

    return 0;
}
