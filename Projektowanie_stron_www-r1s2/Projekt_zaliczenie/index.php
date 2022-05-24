<?php
	if(isset($_GET['s'])){
		$page = trim($_GET['s']);
		$pages = array('start', 'news', 'season_end', 'silverstone', 'drivers', 'cars');
		if (!in_array($page, $pages))
			$page = 'start';
	}
	else
	$page = 'start';
?>


<!doctype html>

<html lang="pl">
<head>
    <meta charset="utf-8">

    <title>F1 2021</title>
    <meta name="description" content="Nieoficjalna strona dla sezonu formuły 2021">
    <meta name="author" content="Konrad Kihan">

    <link rel="icon" type="image/x-icon" href="/images/f1_logo.svg">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    <link rel="stylesheet" href="styles/style.css">
    <link rel="stylesheet" href="styles/cars.css">

    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Open+Sans:wght@300;400;600&display=swap" rel="stylesheet">

    

    <!-- <script src="/scripts/form_validation.js"></script> -->
    <script src="scripts/drivers.js"></script>
    
    
</head>

<body>
    
    <header class="header">
        <a href="index.php">
            <img src="images/f1_logo.png" alt="F1 logo"> 
            Nieoficjalna strona F1 o sezonie 2021
        </a>
    </header>

    <!-- Navbar menu on top -->
    <nav class="navbar text-decoration-none">
        <div class="row">
            <div class="col">
                <a href="index.php?s=news">Nowości</a> 
            </div>
            <div class="col">
                <a href="index.php?s=cars">Samochody</a>
            </div>
            <div class="col">
                <a href="index.php?s=drivers">Kierowcy</a>
            </div>
        </div>
    </nav>

    <?php include $page.'.php';?>

    <!-- Footer -->
    <footer class="footer">
        <div class="footer-info">
            <h4>
                Autor: Konrad Kihan
            <h4>
            <p>
                grupa LG, informatyka inżynierska 1rok<br>
                numer indeksu: 313101
            </p>
        </div>
    </footer>

</body>
</html>

<script>
    function confirmation() {
        // check if all filled
        var name = document.forms["Form"]["name"].value;
        var surname = document.forms["Form"]["surname"].value;
        var mail = document.forms["Form"]["email"].value;
        var phone = document.forms["Form"]["phone"].value;
        if (name == null || name == "" && surname == null || surname == "" && mail == null || mail == "" && phone == null || phone == "")
            return false;

        // regex mail validation
        const re = /^(([^<>()[\]\.,;:\s@\"]+(\.[^<>()[\]\.,;:\s@\"]+)*)|(\".+\"))@(([^<>()[\]\.,;:\s@\"]+\.)+[^<>()[\]\.,;:\s@\"]{2,})$/i;
        var mail_test = re.test(mail)
        if(!mail_test)
            return false;

        // if all test passed
        return true;
    }   

    function runjs(){
        if(confirmation())
            document.getElementById("myform").submit();
        else
            document.getElementById("saved").innerHTML = "Wprowadź dane poprawnie";
    }

</script>
