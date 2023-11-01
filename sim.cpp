#include <iostream>
#include <string>

using namespace std;

int multiplicacao(int num1, int num2);
int multiplicarPont(int *num1, int *num2);
int somar10(int num1);
int somar10pont(int *num1);
int diminuir5(int num1);
int diminuir5pont(int *num1);
void inverterVetor(int vetor[], int tamanho);
void converterParaMaiusculas(string &texto);

int main(){
    int num1, num2, tamanho;
    string palavra;

    cin >> num1 >> num2;
    cout << multiplicacao(num1, num2) << endl;

    cin >> num1 >> num2;
    cout << multiplicarPont(&num1, &num2) << endl;

    cin >> num1;
    cout << somar10(num1) << endl;

    cin >> num1;
    cout << somar10pont(&num1) << endl;

    cin >> num1;
    cout << diminuir5(num1) << endl;

    cin >> num1;
    cout << diminuir5pont(&num1) << endl;

    cin >> tamanho;
    int vetor[tamanho];
    for(int i=0; i<tamanho; i++){
        cin >> vetor[i];
    }
    inverterVetor(vetor, tamanho);
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    string minhaString;
    cin >> minhaString;
    converterParaMaiusculas(minhaString);
    cout << minhaString << endl;

}

int multiplicacao(int num1, int num2){
    return num1 * num2;
}

int multiplicarPont(int *num1, int *num2){
    return (*num1) * (*num2);
}

int somar10(int num1){
    return num1 + 10;
}

int somar10pont(int *num1){
    return *num1 + 10;
}

int diminuir5(int num1){
    return num1 - 5;
}

int diminuir5pont(int *num1){
    return *num1 - 5;
}

void inverterVetor(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; ++i) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

void converterParaMaiusculas(string &texto){
    for (char &c : texto) {
        if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A');
        }
    }
}