Action()
{

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("favicon.ico", 
		"URL=http://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("gen_204", 
		"URL=https://www.google.com/gen_204?s=webaft&atyp=csi&ei=udwzW7zMPICR0PEPhd22iAg&rt=wsrt.1665,aft.1098,prt.1098", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/xjs/_/js/k=xjs.s.en_US.EJn3JxysB74.O/m=sx,sb,cdos,cr,elog,hsm,jsa,r,d,csi/am=IIvIfPoAkP-nYCBRwApGWGACBUME/rt=j/d=1/dg=0/rs=ACT90oGG6rI3Rk97GG87PsPI9GE4ByLK_Q", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=/textinputassistant/tia.png", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=/xjs/_/js/k=xjs.s.en_US.EJn3JxysB74.O/m=aa,abd,async,dvl,foot,fpe,ifl,ipv6,lu,m,mu,sf,d3l/am=IIvIfPoAkP-nYCBRwApGWGACBUME/rt=j/d=1/exm=sx,sb,cdos,cr,elog,hsm,jsa,r,d,csi/ed=1/dg=0/rs=ACT90oGG6rI3Rk97GG87PsPI9GE4ByLK_Q?xjs=s1", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://ssl.gstatic.com/gb/images/i1_1967ca6a.png", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		LAST);

	return 0;
}