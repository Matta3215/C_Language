namespace Cofrinho
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Cofre c1 = new Cofre();
            Moeda m1 = new Moeda(125, "Doge");
            Moeda m2 = new Moeda(200, "Bit");
            Moeda m3 = new Moeda(125, "Exodus");

            c1.AdicionarMoedas(m1);
            c1.AdicionarMoedas(m2);
            c1.AdicionarMoedas(m3);

            Console.WriteLine($"\nQuantidade total de Moedas: {c1.CalcularTamanho()}");
            
            c1.DeterminadoValor(125);
            c1.MoedaMaior();
            
            Console.WriteLine($"Valor total das Moedas: {c1.CalcularTotal()}\n");
        }
    }
}
