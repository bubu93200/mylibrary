# Essais
Essai de compiler une librairie .dll pour QT 5.15.2   
Utilise CMakeLists.txt  

# Configuration Visual Studio 2022   
Dans explorateur de solution -> click droit sur mylibrary -> propri�t�s  
R�gler les menus suivants :  
- propri�t�s de configuration   
    - G�n�ral
    	- Type de configuration : ***Biblioth�que dynamique .dll***
		- Ensemble d'outils de plateforme : ***Visual Studio 2019 (v142)*** => QT5 n'est compatible que de VS 2019
	- C/C++
		- Ent�te pr�compil� : ***Sans utiliser les ent�tes pr�compil�s*** => ne pas utiliser les ent�tes pr�compil�s   
		-  

