namespace FrmConversoes
{
    partial class frmConversor
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.cbescolha = new System.Windows.Forms.ComboBox();
            this.txtnum = new System.Windows.Forms.TextBox();
            this.lblresultado = new System.Windows.Forms.Label();
            this.btnconverter = new System.Windows.Forms.Button();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.Decimal = new System.Windows.Forms.CheckBox();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // cbescolha
            // 
            this.cbescolha.FormattingEnabled = true;
            this.cbescolha.Items.AddRange(new object[] {
            "Binario_Decimal",
            "Decimal _Binario",
            "Decimal_Octal"});
            this.cbescolha.Location = new System.Drawing.Point(12, 12);
            this.cbescolha.Name = "cbescolha";
            this.cbescolha.Size = new System.Drawing.Size(121, 21);
            this.cbescolha.TabIndex = 0;
            // 
            // txtnum
            // 
            this.txtnum.Location = new System.Drawing.Point(68, 62);
            this.txtnum.Name = "txtnum";
            this.txtnum.Size = new System.Drawing.Size(159, 20);
            this.txtnum.TabIndex = 1;
            // 
            // lblresultado
            // 
            this.lblresultado.AutoSize = true;
            this.lblresultado.Location = new System.Drawing.Point(134, 156);
            this.lblresultado.Name = "lblresultado";
            this.lblresultado.Size = new System.Drawing.Size(9, 13);
            this.lblresultado.TabIndex = 2;
            this.lblresultado.Text = "l";
            // 
            // btnconverter
            // 
            this.btnconverter.Location = new System.Drawing.Point(112, 88);
            this.btnconverter.Name = "btnconverter";
            this.btnconverter.Size = new System.Drawing.Size(75, 23);
            this.btnconverter.TabIndex = 3;
            this.btnconverter.Text = "Converter";
            this.btnconverter.UseVisualStyleBackColor = true;
            this.btnconverter.Click += new System.EventHandler(this.btnconverter_Click);
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.Location = new System.Drawing.Point(13, 172);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(120, 95);
            this.listBox1.TabIndex = 4;
            // 
            // Decimal
            // 
            this.Decimal.AutoSize = true;
            this.Decimal.Location = new System.Drawing.Point(280, 36);
            this.Decimal.Name = "Decimal";
            this.Decimal.Size = new System.Drawing.Size(64, 17);
            this.Decimal.TabIndex = 5;
            this.Decimal.Text = "Decimal";
            this.Decimal.UseVisualStyleBackColor = true;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(150, 208);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(159, 20);
            this.textBox1.TabIndex = 6;
            // 
            // frmConversor
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(383, 285);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.Decimal);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.btnconverter);
            this.Controls.Add(this.lblresultado);
            this.Controls.Add(this.txtnum);
            this.Controls.Add(this.cbescolha);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.Name = "frmConversor";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Conversor";
            this.Load += new System.EventHandler(this.frmConversor_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox cbescolha;
        private System.Windows.Forms.TextBox txtnum;
        private System.Windows.Forms.Label lblresultado;
        private System.Windows.Forms.Button btnconverter;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.CheckBox Decimal;
        private System.Windows.Forms.TextBox textBox1;

    }
}

