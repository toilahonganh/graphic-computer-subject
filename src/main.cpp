# include <iostream> 
# include <GL/glut.h>
# include <math.h>
# include <cstdlib>
# include <ctime>
# include "utils.h" 

# define STB_IMAGE_IMPLEMENTATION
# include "stb_image.h"

using namespace std;
 
void LoadTexture(const char *file, GLuint &ID) {
 	int width, height, channels;
    unsigned char* data = stbi_load(file, &width, &height, &channels, STBI_rgb_alpha);
    if (!data) {
    cout << "Failed to load texture."<< endl;
    return;
}
 	glGenTextures(1, &ID);
    glBindTexture(GL_TEXTURE_2D, ID);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    stbi_image_free(data);
}

void LoadIMG(void) 
{
	LoadTexture("image/co.png", g_co);
	LoadTexture("image/dongrom.png", g_dongrom);
	LoadTexture("image/hoatietmaingoi1.png", g_hoavanmaingoiNguyet);
	LoadTexture("image/hoatietmaingoi2.png", g_hoavanmaingoiHongAnh);
	LoadTexture("image/hoatietmaingoi3.png", g_hoavanmaingoiMan);
}

void BuoiSang(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	// ---------------
	glPushMatrix();
		BauTroi(135, 206, 250);
	glPopMatrix();

	glPushMatrix();
		MatTroi();
	glPopMatrix();
	
	glPushMatrix();
		May(255, 255, 255);
	glPopMatrix();
	
	glPushMatrix();
		Nui(0, 100, 0, 0, 100, 0);
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		DatLien(0, 128,0);
	glPopMatrix();
	
	glPushMatrix();
		DongRom(189,183,107);
	glPopMatrix();
	
	glPushMatrix();
		Nha(0, 0, 0);
	glPopMatrix();
	
	glPushMatrix();
		Cay();
	glPopMatrix();
	glPushMatrix();
	  glTranslatef(-8.4f, -4.7f, 0.05f);
		RoTao();
	glPopMatrix();
	glPushMatrix();
		CoiXoayGio();
	glPopMatrix();
	
	glPushMatrix();
		QuaTao();
	glPopMatrix();

	// ---------------
	glPushMatrix();
		Bien(65,105,225);
	glPopMatrix();
	
	glPushMatrix();
		Thuyen();
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		HoTen(0, 0, 0);
	glPopMatrix();
	
	glutSwapBuffers();	
}

void BuoiToi(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	// ---------------
	glPushMatrix();
		BauTroi(0,0,0);
	glPopMatrix();
		
	glPushMatrix();
		May(105, 105, 105);
	glPopMatrix();
		
	glPushMatrix();
		Nui(0, 100, 0, 0, 100, 0);
	glPopMatrix();
		
	glPushMatrix();
		NhungViSao();
	glPopMatrix();
		
	glPushMatrix();
		MatTrang();
	glPopMatrix();
		
	// ---------------
	glPushMatrix();
		DatLien(0, 128,0);
	glPopMatrix();
		
	glPushMatrix();
		DongRom(189,183,107);
	glPopMatrix();
		
	glPushMatrix();
		Nha(255, 255, 0);
	glPopMatrix();
		
	glPushMatrix();
		Cay();
	glPopMatrix();
		
	glPushMatrix();
		CoiXoayGio();
	glPopMatrix();
	
	glPushMatrix();
		QuaTao();
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		Bien(65,105,225);
	glPopMatrix();
		
	glPushMatrix();
		ThuyenKhongHieuUng(139, 69, 19);
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		HoTen(255, 255, 255);
	glPopMatrix();
	
	glutSwapBuffers();
}

void TroiMua(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	// ---------------
	glPushMatrix();
		BauTroi(112, 128, 144);
		Mua(0, 0, 255);
	glPopMatrix();
		
	glPushMatrix();
		May(0,0,0);
	glPopMatrix();
		
	glPushMatrix();
		Nui(0, 100, 0, 0, 100, 0);
	glPopMatrix();
		
	// ---------------
	glPushMatrix();
		DatLien(0, 128,0);
	glPopMatrix();
		
	glPushMatrix();
		DongRom(189,183,107);
	glPopMatrix();
		
	glPushMatrix();
		Nha(255, 255, 0);
	glPopMatrix();
		
	glPushMatrix();
		Cay();
	glPopMatrix();
		
	glPushMatrix();
		CoiXoayGio();
	glPopMatrix();
	
	glPushMatrix();
		QuaTaoRung();
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		Bien	(25,25,112);
	glPopMatrix();
		
	glPushMatrix();
		ThuyenKhongHieuUng(139, 69, 19);
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		HoTen(0, 0, 0);
	glPopMatrix();
	
	glutSwapBuffers();
}

