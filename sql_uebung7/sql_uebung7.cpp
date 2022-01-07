/*

a) Berechnen Sie die Durchschnittsgeschwindigkeit von PC’s!
	select avg(speed)
	from pc





b) Wie ist die durchschnittliche Geschwindigkeit von Laptops für mehr als 2500 EURO?

	select avg(preis)
	from produkt,laptop
	where laptop.modell = produkt.modell
	and preis > 2500






c) Welches sind die Drucker mit dem höchsten Preis?
	select produkt.modell
	from Drucker,produkt
	where produkt.modell = Drucker.modell
	and preis = (select max(preis)
					 from produkt,Drucker
					where produkt.modell = Drucker.modell )







d) Welche Laptops sind langsamer als alle PC’s?
	select*
	from laptop
	where laptop.speed < all (select speed from PC)






e) Gesucht ist der Durchschnittspreis von PC’s, die vom Hersteller A hergestellt werden.

	select avg(preis)
	from produkt
	where typ = "PC" and hersteller = 'A'






f) Berechnen Sie für jede unterschiedliche Geschwindigkeit den Durchschnittspreis der zugehörigen PC’s!

	select speed,avg(preis)
	from pc,produkt
	where pc.modell = produkt.modell
	group by speed








g) Wie lautet die Modellnummer des Produktes (PC, Laptop oder Drucker) mit dem höchsten Preis?

	select modell
	from produkt
	where preis = (select max(preis)
				   from produkt)








h) Wer ist der Hersteller des billigsten Farbdruckers?
	select hersteller
	from produkt,Drucker
	where produkt.modell = Drucker.modell
	and preis = (select min(preis)
				from produkt,Drucker
				where produkt.modell = Drucker.modell
				and farbe = 1)
	and farbe = 1







i) Bestimmen Sie für jeden Hersteller, wie groß im Mittel der Bildschirm seiner Laptops ist!
	select hersteller,avg(bildschirm)
	from produkt,laptop
	where produkt.modell = laptop.modell
	group by hersteller








j) Gesucht sind die Hersteller, die mindestens drei verschiedene PC-Modelle produzieren.
	select hersteller from produkt
	where typ = 'PC'
	group by hersteller
	having count(modell) >= 3








k) Bestimmen Sie für jeden Hersteller den maximalen Preis seiner PC’s!
	select hersteller,max(preis)
	from produkt
	where typ = 'PC'
	group by hersteller






l) Bestimmen Sie pro PC-Geschwindigkeit über 150 den zugehörigen Durchschnittspreis!
	select speed,avg(preis) from produkt,PC
	where Produkt.modell = PC.modell
	and speed > 150
	group by speed

	Alternativ:
	(select speed,avg(preis) from produkt,PC
	where Produkt.modell = PC.modell
	group by speed)

	MINUS

	(select speed,avg(preis) from produkt,PC
	where Produkt.modell = PC.modell
	and speed <= 150
	group by speed)





m) Gesucht ist die mittlere Plattengröße solcher PC’s, die von Herstellern produziert werden, die auch Drucker produzieren!

	select avg(cd)
	from PC,produkt
	where PC.modell = produkt.modell
	and hersteller in (select hersteller
					   from produkt
						where typ = 'Drucker')



*/
