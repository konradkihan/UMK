-- phpMyAdmin SQL Dump
-- version 5.1.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 07, 2022 at 09:54 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 7.4.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `umkwww`
--

-- --------------------------------------------------------

--
-- Table structure for table `newsletter`
--

CREATE TABLE `newsletter` (
  `client_id` int(10) NOT NULL COMMENT 'unique client ID',
  `phone_number` text NOT NULL COMMENT 'clients phone number',
  `email` text NOT NULL DEFAULT current_timestamp() COMMENT 'unique clients email',
  `name` text NOT NULL COMMENT 'clients name',
  `surname` text NOT NULL COMMENT 'clients surname'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COMMENT='Table of clients that are signed up for a newsletter';

--
-- Dumping data for table `newsletter`
--

INSERT INTO `newsletter` (`client_id`, `phone_number`, `email`, `name`, `surname`) VALUES
(1, '123', 'z@w.com', 'Jan', 'Kowalski'),
(2, '24232445', 'a@e.com', 'Albert', 'Einstein'),
(3, '123456789', 'sie@tosie.wyklepie', 'Andrzeju', 'Niedenerwuj');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `newsletter`
--
ALTER TABLE `newsletter`
  ADD PRIMARY KEY (`client_id`),
  ADD UNIQUE KEY `email` (`email`) USING HASH;

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `newsletter`
--
ALTER TABLE `newsletter`
  MODIFY `client_id` int(10) NOT NULL AUTO_INCREMENT COMMENT 'unique client ID', AUTO_INCREMENT=4;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
