//
//  main.c
//  youtubeVar
//
//  Created by Klaus Schleicher on 19.06.13.
//  Copyright (c) 2013 Klaus Schleicher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int pizza;
    pizza = 1;
    printf("Pizza ist %d", pizza);
    if (pizza == 10) {
        printf("Pizza ist %d", pizza);
        
    }
    else {
        printf("Pizza ist nicht 10");
        
    }
    
    for (int i = 0; i < 200; i++)
    {
        printf("Zeile %d", i);
    }
    //printf("Hello, World!\n");
    return 0;
}

