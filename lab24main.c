#include "lab24functs.h"

int main(void){
    int numRecords = getNumRecs("lab24data.txt");
    
    CadetInfoStructType* cadetRecords[] = malloc(numRecords * sizeof(CadetInfoStructType));

    getDataText(cadetRecords, numRecords, "lab24data.txt");

    free(cadetRecords);

    return 0;
}

