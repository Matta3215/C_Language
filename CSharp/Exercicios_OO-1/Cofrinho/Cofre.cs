using System;

public class Cofre
{
	List<Moeda> cofrinho = new();
	
	public Cofre() 
	{

	}
	
	public void AdicionarMoedas(Moeda m)
	{
		cofrinho.Add(m);
	}

	public double CalcularTotal()
	{
		double total = 0;
		foreach (Moeda m in cofrinho)
		{
			total += m.Valor;	
		}
		return total;
	}

	public int CalcularTamanho()
	{
		return cofrinho.Count;
	}

	public void MoedaMaior()
	{
		string nome_moeda = "Nenhuma"; ;
		double maior = 0;
        foreach (Moeda m in cofrinho)
        {
           if (m.Valor > maior)
			{
				maior = m.Valor;
				nome_moeda = m.Nome;
			}
        }
		Console.WriteLine($"A moeda de maior valor é: {nome_moeda}");
    }

	public void DeterminadoValor(double valor)
	{
		int qnt_moedas = 0;
        foreach (Moeda m in cofrinho)
		{
			if (m.Valor == valor)
			{
				qnt_moedas++;
			}
		}
        Console.WriteLine($"Existem {qnt_moedas} moedas de valor: {valor}");
    }
}
