# Essais
Essai de compiler une librairie .dll pour QT 5.15.2   
Utilise CMakeLists.txt  

# Configuration Visual Studio 2022   

## Qt extension 
Add Qt extension in Visual Studio  
And add Qt repertory in extension : Menu : Extensions -> Qt VS Tools -> Options 
- Path to Qt/MsBuild files : ***C:\Users\bubu\AppData\Local\QtMsBuild***
- Qt -> Version -> name ***5.15.2_msvc2019_64*** path ***C:\Qt\5.15.2\msvc2019_64***   


## Extension QML Syntax/Tools
Installer l'extension QMl Syntax/Tools pour avoir la coloration syntaxique des programmes en QML  

## Réglage de la solution
Tous les réglages suivants correspondent au projet en cours et seront stockés dans le répertoire **.vs** de votre projet   
Dans explorateur de solution -> click droit sur mylibrary -> propriétés  
Régler les menus suivants :  
- propriétés de configuration   
    - Général
    	- Type de configuration : ***Bibliothèque dynamique .dll***
		- Ensemble d'outils de plateforme : ***Visual Studio 2019 (v142)*** => QT5 n'est compatible que de VS 2019
	- C/C++
		- Entête précompilé : ***Sans utiliser les entêtes précompilés*** => ne pas utiliser les entêtes précompilés   
		- Général
    		- Autres répertoires include : ***C:\Qt\5.15.2\msvc2019_64\include***


# CMake   

# CMake   

