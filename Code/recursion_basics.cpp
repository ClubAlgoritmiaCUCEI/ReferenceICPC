#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll c = 0;

string format_number(ll n) {
    string s = to_string(n);
    for (ll i = s.size(); i > 0; i -= 3)
        s.insert(i, ",");
    return s.substr(0, s.size()-1);
}

/// Factorial recursivo con módulo O(n)
ll factorial(ll n, ll m=1e7+1) {
    ++c; // borrar
    if (n <= 1)
        return 1;
    return (n * factorial(n - 1)) % m;
}


/// x^y recursivo con módulo en O(log n), y >= 0
ll logpow(ll x, ll y, ll m=1e7+1) {
    ++c; // borrar
    if (y == 0)
        return 1;
    if (y == 2)
        return (x * x) % m;
    ll r = logpow(x, y / 2, m);
    if (y % 2)
        return ((x * r) % m * r) % m;
    return (r * r) % m;
}

/// x^y iterativo con módulo en O(n), y >= 0
ll npow(ll x, ll y, ll m=1e7+1) {
    ll r = 1;
    for (ll i = 0; i < y; ++i) {
        ++c; // borrar
        r = (r * x) % m;
    }

    return r;
}

/// Fibonacci recursivo O(1.64^n) o O(2^n) para redondear
ll fibonacci(ll n) {
    ++c; // borrar
    if (n == 0 || n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/// Fibonacci recursivo con memorización O(2n)
vector<ll> visitado(1e6, -1); // Puedes cambiar el tamaño si necesitas menos
ll fibonacci_mem(ll n) {
    ++c; // borrar

    if (visitado[n] != -1) // Para no recalcular
        return visitado[n];

    if (n == 0 || n == 1)
        return visitado[n] = 1;

    return visitado[n] = fibonacci_mem(n - 1) + fibonacci_mem(n - 2);
}

/// Fibonacci iterativo con memorización O(n)
vector<ll> fib(1e6); // Puedes cambiar el tamaño si necesitas menos
ll fibonacci_iter(int n) {
    fib[0] = fib[1] = 1;

    for (ll i = 2; i <= n; i++)  {
        ++c; // Borrar
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}

/// Fibonacci con formulazo O(1)
///     Tengan cuidado con los números muy grandes, puede fallar pot la imprecisión de los decimales
///     Source: http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html
ll fibonacci_formulazo(ll n) {
    ++c; // Borrar
    long double phi = (1.0L + sqrt(5.0L)) / 2.0L; // El sufijo .0L es para forzar long double
    return round(pow(phi, n+1) / sqrt(5.0L));
}

/// DFS del problema donde a debe llegar a b con 2x y 10x+1
vector<ll> pasos;
bool dfs(ll a, ll b) {
    ++c;
    if (a == b) {
        pasos.push_back(a);
        return true;
    }
    if (a > b)
        return false;

    if (dfs(a * 10 + 1, b)){
        pasos.push_back(a);
        return true;
    }
    if (dfs(a * 2, b)) {
        pasos.push_back(a);
        return true;
    }
    return false; // Creo que nunca puede llegar acá porque muere antes en a > b xd
}

int main() {
    c = 0;
    cout << "25! mod 1e6 = " << factorial(25, 1e6) << endl;
    cout << "\tNumero de recursiones O(n): " << format_number(c) << endl << endl;

    c = 0;
    cout << "5^1400561 iterativo = " << npow(5, 1400561) << endl;
    cout << "\tNumero de iteraciones O(n): " << format_number(c) << endl << endl;

    c = 0;
    cout << "5^1400561 recursivo = " << logpow(5, 1400561) << endl;
    cout << "\tNumero de recursiones O(log n): " << format_number(c) << endl << endl;

    c = 0;
    cout << "fibonacci(24) recursivo = " << fibonacci(24) << endl;
    cout << "\tNumero de recursiones ~O(1.64^n): " << format_number(c) << endl << endl;

    c = 0;
    cout << "fibonacci(24) recursivo con memorizacion = " << fibonacci_mem(24) << endl;
    cout << "\tNumero de recursiones O(2n): " << format_number(c) << endl << endl;

    c = 0;
    cout << "fibonacci(24) iterativo con memorizacion = " << fibonacci_iter(24) << endl;
    cout << "\tNumero de iteraciones O(n): " << format_number(c) << endl << endl;

    c = 0;
    cout << "fibonacci(24) con formulazo = " << fibonacci_formulazo(24) << endl;
    cout << "\tNumero de iteraciones O(1): " << format_number(c) << endl << endl;

    c = 0;
    cout << "Problema de DFS(100, 320321) = " << (dfs(100, 320321) ? "True" : "False") << endl;
    cout << "\tNumero de iteraciones O(nosexd): " << format_number(c) << endl;
    for (auto it = pasos.rbegin(); it != pasos.rend(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
