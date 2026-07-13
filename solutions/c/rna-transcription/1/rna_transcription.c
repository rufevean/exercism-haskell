#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>


char *to_rna(const char *dna){
    char *rna = malloc(strlen(dna) + 1);
    int i;
    for (i = 0; i< (int) strlen(dna);i++){
        if ((dna[i]=='G')) rna[i] = 'C';
        if ((dna[i]=='C')) rna[i] = 'G';
        if ((dna[i]=='T')) rna[i] = 'A';
        if ((dna[i]=='A')) rna[i] = 'U'; 
    }
    rna[i] ='\0';
    return rna;
}
