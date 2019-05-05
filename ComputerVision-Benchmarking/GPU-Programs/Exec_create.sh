g++ houghlines.cpp -o houghlines `pkg-config --cflags --libs opencv` -lopencv_gpu
g++ cascadeclassifier.cpp -o cascadeclassifier `pkg-config --cflags --libs opencv` -lopencv_gpu
