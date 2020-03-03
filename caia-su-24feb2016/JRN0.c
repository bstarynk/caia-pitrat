#include "dx.h"
void JRN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int TL,XV,X,P;
int Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10005;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2010&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; XV=pile[v[22]+1]; X=pile[v[22]+2]; P=pile[v[22]+3]; Y=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=P; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(P,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+7)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=XV; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(100,21,140,XV,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=436; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+5,436,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=111; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+6,jvj+7,111,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+2,jvj+8,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=102; pile[WZ2]=Y; 
(*f[54])( );     /*TRI1(jvj+3,102,Y)*/
pile[v[22]]=250; pile[WZ1]=jvj+3; 
(*f[1600])( );     /*DVA0(250,jvj+3)*/
pile[v[22]]=TL; pile[WZ1]=302; pile[WZ2]=Y; 
(*f[36])( );     /*PLUSC0(TL,302,Y)*/
pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,X,jvj+4)*/
pile[WZ1]=Y; 
(*f[1380])( );     /*RECZ0(135,Y,jvj+4)*/
l1:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=Y; 
(*f[1380])( );     /*RECZ0(135,X,Y)*/
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
}
