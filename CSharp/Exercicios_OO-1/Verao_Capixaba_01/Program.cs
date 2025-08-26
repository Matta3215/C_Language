namespace Verao_Capixaba_01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double temp_convertida;
            Console.WriteLine("==MENU==\n [1] ºC -> ºF\n [2] ºF -> ºC\n [3] ºC -> K\n [4] K -> ºC");
            int n_temp  = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite a temperatura: ");
            double temperatura = double.Parse(Console.ReadLine());

            switch (n_temp)
            {
                case 1:
                    temp_convertida = temperatura * 1.8 + 32;
                    Console.WriteLine($"{temperatura} ºC equivale a {temp_convertida:F2} ºF");
                    break;
                case 2:
                    temp_convertida = (temperatura - 32) / 1.8;
                    Console.WriteLine($"{temperatura} ºF equivale a {temp_convertida:F2} ºC");
                    break;
                case 3:
                    temp_convertida = temperatura + 273.15;
                    Console.WriteLine($"{temperatura} ºC equivale a {temp_convertida:F2} K");
                    break;
                case 4:
                    temp_convertida = temperatura - 273.15;
                    Console.WriteLine($"{temperatura} K equivale a {temp_convertida:F2} ºC");
                    break;
                default:
                    Console.WriteLine("Opção inválida!");
                    break;
            }
        }
    }
}
