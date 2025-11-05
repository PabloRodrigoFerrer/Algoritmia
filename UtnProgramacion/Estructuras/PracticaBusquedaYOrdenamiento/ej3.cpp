#include <iostream>

using namespace std;

struct Producto
{
    int codigo;
    int stock;
};

struct Pedido
{
    int numeroPedido;
    long numeroCliente;
    int codigoProducto;
    int cantidadPedida;
};

void OrdenarMejorado(Producto vec[], int n)
{
    int i = 0;
    bool ordenado = false;
    Producto aux;
    while (i < n && !ordenado)
    {
        ordenado = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j].codigo > vec[j + 1].codigo)
            {
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

int BuscarBinario(Producto vec[], int n, int valor)
{
    int i = 0, inicio = 0, final = n - 1, medio;

    while (final >= inicio)
    {
        medio = inicio + (final - inicio) / 2;

        if (vec[medio].codigo == valor)
            return medio;

        if (vec[medio].codigo > valor)
            final = medio - 1;
        else
            inicio = medio + 1;

        i++;
    }

    return -1;
}

int main()
{
    int pos = 0, contadorInsatisfechos = 0, contadorSatisfechos = 0, indice;
    Producto productos[100] = {
        {10000005, 80},
        {10000006, 22},
        {10000007, 34},
        {10000008, 46},
        {10000009, 68},
        {10000010, 79},
        {10000011, 23},
        {10000012, 35},
        {10000013, 47},
        {10000014, 69},
        {10000015, 78},
        {10000016, 24},
        {10000017, 36},
        {10000018, 48},
        {10000019, 70},
        {10000020, 77},
        {10000021, 25},
        {10000022, 37},
        {10000023, 49},
        {10000024, 71},
        {10000025, 76},
        {10000026, 26},
        {10000027, 38},
        {10000001, 21},
        {10000002, 33},
        {10000003, 45},
        {10000004, 67},
        {10000028, 50},
        {10000029, 72},
        {10000030, 75},
        {10000031, 27},
        {10000032, 39},
        {10000033, 51},
        {10000034, 73},
        {10000035, 74},
        {10000036, 28},
        {10000037, 40},
        {10000038, 52},
        {10000039, 74},
        {10000040, 73},
        {10000041, 29},
        {10000042, 41},
        {10000043, 53},
        {10000044, 72},
        {10000045, 71},
        {10000046, 30},
        {10000047, 42},
        {10000048, 54},
        {10000049, 70},
        {10000050, 69},
        {10000051, 31},
        {10000052, 43},
        {10000053, 55},
        {10000054, 68},
        {10000055, 67},
        {10000056, 32},
        {10000057, 44},
        {10000058, 56},
        {10000074, 60},
        {10000075, 59},
        {10000076, 36},
        {10000077, 48},
        {10000078, 60},
        {10000079, 58},
        {10000080, 57},
        {10000081, 37},
        {10000082, 49},
        {10000083, 61},
        {10000084, 56},
        {10000085, 55},
        {10000086, 38},
        {10000059, 66},
        {10000060, 65},
        {10000061, 33},
        {10000062, 45},
        {10000063, 57},
        {10000064, 64},
        {10000065, 63},
        {10000066, 34},
        {10000067, 46},
        {10000068, 58},
        {10000069, 62},
        {10000089, 54},
        {10000090, 53},
        {10000091, 39},
        {10000092, 51},
        {10000093, 63},
        {10000094, 52},
        {10000095, 51},
        {10000070, 61},
        {10000071, 35},
        {10000072, 47},
        {10000073, 59},
        {10000087, 50},
        {10000088, 62},
        {10000096, 40},
        {10000097, 52},
        {10000098, 64},
        {10000099, 50},
        {10000100, 49},
    };

    Pedido pedidos[20] = {
        {101, 1001, productos[0].codigo, 120},
        {102, 1002, productos[10].codigo, 25},
        {103, 1003, productos[23].codigo, 60},
        {104, 1004, productos[4].codigo, 5},
        {105, 1005, productos[4].codigo, 80},
        {106, 1006, productos[99].codigo, 45},
        {107, 1007, productos[85].codigo, 30},
        {108, 1008, productos[7].codigo, 90},
        {109, 1009, productos[8].codigo, 10},
        {110, 1010, productos[9].codigo, 100},
        {111, 1011, productos[10].codigo, 55},
        {112, 1012, productos[11].codigo, 40},
        {113, 1013, productos[12].codigo, 70},
        {114, 1014, productos[13].codigo, 20},
        {115, 1015, productos[50].codigo, 95},
        {116, 1016, productos[15].codigo, 35},
        {117, 1017, productos[45].codigo, 18},
        {118, 1018, productos[17].codigo, 99},
        {119, 1019, productos[60].codigo, 65},
        {120, 1020, productos[19].codigo, 77}};

    Pedido pedidosInsatisfechos[100];
    Pedido pedidosSatisfechos[100];

    // ordenar y buscar posición y buscar codigo por busqueda binaria..

    OrdenarMejorado(productos, 100);

    for (int i = 0; i < 20; i++)
    {
        indice = BuscarBinario(productos, 100, pedidos[i].codigoProducto);
        if (productos[indice].stock >= pedidos[i].cantidadPedida)
        {
            productos[indice].stock -= pedidos[i].cantidadPedida;
            pedidosSatisfechos[contadorSatisfechos] = pedidos[i];
            contadorSatisfechos++;
        }
        else
        {
            pedidosInsatisfechos[contadorInsatisfechos] = pedidos[i];
            contadorInsatisfechos++;
        }
    }

    // muestro resultados
    cout << "PEDIDOS SATISFECHOS" << endl;
    cout << "Numero Pedido\t Numero Cliente\t Codigo Producto \t Cantidad " << endl;
    for (int i = 0; i < contadorSatisfechos; i++)
    {
        cout << pedidosSatisfechos[i].numeroPedido << "\t\t\t";
        cout << pedidosSatisfechos[i].numeroCliente << "\t\t\t";
        cout << pedidosSatisfechos[i].codigoProducto << "\t\t\t";
        cout << pedidosSatisfechos[i].cantidadPedida << "\n";
    }

    cout << "\nPEDIDOS INSATISFECHOS" << endl;
    cout << "Numero Pedido\t Numero Cliente\t Codigo Producto \t Cantidad " << endl;
    for (int i = 0; i < contadorInsatisfechos; i++)
    {
        cout << pedidosInsatisfechos[i].numeroPedido << "\t\t\t";
        cout << pedidosInsatisfechos[i].numeroCliente << "\t\t\t";
        cout << pedidosInsatisfechos[i].codigoProducto << "\t\t\t";
        cout << pedidosInsatisfechos[i].cantidadPedida << "\n";
    }

    // imprimo stock actual..

    for (int i = 0; i < 100; i++)
    {
        cout << productos[i].codigo << ": " << productos[i].stock << endl;
    }

    return 0;
}
