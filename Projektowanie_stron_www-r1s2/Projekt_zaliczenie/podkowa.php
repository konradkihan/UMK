<form action="podkowa.php" method="POST">
<input type="submit" name="guzik" value="Wyszukaj">
</form>

<?php


$host = "51.83.180.200";
$dbname = "umkwww";
$dbusr = "kihan";
$dbpsw = "1234";

        $phone = $_POST["phone"];
        $email = $_POST["email"];
        $name = $_POST["name"];
	$surname = $_POST["surname"];
	$query = "INSERT INTO newsletter (phone_number, email, name, surname) VALUES($phone, '".$email."', '".$name."', '".$surname."');";
	echo($query);




?>
