============================================================
              MINI SHELL — PROJET SEMAINE 4
============================================================

Nom du projet  : Mini Shell
Type           : Projet hebdomadaire (semaine 4)
Technologie    : Langage C et programmation Shell (compatible Termux sous Android) ou (VScode sur ordinateur)
Objectif       : Implémentation d’un shell simplifié

------------------------------------------------------------
🎯 OBJECTIFS PÉDAGOGIQUES
------------------------------------------------------------
- Manipuler les pointeurs et les chaînes de caractères
- Utiliser les structures de contrôle et la logique système
- Organiser un programme en boucle interactive
- Comprendre le rôle de system() et les commandes Unix
- Simuler un comportement proche d’un shell

------------------------------------------------------------
🔧 COMPÉTENCES MOBILISÉES
------------------------------------------------------------
- Lecture de saisie utilisateur via `fgets()`
- Traitement des chaînes de caractères avec `strcmp`, `strcspn`
- Utilisation de la fonction `system()` pour exécuter des commandes
- Gestion de conditions et de structures de contrôle (`if`, `while`)
- Interaction simple avec l’environnement système

------------------------------------------------------------
🚀 FONCTIONNALITÉS DU MINI SHELL
------------------------------------------------------------
- Invite de commande affichée avec le prompt `$`
- Lecture continue des commandes de l’utilisateur
- Traitement des commandes internes :
    * `help`  → Affiche un petit manuel d’utilisation
    * `clear` → Nettoie l’écran du terminal
    * `exit`  → Ferme proprement le shell
- Exécution des autres commandes via `system()`

------------------------------------------------------------
💻 UTILISATION
------------------------------------------------------------
1. Compiler :
   gcc minishell.c -o minishell

2. Exécuter :
   ./minishell

3. Utiliser comme un shell :
   $ ls
   $ pwd
   $ clear
   $ help
   $ exit

------------------------------------------------------------
📁 STRUCTURE DU FICHIER
------------------------------------------------------------
minishell.c  → Fichier source unique contenant tout le code
README.txt   → Présentation du projet, compétences, usage

------------------------------------------------------------
✍️ AUTEUR
------------------------------------------------------------
Nom : 
Abouzeïdi_Idé_A
Rafiatou_SH
Harouna_Moussa_AR
Amadou_Tidjani_Alou_HA
Projet réalisé sur : Termux (Android) ou VScode(ordinateur)
Encadrement : Projet hebdomadaire - Semaine 4
