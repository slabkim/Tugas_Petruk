#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool cariHorizontal(const vector<vector<char>>& matriks, const string& kata) {
    int panjang_baris = matriks.size();
    int panjang_kolom = matriks[0].size();

    for (int i = 0; i < panjang_baris; ++i) {
        for (int j = 0; j <= panjang_kolom - kata.length(); ++j) {
            bool sama = true;
            for (int k = 0; k < kata.length(); ++k) {
                if (matriks[i][j + k] != kata[k]) {
                    sama = false;
                    break;
                }
            }
            if (sama) {
                return true;
            }
        }
    }
    return false;
}

bool cariVertikal(const vector<vector<char>>& matriks, const string& kata) {
    int panjang_baris = matriks.size();
    int panjang_kolom = matriks[0].size();

    for (int j = 0; j < panjang_kolom; ++j) {
        for (int i = 0; i <= panjang_baris - kata.length(); ++i) {
            bool sama = true;
            for (int k = 0; k < kata.length(); ++k) {
                if (matriks[i + k][j] != kata[k]) {
                    sama = false;
                    break;
                }
            }
            if (sama) {
                return true;
            }
        }
    }
    return false;
}

bool cariHorizontalDariBawah(const vector<vector<char>>& matriks, const string& kata) {
  int panjang_baris = matriks.size();
  int panjang_kolom = matriks[0].size();

  for (int i = panjang_baris - 1; i >= 0; --i) {
    for (int j = panjang_kolom - 1; j >= kata.length() - 1; --j) {
      bool sama = true;
      for (int k = kata.length() - 1; k >= 0; --k) {
        if (matriks[i][j - k] != kata[k]) {
          sama = false;
          break;
        }
      }
      if (sama) {
        return true;
      }
    }
  }
  return false;
}

bool cariVertikalDariKanan(const vector<vector<char>>& matriks, const string& kata) {
  int panjang_baris = matriks.size();
  int panjang_kolom = matriks[0].size();

  for (int j = panjang_kolom - 1; j >= 0; --j) {
    for (int i = panjang_baris - 1; i >= kata.length() - 1; --i) {
      bool sama = true;
      for (int k = kata.length() - 1; k >= 0; --k) {
        if (matriks[i - k][j] != kata[k]) {
          sama = false;
          break;
        }
      }
      if (sama) {
        return true;
      }
    }
  }
  return false;
}

bool cariDiagonalKananBawah(const vector<vector<char>>& matriks, const string& kata) {
    int panjang_baris = matriks.size();
    int panjang_kolom = matriks[0].size();

    for (int i = 0; i <= panjang_baris - kata.length(); ++i) {
        for (int j = 0; j <= panjang_kolom - kata.length(); ++j) {
            bool sama = true;
            for (int k = 0; k < kata.length(); ++k) {
                if (matriks[i + k][j + k] != kata[k]) {
                    sama = false;
                    break;
                }
            }
            if (sama) {
                return true;
            }
        }
    }
    return false;
}

bool cariDiagonalKananAtas(const vector<vector<char>>& matriks, const string& kata) {
    int panjang_baris = matriks.size();
    int panjang_kolom = matriks[0].size();

    for (int i = kata.length() - 1; i < panjang_baris; ++i) {
        for (int j = kata.length() - 1; j < panjang_kolom; ++j) {
            bool sama = true;
            for (int k = 0; k < kata.length(); ++k) {
                if (i - k < 0 || j - k < 0 || matriks[i - k][j - k] != kata[k]) {
                    sama = false;
                    break;
                }
            }
            if (sama) {
                return true;
            }
        }
    }
    return false;
}

bool cariDiagonalKiriBawah(const vector<vector<char>>& matriks, const string& kata) {
    int panjang_baris = matriks.size();
    int panjang_kolom = matriks[0].size();

    for (int i = 0; i <= panjang_baris - kata.length(); ++i) {
        for (int j = kata.length() - 1; j < panjang_kolom; ++j) {
            bool sama = true;
            for (int k = 0; k < kata.length(); ++k) {
                if (i + k >= panjang_baris || j - k < 0 || matriks[i + k][j - k] != kata[k]) {
                    sama = false;
                    break;
                }
            }
            if (sama) {
                return true;
            }
        }
    }
    return false;
}
