namespace Google
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Palavra p1 = new Palavra("Esporte");
            
            Significado s1 = new Significado("Legal");
            Significado s2 = new Significado("Foda");
            Significado s3 = new Significado("Divertido");
            Significado s4 = new Significado("Explosivo");

            foreach (var s in new[] { s1, s2, s3, s4 })
            {
                p1.AdicionarSignificados(s);
            }

            p1.RemoverSignificados(s4);

            bool existe = p1.PesquisarSignificado("Legal");
            Console.WriteLine($"\nSignificado \"Legal\" existe? {existe}");


            existe = p1.PesquisarSignificado("Explosivo");
            Console.WriteLine($"Significado \"Explosivo\" existe? {existe}\n");
        }
    }
}
