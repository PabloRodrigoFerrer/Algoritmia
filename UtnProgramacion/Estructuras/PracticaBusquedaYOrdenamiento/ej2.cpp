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
    char codigoProducto[3];
    int cantidadPedida;
};

int buscarPosicionPorCodigo(int codigo, Producto vectorDondeBuscar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vectorDondeBuscar[i].codigo == codigo)
        {
            return i;
            break;
        }
    }

    return -1
}

int main()
{
    int pos = 0, contadorInsatisfechos = 0, contadorSatisfechos = 0;
    int productos[100];
    Pedido pedidos[];
    Pedido pedidosInsatisfechos[];
    Pedido pedidosSatisfechos[];

    // actualizar campo stock de productos

    for (int i = 0; i < 100; i++)
    {
        pos = int(pedidos[i].codigoProducto) - 1;

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
        cout << pedidosSatisfechos[i].numeroPedido << "\t";
        cout << pedidosSatisfechos[i].numeroCliente << "\t";
        cout << pedidosSatisfechos[i].codigoProducto << "\t";
        cout << pedidosSatisfechos[i].cantidadPedida << "\n";
    }

    return 0;
}
