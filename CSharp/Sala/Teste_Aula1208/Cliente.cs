using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Teste_Aula1208
{
    internal class Cliente
    {
        public string Nome { get; set; }

        public string Endereco { get; set; }

        public string Cpf { get; set; }

        public Cliente(string nome, string endereco, string cpf)
        {
            Nome = nome;
            Endereco = endereco;
            Cpf = cpf;
        }
    }
}
