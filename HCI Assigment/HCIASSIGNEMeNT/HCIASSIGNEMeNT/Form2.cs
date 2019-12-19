using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HCIASSIGNEMeNT
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
           // textBox4.Text = string.Format("{0:C}");
        }

        private void tabPage1_Click(object sender, EventArgs e)
        {

        }

        private void button8_Click(object sender, EventArgs e)
        {
            ListViewItem item = new ListViewItem(); //create a new record
            item.Text = textBox1.Text; //assign values for each column of the new record
            item.SubItems.Add(textBox2.Text);
            item.SubItems.Add(textBox3.Text);
            item.SubItems.Add(textBox4.Text);
            item.SubItems.Add(comboBox1.Text);
            item.SubItems.Add(comboBox2.Text);
            item.SubItems.Add(comboBox3.Text);
            item.SubItems.Add(comboBox4.Text);


            if(checkBox1.Checked)
            {
                item.SubItems.Add("Yes");
            }
            else
            {
                item.SubItems.Add("Yes");
            }

            listView1.Items.Add(item); 
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count == 0) //if nothing selected
                return;
            ListViewItem item = listView1.SelectedItems[0]; 
            item.SubItems[0].Text = textBox1.Text;
            item.SubItems[1].Text = textBox2.Text;
            item.SubItems[2].Text = textBox3.Text;
            item.SubItems[3].Text = textBox4.Text;
            item.SubItems[4].Text = comboBox1.Text;
            item.SubItems[5].Text = comboBox2.Text;
            item.SubItems[6].Text = comboBox3.Text;
            item.SubItems[7].Text = comboBox4.Text;
            item.SubItems[8].Text = checkBox1.Text;
        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {
            
                    if (listView1.SelectedItems.Count == 0) //if nothing selected
                    return;
                    ListViewItem item = listView1.SelectedItems[0]; 

                    textBox1.Text = item.SubItems[0].Text; //fill the Date field
                    textBox2.Text = item.SubItems[1].Text; //fill the Start field
                    textBox3.Text = item.SubItems[2].Text; //fill the End field
                    textBox4.Text = item.SubItems[3].Text;
                    comboBox1.Text = item.SubItems[4].Text;
                    comboBox2.Text = item.SubItems[5].Text;
                    comboBox3.Text = item.SubItems[6].Text;
                    comboBox4.Text = item.SubItems[7].Text;

            if (checkBox1.Checked)
            {
                 item.SubItems[8].Text = "Yes";
            }
            else
            {
                item.SubItems[8].Text = "No";
            }
            
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count == 0) //if nothing selected
                return;
            listView1.SelectedItems[0].Remove();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int tabIndex = tabControl1.SelectedIndex; //get current index of the selected tab
            if (tabIndex > 0) //this is not the first tab
            {
                tabIndex = tabIndex - 1;
                tabControl1.SelectedIndex = tabIndex;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int tabIndex = tabControl1.SelectedIndex; //get current index of the selected tab
            if (tabIndex < 6) //this is not the last tab
            {
                tabIndex = tabIndex + 1;
                tabControl1.SelectedIndex = tabIndex;
            }
        }

        private void toolStripButton2_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 0;
        }

        private void toolStripButton3_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 1;
        }

        private void toolStripButton1_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 2;
        }

        private void toolStripButton4_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 3;
        }

        private void toolStripButton5_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 4;
        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {

        }

        private void tabPage3_Click(object sender, EventArgs e)
        {

        }

        private void textBox9_TextChanged(object sender, EventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {
            ListViewItem items = new ListViewItem(); //create a new record
            items.Text = textBox5.Text; //assign values for each column of the new record
            items.SubItems.Add(comboBox5.Text);
            items.SubItems.Add(textBox6.Text);
            items.SubItems.Add(textBox8.Text);
            items.SubItems.Add(textBox9.Text);
            items.SubItems.Add(textBox10.Text);
            items.SubItems.Add(textBox7.Text);
            listView2.Items.Add(items); //add the new record to ListView
            
        }

        private void listView2_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listView2.SelectedItems.Count == 0) //if nothing selected
                return;
            ListViewItem items = listView2.SelectedItems[0]; 

            textBox5.Text = items.SubItems[0].Text; //fill the Date field
            comboBox5.Text = items.SubItems[1].Text;
            textBox6.Text = items.SubItems[2].Text; //fill the Start field//fill the End field
            textBox8.Text = items.SubItems[3].Text;
            textBox9.Text = items.SubItems[4].Text;
            textBox10.Text = items.SubItems[5].Text;
            textBox7.Text = items.SubItems[6].Text; //fill the Start field

        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (listView2.SelectedItems.Count == 0) //if nothing selected
                return;
            ListViewItem item = listView2.SelectedItems[0]; 
            item.SubItems[0].Text = textBox5.Text;
            item.SubItems[1].Text = comboBox5.Text;
            item.SubItems[2].Text = textBox6.Text;
            item.SubItems[3].Text = textBox8.Text;
            item.SubItems[4].Text = textBox9.Text;
            item.SubItems[5].Text = textBox10.Text;
            item.SubItems[6].Text = textBox7.Text;
          
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (listView2.SelectedItems.Count == 0) //if nothing selected
                return;
            listView2.SelectedItems[0].Remove();
        }

        private void comboBox6_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button13_Click(object sender, EventArgs e)
        {
            Form3 agreement = new Form3();
            agreement.ShowDialog();
            
        }

        private void button12_Click(object sender, EventArgs e)
        {
            ListViewItem item = new ListViewItem(); //create a new record
            item.Text = textBox11.Text; //assign values for each column of the new record
            item.SubItems.Add(comboBox6.Text);
            item.SubItems.Add(textBox14.Text);
            item.SubItems.Add(textBox12.Text);
            item.SubItems.Add(textBox13.Text);
            item.SubItems.Add(textBox15.Text);

            listView3.Items.Add(item); //add the new record to ListView
        }

        private void listView3_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listView3.SelectedItems.Count == 0) //if nothing selected
                return;
            ListViewItem items = listView3.SelectedItems[0]; 

            textBox11.Text = items.SubItems[0].Text; //fill the Date field
            comboBox6.Text = items.SubItems[1].Text;
            textBox14.Text = items.SubItems[2].Text; //fill the Start field//fill the End field
            textBox12.Text = items.SubItems[3].Text;
            textBox13.Text = items.SubItems[4].Text;
            textBox15.Text = items.SubItems[5].Text;
         
        }

        private void button11_Click(object sender, EventArgs e)
        {
            if (listView2.SelectedItems.Count == 0) //if nothing selected
                return;
            ListViewItem item = listView2.SelectedItems[0]; //get the record selected
            //update selected record
            item.SubItems[0].Text = textBox11.Text;
            item.SubItems[1].Text = comboBox6.Text;
            item.SubItems[2].Text = textBox14.Text;
            item.SubItems[3].Text = textBox15.Text;
            item.SubItems[4].Text = textBox12.Text;
            item.SubItems[5].Text = textBox13.Text;
            item.SubItems[6].Text = textBox15.Text;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (listView3.SelectedItems.Count == 0) //if nothing selected
                return;
            listView3.SelectedItems[0].Remove();
        }

        private void textBox15_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void label22_DoubleClick(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 0;
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            textBox16.Visible = true;
            textBox17.Visible = false;
            textBox18.Visible = false;
        }

        private void textBox17_TextChanged(object sender, EventArgs e)
        {
           
        }

        private void textBox18_TextChanged(object sender, EventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            textBox17.Visible = true;
            textBox16.Visible = false;
            textBox18.Visible = false;
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            textBox16.Visible = false;
            textBox17.Visible = false;
            textBox18.Visible = true;
        }

        private void button14_Click(object sender, EventArgs e)
        {
          
           // tabControl1.SelectedIndex = 1;           //if radio button was clicked it does event
        }

        private void toolStripButton6_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 5;
        }

        private void listView4_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listView4.SelectedItems.Count == 0) //if nothing selected
                return;
            ListViewItem items = listView4.SelectedItems[0]; //get the record selected
            

        }

        private void toolStripButton7_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedIndex = 6;
        }

        private void textBox20_TextChanged(object sender, EventArgs e)
        {

        }

        private void tabPage5_Click(object sender, EventArgs e)
        {

        }

        private void button17_Click(object sender, EventArgs e)
        {
            ListViewItem items = new ListViewItem(); //create a new record
            items.Text = textBox19.Text; //assign values for each column of the new record
            items.SubItems.Add(textBox21.Text);
            items.SubItems.Add(dateTimePicker1.Text);
            items.SubItems.Add(textBox20.Text);
            listView6.Items.Add(items); //add the new record to ListView
        }

        private void button16_Click(object sender, EventArgs e)
        {
            if (listView6.SelectedItems.Count == 0) //if nothing selected
                return;
            ListViewItem item = listView6.SelectedItems[0];
            item.SubItems[0].Text = textBox19.Text;
            item.SubItems[1].Text = textBox21.Text;
            item.SubItems[2].Text = dateTimePicker1.Text;
            item.SubItems[3].Text = textBox20.Text;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            if (listView6.SelectedItems.Count == 0) //if nothing selected
                return;
            listView6.SelectedItems[0].Remove();
        }

        private void textBox16_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }
    }
}
