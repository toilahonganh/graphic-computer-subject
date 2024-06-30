#ifndef UTILS_H
#define UTILS_H

float _moveA = 0.0f;
float _moveB = 0.0f;
float _moveC = 0.0f;
float _angle1 = 0.0f;
float speed = 0.02f;

GLuint g_dongrom;
GLuint g_hoavanmaingoiNguyet; 
GLuint g_hoavanmaingoiMan; 
GLuint g_hoavanmaingoiHongAnh; 
GLuint g_co; 

// Dinh Hong Anh 
GLubyte space[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GLubyte rasters1[] = {
    0x40, 0x00, 0xbc, 0x00, 0x42, 0x00, 0x21, 0x00, 0x21, 0x00,
    0x71, 0x00, 0x21, 0x00, 0x62, 0x00, 0xbc, 0x00, 0x60, 0x00
};

GLubyte rasters2[] = {
    0x3e, 0x00, 0x42, 0x00, 0x82, 0x00, 0x52, 0x00, 0x22, 0x00,
    0x02, 0x00, 0x22, 0x00, 0x52, 0x00, 0x82, 0x00, 0x7f, 0x00, 0x00, 0x1c, 0x1c
};

GLubyte rasters3[] = {
    0x42, 0x00, 0xA5, 0x00, 0x24, 0x00, 0x24, 0x00, 0x24, 0x00,
    0x24, 0x00, 0x24, 0x00, 0x36, 0x00, 0xad, 0x00, 0x46, 0x00
};

GLubyte rasters4[] = {
    0x42, 0x00, 0xa5, 0x00, 0xa5, 0x00, 0x42, 0x00, 0x3c, 0x00,
    0x66, 0x00, 0xa5, 0x00, 0xa5, 0x00, 0x66, 0x00, 0x42, 0x00
};

GLubyte rasters5[] = {
    0x3c, 0x00, 0x42, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00,
    0x91, 0x00, 0xa9, 0x00, 0xa1, 0x00, 0x52, 0x00, 0x3c, 0x00
};

GLubyte rasters5a[] = {
    0x3c, 0x00, 0x42, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00,
    0x91, 0x00, 0xa9, 0x00, 0xa1, 0x00, 0x52, 0x00, 0x3c, 0x00, 0x00, 0x42, 0x3d, 0x04, 0x08
};

GLubyte rasters6[] = {
    0x08, 0x00, 0x14, 0x00, 0x14, 0x00, 0x14, 0x00, 0x0c, 0x00,
    0x36, 0x00, 0x4d, 0x00, 0x74, 0x00, 0xa8, 0x00, 0x58, 0x00
};

GLubyte rasters7[] = {
    0x42, 0x00, 0xa5, 0x00, 0xa5, 0x00, 0x24, 0x00, 0x24, 0x00,
    0x7e, 0x00, 0x24, 0x00, 0x24, 0x00, 0x28, 0x00, 0x18, 0x00
};

// Nguyen Thi Anh Nguyet
GLubyte rastersN1[] = {
	0x40, 0x40, 0xA0, 0xA0, 0xA0, 0xA0, 0x20, 0xA0, 0x10, 0xA0,
	0x10, 0x90, 0x10, 0x90, 0x09, 0x10, 0x09, 0x08, 0x09, 0x08,
	0x05, 0x08, 0x25, 0x04, 0x45, 0x04, 0x45, 0x05, 0x25, 0x05,
	0x1A, 0x02
};

GLubyte rastersG[] = {
	0x00, 0xc0, 0x00, 0xa0, 0x00, 0x10, 0x00, 0x08, 0x00, 0x08,
	0x0f, 0xf8, 0x10, 0x08, 0x10, 0x08, 0x20, 0x08, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x04, 0x20, 0x04, 0x18, 0x08,
	0x0f, 0xf0
};

GLubyte rastersU[] = {
	0x01, 0xce, 0x02, 0x29, 0x04, 0x18, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x48, 0x08, 0x28, 0x08, 0x18, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08
};

GLubyte rastersY[] = {
	0x01, 0xe0, 0x01, 0x20, 0x01, 0x90, 0x00, 0x50, 0x00, 0x68,
	0x00, 0x38, 0x00, 0x0c, 0x07, 0x8a, 0x08, 0x49, 0x10, 0x28,
	0x20, 0x18, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08
};

GLubyte rastersE[] = {
	0x01, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x10, 0x10, 0x20, 0x08,
	0x20, 0x08, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00,
	0x0d, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x08,
	0x20, 0x08, 0x10, 0x10, 0x0f, 0xe0, 0x00, 0x00, 0x04, 0x20,
	0x02, 0x40, 0x01, 0x80
};

GLubyte rastersT[] = {
	0x07, 0xc0, 0x08, 0x20, 0x08, 0x20, 0x08, 0xa0, 0x10, 0xa0,
	0x10, 0xe0, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x7f, 0xe0, 0x20, 0x10, 0x20, 0x20, 0x3f, 0xc0,
	0x20, 0x00
};

// Nguyen Thi Ngoc Man 
GLubyte rastersM[] = {
	0x40, 0x04, 0xa1, 0x0a, 0xa2, 0x8a, 0x22, 0x88, 0x22, 0x88,
	0x22, 0x88, 0x22, 0x89, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88,
	0x14, 0x10, 0x14, 0x50, 0x14, 0x50, 0x14, 0x50, 0x14, 0x50,
	0x14, 0x50, 0x14, 0x50, 0x14, 0x50, 0x14, 0x50, 0x14, 0x50,
	0x08, 0x20
};

GLubyte rastersA[] = {
	0x78, 0x10, 0x48, 0x28, 0x4c, 0x28, 0x64, 0x20, 0x04, 0x20,
	0x04, 0x20, 0x04, 0x20, 0x32, 0x20, 0x0f, 0xf0, 0x02, 0x2c,
	0x02, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x00, 0xa0,
	0x00, 0x60, 0x01, 0x08, 0x00, 0x90, 0x00, 0x60, 0x03, 0x08,
	0x00, 0x94, 0x00, 0x62
};

GLubyte rastersN[] = {
	0x40, 0x40, 0xa0, 0xa0, 0xa0, 0xa0, 0x20, 0xa0, 0x10, 0xa0,
	0x10, 0x90, 0x10, 0x90, 0x09, 0x18, 0x09, 0x08, 0x09, 0x08,
	0x05, 0x08, 0x05, 0x08, 0x05, 0x08, 0x05, 0x08, 0x05, 0x0a,
	0x05, 0x0a, 0x02, 0x04
};

// BAU TROI 
void MatTroi(void);
void BauTroi(GLubyte red, GLubyte green, GLubyte blue);
void May(GLubyte red, GLubyte green, GLubyte blue);
void Nui(GLubyte red, GLubyte green, GLubyte blue, GLubyte red1, GLubyte green1, GLubyte blue1);
void Nha(void);

// DAT LIEN 
void RoTao(void);
void QuaTao(void);
void Cay(void);
void CoiXoayGio(void);
void DatLien(GLubyte red, GLubyte green, GLubyte blue);
void DongRom(GLubyte red, GLubyte green, GLubyte blue);
void HoTen(GLubyte red, GLubyte green, GLubyte blue);

// BIEN 
void Bien(GLubyte red, GLubyte green, GLubyte blue);
void Thuyen(void);
void ThuyenKhongHieuUng(GLubyte red, GLubyte green, GLubyte blue);

// BUOI TOI 
void NhungViSao(void);
void MatTrang(void); 

// Rainy day
void QuaTaoRung(void); 
void Mua(GLubyte red, GLubyte green, GLubyte blue);

// Mua Dong 
void CayRungLa(void);
void NguoiTuyet(void);
void DongRomMuaDong(GLubyte red, GLubyte green, GLubyte blue);
void NhaTuyet(GLubyte red, GLubyte green, GLubyte blue);


void HoTen(GLubyte red, GLubyte green, GLubyte blue) 
{
	glColor3ub(red, green, blue);
	    glPushMatrix();
	    	// Dinh Hong Anh
			glRasterPos2i(-11.5, 13);
			glPushMatrix();
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters1);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters2);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters3);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters4);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, space);
			glPopMatrix();
			
			glPushMatrix();
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters4);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters5a);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters3);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters6);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, space);
			glPopMatrix();
			
			glPushMatrix();
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters7);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters3);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, rasters4);
				glBitmap(10, 15, 0.0, 0.0, 11.0, 0.0, space);
			glPopMatrix();
		glPopMatrix();
		
		glPushMatrix();
			// Nguyen Thi Anh Nguyet
			glRasterPos2i(-11.5, 12);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersN);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersG);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersU);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersY);
			glBitmap(16, 22, 0.0, 0.0, 15.0, 0.0, rastersE);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersT);
		glFlush();
		glPopMatrix();
	
		glPushMatrix();   
			// Nguyen Thi Ngoc Man                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
			glRasterPos2i(-11.5, 11);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersM);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersA);
			glBitmap(16, 16, 0.0, 0.0, 15.0, 0.0, rastersN);
			glFlush();
		glPopMatrix();

}

