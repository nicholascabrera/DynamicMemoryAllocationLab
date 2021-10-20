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
    FILE* file = NULL;
    file = fopen(fName, "r");

    if (file == NULL){
        printf("File doesn't exsits. Exiting");
        exit(1);
    }
    int numRecs = -1;
    fscanf(file, "%d", &numRecs);
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
    FILE* file = fopen(dataFile, "r");
   
    if (file == NULL){
        printf("File doesn't exsits. Exiting");
        exit(1);
    }
    
    char lastName[50];
    char firstName[50];
    int i = 0;
    fgets(lastName, 100, file);
    while(!feof(file)){
            fscanf(file, "%s %s %i %i %i\n", lastName, firstName, &cadetRecords[i].age, &cadetRecords[i].squad, &cadetRecords[i].year);
            strcpy(cadetRecords[i].name, firstName);
            strcat(cadetRecords[i].name, " ");
            strcat(cadetRecords[i].name, lastName);
            i++;
    }       
    fclose(file);
}