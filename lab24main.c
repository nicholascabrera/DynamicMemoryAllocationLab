#include "lab24functs.h"

int main(void){
    int numRecords = getNumRecs("lab24data.txt");
    
    
    CadetInfoStructType *cadetRecord = NULL;
    cadetRecord = (CadetInfoStructType*) malloc(numRecords * sizeof(CadetInfoStructType));

    getDataText(cadetRecord, numRecords, "lab24data.txt");
    printf("%d records in the data file.\n", numRecords);
    printf("Reading number of records in the data file.\n");
    printf("The first cadet is:\nCadet name = %s\nCadet age = %d\nCadet squad = %d\nCadet year = %d", cadetRecord[0].name, cadetRecord[0].age, cadetRecord[0].squad, cadetRecord[0].year);
    printf("The first cadet is:\nCadet name = %s\nCadet age = %d\nCadet squad = %d\nCadet year = %d", cadetRecord[120].name, cadetRecord[120].age, cadetRecord[120].squad, cadetRecord[120].year);
    free(cadetRecord);

    return 0;
}

