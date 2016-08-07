using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace FrmConversoes
{
    public partial class frmConversor : Form
    {
        public frmConversor()
        {
            InitializeComponent();
        }

        private void btnconverter_Click(object sender, EventArgs e)
        {
            int escolha;
            int i = 0, j, cont = 0;
            String[] vet ;
            vet = new String[20];
            escolha = Int16.Parse(txtnum.Text);
            StringBuilder sb = new StringBuilder();
            if (Decimal.Checked)
            {               
                do
                {
                    if (escolha % 2 == 0)
                    {
                        vet[i] = "0";
                        cont += 1; ;
                        i += 1;
                       
                    }
                    else 
                    {
                        vet[i] = "1";
                        cont += 1;
                        i += 1;
                
                    }
                    escolha = escolha / 2;
                } while (escolha != 0);
                for (j = i - 1; j >= 0; j--) {
                    textBox1.Text = vet[i].ToString();
                }
                

            }
        }

        private void frmConversor_Load(object sender, EventArgs e)
        {

        }
    }
}
