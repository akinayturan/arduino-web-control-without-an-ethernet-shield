<!DOCTYPE HTML>
<html lang="en-US">
<head>
	<meta charset="UTF-8">
	<title>ArduinoTurk Lab</title>
	<link rel="stylesheet" href="style.css" />
	<script type="text/javascript" src="jquery.js"></script>
	<script type="text/javascript" src="sistem.js"></script>
</head>
<body>
	<h1>Arduino<font color="red">Turk</font> Lab</h1>
	<?php
		if(!file_exists("kod.txt")){
			print "<div class='uyari'>kod.txt dosyası oluşturulmamış!</div>";
		}
	?>
	<table>
		<tr><th>Led 1</th><th><a class="0" href="#">Yak</a><a class="1" href="#">Söndür</a></th></tr>
		<tr><th>Led 2</th><th><a class="2" href="#">Yak</a><a class="3" href="#">Söndür</a></th></tr>
		<tr><th>Led 3</th><th><a class="4" href="#">Yak</a><a class="5" href="#">Söndür</a></th></tr>
		<tr><th>Led 4</th><th><a class="6" href="#">Yak</a><a class="7" href="#">Söndür</a></th></tr>
		<tr><th>Led 5</th><th><a class="8" href="#">Yak</a><a class="9" href="#">Söndür</a></th></tr>
	</table>
</body>
</html>