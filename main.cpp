#include <QApplication>
#include "Daruin.h"

int main(int argc , char** argv){
	QApplication* app = new QApplication(argc , argv);
	Daruin* daruin = new Daruin;

	daruin->resize(800 , 600);
	daruin->move(300 , 100);
	daruin->show();

	app->exec();

	delete daruin;
	delete app;

	return 0;
}