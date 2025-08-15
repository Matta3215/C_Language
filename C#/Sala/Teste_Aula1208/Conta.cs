using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Teste_Aula1208
{
    internal class Conta
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

        public bool Saca(double valor)
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

        public void Deposita(double valor)
        {
            Saldo += valor;
        }

        public void Transfere(Conta destino, double valor)
        {
            if (VerificarTransacao(valor) == true)
            {
                destino.Saldo += valor;
                Saldo -= valor;
            }
            else
            {
                Console.WriteLine("Valor ultrapassa o saldo da conta.");
            }
        }

        public bool VerificarTransacao(double valor)
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
}
