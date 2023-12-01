#include <stdio.h> 
#include <stdlib.h> 

int main() {
    
    char scelta;
    char nome[30];
    int punteggioTotale = 0;

    printf("Benvenuto! Questo è un quiz a punteggio. Guadagnerai un punto per ogni risposta esatta\n");
    printf("Premi invio per proseguire\n");
    getchar();

    printf("A) Iniziare una nuova partita\n");
    printf("B) Uscire dal gioco\n");

    printf("Fai la tua scelta (A o B): ");
    scanf("%c", &scelta);

    if (scelta == 'A' || scelta == 'a') {
        printf("Inserisci il tuo nome: ");
        scanf("%s", nome);

        printf("Ciao %s! Hai scelto di iniziare una nuova partita!\n", nome);

        // Domanda 1
        char risposta1;
        printf("\nDomanda 1: Quanto fa 2 + 2?\n");
        printf("A) 3\n");
        printf("B) 4\n");
        printf("C) 5\n");
        printf("Inserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta1);

        if (risposta1 == 'B' || risposta1 == 'b') {
            printf("Risposta corretta! Hai guadagnato 1 punto.\n");
            punteggioTotale++;
        } else {
            printf("Risposta errata. La risposta corretta era B.\n");
        }

        // Domanda 2
        char risposta2;
        printf("\nDomanda 2: Quanto fa 5 * 3?\n");
        printf("A) 8\n");
        printf("B) 15\n");
        printf("C) 20\n");
        printf("Inserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta2);

        if (risposta2 == 'B' || risposta2 == 'b') {
            printf("Risposta corretta! Hai guadagnato 1 punto.\n");
            punteggioTotale++;
        } else {
            printf("Risposta errata. La risposta corretta era B.\n");
        }

        // Domanda 3
        char risposta3;
        printf("\nDomanda 3: Qual è la capitale dell'Italia?\n");
        printf("A) Parigi\n");
        printf("B) Madrid\n");
        printf("C) Roma\n");
        printf("Inserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta3);

        if (risposta3 == 'C' || risposta3 == 'c') {
            printf("Risposta corretta! Hai guadagnato 1 punto.\n");
            punteggioTotale++;
        } else {
            printf("Risposta errata. La risposta corretta era C.\n");
        }

        // Domanda 4
        char risposta4;
        printf("\nDomanda 4: Chi è il presidente della repubblica italiana?\n");
        printf("A) Berlusconi\n");
        printf("B) Mattarella\n");
        printf("C) Gerry Scotti\n");
        printf("Inserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta4);

        if (risposta4 == 'B' || risposta4 == 'b') {
            printf("Risposta corretta! Hai guadagnato 1 punto.\n");
            punteggioTotale++;
        } else {
            printf("Risposta errata. La risposta corretta era B.\n");
        }

        // Domanda 5
        char risposta5;
        printf("\nDomanda 5: Cosa ha due ruote?\n");
        printf("A) Triciclo\n");
        printf("B) Moto\n");
        printf("C) Macchina\n");
        printf("Inserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta5);

        if (risposta5 == 'B' || risposta5 == 'b') {
            printf("Risposta corretta! Hai guadagnato 1 punto.\n");
            punteggioTotale++;
        } else {
            printf("Risposta errata. La risposta corretta era B.\n");
        }

        
        printf("\nIl tuo punteggio finale è: %d\n", punteggioTotale);

    } else if (scelta == 'B' || scelta == 'b') {
        printf("Hai scelto di uscire dal gioco. Arrivederci!\n");
        exit(0);

    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
} 
