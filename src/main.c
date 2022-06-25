// main.c: Testing the ini parser

#include <stdio.h>
#include <stdlib.h>
#include <ini.h>

int main(int argc, char * argv[]) {
    struct INI * ini = ini_init();
    ini = interpret(ini, "./test.ini");
    // // sectionName Test
    // printf("\nsectionName Test: %s\n", ini->nextSection->sectionName);
    // // subSection Test
    // printf("subSection Test: %s\n", ini->nextSection->subSections[0]->sectionName);
    // // Variables Tests
    // printf("Variable Test 1: %s\n", ini->variables[0]->value);
    free(ini);
    return 0;
}