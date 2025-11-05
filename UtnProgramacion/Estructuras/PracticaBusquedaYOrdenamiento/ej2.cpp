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

int buscarPosicionPorCodigo(int codigo, Producto vectorDondeBuscar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vectorDondeBuscar[i].codigo == codigo)
            return i;
    }

    return -1;
}

int main()
{
    int pos = 0, contadorInsatisfechos = 0, contadorSatisfechos = 0;
    int productos[100] = {
        20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
        30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
        40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
        50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
        60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
        70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
        80, 20, 21, 22, 23, 24, 25, 26, 27, 28,
        29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
        39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 58};

    Pedido pedidos[20] = {
        {101, 1001, 44, 12},
        {102, 1002, 87, 25},
        {103, 1003, 12, 60},
        {104, 1004, 99, 5},
        {105, 1005, 33, 80},
        {106, 1006, 7, 45},
        {107, 1007, 65, 30},
        {108, 1008, 21, 90},
        {109, 1009, 50, 10},
        {110, 1010, 76, 100},
        {111, 1011, 3, 55},
        {112, 1012, 88, 40},
        {113, 1013, 14, 70},
        {114, 1014, 61, 20},
        {115, 1015, 39, 95},
        {116, 1016, 25, 35},
        {117, 1017, 97, 18},
        {118, 1018, 42, 99},
        {119, 1019, 10, 65},
        {120, 1020, 58, 77}};
    Pedido pedidosInsatisfechos[100];
    Pedido pedidosSatisfechos[100];

    // actualizar campo stock de productos
    for (int i = 0; i < 20; i++)
    {
        pos = (pedidos[i].codigoProducto - 1);

        if (productos[pos] >= pedidos[i].cantidadPedida)
        {
            productos[pos] -= pedidos[i].cantidadPedida;
            pedidosSatisfechos[contadorSatisfechos] = pedidos[i];
            contadorSatisfechos++;
        }
        else
        {
            pedidosInsatisfechos[contadorInsatisfechos] = pedidos[i];
            contadorInsatisfechos++;
        }
    }

    // muestro pedidos satisfechos
    cout << "Pedidos Satisfechos" << endl;
    cout << "Numero pedido \tNum cliente: \t Codigo producto: \t Cantidad Pedida" << endl;
    for (int i = 0; i < contadorSatisfechos; i++)
    {
        cout << pedidosSatisfechos[i].numeroPedido << "\t\t\t";
        cout << pedidosSatisfechos[i].numeroCliente << "\t\t\t";
        cout << pedidosSatisfechos[i].codigoProducto << "\t\t\t";
        cout << pedidosSatisfechos[i].cantidadPedida << "\n";
    }

    cout << "\nPedidos Insatisfechos" << endl;
    cout << "Numero pedido \tNum cliente: \t Codigo producto: \t Cantidad Pedida" << endl;
    for (int i = 0; i < contadorInsatisfechos; i++)
    {
        cout << pedidosInsatisfechos[i].numeroPedido << "\t\t\t";
        cout << pedidosInsatisfechos[i].numeroCliente << "\t\t\t";
        cout << pedidosInsatisfechos[i].codigoProducto << "\t\t\t";
        cout << pedidosInsatisfechos[i].cantidadPedida << "\n";
    }

    return 0;
}
