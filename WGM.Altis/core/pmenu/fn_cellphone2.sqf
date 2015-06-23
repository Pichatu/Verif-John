/*
File: fn_cellphone2.sqf
Author: Timo

Description:
With no radio cant use Cellphone
*/


if("ItemRadio" in assignedItems player) then {
createDialog "Life_cell_phone";
}else{
hint parseText format ["Pas de téléphone


Vous devez avoir un téléphone (radio) sur vous pour vous en servir, si tu veux ils en vendent pas cher à Castorama.
"];
};