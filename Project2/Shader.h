#pragma once
#ifndef SHADER_H
#define SHADER_H

#include<glad/glad.h>


#include<iostream>
#include <fstream>
#include <sstream>
#include <string>

class Shader
{
public:
	//shader程序id
	unsigned int ID;

	Shader(const char* vertexPath, const char* fragmentPath);
	void use();

	// uniform工具函数
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;

	~Shader();

private:
	void checkCompileErrors(unsigned int shader, std::string type);
};

#endif