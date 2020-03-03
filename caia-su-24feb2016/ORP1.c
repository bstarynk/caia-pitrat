#include "dx.h"
void ORP1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V5=0;
int H,N,F,E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; N=pile[v[22]+1]; F=pile[v[22]+2]; E=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[jvj+5]=incon;
if((x[E]!=0)) goto l1;
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=85; pile[WZ1]=100; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(85,100,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=102; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(jvj+8,102,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(jvj+2,302,jvj+3)*/
l1:pile[v[22]]=203; pile[WZ1]=H; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(203,H,jvj+1)*/
V5=x[E];
l2:if((V5<=0)) goto l4;
V=s[V5];
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==V) goto l3;
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=225; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,225,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+12,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=102; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+9,102,jvj+5)*/
pile[v[22]]=134; pile[WZ1]=jvj+5; pile[WZ2]=F; 
(*f[1380])( );     /*RECZ0(134,jvj+5,F)*/
pile[v[22]]=H; pile[WZ1]=203; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(H,203,V)*/
pile[v[22]]=jvj+4; pile[WZ1]=302; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+4,302,jvj+5)*/
pile[v[22]]=H; pile[WZ1]=jvj+5; pile[WZ2]=F; pile[WZ3]=E; 
(*f[1838])( );     /*ORP1(H,jvj+5,F,E)*/
l4:if(x[jvj+3]==incon) goto l5;
if(x[jvj+5]!=incon) goto l6;
l8:pile[v[22]]=85; pile[WZ1]=100; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(85,100,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=102; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+10,102,jvj+7)*/
x[jvj+6]=vo[15];z[jvj+6]=vz[15];
pile[v[22]]=135; pile[WZ1]=N; 
(*f[1380])( );     /*RECZ0(135,N,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(jvj+6,302,jvj+7)*/
l7:v[0]=jvj; v[22]-=4; return;
l3:V5=t[V5];
goto l2;
l5:if(x[jvj+5]!=incon) goto l6;
goto l8;
l6:pile[v[22]]=135; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[1380])( );     /*RECZ0(135,N,jvj+5)*/
goto l7;
}
