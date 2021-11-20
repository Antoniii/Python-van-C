#include <Python.h>

void 
python() {
    // Загрузка интерпретатора Python
    Py_Initialize();

    // Выполнение команд в интерпретаторе
    // Загрузка модуля sys
    PyRun_SimpleString("import sys");

    // Подключаем наши исходники python # прописываем путь до папки, где лежит python-модуль
    PyRun_SimpleString("sys.path.append('/home/tony/Files/C+Python/Python_from_C/')");
    PyRun_SimpleString("import canny");
    
    // Выгрузка интерпретатора Python
    Py_Finalize();  
}

void main() {
    puts("Test:");

    python();
}

// gcc hard.c $(python3-config --includes --ldflags) -o hard && ./hard