<?php
    
    function save_to_db(
        $host = "localhost",
        $user = "root",
        $password = "",
        $db = "umkwww"
    ){
        $connection = mysqli_connect($host, $user, $password, $db);
        
        $phone = $_POST["phone"];
        $email = $_POST["email"];
        $name = $_POST["name"];
        $surname = $_POST["surname"];

        $query = "INSERT INTO newsletter (`phone_number`, `email`, `name`, `surname`) VALUES('$phone', '$email', '$name', '$surname');";

        $result = mysqli_query($connection, $query);

        mysqli_close($connection);

        header("Location: index.html");
    }



    save_to_db();
?>