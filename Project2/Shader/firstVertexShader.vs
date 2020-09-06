#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

uniform int turn;
out vec3 verColor;
void main()
{
	if(turn == 1.0){
		gl_Position = vec4(aPos.x,0 - aPos.y, aPos.z, 1.0);
		}
	else{
		gl_Position = vec4(aPos.x,aPos.y, aPos.z, 1.0);
	} 
	
   verColor = aPos;

};
