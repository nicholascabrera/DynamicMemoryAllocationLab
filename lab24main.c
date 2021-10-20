#include "lab24functs.h"

int main(void){
    int numRecords = getNumRecs("lab24data.txt");
   
    
    
    CadetInfoStructType *cadetRecords = NULL;
    cadetRecords = (CadetInfoStructType*) malloc(numRecords * sizeof(CadetInfoStructType));

    getDataText(cadetRecords, numRecords, "lab24data.txt");
    printf("Reading number of records in the data file.\n");
    printf("%d records in the data file.\n", numRecords);
    printf("The first cadet is:\nCadet name = %s\nCadet age = %d\nCadet squad = %d\nCadet year = %d\n", cadetRecords[0].name, cadetRecords[0].age, cadetRecords[0].squad, cadetRecords[0].year);
    printf("The last cadet is:\nCadet name = %s\nCadet age = %d\nCadet squad = %d\nCadet year = %d\n", cadetRecords[120].name, cadetRecords[120].age, cadetRecords[120].squad, cadetRecords[120].year);
    free(cadetRecords);

    return 0;
}