// <------ BAU TROI ------->
void Mua(GLubyte red, GLubyte green, GLubyte blue)
{
    srand(time(0)); // Seed for random raindrop positions

    glPointSize(4.0); // Set point size for raindrops

    glBegin(GL_POINTS);
    glColor3ub(red, green, blue); // Set color for raindrops (you can adjust it)
    
    for (int i = 0; i < 1000; ++i) // Draw 1000 raindrops
    {
        float x = rand() % 50 - 12.0; // Random x position within the visible window
        float y = rand() % 30 + 5.0;  // Random y position above the horizon

        glVertex2f(x, y);
    }
    glEnd();
}
 
void BauTroi(GLubyte red, GLubyte green, GLubyte blue) 
{
	glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(38.0f,3.0f); 
	    glVertex2f(38.0f,14.0f); 
	    glVertex2f(-12.0f,14.0f); 
	    glVertex2f(-12.0f,3.0f); 
    glEnd();
}

void MatTroi(void)
{    
    glPushMatrix();
    glColor3ub(255, 255, 0);
    glTranslatef(30.0, 10.0, 0); 
    glutSolidSphere(1.0, 250, 250); // Ve~ mat tr?i
    
    // Ve~ các tia sáng xoay vòng quanh
    glBegin(GL_LINES);
    for (int i = 0; i < 360; i += 15) {
        float angleRad = (i + _angle1) * 3.14159265 / 180.0; // Ð?i d? thành radian và thêm góc xoay
        float x = 1.5 * cos(angleRad); // T?a d? x c?a di?m k?t thúc tia sáng
        float y = 1.5 * sin(angleRad); // T?a d? y c?a di?m k?t thúc tia sáng
        glVertex2f(0.0, 0.0); // Ði?m b?t d?u tia sáng t? trung tâm m?t tr?i
        glVertex2f(x, y); // Ði?m k?t thúc tia sáng
    }
    glEnd();

    glPopMatrix();
}

