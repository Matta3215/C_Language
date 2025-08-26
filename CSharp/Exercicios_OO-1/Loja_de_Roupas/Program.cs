namespace Loja_de_Roupas
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Loja l1 = new Loja("Safe", "0001");
            Produto p1 = new Produto("Vara", 20, 30);
            Produto p2 = new Produto("Bastao", 35.5, 25);
            Produto p3 = new Produto("Raquete", 45, 50);

            

            l1.AdicionarProduto(p1);
            l1.AdicionarProduto(p2);
            l1.AdicionarProduto(p3);

            int i = 0;
            Console.WriteLine(" ");
            foreach (Produto produtos in l1.ObterProdutos())
            {
                Console.WriteLine($"P{i+1}: {produtos.ValorTotal()}");
                i++;
            }
            Console.WriteLine(" ");
        }
    }
}
