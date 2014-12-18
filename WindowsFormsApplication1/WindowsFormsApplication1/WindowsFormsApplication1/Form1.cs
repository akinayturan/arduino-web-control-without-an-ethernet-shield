using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
        timer1.Interval = 1000;
        timer1.Enabled = true;
        serialPort1.Close();
        serialPort1.PortName = "com3";
        serialPort1.BaudRate = 9600;
        serialPort1.DataBits = 8;
        serialPort1.Parity = Parity.None;
        serialPort1.StopBits = StopBits.One;
        serialPort1.Handshake = Handshake.None;
        serialPort1.Encoding = System.Text.Encoding.Default;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
           serialPort1.Open();
           string adres = "http://demo3.evrenselpaylasim.com/kod.txt";
             System.Net.WebClient veri= new System.Net.WebClient();
            veri.Headers.Add(System.Net.HttpRequestHeader.UserAgent, "UserAgent");
            veri.Headers.Add(System.Net.HttpRequestHeader.Accept, "Acept");
            string gelen = veri.DownloadString(adres);
            textBox1.Text = gelen;
            serialPort1.Write(gelen);
            serialPort1.Close();
        }


    }
}