void May(GLubyte red, GLubyte green, GLubyte blue) 
{
	float _cloudHeight1 = 4.0;
	float _cloudHeight2 = 3.0;
	float _cloudHeight3 = 3.0;
	
//	May 1
	glPushMatrix(); 
	    glTranslatef(_moveC,0.0f,0.0f);
	    
	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(1.0, 6.0 + _cloudHeight1, 0);
		    glutSolidSphere(0.7, 250, 250);
    	glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(1.0, 7.0 + _cloudHeight1, 0);
		    glutSolidSphere(0.7, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(2.0, 7.0 + _cloudHeight1, 0);
		    glutSolidSphere(0.7, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(2.0, 6.0 + _cloudHeight1, 0);
		    glutSolidSphere(0.7, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(0.0, 6.5 + _cloudHeight1, 0);
		    glutSolidSphere(0.7, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(3.0, 6.5 + _cloudHeight1, 0);
		    glutSolidSphere(0.7, 250, 250);
	    glPopMatrix();
	glPopMatrix();
    
//	May 2  
	glPushMatrix();
	    glTranslatef(_moveC,0.0f,0.0f);
	    
		glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(15.0, 9.0 + _cloudHeight2, 0);
		    glutSolidSphere(0.8, 250, 250);
    	glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(15.0, 8.0 + _cloudHeight2, 0);
		    glutSolidSphere(0.8, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(16.0, 8.0 + _cloudHeight2, 0);
		    glutSolidSphere(0.8, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(16.0, 9.0 + _cloudHeight2, 0);
		    glutSolidSphere(0.8, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(14.0, 8.5 + _cloudHeight2, 0);
		    glutSolidSphere(0.8, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(17.0, 8.5 + _cloudHeight2, 0);
		    glutSolidSphere(0.8, 250, 250);
	    glPopMatrix();
	glPopMatrix();
	
//	May 3
	glPushMatrix();
	    glTranslatef(_moveC,0.0f,0.0f);
	    
		glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(22.0, 8.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
    	glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(22.0, 7.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(23.0, 8.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(23.0, 7.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(24.0, 7.5 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(21.0, 7.5 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();
	glPopMatrix(); 
	    
//	May 4
	glPushMatrix();
	    glTranslatef(_moveC,0.0f,0.0f);
	    
		glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(-8.0, 8.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
    	glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(-8.0, 7.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(-9.0, 8.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(-9.0, 7.0 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(-10.0, 7.5 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();

	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(-9.0, 7.5 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();
	    
	    glPushMatrix();
		    glColor3ub(red, green, blue);
		    glTranslatef(-7.0, 7.5 + _cloudHeight3, 0);
		    glutSolidSphere(0.75, 250, 250);
	    glPopMatrix();
	glPopMatrix();
}

void Nui(GLubyte red, GLubyte green, GLubyte blue, GLubyte red1, GLubyte green1, GLubyte blue1)
{
//  Nui 1
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(-12,3);
	    glVertex2f(-11.5,4.5);
	    glVertex2f(-7.5,4.5);
	    glVertex2f(-7,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(-11.5,4.5);
	    glVertex2f(-11,5.5);
	    glVertex2f(-8,5.5);
	    glVertex2f(-7.5,4.5);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(-11,5.5);
	    glVertex2f(-10.5,6);
	    glVertex2f(-8.5,6);
	    glVertex2f(-8,5.5);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(-10.5,6);
	    glVertex2f(-10.3,6.2);
	    glVertex2f(-8.7,6.2);
	    glVertex2f(-8.5,6);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(-10.3,6.2);
	    glVertex2f(-10.2,6.3);
	    glVertex2f(-8.8,6.3);
	    glVertex2f(-8.7,6);
    glEnd();
    

//  Nui 2
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(-7,3);
	    glVertex2f(-6.5,4);
	    glVertex2f(-4.5,4);
	    glVertex2f(-4,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(-6.5,4);
	    glVertex2f(-6,4.5);
	    glVertex2f(-5,4.5);
	    glVertex2f(-4.5,4);
    glEnd();
    
//  Nui 3
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(-4,3);
	    glVertex2f(-3.5,4.5);
	    glVertex2f(-1.5,4.5);
	    glVertex2f(-1,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(-3.5,4.5);
	    glVertex2f(-3,5);
	    glVertex2f(-2,5);
	    glVertex2f(-1.5,4.5);
    glEnd();

//  Nui 4
	glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(-1,3);
	    glVertex2f(-0.5,6);
	    glVertex2f(4.5,6);
	    glVertex2f(5,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(-0.5,6);
	    glVertex2f(0,7);
	    glVertex2f(4,7);
	    glVertex2f(4.5,6);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(0,7);
	    glVertex2f(1,8);
	    glVertex2f(3,8);
	    glVertex2f(4,7);
    glEnd();
    
    glBegin(GL_TRIANGLES);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(1,8);
	    glVertex2f(3,8);
	    glVertex2f(2,8.3);
    glEnd();

//  Nui 5
	glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(5,3);
	    glVertex2f(5.5,4);
	    glVertex2f(6.5,4);
	    glVertex2f(7,3);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(5.5,4);
	    glVertex2f(6.5,4);
	    glVertex2f(6,4.5);
    glEnd();
    
//  Nui 6
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(7,3);
	    glVertex2f(8,5);
	    glVertex2f(13,5);
	    glVertex2f(14,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(8,5);
	    glVertex2f(9,6);
	    glVertex2f(12,6);
	    glVertex2f(13,5);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(9,6);
	    glVertex2f(12,6);
	    glVertex2f(10.5,6.5);
    glEnd();
    
//  Nui 7
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(14,3);
	    glVertex2f(15,5);
	    glVertex2f(20,5);
	    glVertex2f(21,3);
    glEnd();
    
    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(15,5);
	    glVertex2f(16,6);
	    glVertex2f(19,6);
	    glVertex2f(20,5);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(16,6);
	    glVertex2f(19,6);
	    glVertex2f(17.5,6.5);
    glEnd();

//  Nui 8
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(21,3);
	    glVertex2f(22,5);
	    glVertex2f(24,5);
	    glVertex2f(25,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(22,5);
	    glVertex2f(22.5,5.5);
	    glVertex2f(23.5,5.5);
	    glVertex2f(24,5);
    glEnd();

//  Nui 9
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(25,3);
	    glVertex2f(25.5,4.5);
	    glVertex2f(28.5,4.5);
	    glVertex2f(29,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(25.5,4.5);
	    glVertex2f(26,5);
	    glVertex2f(28,5);
	    glVertex2f(28.5,4.5);
    glEnd();
    

//  Nui 10
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(29,3);
	    glVertex2f(29.5,4);
	    glVertex2f(30.5,4);
	    glVertex2f(31,3);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(29.5,4);
	    glVertex2f(30,4.5);
	    glVertex2f(30.5,4);
    glEnd();

//  Nui 11
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(31,3);
	    glVertex2f(31.5,4.5);
	    glVertex2f(32.5,4.5);
	    glVertex2f(33,3);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(31.5,4.5);
	    glVertex2f(32.5,4.5);
	    glVertex2f(32,5);
    glEnd();

//  Nui 12
    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(33,3);
	    glVertex2f(33.5,4.5);
	    glVertex2f(37.5,4.5);
	    glVertex2f(38,3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(33.5,4.5);
	    glVertex2f(34,5);
	    glVertex2f(37,5);
	    glVertex2f(37.5,4.5);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(red1,green1,blue1);
	    glVertex2f(34,5);
	    glVertex2f(37,5);
	    glVertex2f(35.5,5.5);
    glEnd();
}

// <------ DAT LIEN ------->
void DatLien(GLubyte red, GLubyte green, GLubyte blue)
{
	glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(38.0f,3.0f);
	    glVertex2f(38.0f,-7.0f);
	    glVertex2f(-12.0f,-7.0f);
	    glVertex2f(-12.0f,3.0f);
    glEnd();
}

void Nha(GLubyte red, GLubyte green, GLubyte blue)
{
//  NHA NGUYET 
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, g_hoavanmaingoiNguyet);
	
		glBegin(GL_POLYGON);
		glColor3ub(221, 160, 221);
		glTexCoord2f(1.0f, 1.0f); glVertex2f(25.3, 1.2);
		glTexCoord2f(0.0f, 1.0f); glVertex2f(21.3, 1.2);
		glTexCoord2f(0.0f, 0.0f); glVertex2f(23, -1);
		glTexCoord2f(1.0f, 0.0f); glVertex2f(27, -1);
		
		glEnd();
		
		glBegin(GL_POLYGON);
		glColor3ub(221, 160, 221);
		
		glTexCoord2f(1.0f, 1.0f); glVertex2f(21.5, 1);
		glTexCoord2f(0.0f, 1.0f); glVertex2f(21.3, 1.2);
		glTexCoord2f(0.0f, 0.0f); glVertex2f(19.5, -1);
		glTexCoord2f(1.0f, 0.0f); glVertex2f(20, -1);
		
		glEnd();
	
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();

    
    glBegin(GL_POLYGON);
	    glColor3ub(255 ,225 ,255); // tuong 
	    glVertex2f(21.5,1);
	    glVertex2f(20,-1);
	    glVertex2f(20,-2.5);
	    glVertex2f(23,-3);
	    glVertex2f(23,-1);
    glEnd();

   	glBegin(GL_POLYGON);
	    glColor3ub(220,20,60);
	    glVertex2f(22,-2);
	    glVertex2f(22,-1);
	   	glVertex2f(21,-1);
	    glVertex2f(21,-2);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(47,79,79);
	    glVertex2f(23,-3);
	    glVertex2f(20,-2.5);
	    glVertex2f(19.7,-2.9);
	    glVertex2f(23,-3.5);
    glEnd();

   	glBegin(GL_POLYGON);
	   	glColor3ub(216, 191 ,216); // tuong 
	    glVertex2f(26.5,-3);
	    glVertex2f(26.5,-1);
	    glVertex2f(23,-1);
	    glVertex2f(23,-3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(47,79,79);
	    glVertex2f(23,-3);
	    glVertex2f(23,-3.5);
	    glVertex2f(27,-3.5);
	    glVertex2f(26.5,-3);
    glEnd();

// 	Door
    glBegin(GL_POLYGON);
	    glColor3ub(red, green, blue);
	    glVertex2f(25.5,-3);
	    glVertex2f(25.5,-1.2);
	    glVertex2f(24,-1.2);
	    glVertex2f(24,-3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(220,20,60);
	    glVertex2f(24.7,-3);
	    glVertex2f(24.7,-1.4);
	    glVertex2f(24,-1.2);
	    glVertex2f(24,-3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(220,20,60);
	    glVertex2f(25.5,-3);
	    glVertex2f(25.5,-1.2);
	    glVertex2f(24.8,-1.4);
	    glVertex2f(24.8,-3);
    glEnd(); 
	
	
	glPushMatrix(); 
	glScalef(0.9f, 0.9f, 1.0f); 
//  NHA CUA MAN
		glPushMatrix(); 
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, g_hoavanmaingoiMan);
			float _changePos = 23; 
			glColor3ub(0,206,209);
		    glBegin(GL_POLYGON);// mai nha lon
			    glTexCoord2f(1.0f, 1.0f); glVertex2f(-2.7f + _changePos, 1.2f);
			    glTexCoord2f(0.0f, 1.0f); glVertex2f(-6.7f + _changePos, 1.2f);
			    glTexCoord2f(0.0f, 0.0f); glVertex2f(-5.0f + _changePos, -1.0f);
			    glTexCoord2f(1.0f, 0.0f); glVertex2f(-1.0f + _changePos, -1.0f);
		    glEnd();
		
		    glBegin(GL_POLYGON);// mai nha sau
			    glTexCoord2f(1.0f, 1.0f); glVertex2f(-6.5f + _changePos, 1.0f);
			    glTexCoord2f(0.0f, 1.0f); glVertex2f(-6.7f + _changePos, 1.2f);
			    glTexCoord2f(0.0f, 0.0f); glVertex2f(-8.5f + _changePos, -1.0f);
			    glTexCoord2f(1.0f, 0.0f); glVertex2f(-8.0f + _changePos, -1.0f);
		    glEnd();
		glDisable(GL_TEXTURE_2D);
		glPopMatrix();
	    
	    glBegin(GL_POLYGON);// tuong sau
		    glColor3ub(255 ,228 ,225);
		    glVertex2f(-6.5f + _changePos,1.0f);
		    glVertex2f(-8.0f + _changePos,-1.0f);
		    glVertex2f(-8.0f + _changePos,-2.5f);
		    glVertex2f(-5.0f + _changePos,-3.0f);
		    glVertex2f(-5.0f + _changePos,-1.0f);
	    glEnd();
	
	    glBegin(GL_POLYGON);// cua so sau
		    glColor3ub(0,206,209);
		    glVertex2f(-6.0f + _changePos,-2.0f);
		    glVertex2f(-6.0f + _changePos,-1.0f);
		    glVertex2f(-7.0f + _changePos,-1.0f);
		    glVertex2f(-7.0f + _changePos,-2.0f);
	    glEnd();
	
	    glBegin(GL_POLYGON);// chan nha
		    glColor3ub(47,79,79);
		    glVertex2f(-5.0f + _changePos,-3.0f);
		    glVertex2f(-8.0f + _changePos,-2.5f);
		    glVertex2f(-8.3f + _changePos,-2.9f);
		    glVertex2f(-5.0f + _changePos,-3.5f);
	    glEnd();
	
	    glBegin(GL_POLYGON);// tuong truoc
		    glColor3ub(255, 245 ,238);
		    glVertex2f(-1.5f + _changePos,-3.0f);
		    glVertex2f(-1.5f + _changePos,-1.0f);
		    glVertex2f(-5.0f + _changePos,-1.0f);
		    glVertex2f(-5.0f + _changePos,-3.0f);
	    glEnd();
	
	    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
		    glColor3ub(47,79,79);
		    glVertex2f(-5.0f + _changePos,-3.0f);
		    glVertex2f(-5.0f + _changePos,-3.5f);
		    glVertex2f(-1.0f + _changePos,-3.5f);
		    glVertex2f(-1.5f + _changePos,-3.0f);
	    glEnd();
	
	
	//  door:left
	    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
		    glColor3ub(red, green, blue);
		    glVertex2f(-2.5f + _changePos,-3.0f);
		    glVertex2f(-2.5f + _changePos,-1.2f);
		    glVertex2f(-4.0f + _changePos,-1.2f);
		    glVertex2f(-4.0f + _changePos,-3.0f);
	    glEnd();
	
	    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
		    glColor3ub(0,206,209);
		    glVertex2f(-3.3f + _changePos,-3.0f);
		    glVertex2f(-3.3f + _changePos,-1.4f);
		    glVertex2f(-4.0f + _changePos,-1.2f);
		    glVertex2f(-4.0f + _changePos,-3.0f);
	    glEnd();
	
	    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
		    glColor3ub(0,206,209);
		    glVertex2f(-2.5f + _changePos,-3.0f);
		    glVertex2f(-2.5f + _changePos,-1.2f);
		    glVertex2f(-3.2f + _changePos,-1.4f);
		    glVertex2f(-3.2f + _changePos,-3.0f);
	    glEnd(); 
	glPopMatrix(); 
    
    //  NHA NGHEO 
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, g_hoavanmaingoiHongAnh);

	    glBegin(GL_POLYGON);
	    glColor3ub(210,105,30);
	
		    glTexCoord2f(1.0f, 1.0f); glVertex2f(-2.7f, 1.2f);
		    glTexCoord2f(0.0f, 1.0f); glVertex2f(-6.7f, 1.2f);
		    glTexCoord2f(0.0f, 0.0f); glVertex2f(-5.0f, -1.0f);
		    glTexCoord2f(1.0f, 0.0f); glVertex2f(-1.0f, -1.0f);
	
	    glEnd();
	
	    glBegin(GL_POLYGON);
	    glColor3ub(210,105,30);
	
		    glTexCoord2f(1.0f, 1.0f); glVertex2f(-6.5f, 1.0f);
		    glTexCoord2f(0.0f, 1.0f); glVertex2f(-6.7f, 1.2f);
		    glTexCoord2f(0.0f, 0.0f); glVertex2f(-8.5f, -1.0f);
		    glTexCoord2f(1.0f, 0.0f); glVertex2f(-8.0f, -1.0f);
	
	    glEnd();

    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
	
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(205,133,63);
	    glVertex2f(-6.5f,1.0f);
	    glVertex2f(-8.0f ,-1.0f);
	    glVertex2f(-8.0f ,-2.5f);
	    glVertex2f(-5.0f ,-3.0f);
	    glVertex2f(-5.0f ,-1.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red , green, blue);
	    glVertex2f(-6.0f ,-2.0f);
	    glVertex2f(-6.0f ,-1.0f);
	    glVertex2f(-7.0f ,-1.0f);
	    glVertex2f(-7.0f ,-2.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(139,69,19);
	    glVertex2f(-5.0f ,-3.0f);
	    glVertex2f(-8.0f ,-2.5f);
	    glVertex2f(-8.3f ,-2.9f);
	    glVertex2f(-5.0f ,-3.5f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(184,134,11);
	    glVertex2f(-1.5f ,-3.0f);
	    glVertex2f(-1.5f,-1.0f);
	    glVertex2f(-5.0f,-1.0f);
	    glVertex2f(-5.0f,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(139,69,19);
	    glVertex2f(-5.0f ,-3.0f);
	    glVertex2f(-5.0f ,-3.5f);
	    glVertex2f(-1.0f ,-3.5f);
	    glVertex2f(-1.5f ,-3.0f);
    glEnd();


//  door:left
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red, green, blue);
	    glVertex2f(-2.5f,-3.0f);
	    glVertex2f(-2.5f,-1.2f);
	    glVertex2f(-4.0f,-1.2f);
	    glVertex2f(-4.0f,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(128,135,32);
	    glVertex2f(-3.3f,-3.0f);
	    glVertex2f(-3.3f,-1.4f);
	    glVertex2f(-4.0f,-1.2f);
	    glVertex2f(-4.0f,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(128,135,32);
	    glVertex2f(-2.5f ,-3.0f);
	    glVertex2f(-2.5f ,-1.2f);
	    glVertex2f(-3.2f,-1.4f);
	    glVertex2f(-3.2f ,-3.0f);
    glEnd();
}

void NhaTuyet(GLubyte red, GLubyte green, GLubyte blue)
{
//  Right house
	glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue); //mai nha lon
	    glVertex2f(25.3,1.2);
	    glVertex2f(21.3,1.2);
	    glVertex2f(23,-1);
	    glVertex2f(27,-1);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(red,green,blue);
	    glVertex2f(21.5,1);
	    glVertex2f(21.3,1.2);
	    glVertex2f(19.5,-1);
	    glVertex2f(20,-1);
    glEnd();
    
    glBegin(GL_POLYGON);
	    glColor3ub(255 ,225 ,255); // tuong 
	    glVertex2f(21.5,1);
	    glVertex2f(20,-1);
	    glVertex2f(20,-2.5);
	    glVertex2f(23,-3);
	    glVertex2f(23,-1);
    glEnd();

   	glBegin(GL_POLYGON);
	    glColor3ub(220, 20, 60);
	    glVertex2f(22,-2);
	    glVertex2f(22,-1);
	   	glVertex2f(21,-1);
	    glVertex2f(21,-2);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(47,79,79);
	    glVertex2f(23,-3);
	    glVertex2f(20,-2.5);
	    glVertex2f(19.7,-2.9);
	    glVertex2f(23,-3.5);
    glEnd();

   	glBegin(GL_POLYGON);
	   	glColor3ub(216, 191 ,216); // tuong 
	    glVertex2f(26.5,-3);
	    glVertex2f(26.5,-1);
	    glVertex2f(23,-1);
	    glVertex2f(23,-3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(47,79,79);
	    glVertex2f(23,-3);
	    glVertex2f(23,-3.5);
	    glVertex2f(27,-3.5);
	    glVertex2f(26.5,-3);
    glEnd();

// 	Door
    glBegin(GL_POLYGON);
	    glColor3ub(0,0,0);
	    glVertex2f(25.5,-3);
	    glVertex2f(25.5,-1.2);
	    glVertex2f(24,-1.2);
	    glVertex2f(24,-3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(220,20,60);
	    glVertex2f(24.7,-3);
	    glVertex2f(24.7,-1.4);
	    glVertex2f(24,-1.2);
	    glVertex2f(24,-3);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(220,20,60);
	    glVertex2f(25.5,-3);
	    glVertex2f(25.5,-1.2);
	    glVertex2f(24.8,-1.4);
	    glVertex2f(24.8,-3);
    glEnd(); 
	
	
	glPushMatrix(); 
//  Center house 139, 69, 19
	float _changePos = 23; 
	glScalef(0.9f, 0.9f, 1.0f); 
    glBegin(GL_POLYGON);// mai nha lon
	    glColor3ub(red, green, blue);
	    glVertex2f(-2.7f + _changePos,1.2f);
	    glVertex2f(-6.7f + _changePos,1.2f);
	    glVertex2f(-5.0f + _changePos,-1.0f);
	    glVertex2f(-1.0f + _changePos,-1.0f);
    glEnd();

    glBegin(GL_POLYGON);// mai nha sau
	    glColor3ub(red, green, blue);
	    glVertex2f(-6.5f + _changePos,1.0f);
	    glVertex2f(-6.7f + _changePos,1.2f);
	    glVertex2f(-8.5f + _changePos,-1.0f);
	    glVertex2f(-8.0f + _changePos,-1.0f);
    glEnd();
    
    glBegin(GL_POLYGON);// tuong sau
	    glColor3ub	(255 ,228 ,225);
	    glVertex2f(-6.5f + _changePos,1.0f);
	    glVertex2f(-8.0f + _changePos,-1.0f);
	    glVertex2f(-8.0f + _changePos,-2.5f);
	    glVertex2f(-5.0f + _changePos,-3.0f);
	    glVertex2f(-5.0f + _changePos,-1.0f);
    glEnd();

    glBegin(GL_POLYGON);// cua so sau
	    glColor3ub(0,206,209);
	    glVertex2f(-6.0f + _changePos,-2.0f);
	    glVertex2f(-6.0f + _changePos,-1.0f);
	    glVertex2f(-7.0f + _changePos,-1.0f);
	    glVertex2f(-7.0f + _changePos,-2.0f);
    glEnd();

    glBegin(GL_POLYGON);// chan nha
	    glColor3ub(47,79,79);
	    glVertex2f(-5.0f + _changePos,-3.0f);
	    glVertex2f(-8.0f + _changePos,-2.5f);
	    glVertex2f(-8.3f + _changePos,-2.9f);
	    glVertex2f(-5.0f + _changePos,-3.5f);
    glEnd();

    glBegin(GL_POLYGON);// tuong truoc
	    glColor3ub	(255, 245 ,238);
	    glVertex2f(-1.5f + _changePos,-3.0f);
	    glVertex2f(-1.5f + _changePos,-1.0f);
	    glVertex2f(-5.0f + _changePos,-1.0f);
	    glVertex2f(-5.0f + _changePos,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(47,79,79);
	    glVertex2f(-5.0f + _changePos,-3.0f);
	    glVertex2f(-5.0f + _changePos,-3.5f);
	    glVertex2f(-1.0f + _changePos,-3.5f);
	    glVertex2f(-1.5f + _changePos,-3.0f);
    glEnd();


//  door:left
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(47,79,79);
	    glVertex2f(-2.5f + _changePos,-3.0f);
	    glVertex2f(-2.5f + _changePos,-1.2f);
	    glVertex2f(-4.0f + _changePos,-1.2f);
	    glVertex2f(-4.0f + _changePos,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(0,206,209);
	    glVertex2f(-3.3f + _changePos,-3.0f);
	    glVertex2f(-3.3f + _changePos,-1.4f);
	    glVertex2f(-4.0f + _changePos,-1.2f);
	    glVertex2f(-4.0f + _changePos,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(0,206,209);
	    glVertex2f(-2.5f + _changePos,-3.0f);
	    glVertex2f(-2.5f + _changePos,-1.2f);
	    glVertex2f(-3.2f + _changePos,-1.4f);
	    glVertex2f(-3.2f + _changePos,-3.0f);
    glEnd(); 
	glPopMatrix(); 
    
    //  Left house 139, 69, 19
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red, green, blue);
	    glVertex2f(-2.7f,1.2f);
	    glVertex2f(-6.7f,1.2f);
	    glVertex2f(-5.0f,-1.0f);
	    glVertex2f(-1.0f,-1.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red, green, blue);
	    glVertex2f(-6.5f ,1.0f);
	    glVertex2f(-6.7f ,1.2f);
	    glVertex2f(-8.5f ,-1.0f);
	    glVertex2f(-8.0f ,-1.0f);
    glEnd();
    
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(205,133,63);
	    glVertex2f(-6.5f,1.0f);
	    glVertex2f(-8.0f ,-1.0f);
	    glVertex2f(-8.0f ,-2.5f);
	    glVertex2f(-5.0f ,-3.0f);
	    glVertex2f(-5.0f ,-1.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(0, 0, 0);
	    glVertex2f(-6.0f ,-2.0f);
	    glVertex2f(-6.0f ,-1.0f);
	    glVertex2f(-7.0f ,-1.0f);
	    glVertex2f(-7.0f ,-2.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(139,69,19);
	    glVertex2f(-5.0f ,-3.0f);
	    glVertex2f(-8.0f ,-2.5f);
	    glVertex2f(-8.3f ,-2.9f);
	    glVertex2f(-5.0f ,-3.5f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(184,134,11);
	    glVertex2f(-1.5f ,-3.0f);
	    glVertex2f(-1.5f,-1.0f);
	    glVertex2f(-5.0f,-1.0f);
	    glVertex2f(-5.0f,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(139,69,19);
	    glVertex2f(-5.0f ,-3.0f);
	    glVertex2f(-5.0f ,-3.5f);
	    glVertex2f(-1.0f ,-3.5f);
	    glVertex2f(-1.5f ,-3.0f);
    glEnd();


//  door:left
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(0, 0, 0);
	    glVertex2f(-2.5f,-3.0f);
	    glVertex2f(-2.5f,-1.2f);
	    glVertex2f(-4.0f,-1.2f);
	    glVertex2f(-4.0f,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(128,135,32);
	    glVertex2f(-3.3f,-3.0f);
	    glVertex2f(-3.3f,-1.4f);
	    glVertex2f(-4.0f,-1.2f);
	    glVertex2f(-4.0f,-3.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(128,135,32);
	    glVertex2f(-2.5f ,-3.0f);
	    glVertex2f(-2.5f ,-1.2f);
	    glVertex2f(-3.2f,-1.4f);
	    glVertex2f(-3.2f ,-3.0f);
    glEnd();
}

void DongRom(GLubyte red, GLubyte green, GLubyte blue)
{
    glPushMatrix();

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, g_dongrom);

    glBegin(GL_POLYGON);
        glColor3ub(189, 183, 107);
        glTexCoord2f(1.0f, 0.0f); glVertex2f(2.5f, -3.0f);
        glTexCoord2f(1.0f, 1.0f); glVertex2f(2.0f, -1.0f);
        glTexCoord2f(0.0f, 1.0f); glVertex2f(-3.0f, -1.0f);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(-3.5f, -3.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(189, 183, 107);
        glTexCoord2f(1.0f, 0.0f); glVertex2f(2.0f, -1.0f);
        glTexCoord2f(1.0f, 1.0f); glVertex2f(1.0f, 0.5f);
        glTexCoord2f(0.0f, 1.0f); glVertex2f(-2.0f, 0.5f);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(-3.0f, -1.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        glTexCoord2f(1.0f, 0.0f); glVertex2f(1.0f, 0.5f);
        glTexCoord2f(0.5f, 1.0f); glVertex2f(0.0f, 1.0f);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(-1.0f, 1.0f);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(-2.0f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        glTexCoord2f(1.0f, 0.0f); glVertex2f(0.0f, 1.0f);
        glTexCoord2f(0.5f, 1.0f); glVertex2f(-0.5f, 1.2f);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(red, green, blue);
        glTexCoord2f(1.0f, 0.0f); glVertex2f(-0.4f, 1.1f);
        glTexCoord2f(1.0f, 1.0f); glVertex2f(-0.4f, 1.5f);
        glTexCoord2f(0.0f, 1.0f); glVertex2f(-0.6f, 1.5f);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(-0.6f, 1.1f);
    glEnd();

    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void Cay(void)
{
//	THAN CAY	
	glBegin(GL_POLYGON);
	    glColor3ub(139,69,19);
	    glVertex2f(-9.5,1);
	    glVertex2f(-9,1.5);
	    glVertex2f(-9.5,2.5);
	    glVertex2f(-10,2);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(139,69,19);
	    glVertex2f(-9,1.5);
	    glVertex2f(-8.5,1);
	    glVertex2f(-8,2);
	    glVertex2f(-8,2.5);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(139,69,19);
	    glVertex2f(-9.5,1);
	    glVertex2f(-9.5,-3.5);
	    glVertex2f(-9,-4);
	    glVertex2f(-8.5,-3.5);
	    glVertex2f(-8.5,1);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(139,69,19);
	    glVertex2f(-8.5,-3);
	    glVertex2f(-9.5,-3);
	    glVertex2f(-10.5,-3.5);
	    glVertex2f(-7.5,-3.5);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(139,69,19);
	    glVertex2f(-10,-0.5);
	    glVertex2f(-9.5,-1);
	    glVertex2f(-9.5,-0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(139,69,19);
	    glVertex2f(-9.5,1);
	    glVertex2f(-9,1.5);
	    glVertex2f(-8.5,1);
    glEnd();
    
//	NGON CAY (VE CAC HINH TRON) 
    glPushMatrix();
	    glColor3ub(50,205,50);
	    glTranslatef(-10.5, 2.5, 0);
	    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
	    glColor3ub(50,205,50);
	    glTranslatef(-9.0, 2.5, 0);
	    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(50,205,50);
	    glTranslatef(-7.5, 2.5, 0);
	    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
	    glColor3ub(50,205,50);
	    glTranslatef(-8.5, 3.5, 0);
	    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
	    glColor3ub(50,205,50);
	    glTranslatef(-10.0, 4.0, 0);
	    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
	    glColor3ub(50,205,50);
	    glTranslatef(-8.0, 4.0, 0);
	    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
	    glColor3ub(50,205,50);
	    glTranslatef(-9.0, 5.0, 0);
	    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();
    
}

void CayRungLa(void)
{
//	THAN CAY	
	glBegin(GL_POLYGON);
	    glColor3ub(255,255,255);
	    glVertex2f(-9.5,1);
	    glVertex2f(-9,1.5);
	    glVertex2f(-9.5,2.5);
	    glVertex2f(-10,2);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(255,255,255);
	    glVertex2f(-9,1.5);
	    glVertex2f(-8.5,1);
	    glVertex2f(-8,2);
	    glVertex2f(-8,2.5);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(139,69,19);
	    glVertex2f(-9.5,1);
	    glVertex2f(-9.5,-3.5);
	    glVertex2f(-9,-4);
	    glVertex2f(-8.5,-3.5);
	    glVertex2f(-8.5,1);
    glEnd();

    glBegin(GL_POLYGON);
	    glColor3ub(139,69,19);
	    glVertex2f(-8.5,-3);
	    glVertex2f(-9.5,-3);
	    glVertex2f(-10.5,-3.5);
	    glVertex2f(-7.5,-3.5);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(139,69,19);
	    glVertex2f(-10,-0.5);
	    glVertex2f(-9.5,-1);
	    glVertex2f(-9.5,-0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
	    glColor3ub(255,255,255);
	    glVertex2f(-9.5,1);
	    glVertex2f(-9,1.5);
	    glVertex2f(-8.5,1);
    glEnd();
    
}

void RoTao() {

   // VE~ DAY THUNG
    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19); 
    
    glVertex2f(-1.0f, 0.0f);

    glVertex2f(1.0f, 0.0f);
  
    glVertex2f(0.8f, -0.4f);

    glVertex2f(-0.8f, -0.4f);
 
    glEnd();

    // VE~ THANH CUA RO
    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19); 
     glTranslatef(-10.7, -5, 0);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.6f, -0.4f);
    glVertex2f(-0.6f, -0.4f);
  
    glEnd();

    // VE~ NUT CUA RO
    glPushMatrix();
    glColor3ub(255, 0, 0); 
    glTranslatef(-0.5f, 0.0f, 0.05f); 
    glutSolidSphere(0.1, 50, 50);
    glPopMatrix();
    glEnd();
    
    glPushMatrix();
    glColor3ub(255, 0, 0); 
    glTranslatef(0.5f, 0.0f, 0.05f); 
    glutSolidSphere(0.1, 50, 50);
    glPopMatrix();
    glEnd();
    
    glPushMatrix();
    glColor3ub(255, 0, 0); 
   
    glutSolidSphere(0.1, 50, 50);
    glPopMatrix();
    glEnd();
}

void QuaTao(void)
{
	//  TAO
	glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-10.7, 2.2, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-10.0, 4.0, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-8.0, 4.0, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-7.2, 2.2, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-9.0, 5.5, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
}

void QuaTaoRung(void)
{
	glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-11.7, -5.5, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
	glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-10.7, -5, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-11.0, -4, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(128,128,0);
	    glTranslatef(-9.7, -5.6, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();
    
    glPushMatrix();
	    glColor3ub(255,0,0);
	    glTranslatef(-10, -9, 0);
	    glutSolidSphere(0.2, 100, 100);
    glPopMatrix();	
} 

void CoiXoayGio(void) 
{
	//than coi xoay gop
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(105, 105, 105);
	
	    glVertex2f(31.0f,2.0f);
	    glVertex2f(30.0f,-6.0f);
	    glVertex2f(34.0f,-6.0f);
	    glVertex2f(33.0f,2.0f);
	    glVertex2f(32.5f,3.0f);
	    glVertex2f(31.5f,3.0f);
    glEnd();

    glPushMatrix();
	    glColor3ub(0,0,0);
	    
	    glTranslatef(32.0f,3.0f,0.0f);
	    glutSolidSphere(0.5,150,150);
		glRotatef(_angle1, 0.0f, 0.0f,1.0f);

    glBegin(GL_QUADS);// first stand to hold the blade
	    glColor3ub(105, 105,105);
	    
	    glVertex2f(0.0f,0.0f);
	    glVertex2f(5.0f,0.0f);
	    glVertex2f(5.0f,0.25f);
	    glVertex2f(0.0f,0.25f);
    glEnd();

    glBegin(GL_QUADS);// second stand to hold the blade
    	glColor3ub(105, 105,105);
    	
	    glVertex2f(0.0f,0.0f);
	    glVertex2f(0.0f,5.0f);
	    glVertex2f(-0.25f,5.0f);
	    glVertex2f(-0.25f,0.0f);
    glEnd();

    glBegin(GL_QUADS);// third stand to hold the blade
	    glColor3ub(105, 105,105);
	    
	    glVertex2f(0.0f,-0.25f);
	    glVertex2f(0.0f,0.0f);
	    glVertex2f(-5.0f,0.0f);
	    glVertex2f(-5.0f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);// fourth stand to hold the blade
	    glColor3ub(105, 105,105);
	    
	    glVertex2f(0.25f,0.0f);
	    glVertex2f(0.0f,0.0f);
	    glVertex2f(0.0f,-5.0f);
	    glVertex2f(0.25f,-5.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// first triangular blade to hold the blade
	    glColor3ub(127, 255 ,212);
	    
	    glVertex2f(0.25f,0.0f);
	    glVertex2f(5.0f,-2.5f);
	    glVertex2f(5.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// second triangular blade to hold the blade
	    glColor3ub(127, 255 ,212);
	    
	    glVertex2f(0.0f,0.025f);
	    glVertex2f(2.5f,5.0f);
	    glVertex2f(0.0f,5.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// third triangular blade to hold the blade
	    glColor3ub(127, 255 ,212);
	    glVertex2f(-0.25f,0.0f);
	    glVertex2f(-5.0f,2.5f);
	    glVertex2f(-5.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);// fourth triangular blade to hold the blade
	    glColor3ub(127, 255 ,212);
	    glVertex2f(0.0f,-0.025f);
	    glVertex2f(-2.5f,-5.0f);
	    glVertex2f(0.0f,-5.0f);
    glEnd();
    
    glPopMatrix();
}

// <------ BIEN ------->
void Bien(GLubyte red, GLubyte green, GLubyte blue)  
{
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red,green,blue);
	    glVertex2f(38.0f,-19.0f);
	    glVertex2f(38.0f,-7.0f);
	    glVertex2f(-12.0f,-7.0f);
	    glVertex2f(-12.0f,-19.0f);
    glEnd();
}

void Thuyen(void)
{
	// Boat 1
	glPushMatrix();
	    glTranslatef(_moveA, 0.0f, 0.0f);
	    
	    glBegin(GL_QUADS);
	    glColor3ub(184 ,134, 11);
	        glVertex2f(1.0f, -14.0f);
	        glVertex2f(1.50f, -13.0f);
	        glVertex2f(-2.0f, -13.0f);
	        glVertex2f(-3.0f, -14.0f);
	    glEnd();

	    glBegin(GL_QUADS);
	    glColor3ub(139, 69, 19);
	        glVertex2f(2.0f, -14.5f);
	        glVertex2f(2.0f, -14.0f);
	        glVertex2f(-3.0f, -14.0f);
	        glVertex2f(-3.0f, -14.5f);
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(139, 69, 19);
	        glVertex2f(-3.0f, -14.5f);
	        glVertex2f(-3.0f, -14.0f);
	        glVertex2f(-4.5f, -13.7f);
	
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(139, 69, 19);
	        glVertex2f(2.0f, -14.5f);
	        glVertex2f(3.5f, -13.7f);
	        glVertex2f(2.0f, -14.0f);
	
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(0,0,0);
	        glVertex2f(2.0f, -14.0f);
	        glVertex2f(1.5f, -13.0f);
	        glVertex2f(1.0f, -14.0f);
	
	    glEnd();

    glPopMatrix();

    // Boat 2
    glPushMatrix();
    	glTranslatef(_moveB, 0.0f, 0.0f);
    
	    glBegin(GL_QUADS);
	    	glColor3ub(188 ,210 ,238);
	    	
	        glVertex2f(22.0f, -17.5f);
	        glVertex2f(21.0f, -16.5f);
	        glVertex2f(17.50f, -16.5f);
	        glVertex2f(18.0f, -17.5f);
	    glEnd();
//
	    glBegin(GL_QUADS);
	    	glColor3ub(139, 123, 139);
	    	
	        glVertex2f(22.0f, -18.0f);
	        glVertex2f(22.0f, -17.5f);
	        glVertex2f(17.0f, -17.5f);
	        glVertex2f(17.0f, -18.0f);
	    glEnd();

	    glBegin(GL_QUADS);
	    	glColor3ub(244 ,164 ,96);
	    	
	        glVertex2f(20.5f, -16.5f);
	        glVertex2f(21.0f, -14.5f);
	        glVertex2f(18.5f, -14.5f);
	        glVertex2f(18.0f, -16.5f);
	    glEnd();

	    glBegin(GL_QUADS);
	    	glColor3ub(139,69,19);
	    	
	        glVertex2f(19.8f, -14.5f);
	        glVertex2f(19.8f, -14.0f);
	        glVertex2f(19.7f, -14.0f);
	        glVertex2f(19.7f, -14.5f);
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    	glColor3ub(139, 123, 139);
	    	
	        glVertex2f(17.0f, -18.0f);
	        glVertex2f(17.0f, -17.5f);
	        glVertex2f(15.5f, -17.2f);
	    glEnd();
//
	    glBegin(GL_TRIANGLES);
	    	glColor3ub(139, 123, 139);
	    	
	        glVertex2f(22.0f, -17.5f);
	        glVertex2f(22.0f, -18.0f);
	        glVertex2f(23.5f, -17.2f);
	    glEnd();

	    glBegin(GL_TRIANGLES);
		    glColor3ub(0,0,0);
		    
		    glVertex2f(17.0f, -17.5f);
		    glVertex2f(18.0f, -17.5f);
		    glVertex2f(17.5f, -16.5f);
	    glEnd();

    glPopMatrix();
    
    // Boat 3 
    glPushMatrix();
    	glTranslatef(_moveC, 7.0f, 0.0f);
    
	    glBegin(GL_QUADS);
	    	glColor3ub(121 ,205 ,205);
	    	
	        glVertex2f(22.0f, -17.5f);
	        glVertex2f(21.0f, -16.5f);
	        glVertex2f(17.50f, -16.5f);
	        glVertex2f(18.0f, -17.5f);
	    glEnd();
//
	    glBegin(GL_QUADS);
	    	glColor3ub(82, 139, 139);
	    	
	        glVertex2f(22.0f, -18.0f);
	        glVertex2f(22.0f, -17.5f);
	        glVertex2f(17.0f, -17.5f);
	        glVertex2f(17.0f, -18.0f);
	    glEnd();

	    glBegin(GL_QUADS);
	    	glColor3ub(255,99,71);
	    	
	        glVertex2f(20.5f, -16.5f);
	        glVertex2f(21.0f, -14.5f);
	        glVertex2f(18.5f, -14.5f);
	        glVertex2f(18.0f, -16.5f);
	    glEnd();

	    glBegin(GL_QUADS);
	    	glColor3ub(139,69,19);
	    	
	        glVertex2f(19.8f, -14.5f);
	        glVertex2f(19.8f, -14.0f);
	        glVertex2f(19.7f, -14.0f);
	        glVertex2f(19.7f, -14.5f);
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    	glColor3ub(82, 139, 139);
	    	
	        glVertex2f(17.0f, -18.0f);
	        glVertex2f(17.0f, -17.5f);
	        glVertex2f(15.5f, -17.2f);
	    glEnd();
//
	    glBegin(GL_TRIANGLES);
	    	glColor3ub(82, 139, 139);
	    	
	        glVertex2f(22.0f, -17.5f);
	        glVertex2f(22.0f, -18.0f);
	        glVertex2f(23.5f, -17.2f);
	    glEnd();

	    glBegin(GL_TRIANGLES);
		    glColor3ub(0,0,0);
		    
		    glVertex2f(17.0f, -17.5f);
		    glVertex2f(18.0f, -17.5f);
		    glVertex2f(17.5f, -16.5f);
	    glEnd();
	glPopMatrix(); 
}

void ThuyenKhongHieuUng(GLubyte red, GLubyte green, GLubyte blue)
{
		// Boat no act 139,69,19
	glPushMatrix();
	    glTranslatef(0.0, 7.0f, 0.0f);
	    
	    glBegin(GL_QUADS);
	    glColor3ub(red,green,blue);
	        glVertex2f(1.0f, -14.0f);
	        glVertex2f(1.50f, -13.0f);
	        glVertex2f(-2.0f, -13.0f);
	        glVertex2f(-3.0f, -14.0f);
	    glEnd();

	    glBegin(GL_QUADS);
	    glColor3ub(139, 131 ,134);
	        glVertex2f(2.0f, -14.5f);
	        glVertex2f(2.0f, -14.0f);
	        glVertex2f(-3.0f, -14.0f);
	        glVertex2f(-3.0f, -14.5f);
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(139, 131 ,134);
	        glVertex2f(-3.0f, -14.5f);
	        glVertex2f(-3.0f, -14.0f);
	        glVertex2f(-4.5f, -13.7f);
	
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(139, 131 ,134);
	        glVertex2f(2.0f, -14.5f);
	        glVertex2f(3.5f, -13.7f);
	        glVertex2f(2.0f, -14.0f);
	
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(0, 0, 0);
	        glVertex2f(2.0f, -14.0f);
	        glVertex2f(1.5f, -13.0f);
	        glVertex2f(1.0f, -14.0f);
	
	    glEnd();

    glPopMatrix();
    
    // Boat no act
	glPushMatrix();
	    glTranslatef(20.0, 7.0f, 0.0f);
	    
	    glBegin(GL_QUADS);
	    glColor3ub(red, green, blue);
	        glVertex2f(1.0f, -14.0f);
	        glVertex2f(1.50f, -13.0f);
	        glVertex2f(-2.0f, -13.0f);
	        glVertex2f(-3.0f, -14.0f);
	    glEnd();

	    glBegin(GL_QUADS);
	    glColor3ub(139, 131 ,134);
	        glVertex2f(2.0f, -14.5f);
	        glVertex2f(2.0f, -14.0f);
	        glVertex2f(-3.0f, -14.0f);
	        glVertex2f(-3.0f, -14.5f);
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(139, 131 ,134);
	        glVertex2f(-3.0f, -14.5f);
	        glVertex2f(-3.0f, -14.0f);
	        glVertex2f(-4.5f, -13.7f);
	
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(139, 131 ,134);
	        glVertex2f(2.0f, -14.5f);
	        glVertex2f(3.5f, -13.7f);
	        glVertex2f(2.0f, -14.0f);
	
	    glEnd();

	    glBegin(GL_TRIANGLES);
	    glColor3ub(0, 0, 0);
	        glVertex2f(2.0f, -14.0f);
	        glVertex2f(1.5f, -13.0f);
	        glVertex2f(1.0f, -14.0f);
	
	    glEnd();

    glPopMatrix();

}

// <------ BUOI TOI ------->
void NhungViSao(void)
{
	glPushMatrix();
    	glPointSize(2.0);
    	glColor3ub(255,255,255);
	    glBegin(GL_POINTS);
	    	glVertex2f(1,12);
	    	glVertex2f(2,11);
	        glVertex2f(4,11);
	        glVertex2f(-2,8);
	        glVertex2f(30,5);
	        glVertex2f(-1,9);
	        glVertex2f(35,11);
	        glVertex2f(-3,12);
	        glVertex2f(-7,13);
	    	glVertex2f(10,10);
	        glVertex2f(12,8.5);
	        glVertex2f(-11,11);
	        glVertex2f(37,11);
	        glVertex2f(-10,10);
	        glVertex2f(13,12);
	        glVertex2f(14,12);
	    	glVertex2f(18,10);
	    	
	    	glVertex2f(20,10);
	        glVertex2f(22,8.5);
	        glVertex2f(25,11);
	        glVertex2f(30,11);
	        glVertex2f(21,10);
	        glVertex2f(29,12);
	        glVertex2f(31,12);
	    	glVertex2f(27,10);
	    glEnd();

    glPopMatrix();
}

void MatTrang(void) 
{
	//1st circle for moon
     glPushMatrix();
	     glColor3ub(217,217,217);
	     glTranslatef(34.0,13.0, 0);
	     glutSolidSphere(1, 250, 250);
     glPopMatrix();

   //2nd circle for moon

     glPushMatrix();
	     glColor3ub(0,0,0);
	     glTranslatef(34,13.3, 0);
	     glutSolidSphere(1, 250, 250);
     glPopMatrix();
}

void NguoiTuyet(void) {
  glTranslatef(7.0, 0.0, 0.0);
   // Body
    glColor3ub(255, 255, 255);  // Màu tr?ng
    glTranslatef(0.0f, -1.0f, 0.0f);  // Di chuy?n xu?ng d? v? ph?n thân du?i
    glutSolidSphere(1.0, 150, 150);  // V? ph?n thân du?i

    // Head
    glTranslatef(0.0f, 1.5f, 0.0f);  // Di chuy?n lên d? v? d?u
    glutSolidSphere(0.5, 150, 150);  // V? d?u

    // Eyes
    glColor3ub(0, 0, 0);  // Màu den
    glTranslatef(-0.15f, 0.15f, 0.4f);  // Di chuy?n d? v? m?t trái
    glutSolidSphere(0.08, 150, 150);  // V? m?t trái
    glTranslatef(0.3f, 0.0f, 0.0f);  // Di chuy?n d? v? m?t ph?i
    glutSolidSphere(0.08, 150, 150);  // V? m?t ph?i

    // Nose
    glColor3ub(255, 69, 0);  // Màu cam
    glTranslatef(-0.15f, -0.1f, 0.0f);  // Di chuy?n d? v? mui
    glRotatef(45.0f, 0.0f, 1.0f, 0.0f);  // Xoay mui
    glutSolidCone(0.1, 0.5, 150, 150);  // V? mui
//
    glPopMatrix(); 
}
void DongRomMuaDong(GLubyte red, GLubyte green, GLubyte blue)
{
//	189,183,107
	glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, g_dongrom);
    glPushMatrix();
		glBegin(GL_POLYGON);
		    glColor3ub(189, 183, 107);
		    glTexCoord2f(1.0f, 0.0f); glVertex2f(2.5f, -3.0f);
		    glTexCoord2f(1.0f, 1.0f); glVertex2f(2.0f, -1.0f);
		    glTexCoord2f(0.0f, 1.0f); glVertex2f(-3.0f, -1.0f);
		    glTexCoord2f(0.0f, 0.0f); glVertex2f(-3.5f, -3.0f);
		glEnd();
		
		glBegin(GL_POLYGON);
		    glColor3ub(189, 183, 107);
		    glTexCoord2f(1.0f, 0.0f); glVertex2f(2.0f, -1.0f);
		    glTexCoord2f(1.0f, 1.0f); glVertex2f(1.0f, 0.5f);
		    glTexCoord2f(0.0f, 1.0f); glVertex2f(-2.0f, 0.5f);
		    glTexCoord2f(0.0f, 0.0f); glVertex2f(-3.0f, -1.0f);
		glEnd();
	glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red,green,blue);
	    glVertex2f(1.0f,0.5f);
	    glVertex2f(0.0f,1.0f);
	    glVertex2f(-1.0f,1.0f);
	    glVertex2f(-2.0f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red,green,blue);
	    glVertex2f(0.0f,1.0f);
	    glVertex2f(-0.5f,1.2f);
	    glVertex2f(-1.0f,1.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    glColor3ub(red,green,blue);
	    glVertex2f(-0.4f,1.1f);
	    glVertex2f(-0.4f,1.5f);
	    glVertex2f(-0.6f,1.5f);
	    glVertex2f(-0.6f,1.1f);
    glEnd();	
}
#endif // UTILS_H

