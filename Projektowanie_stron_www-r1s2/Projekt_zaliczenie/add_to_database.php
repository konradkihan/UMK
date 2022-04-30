<?php
        $host = "51.83.180.200";
        $dbname = "umkwww";
        $dbusr = "podkowa";
        $dbpsw = "zaq1@WSX";

        $dsn = "pgsql=host:$host;port=5432;dbname=umkwww;";
        $conn = new PDO($dsn, $dbusr, $dbpsw);


        /*if(!$conn)
	{
                echo "AAAAAAAAAAAAAAA";
                return -1;
        }




        $phone = $_POST["phone"];
        $email = $_POST["email"];
        $name = $_POST["name"];
        $surname = $_POST["surname"];

        $query = "INSERT INTO newsletter (phone_number, email, name, surname) VALUES($phone, '".$email."', '".$name."', '".$surname."');";
	$stmt = $conn->prepare($query);

        $stmt->execute();*/

        echo "Dziala";
?>
