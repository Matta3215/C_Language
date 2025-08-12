namespace Exercicio_08_08
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Cliente cl1 = new Cliente("Arthur", "Vitoria", "00011122233");
            Conta c1 = new Conta(10000,001,cl1);

            c1.saca(1000);
            Console.WriteLine("O Saldo é: ");
        }
    }
}
