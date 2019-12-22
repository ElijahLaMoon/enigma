#ifndef ROTOR_HPP
#define ROTOR_HPP

#include <string>

class Rotor
{
public:
    std::string rotor;
    void setRotor(char);
    void substitute(std::string&);

private:
    const std::string m_rotors[5] =
    {
    //  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "EKMFLGDQVZNTOWYHXUSPAIBRCJ", //rotor I
        "AJDKSIRUXBLHWTMCQGZNPYFVOE", //rotor II
        "BDFHJLCPRTXVZNYEIWGAKMUSQO", //rotor III
        "ESOVPZJAYQUIRHXLNFTGKDCMWB", //rotor IV
        "VZBRGITYUPSDNHLXAWMJQOFECK"  //rotor V
    };
    
    const std::string m_reflector =
    {
        "YRUHQSLDPXNGOKMIEBFZCWVJAT"
    };

    std::string m_plugboard[6]
    {
        "\0\0",
        "\0\0",
        "\0\0",
        "\0\0",
        "\0\0",
        "\0\0",
    };

};

#endif