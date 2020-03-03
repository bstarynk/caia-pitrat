#include "dx.h"
void REDIV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+15]=incon;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=25)) goto l8;
x[jvj+3]=d[20];z[jvj+3]=0;
l1:if((x[jvj+3]<=0)) goto l8;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+4,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=268; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+4,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,A,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=160; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,160,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=111; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,jvj+9,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+22; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+22,jvj+11)*/
pile[v[22]]=208; pile[WZ1]=jvj+11; pile[WZ2]=218; pile[WZ3]=67; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(208,jvj+11,218,67,jvj+10)*/
pile[v[22]]=B; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; pile[WZ3]=208; 
(*f[3993])( );     /*REDIZ0(B,jvj+10,jvj+11,208,jvj+10)*/
pile[v[22]]=218; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+10,jvj+12)*/
if((x[jvj+12]!=67)) goto l3;
pile[v[22]]=208; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(208,jvj+10,R)*/
l3:pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+10,jvj+13)*/
if((x[jvj+13]!=68)) goto l4;
pile[v[22]]=208; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(208,jvj+10,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[799])( );if(v[102]) goto l4;     /*NORME0(jvj+14,jvj+15)*/
l4:if(x[R]==incon) goto l5;
l9:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:if(x[jvj+15]!=incon) goto l6;
l8:v[0]=jvj; v[22]-=3; v[102]=1;return;
l6:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=625)) goto l7;
pile[v[22]]=B; pile[WZ1]=jvj+15; pile[WZ2]=R; 
(*f[3994])( );if(v[102]) goto l7;     /*REDIV1(B,jvj+15,R)*/
goto l9;
l7:x[R]=x[jvj+15] ;z[R]=z[jvj+15];
goto l9;
}
