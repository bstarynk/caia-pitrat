#include "dx.h"
void MEVALQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V5=0,V6=0,V19=0,V9=0,V21=0,V12=0;
int B,X;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10071;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2095&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; X=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,X,V2)*/
V2=pile[WZ2]; 
x[jvj+16]=x[B] ;z[jvj+16]=z[B];
l1:if((x[jvj+16]<=0)) goto l5;
x[jvj+2]=s[x[jvj+16]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+16];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1!=V2)) goto l2;
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
pile[v[22]]=145; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,X,jvj+6)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,jvj+4,jvj+7)*/
if((x[jvj+6]!=x[jvj+7])) goto l5;
l6:pile[v[22]]=361; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(361,X,jvj+8)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(361,jvj+4,jvj+9)*/
if((x[jvj+8]!=x[jvj+9])) goto l5;
l7:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,X,V5)*/
V5=pile[WZ2]; 
pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V5!=V6)) goto l5;
l3:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(158,X,jvj+3)*/
l4:pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+4,jvj+5)*/
l10:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,X,jvj+12)*/
if((x[jvj+13]=w[x[jvj+12]][3])==incon) goto l11;
pile[v[22]]=X; pile[WZ1]=jvj+13; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(X,jvj+13,V19,jvj+14)*/
V19=pile[WZ2]; 
V9=V19;
pile[v[22]]=jvj+4; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+4,jvj+13,V21,jvj+15)*/
V21=pile[WZ2]; 
V12=V21;
if((V9!=V12)) goto l5;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:x[jvj+16]=t[x[jvj+16]];
goto l1;
l8:pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+4,jvj+10)*/
l5:x[RES]=134 ;z[RES]=134;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l9:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,X,jvj+11)*/
goto l5;
}
