#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream>
#include <stack>
using namespace std;

void ans(string current) {
	if (current == "dad_mom") cout << "����" << endl;
	else if (current == "dad_dad") cout << "����\n";
	else if (current == "dad_dad_dad") cout << "����\n";
	else if (current == "dad_dad_mom") cout << "����\n";
	else if (current == "dad")cout << "����\n";
	else if (current == "mom")cout << "����\n";
	else if (current == "o_bro")cout << "����\n";
	else if (current == "y_bro")cout << "�̧�\n";
	else if (current == "o_sis")cout << "�n�n\n";
	else if (current == "y_sis")cout << "�f�f\n";
	else if (current == "husb")cout << "��\n";
	else if (current == "wife")cout << "�d\n";
	else if (current == "daut_o")cout << "�k��\n";
	else if (current == "daut_y")cout << "�k��\n";
	else if (current == "daut")cout << "�k��\n";
	else if (current == "son_o")cout << "��l\n";
	else if (current == "son_y")cout << "��l\n";
	else if (current == "son")cout << "��l\n";
	else if (current == "me_g")cout << "�ۤv\n";
	else if (current == "me_b")cout << "�ۤv\n";
	else if (current == "me")cout << "�ۤv\n";
	else if (current == "dad_o_bro") cout << "�B��\n";
	else if (current == "dad_y_bro") cout << "����\n";
	else if (current == "dad_o_sis") cout << "�h��\n";
	else if (current == "dad_y_sis") cout << "�h��\n";
	else if (current == "dad_o_bro_wife") cout << "�B��\n";
	else if (current == "dad_y_bro_wife") cout << "�T�T\n";
	else if (current == "dad_o_sis_husb") cout << "�h�V\n";
	else if (current == "dad_y_sis_husb") cout << "�h�V\n";
	else if (current == "dad_o_bro_daut_o")cout << "��n\n";
	else if (current == "dad_o_bro_daut_y")cout << "��f\n";
	else if (current == "dad_o_bro_son_o")cout << "��S\n";
	else if (current == "dad_o_bro_son_y")cout << "���\n";
	else if (current == "dad_y_bro_daut_o")cout << "��n\n";
	else if (current == "dad_y_bro_daut_y")cout << "��f\n";
	else if (current == "dad_y_bro_son_o")cout << "��S\n";
	else if (current == "dad_y_bro_son_y")cout << "���\n";
	else if (current == "dad_sis_daut_o")cout << "��n\n";
	else if (current == "dad_sis_daut_y")cout << "��f\n";
	else if (current == "dad_sis_son_o")cout << "��S\n";
	else if (current == "dad_sis_son_y")cout << "���\n";
	else if (current == "mom_dad")cout << "�~����\n";
	else if (current == "mom_mom")cout << "�~����\n";
	else if (current == "mom_o_bro")cout << "����\n";
	else if (current == "mom_y_bro")cout << "����\n";
	else if (current == "mom_o_sis")cout << "����\n";
	else if (current == "mom_y_sis")cout << "����\n";
	else if (current == "mom_o_bro_wife")cout << "����\n";
	else if (current == "mom_y_bro_wife")cout << "����\n";
	else if (current == "mom_o_sis_husb")cout << "���V\n";
	else if (current == "mom_y_sis_husb")cout << "���V\n";
	else if (current == "mom_o_bro_daut_o")cout << "��n\n";
	else if (current == "mom_o_bro_daut_y")cout << "��f\n";
	else if (current == "mom_sis_daut_o")cout << "��n\n";
	else if (current == "mom_sis_daut_y")cout << "��f\n";
	else if (current == "mom_sis_son_o")cout << "��S\n";
	else if (current == "mom_sis_son_y")cout << "���\n";
	else if (current == "mom_bro_daut_o")cout << "��n\n";
	else if (current == "mom_bro_daut_y")cout << "��f\n";
	else if (current == "mom_o_bro_son_o")cout << "��S\n";
	else if (current == "mom_o_bro_son_y")cout << "���\n";
	else if (current == "mom_bro_son_o")cout << "��S\n";
	else if (current == "mom_bro_son_y")cout << "���\n";
	else if (current == "o_bro_wife")cout << "�A�A\n";
	else if (current == "o_bro_daut")cout << "���k\n";
	else if (current == "o_bro_son")cout << "���l\n";
	else if (current == "y_bro_wife")cout << "�̷@\n";
	else if (current == "y_bro_daut")cout << "���k\n";
	else if (current == "y_bro_son")cout << "���l\n";
	else if (current == "o_sis_husb")cout << "�n��\n";
	else if (current == "o_sis_daut")cout << "�~�c�k\n";
	else if (current == "o_sis_son")cout << "�~�c\n";
	else if (current == "y_sis_husb")cout << "�f��\n";
	else if (current == "y_sis_daut")cout << "�~�c�k\n";
	else if (current == "y_sis_son")cout << "�~�c\n";
	else if (current == "husb_dad")cout << "�Ҥ�\n";
	else if (current == "husb_mom")cout << "�ҥ�\n";
	else if (current == "husb_o_bro")cout << "�ҥS\n";
	else if (current == "husb_y_bro")cout << "�ҧ�\n";
	else if (current == "husb_o_sis")cout << "�ҩn\n";
	else if (current == "husb_y_sis")cout << "�ҩf\n";
	else if (current == "husb_o_bro_wife")cout << "�ҥS�A\n";
	else if (current == "husb_y_bro_wife")cout << "�ҧ̷@\n";
	else if (current == "husb_o_sis_husb")cout << "�ҩn��\n";
	else if (current == "husb_y_sis_husb") cout << "�ҩf��\n";
	else if (current == "husb_o_bro_son")cout << "���l\n";
	else if (current == "husb_y_bro_son")cout << "���l\n";
	else if (current == "husb_o_sis_son") cout << "�~�c\n";
	else if (current == "husb_y_sis_son") cout << "�~�c\n";
	else if (current == "husb_o_bro_daut")cout << "���k\n";
	else if (current == "husb_y_bro_daut")cout << "���k\n";
	else if (current == "husb_o_sis_daut")cout << "�~�c�k\n";
	else if (current == "husb_y_sis_daut")cout << "�~�c�k\n";
	else if (current == "wife_dad")cout << "�d��\n";
	else if (current == "wife_mom")cout << "�d��\n";
	else if (current == "wife_o_bro")cout << "�d�S\n";
	else if (current == "wife_y_bro")cout << "�d��\n";
	else if (current == "wife_o_sis")cout << "�d�n\n";
	else if (current == "wife_y_sis")cout << "�d�f\n";
	else if (current == "wife_o_bro_wife")cout << "�d�S�A\n";
	else if (current == "wife_y_bro_wife")cout << "�d�̷@\n";
	else if (current == "wife_o_sis_husb")cout << "�d�n��\n";
	else if (current == "wife_y_sis_husb")cout << "�d�f��\n";
	else if (current == "wife_o_bro_son")cout << "�~�c\n";
	else if (current == "wife_y_bro_son")cout << "�~�c\n";
	else if (current == "wife_o_sis_son")cout << "�~�c\n";
	else if (current == "wife_y_sis_son")cout << "�~�c\n";
	else if (current == "wife_o_bro_daut")cout << "�~�c�k\n";
	else if (current == "wife_y_bro_daut")cout << "�~�c�k\n";
	else if (current == "wife_o_sis_daut")cout << "�~�c�k\n";
	else if (current == "wife_y_sis_daut")cout << "�~�c�k\n";
	else if (current == "daut_husb")cout << "�k�B\n";
	else if (current == "daut_daut")cout << "�~�]\n";
	else if (current == "daut_son")cout << "�~�]\n";
	else if (current == "son_wife")cout << "�@��\n";
	else if (current == "son_daut")cout << "�]�k\n";
	else if (current == "son_son")cout << "�]�l\n";
}
//int tran[10000][10000];
bool t = 0;
string translation(string enter, string plus) {
	if (enter == "me_b") {
		t = 0;
		if (plus == "dad") return "dad";//����
		if (plus == "mom") return "mom";//����
		if (plus == "o_bro") return "o_bro";//����
		if (plus == "y_bro") return "y_bro";//�̧�
		if (plus == "o_sis") return "o_sis";//�n�n
		if (plus == "y_sis") return "y_sis";//�f�f
		if (plus == "wife") return "wife";//�d
		if (plus == "daut") return "daut";//�k��
		if (plus == "daut_o") return "daut";//�k��
		if (plus == "daut_y") return "daut";//�k��
		if (plus == "son") return "son";//��l
		if (plus == "son_o") return "son";//��l
		if (plus == "son_y") return "son";//��l
	}
	if (enter == "me_g") {
		t = 1;
		if (plus == "dad") return "dad";//����
		if (plus == "mom") return "mom";//����
		if (plus == "o_bro") return "o_bro";//����
		if (plus == "y_bro") return "y_bro";//�̧�
		if (plus == "o_sis") return "o_sis";//�n�n
		if (plus == "y_sis") return "y_sis";//�f�f
		if (plus == "husb") return "husb";//��
		if (plus == "daut") return "daut";//�k��
		if (plus == "daut_o") return "daut";//�k��
		if (plus == "daut_y") return "daut";//�k��
		if (plus == "son") return "son";//��l
		if (plus == "son_o") return "son";//��l
		if (plus == "son_y") return "son";//��l
	}
	if (enter == "me") {
		if (plus == "dad") return "dad";//����
		if (plus == "mom") return "mom";//����
		if (plus == "o_bro") return "o_bro";//����
		if (plus == "y_bro") return "y_bro";//�̧�
		if (plus == "o_sis") return "o_sis";//�n�n
		if (plus == "y_sis") return "y_sis";//�f�f
		if (plus == "husb") {
			t = 1;
			return "husb";
		}//��
		if (plus == "wife") {
			t = 0;
			return "wife";
		}//�d
		if (plus == "daut") return "daut";//�k��
		if (plus == "daut_o") return "daut";//�k��
		if (plus == "daut_y") return "daut";//�k��
		if (plus == "son") return "son";//��l
		if (plus == "son_o") return "son";//��l
		if (plus == "son_y") return "son";//��l
	}
	if (enter == "dad") {
		if (plus == "mom") return "dad_mom";//����
		if (plus == "dad") return "dad_dad";//����
		if (plus == "o_bro") return "dad_o_bro";//�B��
		if (plus == "y_bro") return "dad_y_bro";//����
		if (plus == "o_sis") return "dad_o_sis";//�h��
		if (plus == "y_sis") return "dad_y_sis";//�h��
		if (plus == "wife") return "mom";//����
		if (plus == "son" && t == 0) return "o_bro";//�ۤv(�w�])
		if (plus == "son" && t == 1) return "o_bro";//�ۤv(�w�]) ���令����
		if (plus == "son_o") return "o_bro";//����
		if (plus == "son_y") return "y_bro";//�̧�
		if (plus == "daut" && t == 0) return "o_sis";//�ۤv(�w�]) ���令�j�j
		if (plus == "daut" && t == 1) return "me_g";//�ۤv(�w�]) 
		if (plus == "daut_o") return "o_sis";//�n�n
		if (plus == "daut_y") return "y_sis";//�f�f
	}
	if (enter == "mom") {
		if (plus == "mom") return "mom_mom";//�~����
		if (plus == "dad") return "mom_dad";//�~����
		if (plus == "o_bro") return "mom_o_bro";//����
		if (plus == "y_bro") return "mom_o_bro";//����
		if (plus == "o_sis") return "mom_o_sis";//����
		if (plus == "y_sis") return "mom_y_sis";//����
		if (plus == "husb") return "dad";//����
		if (plus == "son" && t == 0) return "o_bro";//�ۤv(�w�])
		if (plus == "son" && t == 1) return "o_bro";//�ۤv(�w�]) ���令����
		if (plus == "son_o") return "o_bro";//����
		if (plus == "son_y") return "y_bro";//�̧�
		if (plus == "daut" && t == 0) return "o_sis";//�ۤv(�w�]) ���令�j�j
		if (plus == "daut" && t == 1) return "me_g";//�ۤv(�w�]) 
		if (plus == "daut_o") return "o_sis";//�n�n
		if (plus == "daut_y") return "y_sis";//�f�f
	}

	if (enter == "o_bro") {
		if (plus == "mom") return "mom";//����
		if (plus == "dad") return "dad";//����
		if (plus == "o_bro") return "o_bro";//����
		if (plus == "y_bro") return "me";//�ۤv
		if (plus == "o_sis") return "o_sis";//�n�n
		if (plus == "y_sis") return "y_sis";//�f�f
		if (plus == "wife") return "o_bro_wife";//�A�A
		if (plus == "son") return "o_bro_son";//���l
		if (plus == "son_o") return "o_bro_son";
		if (plus == "son_y") return "o_bro_son";
		if (plus == "daut") return "o_bro_daut";//���k 
		if (plus == "daut_o") return "o_bro_daut";
		if (plus == "daut_y") return "o_bro_daut";
	}
	if (enter == "y_bro") {
		if (plus == "mom") return "mom";//����
		if (plus == "dad") return "dad";//����
		if (plus == "o_bro") return "me";//�ۤv
		if (plus == "y_bro") return "y_bro";//�̧�
		if (plus == "o_sis") return "o_sis";//�n�n
		if (plus == "y_sis") return "y_sis";//�f�f
		if (plus == "wife") return "y_bro_wife";//�̷@
		if (plus == "son") return "y_bro_son";//���l
		if (plus == "son_o") return "y_bro_son";
		if (plus == "son_y") return "y_bro_son";
		if (plus == "daut") return "y_bro_daut";//���k 
		if (plus == "daut_o") return "y_bro_daut";
		if (plus == "daut_y") return "y_bro_daut";
	}
	if (enter == "o_sis") {
		if (plus == "mom") return "mom";//����
		if (plus == "dad") return "dad";//����
		if (plus == "o_bro") return "o_bro";//����
		if (plus == "y_bro") return "me";//�ۤv
		if (plus == "o_sis") return "o_sis";//�n�n
		if (plus == "y_sis") return "me";//�ۤv
		if (plus == "husb") return "o_sis_husb";//�n��
		if (plus == "son") return "o_sis_son";//�~�c
		if (plus == "son_o") return "o_sis_son";
		if (plus == "son_y") return "o_sis_son";
		if (plus == "daut") return "o_sis_daut";//�~�c�k 
		if (plus == "daut_o") return "o_sis_daut";
		if (plus == "daut_y") return "o_sis_daut";
	}
	if (enter == "y_sis") {
		if (plus == "mom") return "mom";//����
		if (plus == "dad") return "dad";//����
		if (plus == "o_bro") return "me";//����
		if (plus == "y_bro") return "me";//�ۤv
		if (plus == "o_sis") return "me";//�n�n
		if (plus == "y_sis") return "y_sis";//�ۤv
		if (plus == "husb") return "y_sis_husb";//�f��
		if (plus == "son") return "y_sis_son";//�~�c
		if (plus == "son_o") return "y_sis_son";
		if (plus == "son_y") return "y_sis_son";
		if (plus == "daut") return "y_sis_daut";//�~�c�k 
		if (plus == "daut_o") return "y_sis_daut";
		if (plus == "daut_y") return "y_sis_daut";
	}
	if (enter == "wife") {
		t = 0;
		if (plus == "mom") return "wife_mom";//�d��
		if (plus == "dad") return "wife_dad";//�d��
		if (plus == "o_bro") return "wife_o_bro";//�d�S
		if (plus == "y_bro") return "wife_y_bro";//�d��
		if (plus == "o_sis") return "wife_o_sis";//�d�n
		if (plus == "y_sis") return "wife_y_sis";//�d�f
		if (plus == "husb") return "me_b";//�ۤv
		if (plus == "son") return "son";//��l
		if (plus == "son_o") return "son";
		if (plus == "son_y") return "son";
		if (plus == "daut") return "daut";//�k��
		if (plus == "daut_o") return "daut";
		if (plus == "daut_y") return "daut";
	}
	if (enter == "husb") {
		t = 1;
		if (plus == "mom") return "husb_mom";//�ҥ�
		if (plus == "dad") return "husb_dad";//�Ҥ�
		if (plus == "o_bro") return "husb_o_bro";//�ҥS
		if (plus == "y_bro") return "husb_y_bro";//�ҧ�
		if (plus == "o_sis") return "husb_o_sis";//�ҩn
		if (plus == "y_sis") return "husb_y_sis";//�ҩf
		if (plus == "wife") return "me_g";//�ۤv
		if (plus == "son") return "son";//��l
		if (plus == "son_o") return "son";
		if (plus == "son_y") return "son";
		if (plus == "daut") return "daut";//�k��
		if (plus == "daut_o") return "daut";
		if (plus == "daut_y") return "daut";
	}
	if (enter == "son" || enter == "son_y" || enter == "son_o") {
		if (plus == "mom" && t == 1) return "me";//�ۤv
		if (plus == "mom" && t == 0) return "wife";//�d�l
		if (plus == "dad" && t == 0) return "me"; //�ۤv
		if (plus == "dad" && t == 1) return "husb";//�V��
		if (plus == "o_bro") return "son";//��l
		if (plus == "y_bro") return "son";
		if (plus == "o_sis") return "daut";//�k��
		if (plus == "y_sis") return "daut";
		if (plus == "wife") return "son_wife";//�@��
		if (plus == "son") return "son_son";//�]�l
		if (plus == "son_o") return "son_son";
		if (plus == "son_y") return "son_son";
		if (plus == "daut") return "son_daut";//�]�k
		if (plus == "daut_o") return "son_daut";
		if (plus == "daut_y") return "son_daut";
	}
	if (enter == "daut" || enter == "daut_y" || enter == "daut_o") {
		if (plus == "mom" && t == 1) return "me";//�ۤv
		if (plus == "mom" && t == 0) return "wife";//�d�l
		if (plus == "dad" && t == 0) return "me";//�ۤv
		if (plus == "dad" && t == 1) return "husb";//�V��
		if (plus == "o_bro") return "son";//��l
		if (plus == "y_bro") return "son";
		if (plus == "o_sis") return "daut";//�k��
		if (plus == "y_sis") return "daut";
		if (plus == "husb") return "daut_husb";//�k�B
		if (plus == "son") return "daut_son";//�~�]
		if (plus == "son_o") return "daut_son";
		if (plus == "son_y") return "daut_son";
		if (plus == "daut") return "daut_daut";//�~�]
		if (plus == "daut_o") return "daut_daut";
		if (plus == "daut_y") return "daut_daut";
	}
	bool j = 0;
	if (enter == "mom_dad") {
		if (plus == "daut") return "mom_o_sis";//����
		if (plus == "daut" && j == 1) return "mom";//����
		if (plus == "daut_o") return "mom_o_sis";//����
		if (plus == "daut_y") return "mom_y_sis";//����
		if (plus == "son") return "mom_o_bro";//����
		if (plus == "son_o") return "mom_o_bro";//����
		if (plus == "son_y") return "mom_y_bro";//����
		if (plus == "wife") return "mom_mom";//�~����
	}
	if (enter == "mom_mom") {
		if (plus == "daut") return "mom_o_sis";//����
		if (plus == "daut" && j == 1) return "mom";//����
		if (plus == "daut_o") return "mom_o_sis";//����
		if (plus == "daut_y") return "mom_y_sis";//����
		if (plus == "son") return "mom_o_bro";//����
		if (plus == "son_o") return "mom_o_bro";//����
		if (plus == "son_y") return "mom_y_bro";//����
		if (plus == "husb") return "mom_dad";//�~����
	}
	if (enter == "mom_o_bro") {
		if (plus == "mom") return "mom_mom";//�~����
		if (plus == "dad") return "mom_dad";//�~����
		if (plus == "o_bro") return "mom_o_bro";//����
		if (plus == "y_bro") return "mom_y_bro";//����
		if (plus == "o_sis") return "mom_o_sis";//����
		if (plus == "y_sis") return "mom_y_sis";//����
		if (plus == "wife") return "mom_o_bro_wife";//����
		if (plus == "daut") return "mom_bro_daut_o";//��n
		if (plus == "daut_o") return "mom_bro_daut_o";//��n
		if (plus == "daut_y") return "mom_bro_daut_y";//��f
		if (plus == "son") return "mom_bro_son_o";//���
		if (plus == "son_o") return "mom_bro_son_o";//���
		if (plus == "son_y") return "mom_bro_son_y";//���
	}
	if (enter == "mom_y_bro") {
		if (plus == "mom") return "mom_mom";//�~����
		if (plus == "dad") return "mom_dad";//�~����
		if (plus == "o_bro") return "mom_o_bro";//����
		if (plus == "y_bro") return "mom_y_bro";//����
		if (plus == "o_sis") return "mom_o_sis";//����
		if (plus == "y_sis") return "mom_y_sis";//����
		if (plus == "wife") return "mom_y_bro_wife";//����
		if (plus == "son") return "mom_bro_son_o";//���
		if (plus == "son_o") return "mom_bro_son_o";//���
		if (plus == "son_y") return "mom_bro_son_y";//���
		if (plus == "daut") return "mom_bro_daut_o";//��n
		if (plus == "daut_o") return "mom_bro_daut_o";//��n
		if (plus == "daut_y") return "mom_bro_daut_y";//��f
	}
	if (enter == "mom_o_sis") {
		if (plus == "mom") return "mom_mom";//�~����
		if (plus == "dad") return "mom_dad";//�~����
		if (plus == "o_bro") return "mom_o_bro";//����
		if (plus == "y_bro") return "mom_y_bro";//����
		if (plus == "o_sis") return "mom_o_sis";//����
		if (plus == "y_sis") return "mom_y_sis";//����
		if (plus == "husb") return "mom_o_sis_husb";//���V
		if (plus == "daut") return "mom_sis_daut_o";//��n
		if (plus == "daut_o") return "mom_sis_daut_o";//��n
		if (plus == "daut_y") return "mom_sis_daut_y";//��f
		if (plus == "son") return "mom_sis_son_o";//���
		if (plus == "son_o") return "mom_sis_son_o";//���
		if (plus == "son_y") return "mom_sis_son_y";//���
	}
	if (enter == "mom_y_sis") {
		if (plus == "mom") return "mom_mom";//�~����
		if (plus == "dad") return "mom_dad";//�~����
		if (plus == "o_bro") return "mom_o_bro";//����
		if (plus == "y_bro") return "mom_y_bro";//����
		if (plus == "o_sis") return "mom_o_sis";//����
		if (plus == "y_sis") return "mom_y_sis";//����
		if (plus == "husb") return "mom_y_sis_husb";//���V
		if (plus == "daut") return "mom_sis_daut_o";//��n
		if (plus == "daut_o") return "mom_sis_daut_o";//��n
		if (plus == "daut_y") return "mom_sis_daut_y";//��f
		if (plus == "son") return "mom_sis_son_o";//���
		if (plus == "son_o") return "mom_sis_son_o";//���
		if (plus == "son_y") return "mom_sis_son_y";//���
	}
	if (enter == "mom_o_sis_husb") {
		if (plus == "wife") return "mom_o_sis";//����
		if (plus == "daut") return "mom_sis_daut_o";//��n
		if (plus == "daut_o") return "mom_sis_daut_o";//��n
		if (plus == "daut_y") return "mom_sis_daut_y";//��f
		if (plus == "son") return "mom_sis_son_o";//���
		if (plus == "son_o") return "mom_sis_son_o";//���
		if (plus == "son_y") return "mom_sis_son_y";//���
	}
	if (enter == "mom_y_sis_husb") {
		if (plus == "wife") return "mom_y_sis";//����
		if (plus == "daut") return "mom_sis_daut_o";//��n
		if (plus == "daut_o") return "mom_sis_daut_o";//��n
		if (plus == "daut_y") return "mom_sis_daut_y";//��f
		if (plus == "son") return "mom_sis_son_o";//���
		if (plus == "son_o") return "mom_sis_son_o";//���
		if (plus == "son_y") return "mom_sis_son_y";//���
	}
	if (enter == "mom_o_bro_wife") {
		if (plus == "husb") return "mom_o_bro";//����
		if (plus == "daut") return "mom_bro_daut_o";//��n
		if (plus == "daut_o") return "mom_bro_daut_o";//��n
		if (plus == "daut_y") return "mom_bro_daut_y";//��f
		if (plus == "son") return "mom_bro_son_o";//���
		if (plus == "son_o") return "mom_bro_son_o";//���
		if (plus == "son_y") return "mom_bro_son_y";//���
	}
	if (enter == "mom_y_bro_wife") {
		if (plus == "husb") return "mom_y_bro";//����
		if (plus == "daut") return "mom_bro_daut_o";//��n
		if (plus == "daut_o") return "mom_bro_daut_o";//��n
		if (plus == "daut_y") return "mom_bro_daut_y";//��f
		if (plus == "son") return "mom_bro_son_o";//���
		if (plus == "son_o") return "mom_bro_son_o";//���
		if (plus == "son_y") return "mom_bro_son_y";//���
	}
	if (enter == "mom_bro_son_o") {
		if (plus == "dad") return "mom_o_bro";//����
		if (plus == "mom") return "mom_o_bro_wife";//����
		if (plus == "o_bro") return "mom_bro_son_o";//���
		if (plus == "y_bro") return "mom_bro_son_y";//���
		if (plus == "o_sis") return "mom_bro_daut_o";//��n
		if (plus == "y_sis") return "mom_bro_daut_y";//��f
	}
	if (enter == "mom_bro_son_y") {
		if (plus == "dad") return "mom_o_bro";//����
		if (plus == "mom") return "mom_o_bro_wife";//����
		if (plus == "o_bro") return "mom_bro_son_o";//���
		if (plus == "y_bro") return "mom_bro_son_y";//���
		if (plus == "o_sis") return "mom_bro_daut_o";//��n
		if (plus == "y_sis") return "mom_bro_daut_y";//��f
	}
	if (enter == "mom_bro_daut_o") {
		if (plus == "dad") return "mom_o_bro";//����
		if (plus == "mom") return "mom_o_bro_wife";//����
		if (plus == "o_bro") return "mom_bro_son_o";//���
		if (plus == "y_bro") return "mom_bro_son_y";//���
		if (plus == "o_sis") return "mom_bro_daut_o";//��n
		if (plus == "y_sis") return "mom_bro_daut_y";//��f
	}
	if (enter == "mom_bro_daut_y") {
		if (plus == "dad") return "mom_o_bro";//����
		if (plus == "mom") return "mom_o_bro_wife";//����
		if (plus == "o_bro") return "mom_bro_son_o";//���
		if (plus == "y_bro") return "mom_bro_son_y";//���
		if (plus == "o_sis") return "mom_bro_daut_o";//��n
		if (plus == "y_sis") return "mom_bro_daut_y";//��f
	}
	if (enter == "mom_sis_son_o") {
		if (plus == "dad") return "mom_o_sis_husb";//���V
		if (plus == "mom") return "mom_o_sis";//����
		if (plus == "o_bro") return "mom_sis_son_o";//���
		if (plus == "y_bro") return "mom_sis_son_y";//���
		if (plus == "o_sis") return "mom_sis_daut_o";//��n
		if (plus == "y_sis") return "mom_sis_daut_y";//��f
	}
	if (enter == "mom_sis_son_y") {
		if (plus == "dad") return "mom_o_sis_husb";//���V
		if (plus == "mom") return "mom_o_sis";//����
		if (plus == "o_bro") return "mom_sis_son_o";//���
		if (plus == "y_bro") return "mom_sis_son_y";//���
		if (plus == "o_sis") return "mom_sis_daut_o";//��n
		if (plus == "y_sis") return "mom_sis_daut_y";//��f
	}
	if (enter == "mom_sis_daut_o") {
		if (plus == "dad") return "mom_o_sis_husb";//���V
		if (plus == "mom") return "mom_o_sis";//����
		if (plus == "o_bro") return "mom_sis_son_o";//���
		if (plus == "y_bro") return "mom_sis_son_y";//���
		if (plus == "o_sis") return "mom_sis_daut_o";//��n
		if (plus == "y_sis") return "mom_sis_daut_y";//��f
	}
	if (enter == "mom_sis_daut_y") {
		if (plus == "dad") return "mom_o_sis_husb";//���V
		if (plus == "mom") return "mom_o_sis";//����
		if (plus == "o_bro") return "mom_sis_son_o";//���
		if (plus == "y_bro") return "mom_sis_son_y";//���
		if (plus == "o_sis") return "mom_sis_daut_o";//��n
		if (plus == "y_sis") return "mom_sis_daut_y";//��f
	}
	if (enter == "dad_dad") {
		if (plus == "dad") return "dad_dad_dad";//����
		if (plus == "mom") return "dad_dad_dad";//����
		if (plus == "wife") return "dad_mom";//����
		if (plus == "daut") return "dad_o_sis";//�h��
		if (plus == "daut_o") return "dad_o_sis";//�h��
		if (plus == "daut_y") return "dad_y_sis";//�h��
		if (plus == "son") return "dad";//����(�w�])
		if (plus == "son_o") return "dad_o_bro";//�B��
		if (plus == "son_y") return "dad_y_bro";//����
	}
	if (enter == "dad_mom") {
		if (plus == "dad") return "dad_dad_dad";//����
		if (plus == "mom") return "dad_dad_dad";//����
		if (plus == "husb") return "dad_dad";//����
		if (plus == "daut") return "dad_o_sis";//�h��
		if (plus == "daut_o") return "dad_o_sis";//�h��
		if (plus == "daut_y") return "dad_y_sis";//�h��
		if (plus == "son") return "dad";//����
		if (plus == "son_o") return "dad_o_bro";//�B��
		if (plus == "son_y") return "dad_y_bro";//����
	}
	if (enter == "dad_o_bro") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "o_bro") return "dad_o_bro";//����
		if (plus == "y_bro") return "dad";//����
		if (plus == "o_sis") return "dad_o_sis";//�h��
		if (plus == "y_sis") return "dad_y_sis";//�h��
		if (plus == "wife") return "dad_o_bro_wife";//�B��
		if (plus == "daut") return "dad_o_bro_daut_o";//��n
		if (plus == "daut_o") return "dad_o_bro_daut_o";//��n
		if (plus == "daut_y") return "dad_o_bro_daut_y";//��f
		if (plus == "son") return "dad_o_bro_son_o";//���
		if (plus == "son_o") return "dad_o_bro_son_o";//���
		if (plus == "son_y") return "dad_o_bro_son_y";//���
	}
	if (enter == "dad_o_bro_wife") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "husb") return "dad_o_bro";//�B��
		if (plus == "daut") return "dad_o_bro_daut_o";//��n
		if (plus == "daut_o") return "dad_o_bro_daut_o";//��n
		if (plus == "daut_y") return "dad_o_bro_daut_y";//��f
		if (plus == "son") return "dad_o_bro_son_o";//���
		if (plus == "son_o") return "dad_o_bro_son_o";//���
		if (plus == "son_y") return "dad_o_bro_son_y";//���
	}
	if (enter == "dad_y_bro") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "o_bro") return "dad";//����
		if (plus == "y_bro") return "dad_y_bro";//����
		if (plus == "o_sis") return "dad_o_sis";//�h��
		if (plus == "y_sis") return "dad_y_sis";//�h��
		if (plus == "wife") return "dad_y_bro_wife";//�T�T
		if (plus == "daut") return "dad_y_bro_daut_o";//��n
		if (plus == "daut_o") return "dad_y_bro_daut_o";//��n
		if (plus == "daut_y") return "dad_y_bro_daut_y";//��f
		if (plus == "son") return "dad_y_bro_son_o";//���
		if (plus == "son_o") return "dad_y_bro_son_o";//���
		if (plus == "son_y") return "dad_y_bro_son_y";//���
	}
	if (enter == "dad_y_bro_wife") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "husb") return "dad_y_bro";//����
		if (plus == "daut") return "dad_y_bro_daut_o";//��n
		if (plus == "daut_o") return "dad_y_bro_daut_o";//��n
		if (plus == "daut_y") return "dad_y_bro_daut_y";//��f
		if (plus == "son") return "dad_y_bro_son_o";//���
		if (plus == "son_o") return "dad_y_bro_son_o";//���
		if (plus == "son_y") return "dad_y_bro_son_y";//���
	}
	if (enter == "dad_o_sis") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "o_bro") return "dad_o_bro";//�B��
		if (plus == "y_bro") return "dad";//����
		if (plus == "o_sis") return "dad_o_sis";//�h��
		if (plus == "y_sis") return "dad_y_sis";//�h��
		if (plus == "husb") return "dad_o_sis_husb";//�h�V
		if (plus == "daut") return "dad_sis_daut_o";//��n
		if (plus == "daut_o") return "dad_sis_daut_o";//��n
		if (plus == "daut_y") return "dad_sis_daut_y";//��f
		if (plus == "son") return "dad_sis_son_o";//���
		if (plus == "son_o") return "dad_sis_son_o";//���
		if (plus == "son_y") return "dad_sis_son_y";//���
	}
	if (enter == "dad_o_sis_husb") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "wife") return "dad_o_sis";//�h��
		if (plus == "daut") return "dad_sis_daut_o";//��n
		if (plus == "daut_o") return "dad_sis_daut_o";//��n
		if (plus == "daut_y") return "dad_sis_daut_y";//��f
		if (plus == "son") return "dad_sis_son_o";//���
		if (plus == "son_o") return "dad_sis_son_o";//���
		if (plus == "son_y") return "dad_sis_son_y";//���
	}
	if (enter == "dad_y_sis") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "o_bro") return "dad";//����
		if (plus == "y_bro") return "dad_y_bro";//����
		if (plus == "o_sis") return "dad_o_sis";//�h��
		if (plus == "y_sis") return "dad_y_sis";//�h��
		if (plus == "husb") return "dad_y_sis_husb";//�h�V
		if (plus == "daut") return "dad_sis_daut_o";//��n
		if (plus == "daut_o") return "dad_sis_daut_o";//��n
		if (plus == "daut_y") return "dad_sis_daut_y";//��f
		if (plus == "son") return "dad_sis_son_o";//���
		if (plus == "son_o") return "dad_sis_son_o";//���
		if (plus == "son_y") return "dad_sis_son_y";//���
	}
	if (enter == "dad_y_sis_husb") {
		if (plus == "dad") return "dad_dad";//����
		if (plus == "mom") return "dad_mom";//����
		if (plus == "wife") return "dad_y_sis";//�h��
		if (plus == "daut") return "dad_sis_daut_o";//��n
		if (plus == "daut_o") return "dad_sis_daut_o";//��n
		if (plus == "daut_y") return "dad_sis_daut_y";//��f
		if (plus == "son") return "dad_sis_son_o";//���
		if (plus == "son_o") return "dad_sis_son_o";//���
		if (plus == "son_y") return "dad_sis_son_y";//���
	}
	if (enter == "dad_o_bro_daut_o") {
		if (plus == "dad") return "dad_o_bro";//�B��
		if (plus == "mom") return "dad_o_bro_wife";//�B��
		if (plus == "o_bro") return "dad_o_bro_son_o";//���
		if (plus == "y_bro") return "dad_o_bro_son_y";//���
		if (plus == "o_sis") return "dad_o_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_o_bro_daut_y";//��f
	}
	if (enter == "dad_o_bro_daut_y") {
		if (plus == "dad") return "dad_o_bro";//�B��
		if (plus == "mom") return "dad_o_bro_wife";//�B��
		if (plus == "o_bro") return "dad_o_bro_son_o";//���
		if (plus == "y_bro") return "dad_o_bro_son_y";//���
		if (plus == "o_sis") return "dad_o_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_o_bro_daut_y";//��f
	}
	if (enter == "dad_o_bro_son_o") {
		if (plus == "dad") return "dad_o_bro";//�B��
		if (plus == "mom") return "dad_o_bro_wife";//�B��
		if (plus == "o_bro") return "dad_o_bro_son_o";//���
		if (plus == "y_bro") return "dad_o_bro_son_y";//���
		if (plus == "o_sis") return "dad_o_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_o_bro_daut_y";//��f
	}
	if (enter == "dad_o_bro_son_y") {
		if (plus == "dad") return "dad_o_bro";//�B��
		if (plus == "mom") return "dad_o_bro_wife";//�B��
		if (plus == "o_bro") return "dad_o_bro_son_o";//���
		if (plus == "y_bro") return "dad_o_bro_son_y";//���
		if (plus == "o_sis") return "dad_o_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_o_bro_daut_y";//��f
	}
	if (enter == "dad_y_bro_daut_o") {
		if (plus == "dad") return "dad_y_bro";//����
		if (plus == "mom") return "dad_y_bro_wife";//�T�T
		if (plus == "o_bro") return "dad_y_bro_son_o";//���
		if (plus == "y_bro") return "dad_y_bro_son_y";//���
		if (plus == "o_sis") return "dad_y_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_y_bro_daut_y";//��f
	}
	if (enter == "dad_y_bro_daut_y") {
		if (plus == "dad") return "dad_y_bro";//����
		if (plus == "mom") return "dad_y_bro_wife";//�T�T
		if (plus == "o_bro") return "dad_y_bro_son_o";//���
		if (plus == "y_bro") return "dad_y_bro_son_y";//���
		if (plus == "o_sis") return "dad_y_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_y_bro_daut_y";//��f
	}
	if (enter == "dad_y_bro_son_o") {
		if (plus == "dad") return "dad_y_bro";//����
		if (plus == "mom") return "dad_y_bro_wife";//�T�T
		if (plus == "o_bro") return "dad_y_bro_son_o";//���
		if (plus == "y_bro") return "dad_y_bro_son_y";//���
		if (plus == "o_sis") return "dad_y_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_y_bro_daut_y";//��f
	}
	if (enter == "dad_y_bro_son_y") {
		if (plus == "dad") return "dad_y_bro";//����
		if (plus == "mom") return "dad_y_bro_wife";//�T�T
		if (plus == "o_bro") return "dad_y_bro_son_o";//���
		if (plus == "y_bro") return "dad_y_bro_son_y";//���
		if (plus == "o_sis") return "dad_y_bro_daut_o";//��n
		if (plus == "y_sis") return "dad_y_bro_daut_y";//��f
	}
	if (enter == "dad_sis_son_o") {
		if (plus == "dad") return "dad_o_sis_husb";//�h�V
		if (plus == "mom") return "dad_o_sis";//�h��
		if (plus == "o_bro") return "dad_sis_son_o";//���
		if (plus == "y_bro") return "dad_sis_son_y";//���
		if (plus == "o_sis") return "dad_sis_daut_o";//��n
		if (plus == "y_sis") return "dad_sis_daut_y";//��f
	}
	if (enter == "dad_sis_son_y") {
		if (plus == "dad") return "dad_o_sis_husb";//�h�V
		if (plus == "mom") return "dad_o_sis";//�h��
		if (plus == "o_bro") return "dad_sis_son_o";//���
		if (plus == "y_bro") return "dad_sis_son_y";//���
		if (plus == "o_sis") return "dad_sis_daut_o";//��n
		if (plus == "y_sis") return "dad_sis_daut_y";//��f
	}
	if (enter == "dad_sis_daut_o") {
		if (plus == "dad") return "dad_o_sis_husb";//�h�V
		if (plus == "mom") return "dad_o_sis";//�h��
		if (plus == "o_bro") return "dad_sis_son_o";//���
		if (plus == "y_bro") return "dad_sis_son_y";//���
		if (plus == "o_sis") return "dad_sis_daut_o";//��n
		if (plus == "y_sis") return "dad_sis_daut_y";//��f
	}
	if (enter == "dad_sis_daut_y") {
		if (plus == "dad") return "dad_o_sis_husb";//�h�V
		if (plus == "mom") return "dad_o_sis";//�h��
		if (plus == "o_bro") return "dad_sis_son_o";//���
		if (plus == "y_bro") return "dad_sis_son_y";//���
		if (plus == "o_sis") return "dad_sis_daut_o";//��n
		if (plus == "y_sis") return "dad_sis_daut_y";//��f
	}
	if (enter == "o_bro_wife") {
		if (plus == "husb") return "o_bro";//����
		if (plus == "daut") return "o_bro_daut";//���k
		if (plus == "daut_o") return "o_bro_daut";//���k
		if (plus == "daut_y") return "o_bro_daut";//���k
		if (plus == "son") return "o_bro_son";//���l
		if (plus == "son_o") return "o_bro_son";//���l
		if (plus == "son_y") return "o_bro_son";//���l
	}
	if (enter == "o_bro_daut") {
		if (plus == "dad") return "o_bro";//����
		if (plus == "mom") return "o_bro_wife";//�A�A
		if (plus == "o_bro") return "o_bro_son";//���l
		if (plus == "y_bro") return "o_bro_son";//���l
		if (plus == "o_sis") return "o_bro_daut";//���k
		if (plus == "y_sis") return "o_bro_daut";//���k
	}
	if (enter == "o_bro_son") {
		if (plus == "dad") return "o_bro";//����
		if (plus == "mom") return "o_bro_wife";//�A�A
		if (plus == "o_bro") return "o_bro_son";//���l
		if (plus == "y_bro") return "o_bro_son";//���l
		if (plus == "o_sis") return "o_bro_daut";//���k
		if (plus == "y_sis") return "o_bro_daut";//���k
	}
	if (enter == "y_bro_wife") {
		if (plus == "husb") return "y_bro";//�̧�
		if (plus == "daut") return "y_bro_daut";//���k
		if (plus == "daut_o") return "y_bro_daut";//���k
		if (plus == "daut_y") return "y_bro_daut";//���k
		if (plus == "son") return "y_bro_son";//���l
		if (plus == "son_o") return "y_bro_son";//���l
		if (plus == "son_y") return "y_bro_son";//���l
	}
	if (enter == "y_bro_daut") {
		if (plus == "dad") return "y_bro";//�̧�
		if (plus == "mom") return "y_bro_wife";//�̷@
		if (plus == "o_bro") return "y_bro_son";//���l
		if (plus == "y_bro") return "y_bro_son";//���l
		if (plus == "o_sis") return "y_bro_daut";//���k
		if (plus == "y_sis") return "y_bro_daut";//���k
	}
	if (enter == "y_bro_son") {
		if (plus == "dad") return "y_bro";//�̧�
		if (plus == "mom") return "y_bro_wife";//�̷@
		if (plus == "o_bro") return "y_bro_son";//���l
		if (plus == "y_bro") return "y_bro_son";//���l
		if (plus == "o_sis") return "y_bro_daut";//���k
		if (plus == "y_sis") return "y_bro_daut";//���k
	}
	if (enter == "o_sis_husb") {
		if (plus == "wife") return "o_sis";//�n�n
		if (plus == "daut") return "o_sis_daut";//�~�c�k
		if (plus == "daut_o") return "o_sis_daut";//�~�c�k
		if (plus == "daut_y") return "o_sis_daut";//�~�c�k
		if (plus == "son") return "o_sis_son";//�~�c
		if (plus == "son_o") return "o_sis_son";//�~�c
		if (plus == "son_y") return "o_sis_son";//�~�c
	}
	if (enter == "o_sis_daut") {
		if (plus == "mom") return "o_sis";//�n�n
		if (plus == "dad") return "o_sis_husb";//�n��
		if (plus == "o_bro") return "o_sis_son";//�~�c
		if (plus == "y_bro") return "o_sis_son";//�~�c
		if (plus == "o_sis") return "o_sis_daut";//�~�c�k
		if (plus == "y_sis") return "o_sis_daut";//�~�c�k
	}
	if (enter == "o_sis_son") {
		if (plus == "mom") return "o_sis";//�n�n
		if (plus == "dad") return "o_sis_husb";//�n��
		if (plus == "o_bro") return "o_sis_son";//�~�c
		if (plus == "y_bro") return "o_sis_son";//�~�c
		if (plus == "o_sis") return "o_sis_daut";//�~�c�k
		if (plus == "y_sis") return "o_sis_daut";//�~�c�k
	}
	if (enter == "y_sis_husb") {
		if (plus == "wife") return "y_sis";//�f�f
		if (plus == "daut") return "y_sis_daut";//�~�c�k
		if (plus == "daut_o") return "y_sis_daut";//�~�c�k
		if (plus == "daut_y") return "y_sis_daut";//�~�c�k
		if (plus == "son") return "y_sis_son";//�~�c
		if (plus == "son_o") return "y_sis_son";//�~�c
		if (plus == "son_y") return "y_sis_son";//�~�c
	}
	if (enter == "y_sis_daut") {
		if (plus == "mom") return "y_sis";//�f�f
		if (plus == "dad") return "y_sis_husb";//�f��
		if (plus == "o_bro") return "y_sis_son";//�~�c
		if (plus == "y_bro") return "y_sis_son";//�~�c
		if (plus == "o_sis") return "y_sis_daut";//�~�c�k
		if (plus == "y_sis") return "y_sis_daut";//�~�c�k
	}
	if (enter == "y_sis_son") {
		if (plus == "mom") return "y_sis";//�f�f
		if (plus == "dad") return "y_sis_husb";//�f��
		if (plus == "o_bro") return "y_sis_son";//�~�c
		if (plus == "y_bro") return "y_sis_son";//�~�c
		if (plus == "o_sis") return "y_sis_daut";//�~�c�k
		if (plus == "y_sis") return "y_sis_daut";//�~�c�k
	}
	if (enter == "husb_dad") {
		if (plus == "wife") return "husb_mom";//�ҥ�
		if (plus == "daut") return "husb_o_sis";//�ҩn
		if (plus == "daut_o") return "husb_o_sis";//�ҩn
		if (plus == "daut_y") return "husb_y_sis";//�ҩf
		if (plus == "son") return "husb";//��
		if (plus == "son_o") return "husb_o_bro";//�ҥS
		if (plus == "son_y") return "husb_y_bro";//�ҧ�
	}
	if (enter == "husb_mom") {
		if (plus == "husb") return "husb_dad";//�Ҥ�
		if (plus == "daut") return "husb_o_sis";//�ҩn
		if (plus == "daut_o") return "husb_o_sis";//�ҩn
		if (plus == "daut_y") return "husb_y_sis";//�ҩf
		if (plus == "son") return "husb";//��
		if (plus == "son_o") return "husb_o_bro";//�ҥS
		if (plus == "son_y") return "husb_y_bro";//�ҧ�
	}
	if (enter == "husb_o_bro") {
		if (plus == "dad") return "husb_dad";//�Ҥ�
		if (plus == "mom") return "husb_mom";//�ҥ�
		if (plus == "o_bro") return "husb_o_bro";//�ҥS
		if (plus == "y_bro") return "husb_y_bro";//��
		if (plus == "o_sis") return "husb_o_sis";//�ҩn
		if (plus == "y_sis") return "husb_y_sis";//�ҩf
		if (plus == "wife") return "husb_o_bro_wife";//�ҥS�A
		if (plus == "daut") return "husb_o_bro_daut";//���k
		if (plus == "daut_o") return "husb_o_bro_daut";//���k
		if (plus == "daut_y") return "husb_o_bro_daut";//���k
		if (plus == "son") return "husb_o_bro_son";//���l
		if (plus == "son_o") return "husb_o_bro_son";//���l
		if (plus == "son_y") return "husb_o_bro_son";//���l
	}
	if (enter == "husb_o_bro_wife") {
		if (plus == "husb") return "husb_o_bro";//�ҥS
		if (plus == "daut") return "husb_o_bro_daut";//���k
		if (plus == "daut_o") return "husb_o_bro_daut";//���k
		if (plus == "daut_y") return "husb_o_bro_daut";//���k
		if (plus == "son") return "husb_o_bro_son";//���l
		if (plus == "son_o") return "husb_o_bro_son";//���l
		if (plus == "son_y") return "husb_o_bro_son";//���l
	}
	if (enter == "husb_y_bro") {
		if (plus == "dad") return "husb_dad";//�Ҥ�
		if (plus == "mom") return "husb_mom";//�ҥ�
		if (plus == "o_bro") return "husb_o_bro";//��
		if (plus == "y_bro") return "husb_y_bro";//�ҧ�
		if (plus == "o_sis") return "husb_o_sis";//�ҩn
		if (plus == "y_sis") return "husb_y_sis";//�ҩf
		if (plus == "wife") return "husb_y_bro_wife";//�ҧ̷@
		if (plus == "daut") return "husb_y_bro_daut";//���k
		if (plus == "daut_o") return "husb_y_bro_daut";//���k
		if (plus == "daut_y") return "husb_y_bro_daut";//���k
		if (plus == "son") return "husb_y_bro_son";//���l
		if (plus == "son_o") return "husb_y_bro_son";//���l
		if (plus == "son_y") return "husb_y_bro_son";//���l
	}
	if (enter == "husb_y_bro_wife") {
		if (plus == "husb") return "husb_y_bro";//�ҧ�
		if (plus == "daut") return "husb_y_bro_daut";//���k
		if (plus == "daut_o") return "husb_y_bro_daut";//���k
		if (plus == "daut_y") return "husb_y_bro_daut";//���k
		if (plus == "son") return "husb_y_bro_son";//���l
		if (plus == "son_o") return "husb_y_bro_son";//���l
		if (plus == "son_y") return "husb_y_bro_son";//���l
	}
	if (enter == "husb_o_sis") {
		if (plus == "dad") return "husb_dad";//�Ҥ�
		if (plus == "mom") return "husb_mom";//�ҥ�
		if (plus == "o_bro") return "husb_o_bro";//�ҥS
		if (plus == "y_bro") return "husb_y_bro";//��
		if (plus == "o_sis") return "husb_o_sis";//�ҩn
		if (plus == "y_sis") return "husb_y_sis";//�ҩf
		if (plus == "husb") return "husb_o_sis_husb";//�ҩn��
		if (plus == "daut") return "husb_o_sis_daut";//�~�c�k
		if (plus == "daut_o") return "husb_o_sis_daut";//�~�c�k
		if (plus == "daut_y") return "husb_o_sis_daut";//�~�c�k
		if (plus == "son") return "husb_o_sis_son";//�~�c
		if (plus == "son_o") return "husb_o_sis_son";//�~�c
		if (plus == "son_y") return "husb_o_sis_son";//�~�c
	}
	if (enter == "husb_o_sis_husb") {
		if (plus == "wife") return "husb_o_sis";//�ҩn
		if (plus == "daut") return "husb_o_sis_daut";//�~�c�k
		if (plus == "daut_o") return "husb_o_sis_daut";//�~�c�k
		if (plus == "daut_y") return "husb_o_sis_daut";//�~�c�k
		if (plus == "son") return "husb_o_sis_son";//�~�c
		if (plus == "son_o") return "husb_o_sis_son";//�~�c
		if (plus == "son_y") return "husb_o_sis_son";//�~�c
	}
	if (enter == "husb_y_sis") {
		if (plus == "dad") return "husb_dad";//�Ҥ�
		if (plus == "mom") return "husb_mom";//�ҥ�
		if (plus == "o_bro") return "husb_o_bro";//��
		if (plus == "y_bro") return "husb_y_bro";//�ҧ�
		if (plus == "o_sis") return "husb_o_sis";//�ҩn
		if (plus == "y_sis") return "husb_y_sis";//�ҩf
		if (plus == "husb") return "husb_y_sis_husb";//�ҩf��
		if (plus == "daut") return "husb_y_sis_daut";//�~�c�k
		if (plus == "daut_o") return "husb_y_sis_daut";//�~�c�k
		if (plus == "daut_y") return "husb_y_sis_daut";//�~�c�k
		if (plus == "son") return "husb_y_sis_son";//�~�c
		if (plus == "son_o") return "husb_y_sis_son";//�~�c
		if (plus == "son_y") return "husb_y_sis_son";//�~�c
	}
	if (enter == "husb_y_sis_husb") {
		if (plus == "wife") return "husb_y_sis";//�ҩf
		if (plus == "daut") return "husb_y_sis_daut";//�~�c�k
		if (plus == "daut_o") return "husb_y_sis_daut";//�~�c�k
		if (plus == "daut_y") return "husb_y_sis_daut";//�~�c�k
		if (plus == "son") return "husb_y_sis_son";//�~�c
		if (plus == "son_o") return "husb_y_sis_son";//�~�c
		if (plus == "son_y") return "husb_y_sis_son";//�~�c
	}
	if (enter == "husb_o_bro_son") {
		if (plus == "dad") return "husb_o_bro";//�ҥS
		if (plus == "mom") return "husb_o_bro_wife";//�ҥS�A
		if (plus == "o_bro") return "husb_o_bro_son";//���l
		if (plus == "y_bro") return "husb_o_bro_son";//���l
		if (plus == "o_sis") return "husb_o_bro_daut";//���k
		if (plus == "y_sis") return "husb_o_bro_daut";//���k
	}
	if (enter == "husb_o_bro_daut") {
		if (plus == "dad") return "husb_o_bro";//�ҥS
		if (plus == "mom") return "husb_o_bro_wife";//�ҥS�A
		if (plus == "o_bro") return "husb_o_bro_son";//���l
		if (plus == "y_bro") return "husb_o_bro_son";//���l
		if (plus == "o_sis") return "husb_o_bro_daut";//���k
		if (plus == "y_sis") return "husb_o_bro_daut";//���k
	}
	if (enter == "husb_y_bro_son") {
		if (plus == "dad") return "husb_y_bro";//�ҧ�
		if (plus == "mom") return "husb_y_bro_wife";//�ҧ̷@
		if (plus == "o_bro") return "husb_y_bro_son";//���l
		if (plus == "y_bro") return "husb_y_bro_son";//���l
		if (plus == "o_sis") return "husb_y_bro_daut";//���k
		if (plus == "y_sis") return "husb_y_bro_daut";//���k
	}
	if (enter == "husb_y_bro_daut") {
		if (plus == "dad") return "husb_y_bro";//�ҧ�
		if (plus == "mom") return "husb_y_bro_wife";//�ҧ̷@
		if (plus == "o_bro") return "husb_y_bro_son";//���l
		if (plus == "y_bro") return "husb_y_bro_son";//���l
		if (plus == "o_sis") return "husb_y_bro_daut";//���k
		if (plus == "y_sis") return "husb_y_bro_daut";//���k
	}
	if (enter == "husb_o_sis_son") {
		if (plus == "dad") return "husb_o_sis";//�ҩn
		if (plus == "mom") return "husb_o_sis_husb";//�ҩn��
		if (plus == "o_bro") return "husb_o_sis_son";//�~�c
		if (plus == "y_bro") return "husb_o_sis_son";//�~�c
		if (plus == "o_sis") return "husb_o_sis_daut";//�~�c�k
		if (plus == "y_sis") return "husb_o_sis_daut";//�~�c�k
	}
	if (enter == "husb_o_sis_daut") {
		if (plus == "mom") return "husb_o_sis";//�ҩn
		if (plus == "dad") return "husb_o_sis_husb";//�ҩn��
		if (plus == "o_bro") return "husb_o_sis_son";//�~�c
		if (plus == "y_bro") return "husb_o_sis_son";//�~�c
		if (plus == "o_sis") return "husb_o_sis_daut";//�~�c�k
		if (plus == "y_sis") return "husb_o_sis_daut";//�~�c�k
	}
	if (enter == "husb_y_sis_son") {
		if (plus == "dad") return "husb_y_sis";//�ҩf
		if (plus == "mom") return "husb_y_sis_husb";//�ҩf��
		if (plus == "o_bro") return "husb_y_sis_son";//�~�c
		if (plus == "y_bro") return "husb_y_sis_son";//�~�c
		if (plus == "o_sis") return "husb_y_sis_daut";//�~�c�k
		if (plus == "y_sis") return "husb_y_sis_daut";//�~�c�k
	}
	if (enter == "husb_y_sis_daut") {
		if (plus == "mom") return "husb_y_sis";//�ҩf
		if (plus == "dad") return "husb_y_sis_husb";//�ҩf��
		if (plus == "o_bro") return "husb_y_sis_son";//�~�c
		if (plus == "y_bro") return "husb_y_sis_son";//�~�c
		if (plus == "o_sis") return "husb_y_sis_daut";//�~�c�k
		if (plus == "y_sis") return "husb_y_sis_daut";//�~�c�k
	}
	if (enter == "wife_dad") {
		if (plus == "wife") return "wife_mom";//�d��
		if (plus == "daut") return "wife_o_sis";//�d
		if (plus == "daut_o") return "wife_o_sis";//�d�n
		if (plus == "daut_y") return "wife_y_sis";//�d�f
		if (plus == "son") return "wife_o_bro";//�d�S
		if (plus == "son_o") return "wife_o_bro";//�d�S
		if (plus == "son_y") return "wife_y_bro";//�d��
	}
	if (enter == "wife_mom") {
		if (plus == "husb") return "wife_dad";//�d��
		if (plus == "daut") return "wife_o_sis";//�d
		if (plus == "daut_o") return "wife_o_sis";//�d�n
		if (plus == "daut_y") return "wife_y_sis";//�d�f
		if (plus == "son") return "wife_o_bro";//�d�S
		if (plus == "son_o") return "wife_o_bro";//�d�S
		if (plus == "son_y") return "wife_y_bro";//�d��
	}
	if (enter == "wife_o_bro") {
		if (plus == "dad") return "wife_dad";//�d��
		if (plus == "mom") return "wife_mom";//�d��
		if (plus == "o_bro") return "wife_o_bro";//�d�S
		if (plus == "y_bro") return "wife_y_bro";//�d��
		if (plus == "o_sis") return "wife_o_sis";//�d�n
		if (plus == "y_sis") return "wife_y_sis";//�d
		if (plus == "wife") return "wife_o_bro_wife";//�d�S�A
		if (plus == "daut") return "wife_o_bro_daut";//�~�c�k
		if (plus == "daut_o") return "wife_o_bro_daut";
		if (plus == "daut_y") return "wife_o_bro_daut";
		if (plus == "son") return "wife_o_bro_son";//�~�c
		if (plus == "son_o") return "wife_o_bro_son";
		if (plus == "son_y") return "wife_o_bro_son";
	}
	if (enter == "wife_o_bro_wife") {
		if (plus == "husb") return "wife_o_bro";//�d�S
		if (plus == "daut") return "wife_o_bro_daut";//�~�c�k
		if (plus == "daut_o") return "wife_o_bro_daut";
		if (plus == "daut_y") return "wife_o_bro_daut";
		if (plus == "son") return "wife_o_bro_son";//�~�c
		if (plus == "son_o") return "wife_o_bro_son";
		if (plus == "son_y") return "wife_o_bro_son";
	}
	if (enter == "wife_y_bro") {
		if (plus == "dad") return "wife_dad";//�d��
		if (plus == "mom") return "wife_mom";//�d��
		if (plus == "o_bro") return "wife_o_bro";//�d�S
		if (plus == "y_bro") return "wife_y_bro";//�d��
		if (plus == "o_sis") return "wife_o_sis";//�d
		if (plus == "y_sis") return "wife_y_sis";//�d�f
		if (plus == "wife") return "wife_y_bro_wife";//�d�̷@
		if (plus == "daut") return "wife_y_bro_daut";//�~�c�k
		if (plus == "daut_o") return "wife_y_bro_daut";
		if (plus == "daut_y") return "wife_y_bro_daut";
		if (plus == "son") return "wife_y_bro_son";//�~�c
		if (plus == "son_o") return "wife_y_bro_son";
		if (plus == "son_y") return "wife_y_bro_son";
	}
	if (enter == "wife_y_bro_wife") {
		if (plus == "husb") return "wife_y_bro";//�d��
		if (plus == "daut") return "wife_y_bro_daut";//�~�c�k
		if (plus == "daut_o") return "wife_y_bro_daut";
		if (plus == "daut_y") return "wife_y_bro_daut";
		if (plus == "son") return "wife_y_bro_son";//�~�c
		if (plus == "son_o") return "wife_y_bro_son";
		if (plus == "son_y") return "wife_y_bro_son";
	}
	if (enter == "wife_o_sis") {
		if (plus == "dad") return "wife_dad";//�d��
		if (plus == "mom") return "wife_mom";//�d��
		if (plus == "o_bro") return "wife_o_bro";//�d�S
		if (plus == "y_bro") return "wife_y_bro";//�d��
		if (plus == "o_sis") return "wife_o_sis";//�d�n
		if (plus == "y_sis") return "wife_y_sis";//�d
		if (plus == "husb") return "wife_o_sis_husb";//�d�n��
		if (plus == "daut") return "wife_o_sis_daut";//�~�c�k
		if (plus == "daut_o") return "wife_o_sis_daut";
		if (plus == "daut_y") return "wife_o_sis_daut";
		if (plus == "son") return "wife_o_sis_son";//�~�c
		if (plus == "son_o") return "wife_o_sis_son";
		if (plus == "son_y") return "wife_o_sis_son";
	}
	if (enter == "wife_o_sis_husb") {
		if (plus == "wife") return "wife_o_sis";//�d�n
		if (plus == "daut") return "wife_o_sis_daut";//�~�c�k
		if (plus == "daut_o") return "wife_o_sis_daut";
		if (plus == "daut_y") return "wife_o_sis_daut";
		if (plus == "son") return "wife_o_sis_son";//�~�c
		if (plus == "son_o") return "wife_o_sis_son";
		if (plus == "son_y") return "wife_o_sis_son";
	}
	if (enter == "wife_y_sis") {
		if (plus == "dad") return "wife_dad";//�d��
		if (plus == "mom") return "wife_mom";//�d��
		if (plus == "o_bro") return "wife_o_bro";//�d�S
		if (plus == "y_bro") return "wife_y_bro";//�d��
		if (plus == "o_sis") return "wife_o_sis";//�d
		if (plus == "y_sis") return "wife_y_sis";//�d�f
		if (plus == "husb") return "wife_y_sis_husb";//�d�f��
		if (plus == "daut") return "wife_y_sis_daut";//�~�c�k
		if (plus == "daut_o") return "wife_y_sis_daut";
		if (plus == "daut_y") return "wife_y_sis_daut";
		if (plus == "son") return "wife_y_sis_son";//�~�c
		if (plus == "son_o") return "wife_y_sis_son";
		if (plus == "son_y") return "wife_y_sis_son";
	}
	if (enter == "wife_y_sis_husb") {
		if (plus == "wife") return "wife_y_sis";//�d�f
		if (plus == "daut") return "wife_y_sis_daut";//�~�c�k
		if (plus == "daut_o") return "wife_y_sis_daut";
		if (plus == "daut_y") return "wife_y_sis_daut";
		if (plus == "son") return "wife_y_sis_son";//�~�c
		if (plus == "son_o") return "wife_y_sis_son";
		if (plus == "son_y") return "wife_y_sis_son";
	}
	if (enter == "wife_o_bro_son") {
		if (plus == "dad") return "wife_o_bro";//�d�S
		if (plus == "mom") return "wife_o_bro_wife";//�d�S�A
		if (plus == "o_bro") return "wife_o_bro_son";//�~�c
		if (plus == "y_bro") return "wife_o_bro_son";
		if (plus == "o_sis") return "wife_o_bro_daut";//�~�c�k
		if (plus == "y_sis") return "wife_o_bro_daut";
	}
	if (enter == "wife_o_bro_daut") {
		if (plus == "dad") return "wife_o_bro";//�d�S
		if (plus == "mom") return "wife_o_bro_wife";//�d�S�A
		if (plus == "o_bro") return "wife_o_bro_son";//�~�c
		if (plus == "y_bro") return "wife_o_bro_son";
		if (plus == "o_sis") return "wife_o_bro_daut";//�~�c�k
		if (plus == "y_sis") return "wife_o_bro_daut";
	}
	if (enter == "wife_y_bro_son") {
		if (plus == "dad") return "wife_y_bro";//�d��
		if (plus == "mom") return "wife_y_bro_wife";//�d�̷@
		if (plus == "o_bro") return "wife_y_bro_son";//�~�c
		if (plus == "y_bro") return "wife_y_bro_son";
		if (plus == "o_sis") return "wife_y_bro_daut";//�~�c�k
		if (plus == "y_sis") return "wife_y_bro_daut";
	}
	if (enter == "wife_y_bro_daut") {
		if (plus == "dad") return "wife_y_bro";//�d��
		if (plus == "mom") return "wife_y_bro_wife";//�d�̷@
		if (plus == "o_bro") return "wife_y_bro_son";//�~�c
		if (plus == "y_bro") return "wife_y_bro_son";
		if (plus == "o_sis") return "wife_y_bro_daut";//�~�c�k
		if (plus == "y_sis") return "wife_y_bro_daut";
	}
	if (enter == "wife_o_sis_son") {
		if (plus == "dad") return "wife_o_sis_husb";//�d�n��
		if (plus == "mom") return "wife_o_sis";//�d�n
		if (plus == "o_bro") return "wife_o_sis_son";//�~�c
		if (plus == "y_bro") return "wife_o_sis_son";
		if (plus == "o_sis") return "wife_o_sis_daut";//�~�c�k
		if (plus == "y_sis") return "wife_o_sis_daut";
	}
	if (enter == "wife_o_sis_daut") {
		if (plus == "dad") return "wife_o_sis_husb";//�d�n��
		if (plus == "mom") return "wife_o_sis";//�d�n
		if (plus == "o_bro") return "wife_o_sis_son";//�~�c
		if (plus == "y_bro") return "wife_o_sis_son";
		if (plus == "o_sis") return "wife_o_sis_daut";//�~�c�k
		if (plus == "y_sis") return "wife_o_sis_daut";
	}
	if (enter == "wife_y_sis_son") {
		if (plus == "dad") return "wife_y_sis_husb";//�d�f��
		if (plus == "mom") return "wife_y_sis";//�d�f
		if (plus == "o_bro") return "wife_y_sis_son";//�~�c
		if (plus == "y_bro") return "wife_y_sis_son";
		if (plus == "o_sis") return "wife_y_sis_daut";//�~�c�k
		if (plus == "y_sis") return "wife_y_sis_daut";
	}
	if (enter == "wife_y_sis_daut") {
		if (plus == "dad") return "wife_y_sis_husb";//�d�f��
		if (plus == "mom") return "wife_y_sis";//�d�f
		if (plus == "o_bro") return "wife_y_sis_son";//�~�c
		if (plus == "y_bro") return "wife_y_sis_son";
		if (plus == "o_sis") return "wife_y_sis_daut";//�~�c�k
		if (plus == "y_sis") return "wife_y_sis_daut";
	}
	if (enter == "daut_husb") {
		if (plus == "wife") return "daut";//�k��
		if (plus == "daut") return "daut_daut";//�~�]
		if (plus == "daut_o") return "daut_daut";//�~�]
		if (plus == "daut_y") return "daut_daut";//�~�]
		if (plus == "son") return "daut_son";//�~�]
		if (plus == "son_o") return "daut_son";//�~�]
		if (plus == "son_y") return "daut_son";//�~�]
	}
	if (enter == "son_wife") {
		if (plus == "husb") return "son";//��l
		if (plus == "daut") return "son_daut";//�]�k
		if (plus == "daut_o") return "son_daut";
		if (plus == "daut_y") return "son_daut";
		if (plus == "son") return "son_son";//�]�l
		if (plus == "son_o") return "son_son";
		if (plus == "son_y") return "son_son";
	}
	if (enter == "daut_son") {
		if (plus == "dad") return "daut_husb";//�k�B
		if (plus == "mom") return "daut";//�k��
		if (plus == "o_bro") return "daut_son";//�~�]
		if (plus == "y_bro") return "daut_son";
		if (plus == "o_sis") return "daut_daut";//�~�]
		if (plus == "y_sis") return "daut_daut";
	}
	if (enter == "daut_daut") {
		if (plus == "dad") return "daut_husb";//�k�B
		if (plus == "mom") return "daut";//�k��
		if (plus == "o_bro") return "daut_son";//�~�]
		if (plus == "y_bro") return "daut_son";
		if (plus == "o_sis") return "daut_daut";//�~�]
		if (plus == "y_sis") return "daut_daut";
	}
	if (enter == "son_son") {
		if (plus == "dad") return "son";//��l
		if (plus == "mom") return "son_wife";//�@��
		if (plus == "o_bro") return "son_son";//�]�l
		if (plus == "y_bro") return "son_son";
		if (plus == "o_sis") return "son_daut";//�]�k
		if (plus == "y_sis") return "son_daut";
	}
	if (enter == "son_daut") {
		if (plus == "dad") return "son";//��l
		if (plus == "mom") return "son_wife";//�@��
		if (plus == "o_bro") return "son_son";//�]�l
		if (plus == "y_bro") return "son_son";
		if (plus == "o_sis") return "son_daut";//�]�k
		if (plus == "y_sis") return "son_daut";
	}
}

