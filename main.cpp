#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/imgproc.hpp>

using namespace cv;

void integrantes(){
    std::cout<<"-----------------------------------------"<<std::endl;
    std::cout<<"Integrantes:"<<std::endl;
    std::cout<<"Diego Ahumanda Moreno"<<std::endl;
    std::cout<<"Brandon Corman Genovez"<<std::endl;
    std::cout<<"Lukas Jara Marin"<<std::endl;
    std::cout<<"-----------------------------------------"<<std::endl;
}

int main( int argc, char** argv ) {
    integrantes();

    // argv[1] - ubicación de la imagen
    char* imagePath = argv[1];

    // crea un objeto MAT para la imagen de entrada
    Mat image;

    // carga la imagen
    image = imread(imagePath, 1);

    if( argc != 3 || !image.data ) {
        std::cout << " No existe la imagen \n ";
        return -1;
    }

    // crea un objeto MAT para el resultado
    Mat color;

    // convierte la imagen
    cvtColor( image, color, COLOR_BGR2Luv);

    // guarda el reultado
    imwrite( argv[2], color );

    return 0;
}
