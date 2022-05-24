    <main class="content text-decoration-none">
        <article class="paragraph-box">
            <h3>
                Kierowcy
            </h3>
            <p>
                20 najlepszych kierowców świata, absolutni mistrzowie w swojej dziedzinie
                ścigający się najlepszymi samochodami, przygotowanymi specjalnie aby osiągnąć
                jak najlepsze wyniki. W tym sporcie liczą się setne częsci sekundy, więc
                od kierowców bolidów wymagane jest wykorzystanie stu procent swych możliwości
            </p>
            <p>
                Oto oni - najlepsi z najlepszych
            </p>
        </article>

        <article class="shorts">
            <h3>Mercedes<h3>
            <div class="row mercedes-background global-settings">
                <div class="article-short col">
                    <div class="row">
                        <div class="col">
                            <h3>
                                Lewis Hamilton #44
                            </h3>
                            <img class="driver-image" src="images/drivers/driver_lewis_hamilton.png" alt="#blessed">
                            <p>
                                <h4 type="button" onClick="addContent('ham', 'c')">Kariera</h4>
                                <h4 type="button" onclick="addContent('ham', 'p')" >Życie osobiste</h4>
                            </p>
                        </div>
                        <div class="col">
                            <p id="par-hamilton"></p>
                        </div>
                    </div>
                </div>
                <div class="article-short col">
                    <div class="row">
                        <div class="col">
                            <h3>
                                Valretti Bottas #77
                            </h3>
                            <img class="driver-image" src="images/drivers/driver_valtteri_bottas.jpg" alt="Batteri Voltas">
                            <p>
                                <h4 type="button" onClick="addContent('bot', 'c')">Kariera</h4>
                                <h4 type="button" onclick="addContent('bot', 'p')" >Życie osobiste</h4>
                            </p>
                        </div>
                        <div class="col">
                            <p id="par-bottas"></p>
                        </div>
                    </div>
                </div>
            </div>

            <div class="row redbull-background global-settings">
                <h3>Red Bull Racing Honda</h3>
                <div class="article-short col">
                    <div class="row">
                        <div class="col">
                            <h3>
                                Max Verstappen #33
                            </h3>
                            <img class="driver-image" src="images/drivers/driver_max_verstappen.jpg" alt="Super Max">
                            <p>
                                <h4 type="button" onClick="addContent('ver', 'c')">Kariera</h4>
                                <h4 type="button" onclick="addContent('ver', 'p')" >Życie osobiste</h4>
                            </p>
                        </div>    
                        <div class="col">
                            <p id="par-verstappen"></p>
                        </div>
                    </div>
                </div>
                <div class="article-short col">
                    <div class="row">
                        <div class="col">
                            <h3>
                                Sergio 'Checo' Perez #11
                            </h3>
                            <img class="driver-image" src="images/drivers/driver_sergio_perez.jpg" alt="Checo">
                            <p>
                                <h4 type="button" onClick="addContent('per', 'c')">Kariera</h4>
                                <h4 type="button" onclick="addContent('per', 'p')" >Życie osobiste</h4>
                            </p>
                        </div>
                        <div class="col">
                            <p id="par-perez"></p>
                        </div>
                    </div>
                </div>
            </div>

            <div class="row ferrari-background global-settings">
                <h3>Ferrari</h3>
                <div class="article-short col">
                    <div class="row">
                        <div class="col">
                            <h3>
                                Charles Leclerc #16
                            </h3>
                            <img class="driver-image" src="images/drivers/driver_charles_leclerc.jpg" alt="CL16">
                            <p>
                                <h4 type="button" onClick="addContent('lec', 'c')">Kariera</h4>
                                <h4 type="button" onclick="addContent('lec', 'p')" >Życie osobiste</h4>
                            </p>
                        </div>
                        <div class="col">
                            <p id="par-leclerc"></p>
                        </div>
                    </div>
                </div>
                <div class="article-short col">
                    <div class="row">
                        <div class="col">
                            <h3>
                                Carlos 'Smooth Operator' Sainz
                            </h3>
                            <img class="driver-image" src="images/drivers/driver_carlos_sainz.jpg" alt="Checo">
                            <p>
                                <h4 type="button" onClick="addContent('sai', 'c')">Kariera</h4>
                                <h4 type="button" onclick="addContent('sai', 'p')" >Życie osobiste</h4>
                            </p>
                        </div>
                        <div class="col">
                            <p id="par-sainz"></p>
                        </div>
                    </div>
                </div>
            </div>

        </article>
    </main>

</body>

<script>

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

</script>



</html>