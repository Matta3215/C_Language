using System;

public class Conta
{
	public double Saldo { get; set; }

	public int Numero { get; set; }

	public Cliente Dono { get; set; }

	public Conta(double saldo, int numero, Cliente dono)
	{
		Saldo = saldo;
		Numero = numero;
		Dono = dono;
	}

	public bool saca(double valor)
	{
		if (valor <= Saldo)
		{
			Saldo -= valor;
			return true;
		}
		else
		{
            Console.WriteLine("Valor ultrapassa o saldo da conta.");
            return false;
		}
	}

	public void deposita(double valor)
	{
		Saldo += valor;
	}

	public void transfere(Conta destino, double valor)
	{
		if (valor <= Saldo)	
        {
			destino.Saldo += valor;
		}
		else
		{
            Console.WriteLine("Valor ultrapassa o saldo da conta.");
        }
	}

	public bool verificarTransacao(double valor)
	{
        if (valor <= Saldo)
		{
			return true;
		}
		else
		{
			return false;
		}

    }

}
