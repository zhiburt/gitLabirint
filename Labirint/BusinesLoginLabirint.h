#pragma once

//this me code
//Maxim Zhiburt
//TODO EXIT;

#include <iostream>
#include <vector>
#include <iterator>
#include <ctime>
#include <stack>
#include <fstream>
#include <string>


/*
This is classe prg i n  fs
v 0.8
Code >+<
*/



/*
Class recursing
Repis na while or for
*/
class LabirintComing {

private:
	int enumeretion_int = 0;
	/*
	Struct main kletka
	*/
	struct KletkaMain
	{
		int x, y;
		int G = 0, H = 0, F = 0;
		bool sost = false;
		KletkaMain *roditel = NULL;
	};

	std::stack <std::pair<int, int>> FIFO;

	int interator_main = 0;

	int user_toch_begin_x;
	int user_toch_begin_y;

	int user_toch_x;
	int user_toch_y;

	enum Step { FREE_STEP = 10, DIO_STEP = 14 };

	std::vector<KletkaMain> closed_list;
	std::vector<KletkaMain> open_list;

	std::string FILE_NAME = "../Labirint.txt";

	int N_FIRST, N_LAST;

	int **labirint_array;
	int **monetka_array;

	KletkaMain **kletka_array;

	//
	int h_evric_fun(int, int);
	//
	int g_fun(int, int);
	//
	int f_fun(int, int);
	//
	void generation_monetka_array();
	//
	void generation();
	//
	void zapoln_way();
	//
	bool generation_way(KletkaMain*);
	//
	void generation_kletka();
	//
	bool support_fun_appenda(int, int);
	//
	void ap(KletkaMain *, int, int);
	//
	void delit(KletkaMain*);	
	//
	int searh_min_f();
	//
	bool find_append(int, int);
	//
	void append_full_open(KletkaMain*);
	//
	void append_open(KletkaMain*);
	//
	bool swapper_roda(KletkaMain*, KletkaMain*);
	//
	int support_g_fun(KletkaMain*, KletkaMain*);
	//
	bool chek_kletka(int, int);
	//
	/*PER*/
	bool puch_fifo(KletkaMain *);
	//
	bool find_or_not();
	//Mein algoritm-fun
	bool poisk_full(int, int);
	//
	bool poisk(int, int);

public:
	/*
	Comenting
	fich classes . and andere.. .
	*/
	//Destructor
	~LabirintComing();
	//
	bool UserToch(int, int);
	//
	bool DotPoisk(int, int);
	//
	int** DimensionMaze(int, int);
	//
	int** FunctionLabirint(bool = true);
};


/*
	Returned int** mass way
*/
int** LabirintComing::FunctionLabirint(bool trucer) {
	open_list.clear();
	closed_list.clear();

	if (trucer) {
		if (poisk_full(user_toch_begin_x, user_toch_begin_y)) {
			generation_way(&closed_list.back());
			return monetka_array;
		}
		else {
			return NULL;
		}
	}
	else {
		if (poisk(user_toch_begin_x, user_toch_begin_y)) {
			generation_way(&closed_list.back());
			return monetka_array;
		}
		else {
			return NULL;
		}
	}
}

/*
	Cheker Sost kletka (True/False)
*/
bool LabirintComing::chek_kletka(int x, int y) {
	if ((x < 0 || y < 0) || (x >= N_FIRST || y >= N_LAST))return false;
	else return kletka_array[x][y].sost;
}

/*
	Fifo --> (not) 
*/
bool LabirintComing::puch_fifo(KletkaMain *test) {
	FIFO.push(std::make_pair(test->x, test->y));
	if (test->roditel == NULL) return true;
	return puch_fifo(test->roditel);
}


/*
	Find or not User Cletka in Closed List
*/
bool LabirintComing::find_or_not() {
	for (unsigned int i = 0; i < size(closed_list); i++) {
		if ((closed_list[i].x == user_toch_x) && (closed_list[i].y == user_toch_y)) {
			puch_fifo(&closed_list[i]);
			return true;
		}
	}
	return false;
}

/*
Recording * && *
*/
int LabirintComing::support_g_fun(KletkaMain* kletka, KletkaMain* kletka_main) {
	if (kletka_main->x + 1 == kletka->x && kletka_main->y + 1 == kletka->y)
		return kletka_main->G + DIO_STEP;
	else if (kletka_main->x - 1 == kletka->x && kletka_main->y - 1 == kletka->y)
		return kletka_main->G + DIO_STEP;
	else
		return kletka_main->G + FREE_STEP;
}


