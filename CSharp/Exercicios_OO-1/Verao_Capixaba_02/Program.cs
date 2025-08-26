namespace Verao_Capixaba_02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            float media = 0;
            int i = 0;
            while (i < 15)
            {
                Console.WriteLine($"Digite a temperatura do {i + 1}º dia: ");
                int temperatura = int.Parse(Console.ReadLine());
                if (temperatura > 28)
                {
                    media += temperatura;
                    i++;
                }
                else
                {
                    Console.WriteLine("Temperatura inválida");
                }
            }
            Console.WriteLine($"Média da temperatura: {(media / i):F2}");
        }
    }
}
