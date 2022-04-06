function addContent(name, type){
    var hamilton = ["Zdobył on mistrzostwa świata w Formule 1 w latach 2008, 2014, 2015, 2017, 2018, 2019, 2020. \
    Jest także wicemistrzem tej kategorii w latach 2007, 2016, 2021. Jeździł dla zespołów \ \
    McLarena oraz Mercedesa.",
    "Urodził się 7 stycznia 1985 w Stevenage, Wielka Brytania. 1 stycznia 2021 roku otrzymał tytuł szlachecki z rąk królowej Wielkiej Brytanii Elżbiety II."];


    var bottas = ["Kierowca wyścigowy dla zespołów Williams racing, Mercedes AMG oraz (obecnie) Alfa Romeo. \
    Pomimo swoich umiejętności w zespole Mercedesa nie zdobył on mistrzostwa świata ze względu na \\\
    jego pozycję jako członka zespołu. Wicemistrz świata w latach 2019 i 2020",
    "Urodził się 28 sierpnia w Nastolii, Finlandia."];

    var verstappen = ["Mistrz świata Formuły 1 sezonu 2021, prowadził samochód Oracle Red Bull Racing Honda z numerem #33",
    "Urodził się 30 września 1977 roku w Hasselt jako syn Josa Verstappena i Sophie Kurpen - również kierowców wyścigowych. Rozppoczął przygodę w kartingu mając 4,5 roku idąc w ślady ojca - byłego kierowcy F1."];

    var perez = ["Kierowca wyścigowy jeżdżący z numerem #11 dla zespołu RBR Honda, nie zdobył w tej dyscyplinie żadnych tytułów mistrzoswkich, jendakże jest on uznawany za świetnego kierowcę defensywnego, czym zyskał przydomek 'Ministra obrony Meksyku'",
    "Sergio 'Checo' Perez Mendoza urodził się 26 stycznia 1990 w Gudalajrze, Meksyk"];

    var leclerc = ["Rozpoczął swoją karierę w zespole Akademii Kierowców Ferrari wygrał w swojej karierze mistrzostwo F2 i GP3 oraz trzy wyścigi F1",
    "Charles Marc Hervé Percival Leclerc urodził się 16 października 1997 w Monako"];

    var sainz = ["Swoją karierę rozpoczął w 2005 roku a od 2015 roku startuje w mistrzostwach świata F1. W swojej karierze wygrał mistrzostwo świata FR3.5",
    "Carlos Sainz Vázquez de Castro urodził się 1 września 1994 w madrycie"];

    if(type == 'c') var pos = 0;
    else if(type == 'p') var pos = 1;

    if(name == "ham") document.getElementById("par-hamilton").innerHTML = hamilton[pos];
    if(name == "bot") document.getElementById("par-bottas").innerHTML = bottas[pos];
    if(name == "ver") document.getElementById("par-verstappen").innerHTML = verstappen[pos];
    if(name == "per") document.getElementById("par-perez").innerHTML = perez[pos];
    if(name == "lec") document.getElementById("par-leclerc").innerHTML = leclerc[pos];
    if(name == "sai") document.getElementById("par-sainz").innerHTML = sainz[pos];

}


