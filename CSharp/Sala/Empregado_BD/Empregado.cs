using System;

public class Empregado
{
    public int Matricula { get; set; }
    public string Cpf { get; set; }
    public string Nome { get; set; }
    public string Endereco { get; set; }
   
    public Empregado(int matricula, string cpf, string nome, string endereco)
    {
        Matricula = matricula;
        Cpf = cpf;
        Nome = nome;
        Endereco = endereco;
    }
    private static void Salvar(Livro livro, SqlConnection conexao)
    {
        //Console.WriteLine("== Salvando Empregado ==");

        var Cmd = conexao.CreateCommand();
        Cmd.CommandText = "INSERT INTO Empregado (Titulo) VALUES (@titulo)";
        Cmd.Parameters.Add(new SqlParameter("titulo", livro.Titulo));

        Cmd.ExecuteNonQuery();

        AtualizarTableAutor(livro.AutorDoLivro, conexao);

    }

    private static void AtualizarTableAutor(Autor autorDoLivro, SqlConnection conexao)
    {
        var Cmd = conexao.CreateCommand();

        int idLivroRecuperado = 0;
        Cmd.CommandText = "SELECT MAX(Id) FROM Livro";
        var resultado = Cmd.ExecuteReader();
        resultado.Read();
        idLivroRecuperado = resultado.GetInt32(0);
        resultado.Close();


        Cmd.CommandText = "UPDATE AUTOR SET Livro_IdLivro = @idMax WHERE Id = @idAutor";
        Cmd.Parameters.Add(new SqlParameter("idMax", idLivroRecuperado));
        Cmd.Parameters.Add(new SqlParameter("idAutor", autorDoLivro.Id));
        Cmd.ExecuteNonQuery();

    }


    private static void Salvar(Autor autor, SqlConnection conexao)
    {
        Console.WriteLine("== Salvando Autor ==");

        var Cmd = conexao.CreateCommand();
        Cmd.CommandText = "INSERT INTO Autor (Nome) VALUES (@nome)";
        Cmd.Parameters.Add(new SqlParameter("nome", autor.Nome));

        Cmd.ExecuteNonQuery();
    }
}
