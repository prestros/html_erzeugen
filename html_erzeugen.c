// Programm zum Erzeugen einer einfachen HTML-Datei
// Autor: Fabian Prestros
// Datum: 22.08.2020
#include <stdio.h>

int main()
{
	FILE* fp;														// Parameter "fp" gibt den Pfad der Datei auf der Festplatte an

	fopen_s(&fp, "index.html", "w");								// ÷ffnen der Datei "index.html" zum Schreiben

	if (fp == NULL)
		printf("Datei konnte nicht geoeffnet werden.\n");
	
	else 
	{
		// HTML-Datei erstellen
		fprintf(fp, "<html>\n");
		fprintf(fp, "\t<head>\n");
		fprintf(fp, "\t\t<title>Titel der HTML-Datei</title>\n");
		fprintf(fp, "\t</head>\n");
		fprintf(fp, "\t<body>\n");
		fprintf(fp, "\t\tInhalt der HTML-Datei\n");
		fprintf(fp, "\t</body>\n");fprintf(fp, "</html>\n");

		printf("HTML-Datei wurde geschrieben.\n");					// Meldung, dass die HTML-Datei geschrieben wurde
	}
		fclose(fp);													// Schlieﬂen der erzeugten Datei
}