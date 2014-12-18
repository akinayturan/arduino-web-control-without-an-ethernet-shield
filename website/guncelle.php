<?php
	if($_POST){
		$gelen = $_POST["deger"];
			$dosya = fopen ("kod.txt" , 'w'); //dosya oluşturma işlemi
			$yaz = $gelen;
			fwrite ( $dosya , $yaz ) ; 
			fclose ($dosya);
			print "Dosya güncellendi.";
	}
?>