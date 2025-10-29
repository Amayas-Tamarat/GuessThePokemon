# 🎮 Pokémon Guess Game

## 📝 Description

Jeu de devinettes en C++ où le joueur doit deviner le nom d'un Pokémon à partir d'indices fournis (types, taille, poids, capacités, etc.). Le jeu utilise l'API PokéAPI GraphQL pour récupérer les données des Pokémon.

## 🎯 Objectifs du projet

- Apprendre le C++ (gestion de classes, séparation fichiers .h/.cpp, architecture logicielle)
- Intégrer une API REST/GraphQL en C++
- Parser et manipuler des données JSON
- Créer une application structurée et maintenable
- (Future) Ajouter une interface graphique

## 🛠️ Technologies utilisées

### Langage
- **C++** (Standard C++11 ou supérieur)

### Bibliothèques prévues
- **cpp-httplib** ou **libcurl** - Requêtes HTTP pour l'API
- **nlohmann/json** - Parsing JSON
- **Standard Library** - Structures de données (vector, string)

### API
- **PokéAPI GraphQL** - https://graphql-pokeapi.vercel.app/

### Interface (Future)
- **Qt + QML** ou **Architecture Web (HTML/CSS/JS + Backend C++)**

## 📁 Architecture du projet

### Structure actuelle (Console)

```
pokemon-game/
├── main.cpp              # Point d'entrée
├── Pokemon.h             # Entité Pokémon (déclaration)
├── Pokemon.cpp           # Entité Pokémon (implémentation)
├── Game.h                # Logique de jeu
├── Game.cpp
├── Display.h             # Affichage console
├── Display.cpp
├── ApiClient.h           # Communication avec PokéAPI
├── ApiClient.cpp
├── Utils.h               # Fonctions utilitaires
└── Utils.cpp
```

### Structure future (avec dossiers)

```
pokemon-game/
├── main.cpp
├── entities/
│   ├── Pokemon.h/cpp
├── services/
│   ├── Game.h/cpp
│   ├── ApiClient.h/cpp
├── ui/
│   ├── Display.h/cpp
└── utils/
    ├── Utils.h/cpp
```

## 🗺️ Roadmap

### ✅ Phase 1 : Prototype console (Terminé/En cours)
- [x] Logique de jeu de base avec données en dur
- [x] Classe Song (ancienne version musique)
- [x] Système de scoring
- [x] Comparaison flexible des réponses
- [x] Éviter les doublons dans une partie
- [x] Refactoring : Classe Pokemon
- [x] Refactoring : Séparation fichiers .h/.cpp
- [x] Extraction Utils (normalizeString)
- [ ] Extraction Display (affichage)
- [ ] Extraction Game (logique)

### 🔄 Phase 2 : Intégration API
- [ ] Installation bibliothèques HTTP et JSON
- [ ] Requêtes GraphQL basiques
- [ ] Parsing des réponses JSON
- [ ] Création d'objets Pokemon depuis l'API
- [ ] Gestion des erreurs réseau
- [ ] Cache local (éviter trop de requêtes)
- [ ] Intégration complète dans le jeu

### 🎨 Phase 3 : Interface graphique
- [ ] Choix technologie (Qt/Web)
- [ ] Design des écrans
- [ ] Implémentation UI
- [ ] Affichage des sprites Pokémon
- [ ] Animations et feedback visuels

### 🚀 Phase 4 : Améliorations
- [ ] Système d'indices progressifs
- [ ] Niveaux de difficulté
- [ ] Statistiques et historique
- [ ] Sauvegarde des scores
- [ ] Mode multi-joueurs (?)

## 🎮 Fonctionnalités actuelles

### Gameplay
- Chiox du nombre de Pokémon à deviner.
- Choix aléatoire d'un Pokémon
- 5 essais par Pokémon
- Indices affichés au début de chaque essai (types, taille, poids, capacités)
- Le joueur devine le nom du Pokémon
- Comparaison insensible à la casse et aux caractères spéciaux

### Système de scoring
- Bonne réponse : **+ (5 - nb essais) + 1 point**
- Mauvaise réponse : **-2 points**

### Données Pokémon
- ID
- Nom
- Taille (height)
- Poids (weight)
- Types (grass, poison, etc.)
- Capacités (abilities)
- Attaques (moves)

## 🔧 Compilation et exécution

### Prérequis
- Compilateur C++ (g++, clang++, MSVC)
- Standard C++11 minimum

### Compilation basique (actuelle)
```bash
g++ -std=c++11 main.cpp Pokemon.cpp Utils.cpp -o pokemon_game
./pokemon_game
```

### Compilation future (avec API)
```bash
g++ -std=c++11 main.cpp Pokemon.cpp Game.cpp Display.cpp ApiClient.cpp Utils.cpp -lcurl -o pokemon_game
./pokemon_game
```

## 📚 Apprentissages

Ce projet permet d'apprendre :
- Architecture logicielle en C++
- Séparation déclaration/implémentation (.h/.cpp)
- Include guards
- Gestion mémoire et références
- Requêtes HTTP/API
- Parsing JSON
- Design patterns (MVC simplifié)
- Interface graphique (future)

## 🤝 Contribution

Projet personnel d'apprentissage du C++.

## 📄 Licence

Projet éducatif - Données Pokémon © Nintendo/Game Freak via PokéAPI.