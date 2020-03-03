#include "dx.h"
void ENSFCT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V15=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=486)) goto l7;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,A,jvj+7)*/
x[jvj+14]=x[jvj+7] ;z[jvj+14]=z[jvj+7];
l1:if((x[jvj+14]>0)) goto l2;
x[jvj+11]=0 ;z[jvj+11]=0;
l4:if((x[jvj+7]>0)) goto l5;
x[R]=x[jvj+11] ;z[R]=z[jvj+11];
l11:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+14]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+14];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1446])( );     /*NONUL0(jvj+1,jvj+2)*/
if((x[jvj+2]==135)) goto l3;
l7:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,A,jvj+8)*/
if((x[jvj+8]!=484)) goto l9;
pile[v[22]]=A; pile[WZ1]=jvj+9; 
(*f[1446])( );     /*NONUL0(A,jvj+9)*/
if((x[jvj+9]==135)) goto l8;
l9:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
V15=abs(I);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+10)*/
pile[v[22]]=20; pile[WZ1]=jvj+10; pile[WZ2]=R; 
(*f[409])( );     /*TRI14(20,jvj+10,R)*/
goto l11;
l3:x[jvj+14]=t[x[jvj+14]];
goto l1;
l5:x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==484)) goto l12;
if((x[jvj+4]==41)) goto l12;
l6:x[jvj+7]=t[x[jvj+7]];
goto l4;
l8:pile[v[22]]=20; pile[WZ1]=A; pile[WZ2]=R; 
(*f[409])( );     /*TRI14(20,A,R)*/
goto l11;
l10:v[0]=jvj; v[22]-=2; v[102]=1;return;
l12:x[jvj+15]=x[jvj+11] ;z[jvj+15]=z[jvj+11];
l13:if((x[jvj+15]>0)) goto l14;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+3)*/
goto l6;
l14:x[jvj+12]=s[x[jvj+15]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+15];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+12,jvj+13)*/
if((x[jvj+13]==135)) goto l6;
x[jvj+15]=t[x[jvj+15]];
goto l13;
}