/*
If the step for 2 cells is less than a step for 1 cell.
The parent changes.
*/
bool LabirintComing::swapper_roda(KletkaMain* kletka, KletkaMain* kletka_main) {
	if (support_g_fun(kletka, kletka_main) < kletka->G) {
		kletka->roditel = kletka_main;
		kletka->G = g_fun(kletka->x, kletka->y);
		kletka->F = f_fun(kletka->x, kletka->y);
		for (unsigned int i = 0; i < open_list.size(); i++) {
			if (open_list[i].x == kletka->x && open_list[i].y == kletka->y) {
				open_list[i].roditel = &kletka_array[kletka_main->x][kletka_main->y];
				open_list[i].G = g_fun(kletka->x, kletka->y);
				open_list[i].F = f_fun(kletka->x, kletka->y);
				break;
			}
		}
		return true;
	}
	return false;
}




/*
Fun Deliter Element OpenList
*/
void LabirintComing::delit(KletkaMain* del_kletka) {
	for (unsigned int i = 0; i < size(open_list); i++) {
		if ((del_kletka->x == open_list[i].x) && (del_kletka->y == open_list[i].y)) open_list.erase(open_list.begin() + i);
	}
}




/*
Return find or not in close list kletka
*/
bool LabirintComing::support_fun_appenda(int tester_x, int tester_y) {
	for (unsigned int i = 0; i < size(closed_list); i++) {
		if (tester_x == closed_list[i].x && tester_y == closed_list[i].y)
			return false;
	}
	return true;
}

/*
	Destructor
*/
LabirintComing::~LabirintComing() {
		
	for (int i = 0; i < N_FIRST; i++) {
		delete[] kletka_array[i];
	}



	for (int i = 0; i < N_FIRST; i++) {
		delete[] labirint_array[i];
	}


	for (int i = 0; i < N_FIRST; i++) {
		delete[] monetka_array[i];
	}

}


/*
Main algoritm A* full
*/
bool LabirintComing::poisk_full(int x, int y) {
	if (!find_append(x, y))open_list.push_back(kletka_array[x][y]);
	append_full_open(&kletka_array[x][y]);
	closed_list.push_back(kletka_array[x][y]);
	delit(&kletka_array[x][y]);
	if (find_or_not()) return true;
	if (open_list.empty())return false;
	int jex = searh_min_f();
	return poisk_full(open_list[jex].x, open_list[jex].y);

}
/*
	Maint algoritm A*
*/
bool LabirintComing::poisk(int x, int y) {
	if (!find_append(x, y))open_list.push_back(kletka_array[x][y]);
	append_open(&kletka_array[x][y]);
	closed_list.push_back(kletka_array[x][y]);
	delit(&kletka_array[x][y]);
	if (find_or_not()) return true;
	if (open_list.empty())return false;
	int jex = searh_min_f();
	return poisk(open_list[jex].x, open_list[jex].y);
}


/*
find min element in open list
*/
int LabirintComing::searh_min_f() {
	int mx_f_i = 0;
	int min = INT_MAX;
	int len = size(open_list);
	if (len >= 2) {
		for (int i = 0; i < len; i++) {
			if (open_list[i].F < min) {
				mx_f_i = i;
				min = open_list[i].F;
			}
		}
	}
	else mx_f_i = 0;

	return (mx_f_i);
}



/*
Find Poisk Append list
*/
bool LabirintComing::find_append(int x, int y) {
	bool chek = false;
	for (unsigned int i = 0; i < size(open_list); i++) {
		if ((x == open_list[i].x) && (y == open_list[i].y)) {
			chek = true;
			break;
		}
	}
	return chek;
}