void MuaDong(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	// ---------------
	glPushMatrix();
		BauTroi(135, 206, 250);
		Mua(255,255,255);
	glPopMatrix();
		
	glPushMatrix();
		Nui(105, 105, 105, 255, 255, 255);
	glPopMatrix();
		
	// ---------------
	glPushMatrix();
		DatLien(154,205,50);
	glPopMatrix();
		
	glPushMatrix();
		DongRomMuaDong(255,255,255);
	glPopMatrix();

	glPushMatrix();
		NhaTuyet(255, 255, 255);
	glPopMatrix();
		
	glPushMatrix();
		CayRungLa();
	glPopMatrix();
		
	glPushMatrix();
		CoiXoayGio();
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		Bien(135, 206, 250);
	glPopMatrix();
	
	glPushMatrix();
		ThuyenKhongHieuUng(255, 255, 255);
	glPopMatrix();
	
	// ---------------
	glPushMatrix();
		HoTen(0, 0, 0);
	glPopMatrix();
		
	glPushMatrix();
		NguoiTuyet();
	glPopMatrix();
	
	glutSwapBuffers();
}

void updateFirst(int value) // Thuyen 1 
{
	_moveA += speed;
    if(_moveA > 36)
    {
        _moveA = -36;
    }

	glutTimerFunc(20, updateFirst, 0); //Notify GLUT to call update again in 25 milliseconds
	glutPostRedisplay();
} 

void updateSecond(int value) { // Thuyen 2 


    if(_moveB < -38)
    {
        _moveB = +38;
    }
     //Notify GLUT that the display has changed

	_moveB -= 0.13;

    glutTimerFunc(20, updateSecond, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void updateThird(int value) { // Coi Xoay Gio 

    _angle1-=3.0f; // Giam di 3 do 
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, updateThird, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updateFourth(int value) { // May 


    if(_moveC > 38)
    {
        _moveC = -38; 
    }

	_moveC += 0.13;

    glutTimerFunc(20, updateFourth, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
		case 's'://stops
		    speed = 0.0f;
		    break;
		case 'r'://runs
		    speed = 0.5;
		    break;
		glutPostRedisplay();
	}
}

void SpecialInput(int key, int x, int y)
{
	switch(key)
	{
		case GLUT_KEY_UP:
			glutDisplayFunc(BuoiSang);
			break;
		case GLUT_KEY_DOWN:
			glutDisplayFunc(BuoiToi);
			break;
		case GLUT_KEY_RIGHT:
			glutDisplayFunc(TroiMua);
			break;
		case GLUT_KEY_LEFT:
			glutDisplayFunc(MuaDong);
			break;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		_moveC += 0.4;
	
	    glutTimerFunc(20, updateFourth, 0); //Notify GLUT to call update again in 25 milliseconds
	    glutPostRedisplay(); 
	}
	else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		_moveC -= 0.4;
	
	    glutTimerFunc(20, updateFourth, 0); //Notify GLUT to call update again in 25 milliseconds
	    glutPostRedisplay(); 
	}
	
}

void init(void)
{
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    LoadIMG();

    glColor3d(1.0, 0.0, 0.0);
    glLoadIdentity();
    gluOrtho2D(-12.0, 38.0, -19.0, 14.0); // left -12, right 38, bottom -19, above 14
    glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(1500, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("A BEAUTIFUL SCENE");
    init();
	glutMouseFunc(mouse);
	glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
    
    glutDisplayFunc(BuoiSang);
    glutTimerFunc(20, updateFirst, 0); //Add a timer
    glutTimerFunc(20, updateSecond, 0); //Add a timer

    glutTimerFunc(10, updateThird, 0);
    glutTimerFunc(20, updateFourth, 0);
    

    glutMainLoop();

    return 0;
}


