#include "lab24functs.h"

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * @pre file is not open
 * @post file is closed
 * ----------------------------------------------------------
 */
int getNumRec(char fName[]){
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

void getDataText(cadetRecords,numRecs, dataFile){
    char line[100];
    FILE* file = fopen(datatFile, "r");
    fgets(line, 100, file);

    if(file != NULL){
        while(!feof(file)){
             fgets(line, 100, file);
        }
       

    }
    fclose(file);
    return numRecs;
}