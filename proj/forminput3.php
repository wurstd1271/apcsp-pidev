<!DOCTYPE html>
<html>
  <head>
    <title>Form Input 2</title>
  </head>


  <body>

    <h1>Encryption/Decryption Algorithm</h1>
    <p>Enter in order: the string, the value of the shift, 1 or 2 for either encrypt or decrypt, and p or f for print/file</p>

    <?php
       // define variables and set to empty values
       $arg1 = $arg2 = $arg3 = $arg4 = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $arg2 = test_input($_POST["arg2"]);
	 $arg3 = test_input($_POST["arg3"]);
	 $arg4 = test_input($_POST["arg4"]);
         echo "/usr/lib/cgi-bin/sp2b/encrypt " . $arg1 . " " . $arg2 . " ". $arg3 . " " . $arg4;
         exec("/usr/lib/cgi-bin/sp2b/encrypt " . $arg1 . " " . $arg2 . " ". $arg3 . " " . $arg4, $output, $retc);
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Arg1: <input type="text" name="arg1"><br>
      Arg2: <input type="text" name="arg2"><br>
      Arg3: <input type="text" name="arg3"><br>
      Arg4: <input type="text" name="arg4"><br>
      <br>
      <input type="submit" value="Go!">
    </form>

    <?php
       // only display if return code is numeric - i.e. exec has been called
       if (is_numeric($retc)) {
         echo "<h2>Your Input:</h2>";
         echo $arg1;
         echo "<br>";
         echo $arg2;
         echo "<br>";
	 echo $arg3;
	 echo "<br>";
	 echo $arg4;
	 echo "<br>";
       
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
         echo "<h2>Program Return Code:</h2>";
         echo "$retc\n";
         $myfilename = "/var/tmp/storedvalue.txt";
        if(file_exists($myfilename)){
          echo "contents in file:";
          echo file_get_contents($myfilename);
         }
       }
    ?>
    
  </body>
</html>
