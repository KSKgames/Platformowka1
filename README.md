Będzie to platformówka. Tyle wiem.  
Na razie zrobiłem tylko system GameObject'ów, który wymaga dopracowania oraz automatyczne wczytywanie i pokazywanie textur.  
Planuję dodać możliwość pokazywania i ukrywania obiektów i usuwania niepotrzebnych textur z pamięci.
Najlepiej by było wprowadzić automatyczne pakowanie tych textur do jednej i tylko branie konkretnych koordów z tej tekstury, będzie to dużo bardziej optymalne rozwiązanie.  
Plik Game.cpp zawiera funkcje GameStart i GameUpdate, zalecam pisanie kodu w postaci klas lub funkcji, a następnie dodawanie odniesień do nich do tych właśnie funkcji.  
Zaznaczam że obiekty dobrze jest tworzyć na heapie, albo w scopie globalnym, gdyż inaczej są one niszczone po zakończeniu tych funkcji co trochę mija się z celem.
Puki co repozytorium jest widoczne publicznie, każda osoba wchodząca przez link lub przez mój profil na GitHubie będzie mogła zobaczyć co tu się dzieje.  
