#include "dx.h"
void ORP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V15=0,V12=0,V=0,V16=0;
int E,H;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; H=pile[v[22]+1]; Q=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[Q]=x[jvj+12]=incon;
if((x[E]!=0)) goto l3;
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=85; pile[WZ1]=100; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(85,100,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=102; pile[WZ2]=Q; 
(*f[54])( );     /*TRI1(jvj+13,102,Q)*/
pile[v[22]]=jvj+4; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(jvj+4,302,Q)*/
l3:for(i=x[E],V12=0;i>0;i=t[i],V12++)  ;
if((V12==1)) goto l4;
if((V12<=1)) goto l8;
pile[v[22]]=86; pile[WZ1]=100; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(86,100,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=102; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+15,102,jvj+9)*/
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+1]=d[30];z[jvj+1]=0;
V15=x[E];
l1:if((V15>0)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+7; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+7)*/
x[jvj+8]=vo[15];z[jvj+8]=vz[15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=255; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,255,jvj+19)*/
pile[v[22]]=jvj+7; pile[WZ1]=128; pile[WZ2]=jvj+18; 
(*f[300])( );     /*TRI10(jvj+7,128,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+19,jvj+18,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=102; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+16,102,jvj+6)*/
pile[v[22]]=135; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[1380])( );     /*RECZ0(135,jvj+6,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(jvj+8,302,jvj+9)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+8,302,jvj+6)*/
l5:pile[v[22]]=203; pile[WZ1]=H; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(203,H,jvj+10)*/
V16=x[E];
l6:if((V16<=0)) goto l8;
V=s[V16];
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==V) goto l7;
x[jvj+11]=vo[15];z[jvj+11]=vz[15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=225; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,225,jvj+20)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=102; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+17,102,jvj+12)*/
pile[v[22]]=134; pile[WZ1]=jvj+12; pile[WZ2]=jvj+6; 
(*f[1380])( );     /*RECZ0(134,jvj+12,jvj+6)*/
pile[v[22]]=H; pile[WZ1]=203; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(H,203,V)*/
pile[v[22]]=jvj+11; pile[WZ1]=302; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+11,302,jvj+12)*/
pile[v[22]]=H; pile[WZ1]=jvj+12; pile[WZ2]=jvj+6; pile[WZ3]=E; 
(*f[1838])( );     /*ORP1(H,jvj+12,jvj+6,E)*/
l8:if(x[Q]==incon) goto l9;
l12:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:V3=s[V15];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V3; pile[WZ4]=jvj+2; 
(*f[270])( );     /*QUADRI7(100,21,140,V3,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[196])( );     /*PLUF0(jvj+1,jvj+2,jvj+3)*/
V15=t[V15];
goto l1;
l4:x[jvj+5]=vo[15];z[jvj+5]=vz[15];
pile[v[22]]=86; pile[WZ1]=100; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(86,100,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=102; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+14,102,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(jvj+5,302,jvj+6)*/
goto l5;
l7:V16=t[V16];
goto l6;
l9:if(x[jvj+12]!=incon) goto l10;
l11:v[0]=jvj; v[22]-=3; v[102]=1;return;
l10:if((x[E]==0)) goto l11;
x[Q]=x[jvj+12] ;z[Q]=z[jvj+12];
goto l12;
}
