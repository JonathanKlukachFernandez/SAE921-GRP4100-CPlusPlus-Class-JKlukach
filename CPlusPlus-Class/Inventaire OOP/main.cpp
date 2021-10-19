// Inventaire OOP.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "Map.h"
#include "Bow.h"
#include "Sword.h"
#include "HealthPotion.h"
#include "ForcePotion.h"


int main()
{
	Inventory inventory;
	Map map;
	Sword sword;
	Bow bow;
	HealthPotion healthPotion;
	ForcePotion forcePotion;
	inventory.AddItem(&map);
	inventory.AddItem(&sword);
	inventory.AddItem(&bow);
	inventory.AddItem(&healthPotion);
	inventory.AddItem(&forcePotion);
	inventory.Display();
}
