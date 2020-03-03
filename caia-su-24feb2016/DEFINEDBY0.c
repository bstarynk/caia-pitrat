#include "dx.h"
void DEFINEDBY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,F=0,V18=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=11872;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3806&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,B,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=55)) goto l14;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,B,jvj+4)*/
for(i=x[jvj+4],V4=0;i>0;i=t[i],V4++)  ;
if((V4!=2)) goto l14;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1564,145,jvj+5)*/
x[jvj+23]=x[jvj+4] ;z[jvj+23]=z[jvj+4];
l1:if((x[jvj+23]>0)) goto l2;
x[jvj+25]=x[jvj+4] ;z[jvj+25]=z[jvj+4];
l7:if((x[jvj+25]<=0)) goto l14;
x[jvj+13]=s[x[jvj+25]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+25];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
V18=x[jvj+16];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V18) goto l9;
l8:x[jvj+25]=t[x[jvj+25]];
goto l7;
l2:x[jvj+6]=s[x[jvj+23]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+23];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+8,jvj+9)*/
F=x[jvj+9];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==F) goto l4;
l3:x[jvj+23]=t[x[jvj+23]];
goto l1;
l4:pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+6,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=41)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+6,jvj+12)*/
x[jvj+27]=x[jvj+4] ;z[jvj+27]=z[jvj+4];
l5:if((x[jvj+27]<=0)) goto l3;
x[jvj+24]=s[x[jvj+27]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+27];
if((x[jvj+6]!=x[jvj+24])) goto l6;
x[jvj+27]=t[x[jvj+27]];
goto l5;
l6:x[jvj+20]=x[jvj+24] ;z[jvj+20]=z[jvj+24];
l12:pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=48)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+20; pile[WZ2]=R; 
(*f[33])( );     /*FNDE0(107,jvj+20,R)*/
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l9:pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+13,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=41)) goto l8;
pile[v[22]]=103; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+13,jvj+19)*/
x[jvj+28]=x[jvj+4] ;z[jvj+28]=z[jvj+4];
l10:if((x[jvj+28]<=0)) goto l8;
x[jvj+26]=s[x[jvj+28]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+28];
if((x[jvj+13]!=x[jvj+26])) goto l11;
x[jvj+28]=t[x[jvj+28]];
goto l10;
l11:x[jvj+20]=x[jvj+26] ;z[jvj+20]=z[jvj+26];
goto l12;
l13:pile[v[22]]=20; pile[WZ1]=jvj+20; pile[WZ2]=R; 
(*f[409])( );     /*TRI14(20,jvj+20,R)*/
goto l15;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
