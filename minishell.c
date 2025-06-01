// minishell.c
#include <stdio.h>   // Pour printf, fgets
#include <stdlib.h>  // Pour system(), exit
#include <string.h>  // Pour strcmp, strcspn

int main() {
    char commande[1024];  // Déclare un tableau de caractères pour stocker la commande tapée par l'utilisateur

    while (1) {  // Boucle infinie : le shell s'exécute jusqu'à ce que l'utilisateur tape "exit"
        printf("$ ");  // Affiche le prompt pour inviter l'utilisateur à taper une commande

        // Lit la ligne entrée par l'utilisateur depuis l'entrée standard (clavier)
        if (fgets(commande, sizeof(commande), stdin) == NULL) {
            // Si fgets échoue (ex: Ctrl+D), on quitte proprement
            printf("\nFin de l'entrée. Fermeture du shell.\n");
            break;
        }

        // Supprime le saut de ligne '\n' à la fin de la commande (ajouté par fgets)
        commande[strcspn(commande, "\n")] = '\0';

        // Si l'utilisateur tape "exit", on quitte la boucle et donc le shell
        if (strcmp(commande, "exit") == 0) {
            printf("Fermeture du shell.\n");
            break;
        }

        // Si l'utilisateur tape "help", on affiche un petit message d’aide
        if (strcmp(commande, "help") == 0) {
            printf("Mini Shell - Commandes disponibles :\n");
            printf("  help  : Affiche ce message d'aide\n");
            printf("  exit  : Quitte le shell\n");
            printf("  clear : Nettoie l’écran\n");
            continue;  // Ne pas exécuter avec system() ici
        }

        // Si l'utilisateur tape "clear", on nettoie l’écran (fonctionne sur Linux/Termux)
        if (strcmp(commande, "clear") == 0) {
            system("clear");  // Utilise la commande system pour nettoyer l’écran
            continue;  // On recommence le shell après avoir nettoyé
        }

        // Exécution de la commande tapée par l'utilisateur via system()
        int retour = system(commande);  // Lance l’exécution de la commande

        // Si system échoue, on affiche une erreur
        if (retour == -1) {
            perror("Erreur lors de l'exécution");  // Affiche une erreur système
        }
    }

    return 0;  // Fin normale du programme
}

