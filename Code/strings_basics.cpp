#include <bits/stdc++.h>

using namespace std;

#define ENDL '\n'

int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);

/// Cadenas en C
//    char str1[] = "Cadena1";
//    cout << sizeof(str1) << ENDL;
//
//    char str2[] = {'C', 'a', 'd', 'e', 'n', 'a', '2', '\0'};
//    cout << sizeof(str2) << ENDL;
//
//    cout << str1 << ENDL;
//    cout << str2 << ENDL;

/// Leer input hasta un caracter separador
    string str;
//    cin >> str;
//    cout << str;
//    getline(cin, str, ',');
//    cout << str << ENDL;

/// Ordenar string
//    str = "jksdfhjkasidfuh sdafas";
//    sort(str.begin(), str.end());
//    cout << str << ENDL;

/// C++ string a C string
//    char str3[str.size() + 1];
//    strcpy(str3, str.c_str());
//    cout << str3 << ENDL;

/// Combinar getline con cin
//    int a, b;
//    cin >> a >> b;
//    cout << a << " " << b << ENDL;
//    cin.ignore();
//    getline(cin, str);
//    cout << str << ENDL;

/// Leer línea hasta que llegue vacía
//    while (getline(cin, str) && !str.empty()) {
//        cout << str << ENDL;
//    }

/// Convertir string a número
//    cin >> str;
//    int a                   = stoi(str);
//    unsigned int b          = stoul(str);
//    long long c             = stoll(str);
//    unsigned long long d    = stoull(str);
//    float e                 = stof(str);
//    double f                = stod(str);
//    long double g           = stold(str);

/// Convertir número a string
//   str = to_string('a');
//   cout << str << ENDL;

/// Crear una string repitiendo n veces un caracter
//    cout << string(10, 'a') << ENDL;

/// Dar formato de fecha
//    int dia, mes, anio;
//    cin >> dia >> mes >> anio;
//    string sdia = to_string(dia);
//    string smes = to_string(mes);
//    string sanio = to_string(anio);
//    cout << string(2 - sdia.size(), '0') << sdia << '/'
//         << string(2 - smes.size(), '0') << smes << '/'
//         << string(4 - sanio.size(), '0') << sanio << ENDL;

/// Buscar posición de substring en una string
//    str = "El primer primero. El segundo primero. No hay mas.";

//    cout << str.find("primero") << ENDL;
//    cout << str.rfind("primero") << ENDL;
//
//    cout << str.find("tercero") << ENDL;
//    cout << (str.find("tercero") == string::npos) << ENDL;
//    cout << (str.find("tercero") == -1) << ENDL;

/// Extraer substring de string (posición y longitud)
//    cout << str.substr(10, 18) << ENDL;
//    cout << str.substr(18) << ENDL;

/// Remplazar substring en string
//    str.replace(str.rfind("primero"), 7, "segundo iufah");
//    cout << str << ENDL;

/// Contar frecuencia de caracteres y caracteres únicos
//    unordered_map<char, int> count;
//    for (char c : str)
//        count[c]++;
//    for (auto p : count)
//        cout << p.first << ": " << p.second << ", ";
//    cout << ENDL << count.size() << ENDL;

/// Comparar strings
//    str = "abcd";
//    cout << ("Alfa" == "Omega") << ENDL;
//    cout << ("Alfa" != "Omega") << ENDL;
//
//    cout << str.compare("abcd") << ENDL; // ==
//    cout << str.compare("xyc2345v") << ENDL; // str <
//    cout << str.compare("0a5234bc") << ENDL; // str >
//
//    cout << str.compare("abcde") << ENDL;
//    cout << str.compare("abcdef") << ENDL;
//    cout << str.compare("abcdeff") << ENDL;
//
//    cout << str.compare("abc") << ENDL;
//    cout << str.compare("ab") << ENDL;
//    cout << str.compare("a") << ENDL;
//
//    cout << ("1990/06/12" < "2020/01/01") << ENDL;
//    cout << ("1990/06/12" > "2020/01/01") << ENDL;

/// Ordenar lexicograficamente strings
//    vector<string> nombres = {"omar", "axyoan", "rob", "erick", "aa", "aaab", "aaa", "AA"};
//    sort(nombres.begin(), nombres.end());
//    for (auto n : nombres)
//        cout << n << ", ";
//    cout << ENDL;

/// Ordenar fechas
//    vector<string> fechas = {"0850/12/22", "1995/04/30", "1855/07/17", "2010/03/03", "4305/02/08", "2010/03/04"};
//    sort(fechas.begin(), fechas.end());
//    for (auto f : fechas)
//        cout << f << ", ";
//    cout << ENDL;
}
