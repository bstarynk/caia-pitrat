#include "dx.h"
void CI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,K=0,V12=0,V23=0,V15=0,V26=0;
int TL,D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

TL=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=135; pile[WZ1]=TL; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,TL,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=248; pile[WZ2]=D; 
(*f[36])( );     /*PLUSC0(jvj+1,248,D)*/
l1:pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(302,TL,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
v[0]=jvj; v[22]-=2; return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=39)) goto l4;
pile[v[22]]=113; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(113,jvj+4,jvj+6)*/
x[jvj+14]=x[jvj+6] ;z[jvj+14]=z[jvj+6];
l5:if((x[jvj+14]>0)) goto l6;
pile[v[22]]=114; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(114,jvj+4,jvj+10)*/
x[jvj+15]=x[jvj+10] ;z[jvj+15]=z[jvj+10];
l8:if((x[jvj+15]<=0)) goto l4;
x[jvj+11]=s[x[jvj+15]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+15];
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+11,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+12,V23)*/
V23=pile[WZ2]; 
V15=V23;
V26=V15;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V26; pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,V26,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=103; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+11,103,jvj+13)*/
l9:x[jvj+15]=t[x[jvj+15]];
goto l8;
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l6:x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+7,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+8,V9)*/
V9=pile[WZ2]; 
K=V9;
V12=K;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V12; pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,V12,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=103; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+7,103,jvj+9)*/
l7:x[jvj+14]=t[x[jvj+14]];
goto l5;
}
