#version  330 core
out vec4 FragColor;


in vec2 oTexcoord;
uniform sampler2D ourTexture;

void main(){
	FragColor = texture(ourTexture,oTexcoord);
	
}