# Essais
Essai de compiler une librairie .dll pour QT 5.15.2   
Utilise CMakeLists.txt  

# Configuration Visual Studio 2022   
Dans explorateur de solution -> click droit sur mylibrary -> propriétés  
Régler les menus suivants :  
- propriétés de configuration   
    - Général
    	- Type de configuration : ***Bibliothèque dynamique .dll***
		- Ensemble d'outils de plateforme : ***Visual Studio 2019 (v142)*** => QT5 n'est compatible que de VS 2019
	- C/C++
		- Entête précompilé : ***Sans utiliser les entêtes précompilés*** => ne pas utiliser les entêtes précompilés   
		-  

