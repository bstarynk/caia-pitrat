#include "dx.h"
void MEVALI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0;
int Y;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10070;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1999&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=248; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(248,Y,jvj+2)*/
if((x[jvj+2]<=0)) goto l6;
x[jvj+9]=s[x[jvj+2]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+2];
pile[v[22]]=356; pile[WZ1]=jvj+9; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(356,jvj+9,jvj+3)*/
pile[v[22]]=248; pile[WZ1]=Y; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(248,Y,jvj+6)*/
l3:if((x[jvj+6]>0)) goto l4;
pile[v[22]]=Y; pile[WZ1]=356; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(Y,356,jvj+3)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
if((x[jvj+7]==x[jvj+9])) goto l5;
pile[v[22]]=356; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(356,jvj+7,jvj+8)*/
for(i=x[jvj+3],V6=0;i>0;i=t[i],V6++)  ;
for(i=x[jvj+8],V8=0;i>0;i=t[i],V8++)  ;
if((V6!=V8)) goto l6;
x[jvj+20]=x[jvj+8] ;z[jvj+20]=z[jvj+8];
l1:if((x[jvj+20]<=0)) goto l5;
x[jvj+4]=s[x[jvj+20]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+20];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[2095])( );if(v[102]) goto l2;     /*MEVALQ0(jvj+3,jvj+4,jvj+5)*/
if((x[jvj+5]==134)) goto l6;
l2:x[jvj+20]=t[x[jvj+20]];
goto l1;
l5:x[jvj+6]=t[x[jvj+6]];
goto l3;
l6:pile[v[22]]=248; pile[WZ1]=Y; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(248,Y,jvj+10)*/
if((x[jvj+10]<=0)) goto l12;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=356; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(356,jvj+11,jvj+12)*/
l7:if((x[jvj+12]>0)) goto l8;
pile[v[22]]=Y; pile[WZ1]=356; pile[WZ2]=jvj+13; 
(*f[34])( );     /*CHGC0(Y,356,jvj+13)*/
pile[v[22]]=248; pile[WZ1]=Y; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(248,Y,jvj+15)*/
pile[v[22]]=356; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(356,Y,jvj+16)*/
l9:if((x[jvj+15]<=0)) goto l12;
x[jvj+17]=s[x[jvj+15]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+15];
if((x[jvj+17]==x[jvj+11])) goto l10;
pile[v[22]]=356; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(356,jvj+17,jvj+18)*/
x[jvj+21]=x[jvj+16] ;z[jvj+21]=z[jvj+16];
l11:if((x[jvj+21]<=0)) goto l10;
x[jvj+19]=s[x[jvj+21]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+21];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=Y; 
(*f[2096])( );     /*MEVALR0(jvj+18,jvj+19,Y)*/
x[jvj+21]=t[x[jvj+21]];
goto l11;
l8:x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
x[jvj+12]=t[x[jvj+12]];
goto l7;
l10:x[jvj+15]=t[x[jvj+15]];
goto l9;
}
