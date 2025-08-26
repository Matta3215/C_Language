using System;

public class Produto
{
    public string Nome { get; set; }
    public double Preco { get; set; }
    public int Estoque { get; set; }

    public Produto(string nome, double preco, int estoque)
	{
        this.Nome = nome;
        this.Preco = preco;
        this.Estoque = estoque;
	}

    public double ValorTotal()
    {
        return Preco * Estoque;
    }
}
