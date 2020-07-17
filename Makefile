all:
	g++ -o build/app src/main.cpp -lglfw -lGL
	build/app

clean:
	rm -rf build/*
