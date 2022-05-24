<!-- Page contnent -->
<main class="content text-decoration-none">

<!-- The big div with "About" text -->
<article class="paragraph-box">
    <h3>
        O stronie:
    </h3>
    <p>
        Strona powstała jako porjekt na zaliczenie. <br>
        Do napisania strony wykorzystałem HTML, CSS oraz JS (slider oraz walidacja formularza) i PHP (formularz do newslettera). <br>
        Zawartość strony: strona składa się ze strony głównej, a także strony z informacjami o
        <ul>
            <li>
                samochodach - podstrona prezentująca tegoroczne malowania bolidów
            </li>
            <li>
                kierowcach - zbiór krótkich informacji o kierowcach obecnego sezonu
            </li>
        </ul>
        Znajdują się także dwa przykładowe artykuły. <br>
        
        <p>
            <a href="https://www.formula1.com" target="_blank" rel="noopener noreferrer">Oficjalna strona F1 znajduje się tutaj...</a>
        </p>
        
    </p>
</article>

<!-- Shortened aricles on main page -->
<article class="shorts">
    <div class="row">
        <div class="article-short col">
            <a class="text-decoration-none" href="index.php?s=season_end" class="article-panel">
                <h3 class="article-mini-title">Koniec sezonu 2021</h3>
            
                <article>
                    Koniec sezonu 2021 zakończył się dramatycznym wyprzedzeniem samochodu #LH44 przez
                    belga Maxa Verstappena...
                </article>
            </a>
        </div>
        <div class="article-short col">
            <a class="text-decoration-none" href="index.php?s=silverstone" class="article-panel">
                <h3 class="article-mini-title">Dramatyczne wydarzenia na Silverstone</h3>
            
                <article>
                    Już na pierwszym okrążeniu doszło do zaciętej walki między samochodami 44 i 33, w wyniku której doszło do kolizji.
                </article>
            </a>
        </div>
    </div>

    <div class="row">
        <div class="article-short col">
            <a class="text-decoration-none" href="index.php?s=season_end" class="article-panel">
                <h3 class="article-mini-title">Koniec sezonu 2021 raz jeszcze</h3>
            
                <article>
                    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed id feugiat dolor. Nam ultrices massa purus, at imperdiet magna facilisis.
                </article>
            </a>
        </div>
        <div class="article-short col">
            <a class="text-decoration-none" href="index.php?s=silverstone" class="article-panel">
                <h3 class="article-mini-title">Dramatyczne wydarzenia na Silverstone 2</h3>
            
                <article>
                    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed id feugiat dolor. Nam ultrices massa purus, at imperdiet magna facilisis.
                </article>
            </a>
        </div>
    </div>
</article>

<div class="article-short">
    <form name="Form" id="myform" method="post" action="add_to_database.php">
        <table>
            <tr>
                <td><input type="text" name="name" placeholder="Imię"/></td>
                <td><input type="text" name="surname" placeholder="Nazwisko"/></td>
            </tr>
            <tr>
                <td><input type="email" name="email" required="true" placeholder="Adres email"/></td>
                <td><input type="number" name="phone" required="true" placeholder="Numer telefonu"/></td>
            </tr>
            <tr>
                <td id="saved">Zapisz mnie na newsletter:</td>
                <td><input type="button" onclick="runjs()" value="ZAPISZ" name="subbtn"></td>
            </tr>
        </table>
    </form>
</div>
</main>