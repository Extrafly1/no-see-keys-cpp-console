#include <iostream>

char translaterussin(int transleter) {
	switch (transleter)
	{
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
		//==================================
	case 10: return 'à';
	case 11: return 'á';
	case 12: return 'â';
	case 13: return 'ã';
	case 14: return 'ä';
	case 15: return 'å';
	case 16: return '¸';
	case 17: return 'æ';
	case 18: return 'ç';
	case 19: return 'è';
	case 20: return 'é';
	case 21: return 'ê';
	case 22: return 'ë';
	case 23: return 'ì';
	case 24: return 'í';
	case 25: return 'î';
	case 26: return 'ï';
	case 27: return 'ğ';
	case 28: return 'ñ';
	case 29: return 'ò';
	case 30: return 'ó';
	case 31: return 'ô';
	case 32: return 'õ';
	case 33: return 'ö';
	case 34: return '÷';
	case 35: return 'ø';
	case 36: return 'ù';
	case 37: return 'ú';
	case 38: return 'û';
	case 39: return 'ü';
	case 40: return 'ı';
	case 41: return 'ş';
	case 42: return 'ÿ';
		//==================================
	case 43: return 'À';
	case 44: return 'Á';
	case 45: return 'Â';
	case 46: return 'Ã';
	case 47: return 'Ä';
	case 48: return 'Å';
	case 49: return '¨';
	case 50: return 'Æ';
	case 51: return 'Ç';
	case 52: return 'È';
	case 53: return 'É';
	case 54: return 'Ê';
	case 55: return 'Ë';
	case 56: return 'Ì';
	case 57: return 'Í';
	case 58: return 'Î';
	case 59: return 'Ï';
	case 60: return 'Ğ';
	case 61: return 'Ñ';
	case 62: return 'Ò';
	case 63: return 'Ó';
	case 64: return 'Ô';
	case 65: return 'Õ';
	case 66: return 'Ö';
	case 67: return '×';
	case 68: return 'Ø';
	case 69: return 'Ù';
	case 70: return 'Ú';
	case 71: return 'Û';
	case 72: return 'Ü';
	case 73: return 'İ';
	case 74: return 'Ş';
	case 75: return 'ß';
		//==================================
	case 76: return '!';
	case 77: return ')';
	case 78: return '(';
	case 79: return '*';
	case 80: return '+';
	case 81: return ',';
	case 82: return '-';
	case 83: return '.';
	case 84: return '/';
	case 85: return ':';
	case 86: return ';';
	case 87: return '=';
	case 88: return '?';
	case 89: return '%';
	case 90: return '_';
	case 91: return '`';
	case 92: return '|';
	case 93: return '¹';
	case 94: return ' ';
	}
}