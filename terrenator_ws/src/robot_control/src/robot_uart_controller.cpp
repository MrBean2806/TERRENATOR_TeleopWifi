#include <cstdio>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "interfaces/msg/trama_datos.hpp"
#include <boost/asio.hpp>

using namespace std;

// Define the structure of the received frame
typedef struct {
    uint32_t start;         // Start mark of the frame
    uint32_t timestamp;     // Counter indicating the ms in which the measurement was made
    float u_m[4];           // Angular velocity on the axis of each motor
    int16_t a_m[3];         // Linear acceleration measured on each axis
    int16_t phi_m[3];       // Rotation on each axis
    uint16_t i_m;           // Current measured in each motor
    uint16_t v_bat;         // Battery voltage
    uint16_t status;        // Status
    uint8_t crc;            // Frame checksum
    uint8_t stop;           // End mark of the frame
} s_Trama_rx;

// Define the union for the received frame
typedef union {
    s_Trama_rx data;
    char string[sizeof(s_Trama_rx)]; // Total size of the structure s_Trama_rx in bytes
} u_Trama_rx;

// Define the DataPacket structure
typedef struct {
    float Vx;  // Linear velocity on the x-axis
    float Vy;  // Linear velocity on the y-axis
    float Wz;  // Angular velocity
    uint8_t crc; // Checksum
} DataPacket;

// Define the Vel_espacial structure
typedef struct {
    float Vx;
    float Vy;
    float Wz;
} Vel_espacial;

// Global variables for serial communication and sending control
boost::asio::io_service io;
boost::asio::serial_port serial(io);
bool send_data = false;
DataPacket data_global;
std::shared_ptr<rclcpp::Publisher<interfaces::msg::TramaDatos>> robot_info_publisher;

// Buffer to store serial data
deque<uint8_t> serial_buffer;

// Function to generate velocity ramp
void generarRampaVelocidad(Vel_espacial* vel_inicial, Vel_espacial* vel_final, 
                           vector<float>& rampa_vx, vector<float>& rampa_vy, vector<float>& rampa_wz) {
    // Example implementation
    rampa_vx.push_back(vel_final->Vx);
    rampa_vy.push_back(vel_final->Vy);
    rampa_wz.push_back(vel_final->Wz);
}
/*
void leerTrama() {
    u_Trama_rx trama_rx;
    bool trama_valida = false;

    if (serial.is_open()) {
        boost::asio::streambuf buf;
        boost::asio::read_until(serial, buf, ']');
        std::istream is(&buf);
        std::string serialBuffer((std::istreambuf_iterator<char>(is)), std::istreambuf_iterator<char>());

        int i_inicio = serialBuffer.find('[');
        int i_final  = serialBuffer.find(']', i_inicio);

        // RECIBO TRAMA CON VEL MEDIDAS Y VBAT DESDE EL CBN
        while (i_inicio >= 0 && i_final >= 0) {
            if (i_final - i_inicio == sizeof(s_Trama_rx) - 1) {
                trama_valida = true;
                memcpy(trama_rx.string, serialBuffer.data() + i_inicio, sizeof(s_Trama_rx));
            }

            i_inicio = serialBuffer.find('[', i_final);
            i_final  = serialBuffer.find(']', i_inicio);
        }

        if (trama_valida) {
            float u1 = trama_rx.data.u_m[0];
            float u2 = trama_rx.data.u_m[1];
            float u3 = trama_rx.data.u_m[2];
            float u4 = trama_rx.data.u_m[3];
            uint16_t v_bat = trama_rx.data.v_bat;

            // Publicar al topico v_bat y u_m
            robot_control::TramaDatos msg;
            msg.v_bat = v_bat;
            for (int i = 0; i < 4; i++) {
                msg.u_m[i] = trama_rx.data.u_m[i];
            }
            // ENVIO EL MENSAJE CON LA VELOCIDAD MEDIDA Y VBAT HACIA LA PC 
            // pub.publish(msg);
            robot_info_publisher->publish(trama_msg);
            std::cout << "u1: " << u1 << ", u2: " << u2 << ", u3: " << u3 << ", u4: " << u4 << std::endl;
            std::cout << "i_m: " << trama_rx.data.i_m << ", v_bat: " << v_bat << std::endl;
            std::cout << "a_m[0]: " << trama_rx.data.a_m[0] << ", a_m[1]: " << trama_rx.data.a_m[1] << ", a_m[2]: " << trama_rx.data.a_m[2] << std::endl;
            std::cout << "phi_m[0]: " << trama_rx.data.phi_m[0] << ", phi_m[1]: " << trama_rx.data.phi_m[1] << ", phi_m[2]: " << trama_rx.data.phi_m[2] << std::endl;
        }
    }
}
*/

