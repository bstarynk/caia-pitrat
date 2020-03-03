#include "dx.h"
void CK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V7=0;
int SL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

SL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=302; pile[WZ1]=SL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(302,SL,jvj+1)*/
l2:if((x[jvj+1]>0)) goto l3;
v[0]=jvj; v[22]-=1; return;
l3:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+3)*/
if((x[jvj+3]==0)) goto l9;
x[jvj+1]=t[x[jvj+1]];
goto l2;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+5,jvj+2,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=248; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(248,jvj+7,jvj+8)*/
x[jvj+11]=x[jvj+8] ;z[jvj+11]=z[jvj+8];
l7:if((x[jvj+11]<=0)) goto l6;
x[jvj+9]=s[x[jvj+11]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+11];
pile[v[22]]=161; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(161,jvj+9,jvj+10)*/
if((x[jvj+10]!=x[jvj+2])) goto l8;
V6=x[jvj+9];
pile[v[22]]=248; pile[WZ1]=jvj+7; pile[WZ2]=V6; 
(*f[134])( );     /*OTA0(248,jvj+7,V6)*/
l8:x[jvj+11]=t[x[jvj+11]];
goto l7;
l6:x[jvj+4]=t[x[jvj+4]];
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=302; pile[WZ1]=SL; pile[WZ2]=V7; 
(*f[134])( );     /*OTA0(302,SL,V7)*/
goto l1;
l9:V7=x[jvj+2];
x[jvj+4]=d[85];z[jvj+4]=0;
goto l4;
}
