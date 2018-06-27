Action()
{

	web_add_header("UA-CPU", 
		"AMD64");


	web_set_sockets_option("SSL_VERSION", "2&3");
	
lr_start_transaction("google");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("google", LR_AUTO);

	return 0;
}