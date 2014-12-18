$(function(){

	$("a").click(function(){
		var sinif = $(this).attr("class");
		$.ajax({
			type: "POST",
			url: "guncelle.php",
			data: {deger:sinif}
		})
		return false;
	})
	
});