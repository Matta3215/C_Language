namespace Teste_Aula1208
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Cliente cl1 = new Cliente("Arthur", "Vitoria", "00011122233");
            Conta c1 = new Conta(10000, 001, cl1);
            Cliente cl2 = new Cliente("Daniel", "Murad", "gaygaygaygay");
            Conta c2 = new Conta(5000, 002, cl2);

            c1.Saca(1000);
            Console.WriteLine("O Saldo é: " + c1.Saldo);

            c1.Deposita(6000);
            Console.WriteLine("O Saldo é: " + c1.Saldo);

            c2.Transfere(c1, 6000);
            Console.WriteLine("O Saldo do Sigma é: " + c1.Saldo);
            Console.WriteLine("O Saldo do Beta é: " + c2.Saldo);
        }
    }
}
