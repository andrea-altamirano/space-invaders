

//OBJETIVO : INGREDIENTES


bin/test : bin/test.cpp
	g++ bin/test.cpp -o bin/test

ejecutar : bin/test
	./bin/test
hola : receta2
	echo Hola mundo
receta2 :
	echo receta2
	
