#include "dx.h"
void TRADNEX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V10=0,V8=0,V9=0;
int N,EX,VV,IV;
int BA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11843;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1924&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; EX=pile[v[22]+1]; VV=pile[v[22]+2]; IV=pile[v[22]+3]; BA=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=459; pile[WZ3]=68; pile[WZ4]=BA; 
(*f[181])( );     /*QUADRI2(218,N,459,68,BA)*/
pile[v[22]]=N; pile[WZ1]=EX; pile[WZ2]=jvj+2; pile[WZ3]=jvj+3; 
(*f[2046])( );     /*TRADNEXA0(N,EX,jvj+2,jvj+3)*/
if((x[IV]!=576)) goto l3;
pile[v[22]]=VV; pile[WZ1]=129; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(VV,129,BA)*/
l3:x[jvj+10]=x[jvj+2] ;z[jvj+10]=z[jvj+2];
l1:if((x[jvj+10]>0)) goto l2;
x[jvj+11]=x[jvj+3] ;z[jvj+11]=z[jvj+3];
l4:if((x[jvj+11]>0)) goto l5;
pile[v[22]]=218; pile[WZ1]=IV; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,IV,jvj+6)*/
if(x[jvj+6]!=756&&x[jvj+6]!=749) goto l6;
pile[v[22]]=VV; pile[WZ1]=jvj+6; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(VV,jvj+6,BA)*/
l6:pile[v[22]]=1260; pile[WZ1]=BA; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+7)*/
l7:if((x[jvj+7]>0)) goto l8;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+4]=s[x[jvj+10]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+10];
pile[v[22]]=jvj+4; pile[WZ1]=BA; pile[WZ2]=278; 
(*f[1493])( );     /*NATFNA0(jvj+4,BA,278)*/
x[jvj+10]=t[x[jvj+10]];
goto l1;
l5:x[jvj+5]=s[x[jvj+11]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+11];
pile[v[22]]=jvj+5; pile[WZ1]=BA; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(jvj+5,BA,865)*/
x[jvj+11]=t[x[jvj+11]];
goto l4;
l8:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; 
(*f[1494])( );     /*FNDEXPR0(jvj+8)*/
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(110,jvj+8,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1261,jvj+8,jvj+9)*/
V10=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=V7; 
(*f[37])( );     /*SRA0(0,V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V10; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(23,V10,V8,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l9:x[jvj+7]=t[x[jvj+7]];
goto l7;
}