void joy_callback(const sensor_msgs::msg::Joy::SharedPtr msg)
{
    /*
    // Procesar los datos de joystick (axes y buttons)
    RCLCPP_INFO(rclcpp::get_logger("serial_node"), "Ejes del joystick: ");
    for (auto axis : msg->axes) {
        RCLCPP_INFO(rclcpp::get_logger("serial_node"), "  %f", axis);
    }

    RCLCPP_INFO(rclcpp::get_logger("serial_node"), "Botones del joystick: ");
    for (auto button : msg->buttons) {
        RCLCPP_INFO(rclcpp::get_logger("serial_node"), "  %d", button);
    }
    */

    // Map joystick axis values
    // float vx = joy->axes[1] * 1.5;
    // float vy = joy->axes[0] * 1.5;
    // float wz = joy->axes[3] * 1.5;       // Adjust angular velocity

    // if (fabs(vx) < 0.5) vx = 0.0;
    // if (fabs(vy) < 0.5) vy = 0.0;
    // if (fabs(wz) < 0.5) wz = 0.0;

    // Vel_espacial vel_inicial = {data_global.Vx, data_global.Vy, data_global.Wz};
    // Vel_espacial vel_final = {vx, vy, wz};

    // vector<float> rampa_vx, rampa_vy, rampa_wz;
    // generarRampaVelocidad(&vel_inicial, &vel_final, rampa_vx, rampa_vy, rampa_wz);

    // // Update the global data packet
    // data_global.Vx = rampa_vx.back();
    // data_global.Vy = rampa_vy.back();
    // data_global.Wz = rampa_wz.back();
    // data_global.crc = 0;

    // send_data = true;
    interfaces::msg::TramaDatos msgInfo;
    msgInfo.v_bat = msg->buttons[0];
    msgInfo.u_m[0] = msg->axes[0];
    robot_info_publisher->publish(msgInfo);

}


int main(int argc, char** argv) {
    // ros::init(argc, argv, "serial_node");
    // ros::NodeHandle nh;
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("serial_node");
    
    // RECIBE COMANDOS PROVENIENTES DEL JOYSTICK DESDE LA PC
    // ros::Subscriber sub = nh.subscribe<sensor_msgs::Joy>("joy", 10, joyCallback);
    auto joy_subscription = node->create_subscription<sensor_msgs::msg::Joy>(
                            "joy", 10, joy_callback);

    // ENVIA EL MENSAJE CON LA VELOCIDAD MEDIDA Y VBAT HACIA LA PC 
    robot_info_publisher = node->create_publisher<interfaces::msg::TramaDatos>(
                            "robot_info", 10);

    
    rclcpp::Rate loop_rate(5);          // frecuencia del loop [Hz]

    //  while (ros::ok())
    while (rclcpp::ok())
    {
        // RCLCPP_INFO(node->get_logger(), "Hello World\n");
        // ros::spinOnce();
        rclcpp::spin_some(node);
        loop_rate.sleep();

    }

    // // PUBLICA DATOS DE VELOCIDAD Y VBAT 
    // pub = nh.advertise<my_robot_controller::TramaDatos>("robot_info", 10);

    // try {
    //     serial.open("/dev/ttyAMA0"); // Change '/dev/ttyAMA0' to the correct serial port

    //     serial.set_option(boost::asio::serial_port_base::baud_rate(2000000));
    //     serial.set_option(boost::asio::serial_port_base::character_size(8));
    //     serial.set_option(boost::asio::serial_port_base::parity(boost::asio::serial_port_base::parity::none));
    //     serial.set_option(boost::asio::serial_port_base::stop_bits(boost::asio::serial_port_base::stop_bits::one));
    //     serial.set_option(boost::asio::serial_port_base::flow_control(boost::asio::serial_port_base::flow_control::none));

    //     ros::Rate loop_rate(100); // Main loop rate of ROS

    //     while (ros::ok()) {
    //         ros::spinOnce(); // Process pending callbacks
    //         loop_rate.sleep();

    //         if (send_data) {
    //             // ENVIA COMANDO DE VELOCIDAD ESPACIAL A LA NUCLEO
    //             write(serial, boost::asio::buffer(reinterpret_cast<uint8_t*>(&data_global), sizeof(data_global)));
    //             send_data = false;
    //         }

    //         leerTrama();
    //     }
    //     serial.close();
    // } catch (boost::system::system_error& e) {
    //     cerr << "Error: " << e.what() << endl;
    // }

    return 0;
}