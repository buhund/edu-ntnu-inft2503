#  INFT2503 Assignment 07



## Oppgave 1B



> b) Teori: Forklar hvordan `5 - 3 - fraction1 - 7 - fraction2` blir tolket. Hvilke versjoner av operatoren `-` blir brukt?



Operatoren `-` er venstreassosiativ, hvilket betyr at uttrykk evalueres fra venstre mot høyre. Dvs. vi evaluerer delene fra venstre side før vi jobber oss videre mot høyre.

På grunn av dette vil stykket `5 - 3 - fraction1 - 7 - fraction2` bli tolket i stykker fra venstre mot høyre.

#### Steg 1:

Først blir 5 - 3 evaluert. Siden begge er av typen `int`, brukes den innebygde versjonen av `-` for heltall. Resultatet blir 2, siden $5 - 3 = 2$

#### Steg 2

Deretter evalueres `2 - fraction1`. Her har vi en `int` minus et `Fraction`-objekt. For å håndtere dette brukes ikke-medlemsfunksjonen `operator-(int, const Fraction&)`. Denne funksjonen returnerer et nytt `Fraction`-objekt som representerer resultatet av `2 minus fraction1`. Vi kaller dette for `resultat`.

#### Steg 3

Neste operasjon er `resultat - 7`. Dette er et `Fraction`-objekt minus en `int`. Her brukes medlemsfunksjonen `Fraction::operator-(int)` som er definert for klassen `Fraction`. Funksjonen returnerer et nytt `Fraction`-objekt som er resultatet av å trekke 7 fra brøken i `resultat`.

#### Steg 4

Til slutt har vi `resultat - fraction2`. Dette er et `Fraction`-objekt minus et annet `Fraction`-objekt. Her brukes medlemsfunksjonen `Fraction::operator-(const Fraction&)`, som trekker verdien av `fraction2` fra `resultat`.

### Bruk av operatoren `-`

- Steg 1: **`5 - 3`:** Bruker den "vanlige", innebygde, `int`-versjonen av `-`.
- Steg 2: **`2 - fraction1`:** Bruker ikke-medlemsfunksjonen `Fraction operator-(int, const Fraction&)`.
- Steg 3: **`result - 7`:** Bruker medlemsfunksjonen `Fraction Fraction::operator-(int)` for å trekke en heltallsverdi fra en brøk.
- Steg 4: **`result - fraction2`:** Bruker medlemsfunksjonen `Fraction Fraction::operator-(const Fraction&)` for å trekke en brøk fra en annen brøk,

