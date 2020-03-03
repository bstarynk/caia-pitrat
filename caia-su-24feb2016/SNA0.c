#include "dx.h"
void SNA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,V7=0,V10=0,V13=0;
int UR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

UR=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if(UR!=32&&UR!=79) goto l5;
pile[v[22]]=226; pile[WZ1]=1389; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(226,1389,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l5;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l2;     /*FNDC2(162,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1!=64)) goto l2;
pile[v[22]]=0; 
(*f[292])( );     /*SNAL0(0,jvj+2)*/
l5:if((UR!=86)) goto l6;
pile[v[22]]=1392; 
(*f[293])( );     /*SNB0(1392)*/
l6:if(UR!=32&&UR!=66) goto l13;
pile[v[22]]=226; pile[WZ1]=1387; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(226,1387,jvj+3)*/
l3:if((x[jvj+3]<=0)) goto l13;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=162; pile[WZ1]=jvj+4; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V4!=36)) goto l4;
pile[v[22]]=0; 
(*f[292])( );     /*SNAL0(0,jvj+4)*/
l13:if(UR!=32&&UR!=80) goto l14;
pile[v[22]]=226; pile[WZ1]=1388; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(226,1388,jvj+5)*/
l7:if((x[jvj+5]<=0)) goto l14;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=162; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l8;     /*FNDC2(162,jvj+6,V7)*/
V7=pile[WZ2]; 
if((V7!=38)) goto l8;
pile[v[22]]=0; 
(*f[292])( );     /*SNAL0(0,jvj+6)*/
l14:if(UR!=32&&UR!=72) goto l15;
pile[v[22]]=226; pile[WZ1]=1391; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(226,1391,jvj+7)*/
l9:if((x[jvj+7]<=0)) goto l15;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=162; pile[WZ1]=jvj+8; 
(*f[219])( );if(v[102]) goto l10;     /*FNDC2(162,jvj+8,V10)*/
V10=pile[WZ2]; 
if((V10!=(-80))) goto l10;
pile[v[22]]=0; 
(*f[292])( );     /*SNAL0(0,jvj+8)*/
l15:if(UR!=32&&UR!=70) goto l16;
pile[v[22]]=226; pile[WZ1]=1691; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(226,1691,jvj+9)*/
l11:if((x[jvj+9]<=0)) goto l16;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=162; pile[WZ1]=jvj+10; 
(*f[219])( );if(v[102]) goto l12;     /*FNDC2(162,jvj+10,V13)*/
V13=pile[WZ2]; 
if((V13!=35)) goto l12;
pile[v[22]]=0; 
(*f[292])( );     /*SNAL0(0,jvj+10)*/
l16:v[0]=jvj; v[22]-=1; return;
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+3]=t[x[jvj+3]];
goto l3;
l8:x[jvj+5]=t[x[jvj+5]];
goto l7;
l10:x[jvj+7]=t[x[jvj+7]];
goto l9;
l12:x[jvj+9]=t[x[jvj+9]];
goto l11;
}
