#include "dx.h"
void SUBMUL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V22=0,Z=0,V27=0,V=0,V28=0,V16=0,V30=0;
int R,X;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,R,jvj+9)*/
x[jvj+18]=w[x[jvj+9]][9];
l8:if((x[jvj+18]>0)) goto l9;
x[jvj+19]=w[x[jvj+9]][8];
l11:if((x[jvj+19]<=0)) goto l14;
x[jvj+12]=s[x[jvj+19]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+19];
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,R,jvj+13)*/
x[jvj+20]=x[jvj+13] ;z[jvj+20]=z[jvj+13];
l12:if((x[jvj+20]>0)) goto l13;
x[jvj+19]=t[x[jvj+19]];
goto l11;
l2:x[jvj+1]=t[x[jvj+1]];
l1:if((x[jvj+1]<=0)) goto l3;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V9)*/
V9=pile[WZ2]; 
if((V9!=V)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+2,jvj+3)*/
if((x[jvj+3]==23)) goto l2;
pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+2,jvj+15)*/
if((x[jvj+16]=w[x[jvj+15]][3])==incon) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+16; pile[WZ3]=jvj+17; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(jvj+2,jvj+16,V28,jvj+17)*/
V28=pile[WZ2]; 
V16=V28;
V30=V16;
pile[v[22]]=140; pile[WZ1]=R; 
(*f[71])( );     /*ENLV0(140,R)*/
pile[v[22]]=R; pile[WZ1]=100; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(R,100,jvj+15)*/
pile[WZ1]=jvj+16; pile[WZ2]=V30; 
(*f[43])( );     /*CHGC2(R,jvj+16,V30)*/
l3:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(128,X,jvj+4)*/
l4:if((x[jvj+4]<=0)) goto l15;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+5,V22)*/
V22=pile[WZ2]; 
if((V22!=V)) goto l5;
pile[v[22]]=158; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+5,jvj+6)*/
if((x[jvj+6]!=23)) goto l5;
pile[v[22]]=128; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(128,jvj+5,jvj+7)*/
l6:if((x[jvj+7]>0)) goto l7;
pile[v[22]]=140; pile[WZ1]=R; 
(*f[71])( );     /*ENLV0(140,R)*/
pile[v[22]]=R; pile[WZ1]=100; pile[WZ2]=128; 
(*f[35])( );     /*CHGC1(R,100,128)*/
l15:v[0]=jvj; v[22]-=2; return;
l5:x[jvj+4]=t[x[jvj+4]];
goto l4;
l7:Z=s[x[jvj+7]];
V27=Z;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V27; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+8)*/
pile[v[22]]=R; pile[WZ1]=128; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(R,128,jvj+8)*/
x[jvj+7]=t[x[jvj+7]];
goto l6;
l9:x[jvj+10]=s[x[jvj+18]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+18];
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=X; 
(*f[463])( );     /*SUBMUL0(jvj+11,X)*/
l10:x[jvj+18]=t[x[jvj+18]];
goto l8;
l13:x[jvj+14]=s[x[jvj+20]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+20];
pile[v[22]]=jvj+14; pile[WZ1]=X; 
(*f[463])( );     /*SUBMUL0(jvj+14,X)*/
x[jvj+20]=t[x[jvj+20]];
goto l12;
l14:pile[v[22]]=140; pile[WZ1]=R; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,R,V)*/
V=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,X,jvj+1)*/
goto l1;
}