struct sss {
	vector<string> value;
};

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	ifstream file;
	file.open("1.txt");

	//file.open(argv[1]);
	vector<string> rename; //reed
	//vector<vector<string>> trans; //ans
	vector<sss> trans;
	string name, is = u8"��", dad = u8"����", mom = u8"����", o_bro = u8"����", y_bro = u8"�̧�", o_sis = u8"�n�n", o_sis2 = u8"�j�j", y_sis = u8"�f�f", husb = u8"�V��", wife = u8"�d�l", son = u8"��l", son_o = u8"��l(���~��)", son_y = u8"��l(���~��)", daut = u8"�k��", daut_o = u8"�k��(���~��)", daut_y = u8"�k��(���~��)", me = u8"��", me_b = u8"��(�k)", me_g = u8"��(�k)";

	while (getline(file, name)) {
		rename.push_back(name);
	}
	for (int i = 0; i < rename.size(); i++) {
		//cout << rename[i]<<endl;
		//cout << i + 1 << endl;
		trans.resize(i + 1);
		string tmp = rename[i];
		for (int j = 0; j < tmp.size(); j++) {
			if (tmp[j] == is[0] && tmp[j + 1] == is[1] && tmp[j + 2] == is[2]) {
				//cout << "��" << endl;
				j += 2;
			}
			else if (tmp[j] == dad[0] && tmp[j + 1] == dad[1] && tmp[j + 2] == dad[2]) {
				//cout << "����" << endl;
				trans[i].value.push_back("dad");
				j += 5;
			}
			else if (tmp[j] == mom[0] && tmp[j + 1] == mom[1] && tmp[j + 2] == mom[2]) {
				//cout << "����" << endl;
				trans[i].value.push_back("mom");
				j += 5;
			}
			else if (tmp[j] == o_bro[0] && tmp[j + 1] == o_bro[1] && tmp[j + 2] == o_bro[2]) {
				//cout << "����" << endl;
				trans[i].value.push_back("o_bro");
				j += 5;
			}
			else if (tmp[j] == y_bro[0] && tmp[j + 1] == y_bro[1] && tmp[j + 2] == y_bro[2]) {
				//cout << "�̧�" << endl;
				trans[i].value.push_back("y_bro");
				j += 5;
			}
			else if (tmp[j] == o_sis[0] && tmp[j + 1] == o_sis[1] && tmp[j + 2] == o_sis[2] || tmp[j] == o_sis2[0] && tmp[j + 1] == o_sis2[1] && tmp[j + 2] == o_sis2[2]) {
				//cout << "�n�n" << endl;
				trans[i].value.push_back("o_sis");
				j += 5;
			}
			else if (tmp[j] == y_sis[0] && tmp[j + 1] == y_sis[1] && tmp[j + 2] == y_sis[2]) {
				//cout << "�f�f" << endl;
				trans[i].value.push_back("y_sis");
				j += 5;
			}
			else if (tmp[j] == husb[0] && tmp[j + 1] == husb[1] && tmp[j + 2] == husb[2]) {
				//cout << "�V��" << endl;
				trans[i].value.push_back("husb");
				j += 5;
			}
			else if (tmp[j] == wife[0] && tmp[j + 1] == wife[1] && tmp[j + 2] == wife[2]) {
				//cout << "�d�l" << endl;
				trans[i].value.push_back("wife");
				j += 5;
			}
			else if (tmp[j] == son[0] && tmp[j + 1] == son[1] && tmp[j + 2] == son[2]) {
				if (j + 16 < tmp.size() && tmp[j + 6] == son_o[6]) {
					j += 13;
					if (tmp[j] == son_o[13] && tmp[j + 1] == son_o[14] && tmp[j + 2] == son_o[15]) {
						//cout << "��l(���~��)" << endl;
						trans[i].value.push_back("son_o");
						j += 3;
					}
					if (tmp[j] == son_y[13] && tmp[j + 1] == son_y[14] && tmp[j + 2] == son_y[15]) {
						//cout << "��l(���~��)" << endl;
						trans[i].value.push_back("son_y");
						j += 3;
					}
				}
				else if (j + 5 < tmp.size()) {
					//cout << "��l" << endl;
					trans[i].value.push_back("son");
					//tran[i][trans[i].value.size() - 1] = trans[i].value.size() - 1;
					//
					//cout << tran[i][trans[i].value.size() - 1] << endl;
					j += 5;
				}
			}
			else if (tmp[j] == daut[0] && tmp[j + 1] == daut[1] && tmp[j + 2] == daut[2]) {
				if (j + 16 < tmp.size() && tmp[j + 6] == daut_o[6]) {
					j += 13;
					if (tmp[j] == daut_o[13] && tmp[j + 1] == daut_o[14] && tmp[j + 2] == daut_o[15]) {
						//cout << "�k��(���~��)" << endl;
						trans[i].value.push_back("daut_o");
						j += 3;
					}
					if (tmp[j] == daut_y[13] && tmp[j + 1] == daut_y[14] && tmp[j + 2] == daut_y[15]) {
						//cout << "�k��(���~��)" << endl;
						trans[i].value.push_back("daut_y");
						j += 3;
					}
				}
				else if (j + 5 < tmp.size()) {
					//cout << "�k��" << endl;
					trans[i].value.push_back("daut");
					//tran[i][trans[i].value.size() - 1] = trans[i].value.size() - 1;
					//
					//cout << tran[i][trans[i].value.size() - 1] << endl;
					j += 5;
				}
			}
			else if (tmp[j] == me[0] && tmp[j + 1] == me[1] && tmp[j + 2] == me[2]) {
				if (j + 7 < tmp.size() && tmp[j + 3] == me_b[3]) {
					j += 4;
					if (tmp[j] == me_b[4] && tmp[j + 1] == me_b[5] && tmp[j + 2] == me_b[6]) {
						//cout << "��(�k)" << endl;
						trans[i].value.push_back("me_b");
						j += 3;
					}
					if (tmp[j] == me_g[4] && tmp[j + 1] == me_g[5] && tmp[j + 2] == me_g[6]) {
						//cout << "��(�k)" << endl;
						trans[i].value.push_back("me_g");
						j += 3;
					}
				}
				else if (j + 2 < tmp.size()) {
					//cout << "��" << endl;
					trans[i].value.push_back("me");
					j += 2;
				}
			}
		}
	}
	for (int i = 0; i < trans.size(); i++) {
		string current = trans[i].value[0];//�s�ثe��m
		string first = trans[i].value[0];
		if (trans[i].value.size() > 1)
			for (int j = 1; j < trans[i].value.size(); j++) {
				string pre = trans[i].value[j];
				current = translation(current, pre);
			}
		ans(current);
	}
}
