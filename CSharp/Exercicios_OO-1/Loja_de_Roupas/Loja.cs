using System;

public class Loja
{
    public string Nome { get; set; }
    public string Cnpj { get; set; }
    List<Produto> lista_produtos = new();

	public Loja(string nome, string cnpj)
	{
		Nome = nome;
		Cnpj = cnpj;
	}

	public void AdicionarProduto(Produto produto)
	{
		lista_produtos.Add(produto);
	}

    public List<Produto> ObterProdutos()
    {
        return lista_produtos;
    }
}
