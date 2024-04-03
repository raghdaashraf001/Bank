
#pragma once
#include <iostream>
#include <string>
using namespace std;

//Validation Class:
class Validation
{
public:
	static bool checkname(string n) {
		int count = 0;
		for (int i = 0;i < n.size();i++) {
			if (n[i] >= 'A' && n[i] <= 'Z' || n[i] >= 'a' && n[i] <= 'z')
				count++;
		}
		if (count < n.size()) {
			return false;
		}
		if (count < 5) {
			return false;
		}
		else if (count > 20) {
			return false;
		}
		else
			return true;
	}
	static bool checkPassword(string p) {
		int count = 0;
		for (int i = 0;i < p.size();i++) {
			if (p[i] >= 'A' && p[i] <= 'Z' || p[i] >= 'a' && p[i] <= 'z')
				count++;
		}
		if (count < 8) {
			return false;
		}
		else if (count > 20) {
			return false;
		}
		else
			return true;
	}
	static bool checkbalance(double b) {
		if (b < 1500) {
			return false;
		}
		else
			return true;
	}
	static bool checksalary(double s) {
		if (s < 5000) {
			return false;
		}
		else
			return true;
	}
};
