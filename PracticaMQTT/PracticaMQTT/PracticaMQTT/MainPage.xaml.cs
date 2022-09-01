using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;
using OpenNETCF.MQTT;

namespace PracticaMQTT
{
    public partial class MainPage : ContentPage
    {
        MQTTClient mqtt;
        String mensajeNotificacion = "";
        public MainPage()
        {
            InitializeComponent();

            mqtt = new MQTTClient("iothall.sytes.net", 1883);
            mqtt.ConnectAsync("Homer", "test", "test");
            mqtt.Subscriptions.Add(new Subscription("O$cary/O$cary"));
            mqtt.MessageReceived += Mqtt_MessageReceived;

            Device.StartTimer(TimeSpan.FromSeconds(1), () =>
            {
                var estado = true;

                if ((bool)estado == true)
                {
                    if (mqtt.IsConnected)
                    {
                        if (mensajeNotificacion != "")
                        {
                            lblTexto2.Text = mensajeNotificacion;
                            mensajeNotificacion = "";
                        }
                    }
                    else
                    {
                        mqtt = new MQTTClient("iothall.sytes.net", 1883);
                        mqtt.ConnectAsync("Homer", "test", "test");
                        mqtt.Subscriptions.Add(new Subscription("OBB13"));
                        mqtt.MessageReceived += Mqtt_MessageReceived;
                    }
                }
                return true;
            });
        }

        private void Mqtt_MessageReceived(string topic, QoS qos, byte[] payload)
        {
            String mensaje = System.Text.Encoding.UTF8.GetString(payload);

            String respuesta = mensaje;

            mensajeNotificacion = respuesta;
        }

        private void btnEnsenderFCosina_Clicked(object sender, EventArgs e)
        {
            byte[] datos = Encoding.ASCII.GetBytes("prende foco 1");
            lblTexto.Text = "Foco de la cosina Encendido";
            mqtt.PublishAsync("O$cary/OBB", datos, QoS.FireAndForget, false);
        }

        private void btnApagarFCosina_Clicked(object sender, EventArgs e)
        {
            byte[] datos = Encoding.ASCII.GetBytes("apaga foco 1");
            lblTexto.Text = "Foco de la cosina Apagado";
            mqtt.PublishAsync("O$cary/OBB", datos, QoS.FireAndForget, false);
        }

        private void btnEnsenderFBano_Clicked(object sender, EventArgs e)
        {
            byte[] datos = Encoding.ASCII.GetBytes("prende foco 4");
            lblTexto3.Text = "Foco del baño Encendido";
            mqtt.PublishAsync("O$cary/OBB", datos, QoS.FireAndForget, false);
        }

        private void btnApagarFBano_Clicked(object sender, EventArgs e)
        {
            byte[] datos = Encoding.ASCII.GetBytes("apaga foco 4");
            lblTexto3.Text = "Foco del baño Apagado";
            mqtt.PublishAsync("O$cary/OBB", datos, QoS.FireAndForget, false);
        }

        private void btnEnsenderFocos_Clicked(object sender, EventArgs e)
        {
            byte[] datos = Encoding.ASCII.GetBytes("prende focos");
            lblTexto4.Text = "Focos del estacionamiento Encendidos";
            mqtt.PublishAsync("O$cary/OBB", datos, QoS.FireAndForget, false);
        }

        private void btnApagarFocos_Clicked(object sender, EventArgs e)
        {
            byte[] datos = Encoding.ASCII.GetBytes("apaga focos");
            lblTexto4.Text = "Focos del estacionamiento Apagados";
            mqtt.PublishAsync("O$cary/OBB", datos, QoS.FireAndForget, false);
        }
        private void btnTemperaturaHumedad_Clicked(object sender, EventArgs e)
        {
            byte[] datos = Encoding.ASCII.GetBytes("sensor dht");
            lblTexto5.Text = "Temperatura Calculada";
            mqtt.PublishAsync("O$cary/OBB", datos, QoS.FireAndForget, false);
        }
    }
}
