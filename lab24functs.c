#include "lab24functs.h"

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * @pre file is not open
 * @post file is closed
 * ----------------------------------------------------------
 */
int getNumRecs(char fName[]){
    FILE* file = fopen(fName, "r");
    int numRecs = -1;

    if(file != NULL){
        fscanf(file, "%i", numRecs);
    }
    
    fclose(file);
    return numRecs;
}

/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @pre file is not open
 * @post file is closed
 * ----------------------------------------------------------
 */

void getDataText(CadetInfoStructType cadetRecords[], int numRecs, char dataFile[]){
    char line[100];
    FILE* file = fopen(dataFile, "r");

    fgets(line, 100, file);
    char lastName[50];
    char firstName[50];
    int i = 0;

    if(file != NULL){
        for(int i = 0; i < numRecs; i++){
            fscanf(file, "%s %s %i %i %i", lastName, firstName, &cadetRecords[i].age, &cadetRecords[i].squad, &cadetRecords[i].year);
            strcat(firstName, " ");
            strcpy(cadetRecords[i].name, strcat(firstName, lastName));
        }
    }
    fclose(file);
}