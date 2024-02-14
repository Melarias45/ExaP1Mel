#include <bits/stdc++.h>

using namespace std; 

class Rectangulo{
private: 
    int ancho; 
    int altura; 

public: 
    int esquinaX; 
    int esquinaY; 

    Rectangulo(); 
    Rectangulo (int x, int y); 
    Rectangulo (int x, int y, int w, int h);
    int getAncho(); 
    void setAncho(int w); 
    int getAltura(); 
    void setAltura(int h);
    int getArea(); 
    void intersecta(Rectangulo rect);   

}; 

int main(){

    Rectangulo r1; 
    r1.setAncho(15); 
    r1.setAltura(5); 
    r1.esquinaX=2; 
    r1.esquinaY=5; 
    cout<<"El area del primer rectangulo es: "<<r1.getArea(); 
    cout<<endl; 

    Rectangulo r2 (3,5); 
    cout<<"El area del segundo rectangulo es: "<<r2.getArea(); 
    cout<<endl; 

    Rectangulo r3 (4,5,12,6); 
    cout<<"El area del tercer rectangulo es: "<<r3.getArea(); 
    cout<<endl; 

    cout<<"Rectangulo 1 y 2: "<<endl; 
    r1.intersecta(r2); 

    cout<<"Rectangulo 1 y 3: "<<endl; 
    r1.intersecta(r3); 

    cout<<"Rectangulo 2 y 3: "<<endl; 
    r2.intersecta(r3); 



    return 0; 
}

Rectangulo::Rectangulo(){
    ancho=0; 
    altura=0; 
    esquinaX=0; 
    esquinaY=0; 

}; 

Rectangulo::Rectangulo (int x, int y){
    ancho=0; 
    altura=0; 
    esquinaX=x;
    esquinaY=y;  
}; 

Rectangulo::Rectangulo (int x, int y, int w, int h){
    if(w>0)
        ancho=w; 
    else{
        ancho=0; 
    }
    
    if(h>0)
        altura=h; 
    else{
        altura=0; 
    }
    
    esquinaX=x; 
    esquinaY=y; 

};

int Rectangulo::getAncho(){
    return ancho; 
}; 

void Rectangulo::setAncho(int w){
    if (w>0)
        ancho=w; 
    else{
        ancho=0; 
    }
};

int Rectangulo::getAltura(){
    return altura; 
}; 

void Rectangulo::setAltura(int h){
    if (h>0)
        altura=h; 
    else{
        altura=0; 
    }
};

int Rectangulo::getArea(){
    return ancho*altura; 
}; 

void Rectangulo::intersecta(Rectangulo rect){
    if(esquinaX<=(rect.esquinaX+rect.ancho)&&(esquinaX+ancho)>=rect.esquinaX&&esquinaY<=(rect.esquinaY+rect.altura)&&(esquinaY+altura)>=rect.esquinaY){
        cout<<"los rectangulos intersectan!"<<endl; 
    }
    else{
        cout<<"los rectangulos no intersectan"<<endl; 
    }
};   