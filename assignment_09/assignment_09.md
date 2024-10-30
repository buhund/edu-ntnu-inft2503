# INFT2503 C++ Øving 9

I denne øvingen trenger du flere STL-algoritmer enn de som er gjennomgått i leksjonen. Bruk læreboka og/eller STL-referansene på http://www.cplusplus.com/reference/algorithm eller https://en.cppreference.com/w/cpp/algorithm

Bruk vektorne `v1` og `v2` fra leksjonen. Et av argumentene i algoritmene dere bruker (`find_if`, `equal`, `replace_copy_if`) skal være en anonym funksjon.

**a**) Finn første element i `v1` som er større enn `15` ved hjelp av `find_if`. Tips: Den logiske funksjonen skal ta ett argument og returnere `true` dersom dette er større enn `15`.

**b**) Vi definerer "omtrent lik" til å bety at forskjellen mellom to verdier ikke er mer enn `2`. Finn ut om intervallet `[v1.begin(), v1.begin() + 5>` og `v2` er like i denne betydningen av likhet. Hva med intervallet `[v1.begin(), v1.begin() + 4>`? Bruk algoritmen `equal`.

**c**) Erstatt alle oddetall i `v1` med `100` ved hjelp av `replace_copy_if`. 
