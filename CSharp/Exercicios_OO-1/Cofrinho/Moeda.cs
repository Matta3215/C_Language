using System;

public class Moeda
{
	public double Valor { get; set; }
	public string Nome { get; set; }
	
	public Moeda(double valor, string nome)
	{
		Valor = valor;
		Nome = nome;
	}
}
