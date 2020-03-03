#include "dx.h"
void Z232Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BXXX;
int BRRR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(250,158,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,BXXX,jvj+4)*/
if((x[jvj+4]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,BXXX,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+1)*/
if(x[jvj+1]==433||x[jvj+1]==533||x[jvj+1]==532||x[jvj+1]==170) goto l3;
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+1,jvj+2)*/
l2:pile[v[22]]=jvj+6; pile[WZ1]=130; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,130,1)*/
l3:x[jvj+12]=w[x[jvj+4]][9];
l4:if((x[jvj+12]>0)) goto l5;
x[jvj+13]=w[x[jvj+4]][8];
l7:if((x[jvj+13]<=0)) goto l10;
x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=jvj+9; pile[WZ1]=BXXX; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,BXXX,jvj+10)*/
x[jvj+14]=x[jvj+10] ;z[jvj+14]=z[jvj+10];
l8:if((x[jvj+14]>0)) goto l9;
x[jvj+13]=t[x[jvj+13]];
goto l7;
l1:pile[v[22]]=39; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(39,jvj+1,jvj+3)*/
goto l2;
l5:x[jvj+7]=s[x[jvj+12]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+12];
pile[v[22]]=jvj+7; pile[WZ1]=BXXX; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+7,BXXX,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+6; 
(*f[1467])( );     /*Z232Z1(jvj+8,jvj+6)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l4;
l9:x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+6; 
(*f[1467])( );     /*Z232Z1(jvj+11,jvj+6)*/
x[jvj+14]=t[x[jvj+14]];
goto l8;
l10:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+6,BRRR)*/
BRRR=pile[WZ2]; 
v[0]=jvj; v[22]-=2; pile[v[22]+1]=BRRR; v[102]=0;return;
l11:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
