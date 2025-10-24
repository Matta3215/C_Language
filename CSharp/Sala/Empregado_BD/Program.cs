using Microsoft.Data.SqlClient;

namespace DBAutorLivro1x1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            SqlConnection? conexao = null;

            string URL = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=DBAutorLivro1x1;Integrated Security=True;Connect Timeout=30;Encrypt=False;Trust Server Certificate=False;Application Intent=ReadWrite;Multi Subnet Failover=False";

            try
            {
                conexao = new(URL);
                conexao.Open();
                Console.WriteLine("Conexao OK");
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                Console.WriteLine("Conexao NOT OK");
            }

            if (conexao != null)
            {
                Autor autor = new("Vinicius");
                //Salvar(autor, conexao);

                autor.Id = 1;

                Livro livro = new("POO2", autor);
                Salvar(livro, conexao);
            }

            conexao?.Close();
        }
    }
}
