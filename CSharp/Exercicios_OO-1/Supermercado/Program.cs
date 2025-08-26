namespace Supermercado
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            double total = 0, valor_A = 0, valor_H = 0, valor_L = 0;
            while (i < 5)
            {
                Console.WriteLine($"Digite o valor da {i + 1}ª mercadoria junto com seu código separados por espaço: ");
                Console.WriteLine("[L] : limpeza\n[A] : alimentação\n[H] : higiene");

                string entrada = Console.ReadLine(); // Lê a linha inteira
                string[] partes = entrada.Split(' ');

                if (partes.Length == 2) // Garante que o usuário digitou 2 coisas
                {
                    double valor = double.Parse(partes[0]); // Primeiro item é o valor
                    string codigo = partes[1].ToUpper();   // Segundo item é o código (força maiúsculo)

                    if (codigo == "A" || codigo == "H" || codigo == "L")
                    {
                        total += valor;
                        switch (codigo)
                        {
                            case "A":
                                valor_A += valor;
                                break;

                            case "H":
                                valor_H += valor;
                                break;

                            case "L":
                                valor_L += valor;
                                break;

                            default:
                                break;
                        }
                        Console.WriteLine($"Valor: R$ {valor:F2} | Código: {codigo}\n");
                        i++;
                    }
                    else
                    {
                        Console.WriteLine("\nEntrada inválida! Digite A, H ou L como código\n");
                    }
                }
                else
                {
                    Console.WriteLine("\nEntrada inválida! Digite no formato: (preço) (código)\n");
                }
            }
                Console.WriteLine($"Valor Total: R$ {total:F2}\n");
                Console.WriteLine($"Valor Total das mercádorias de higiene: R$ {valor_H:F2}\n");
                Console.WriteLine($"Valor Total das mercádorias de limpeza: R$ {valor_L:F2}\n");
                Console.WriteLine($"Valor Total das mercádorias de alimentação: R$ {valor_A:F2}\n");
        }
    }
}