/*
Support Recorder - - - -
*KletkaMain, int, int
*/
void LabirintComing::ap(KletkaMain* kletka, int x, int y) {
	//Testing array...
	kletka_array[x][y].roditel = &kletka_array[kletka->x][kletka->y];
	kletka_array[x][y].H = h_evric_fun(kletka_array[x][y].x, kletka_array[x][y].y);
	kletka_array[x][y].G = g_fun(kletka_array[x][y].x, kletka_array[x][y].y);
	kletka_array[x][y].F = f_fun(kletka_array[x][y].x, kletka_array[x][y].y);
	open_list.push_back(kletka_array[x][y]);
}
/*
Soon
Fun append new element in open_list(!)
*/
void LabirintComing::append_full_open(KletkaMain* kletka) {

	if (chek_kletka(kletka->x + 1, kletka->y) &&
		support_fun_appenda(kletka->x + 1, kletka->y))
	{
		if (find_append(kletka->x + 1, kletka->y)) {
			swapper_roda(&kletka_array[kletka->x + 1][kletka->y], kletka);
		}
		else {
			ap(kletka, kletka->x + 1, kletka->y);
		}

	}
	if (chek_kletka(kletka->x - 1, kletka->y) &&
		support_fun_appenda(kletka->x - 1, kletka->y))
	{
		if (find_append(kletka->x - 1, kletka->y)) {
			swapper_roda(&kletka_array[kletka->x - 1][kletka->y], kletka);
		}
		else {
			ap(kletka, kletka->x - 1, kletka->y);
		}

	}

	if (chek_kletka(kletka->x, kletka->y + 1) &&
		support_fun_appenda(kletka->x, kletka->y + 1))
	{
		if (find_append(kletka->x, kletka->y + 1)) {
			swapper_roda(&kletka_array[kletka->x][kletka->y + 1], kletka);
		}
		else {
			ap(kletka, kletka->x, kletka->y + 1);
		}

	}

	if (chek_kletka(kletka->x, kletka->y - 1) &&
		support_fun_appenda(kletka->x, kletka->y - 1))
	{
		if (find_append(kletka->x, kletka->y - 1)) {
			swapper_roda(&kletka_array[kletka->x][kletka->y - 1], kletka);
		}
		else {
			ap(kletka, kletka->x, kletka->y - 1);
		}

	}

	/*Kill 2 string  = not diogonal */
	if (chek_kletka(kletka->x + 1, kletka->y + 1) &&
		support_fun_appenda(kletka->x + 1, kletka->y + 1))
	{
		if (find_append(kletka->x + 1, kletka->y + 1)) {
			swapper_roda(&kletka_array[kletka->x + 1][kletka->y + 1], kletka);
		}
		else {
			ap(kletka, kletka->x + 1, kletka->y + 1);
		}

	}

	if (chek_kletka(kletka->x - 1, kletka->y - 1) &&
		support_fun_appenda(kletka->x - 1, kletka->y - 1))
	{
		if (find_append(kletka->x - 1, kletka->y - 1)) {
			swapper_roda(&kletka_array[kletka->x - 1][kletka->y - 1], kletka);
		}
		else {
			ap(kletka, kletka->x - 1, kletka->y - 1);
		}

	}

	if (chek_kletka(kletka->x + 1, kletka->y - 1) &&
		support_fun_appenda(kletka->x + 1, kletka->y - 1))
	{
		if (find_append(kletka->x + 1, kletka->y - 1)) {
			swapper_roda(&kletka_array[kletka->x + 1][kletka->y - 1], kletka);
		}
		else {
			ap(kletka, kletka->x + 1, kletka->y - 1);
		}

	}

	if (chek_kletka(kletka->x - 1, kletka->y + 1) &&
		support_fun_appenda(kletka->x - 1, kletka->y + 1))
	{
		if (find_append(kletka->x - 1, kletka->y + 1)) {
			swapper_roda(&kletka_array[kletka->x - 1][kletka->y + 1], kletka);
		}
		else {
			ap(kletka, kletka->x - 1, kletka->y + 1);
		}

	}

}

/*
	Fun Append new ellement in open list (!)
*/
void LabirintComing::append_open(KletkaMain* kletka) {

	if (chek_kletka(kletka->x + 1, kletka->y) &&
		support_fun_appenda(kletka->x + 1, kletka->y))
	{
		if (find_append(kletka->x + 1, kletka->y)) {
			swapper_roda(&kletka_array[kletka->x + 1][kletka->y], kletka);
		}
		else {
			ap(kletka, kletka->x + 1, kletka->y);
		}

	}
	if (chek_kletka(kletka->x - 1, kletka->y) &&
		support_fun_appenda(kletka->x - 1, kletka->y))
	{
		if (find_append(kletka->x - 1, kletka->y)) {
			swapper_roda(&kletka_array[kletka->x - 1][kletka->y], kletka);
		}
		else {
			ap(kletka, kletka->x - 1, kletka->y);
		}

	}

	if (chek_kletka(kletka->x, kletka->y + 1) &&
		support_fun_appenda(kletka->x, kletka->y + 1))
	{
		if (find_append(kletka->x, kletka->y + 1)) {
			swapper_roda(&kletka_array[kletka->x][kletka->y + 1], kletka);
		}
		else {
			ap(kletka, kletka->x, kletka->y + 1);
		}

	}

	if (chek_kletka(kletka->x, kletka->y - 1) &&
		support_fun_appenda(kletka->x, kletka->y - 1))
	{
		if (find_append(kletka->x, kletka->y - 1)) {
			swapper_roda(&kletka_array[kletka->x][kletka->y - 1], kletka);
		}
		else {
			ap(kletka, kletka->x, kletka->y - 1);
		}

	}

}

