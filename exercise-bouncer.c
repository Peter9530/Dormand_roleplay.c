#include <stdio.h>

// Program der agerer dørmand.
int main(void) {
    int alder;  // Erklæring af variabel, der skal indeholde et heltal (brugerens alder).
    printf("ID? Indtast alder:\n>");  // Bed brugeren om at indtaste alder.
    scanf("%d", &alder);  // Indlæs alder fra brugeren.

    // TODO: Tilføj en selektiv kontrolstruktur og et printf-kald,
    //  så dørmanden (programmet) tillader personer over 18 år at komme ind.
    if (alder < 18)
        printf("Den går ikke dit fucking svin, ses når du 18\n");
    else
        printf ("Du må gerne komme ind makker, god aften\n");

    return 0;
}