/*
Begin pointer
*/
bool LabirintComing::DotPoisk(int x, int y) {
	if (labirint_array[x][y] == 1)
		return false;
	else {
		user_toch_begin_x = x;
		user_toch_begin_y = y;
		return true;
	}
}



/*
User responce End COOrdinat
*/
bool LabirintComing::UserToch(int x, int y) {
	 if (labirint_array[x][y] == 1)
		return false;
	else {
		user_toch_x = x;
		user_toch_y = y;
		return true;
	}
}

/*
	Labirint returned (int**)
*/
int** LabirintComing::DimensionMaze(int x, int y) {
	
	if (enumeretion_int != 0) {

		for (int i = 0; i < N_FIRST; i++) {
			delete[] kletka_array[i];
		}



		for (int i = 0; i < N_FIRST; i++) {
			delete[] labirint_array[i];
		}


		for (int i = 0; i < N_FIRST; i++) {
			delete[] monetka_array[i];
		}
	}
	
	N_FIRST = x;
	N_LAST = y;

	generation();
	generation_kletka();
	generation_monetka_array();

	enumeretion_int++;

	return (labirint_array);
}

/*

*/
int LabirintComing::f_fun(int x, int y) {
	return (kletka_array[x][y].G + kletka_array[x][y].H);
}


/*

*/
int LabirintComing::g_fun(int x, int y) {

	if (kletka_array[x][y].roditel == NULL)
		return 0;

	else if (kletka_array[x][y].roditel->x + kletka_array[x][y].roditel->y - (x + y) == 1 ||
		kletka_array[x][y].roditel->x + kletka_array[x][y].roditel->y - (x + y) == -1)
		return kletka_array[x][y].roditel->G + FREE_STEP;
	else
		return kletka_array[x][y].roditel->G + DIO_STEP;
}

/*
H evric fun
Is
Distance without knowledge of the situation on the field
*/
int LabirintComing::h_evric_fun(int x, int y) {
	int h;
	if (user_toch_x >= x && user_toch_y >= y) h = (user_toch_x - x) + (user_toch_y - y);
	else if (x >= user_toch_x && user_toch_y >= y) h = (x - user_toch_x) + (user_toch_y - y);
	else if (x >= user_toch_x && y >= user_toch_y) h = (x - user_toch_x) + (y - user_toch_y);
	else if (user_toch_x >= x && y >= user_toch_y) h = (user_toch_x - x) + (y - user_toch_y);
	return h * 10;
}



/*
Function Generation Labirint
*/
void LabirintComing::generation() {
	
	srand(time(NULL));
	labirint_array = new int*[N_FIRST];
	for (int i = 0; i < N_FIRST; i++) {
		labirint_array[i] = new int[N_LAST];
		for (int j = 0; j < N_LAST; j++) {
			int rand_number = 0 + rand() % 3;
			if (rand_number == 1) labirint_array[i][j] = 1;
			else labirint_array[i][j] = 0;
		}
	}
}

/*
Generation kletka mass
*/
void LabirintComing::generation_kletka() {

	kletka_array = new KletkaMain*[N_FIRST];

	for (int i = 0; i < N_FIRST; i++) {
		kletka_array[i] = new KletkaMain[N_LAST];
		for (int j = 0; j < N_LAST; j++) {
			kletka_array[i][j].x = i;
			kletka_array[i][j].y = j;
			if (labirint_array[i][j] == 0) {
				kletka_array[i][j].sost = true;
			}
		}
	}
}






/*
	Generation Way -
*/
bool LabirintComing::generation_way(LabirintComing::KletkaMain* U) {
	zapoln_way();

	while (true) {
		monetka_array[U->x][U->y] = 2;
		if (U->roditel == NULL) return true;
		U = U->roditel;
	}
}



/*
Function Generation WayArray
*/
void LabirintComing::generation_monetka_array() {
	monetka_array = new int*[N_FIRST];
	for (int i = 0; i < N_FIRST; i++) {
		monetka_array[i] = new int[N_LAST];
	}
}

void LabirintComing::zapoln_way() {
	for (int i = 0; i < N_FIRST; i++) {
		for (int j = 0; j < N_LAST; j++) {
			monetka_array[i][j] = labirint_array[i][j];
		}
	}
}