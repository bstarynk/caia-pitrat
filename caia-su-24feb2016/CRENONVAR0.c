#include "dx.h"
void CRENONVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V7=0;
int E,T,FF,BA,XD;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; T=pile[v[22]+1]; FF=pile[v[22]+2]; BA=pile[v[22]+3]; XD=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=x[E] ;z[jvj+14]=z[E];
x[jvj+3]=x[T] ;z[jvj+3]=z[T];
l2:x[jvj+13]=x[jvj+14] ;z[jvj+13]=z[jvj+14];
l1:if((x[jvj+13]<=0)) goto l11;
x[jvj+10]=s[x[jvj+13]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+13];
x[jvj+1]=x[jvj+10] ;z[jvj+1]=z[jvj+10];
pile[v[22]]=jvj+1; pile[WZ1]=BA; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+2; 
(*f[1498])( );     /*CALCULABLE0(jvj+1,BA,1881,XD,jvj+2)*/
if((x[jvj+2]==68)) goto l3;
x[jvj+13]=t[x[jvj+13]];
goto l1;
l3:pile[v[22]]=jvj+3; pile[WZ1]=102; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(jvj+3,102,jvj+1)*/
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+11]=x[jvj+14] ;z[jvj+11]=z[jvj+14];
l4:if((x[jvj+11]>0)) goto l5;
x[jvj+15]=x[jvj+4] ;z[jvj+15]=z[jvj+4];
for(i=x[jvj+15],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=1)) goto l10;
x[jvj+12]=x[jvj+15] ;z[jvj+12]=z[jvj+15];
l7:if((x[jvj+12]<=0)) goto l10;
x[jvj+6]=s[x[jvj+12]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+12];
if((x[jvj+6]==x[jvj+1])) goto l8;
pile[v[22]]=jvj+6; pile[WZ1]=BA; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+7; 
(*f[1498])( );     /*CALCULABLE0(jvj+6,BA,1881,XD,jvj+7)*/
if((x[jvj+7]==68)) goto l9;
l8:x[jvj+12]=t[x[jvj+12]];
goto l7;
l5:x[jvj+5]=s[x[jvj+11]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+11];
if((x[jvj+5]==x[jvj+1])) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
l6:x[jvj+11]=t[x[jvj+11]];
goto l4;
l9:pile[v[22]]=jvj+3; pile[WZ1]=103; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+3,103,jvj+6)*/
goto l8;
l10:for(i=x[jvj+15],V7=0;i>0;i=t[i],V7++)  ;
if((V7<=1)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=FF; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,FF,jvj+9)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+3; pile[WZ1]=103; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+3,103,jvj+8)*/
x[jvj+3]=x[jvj+8] ;z[jvj+3]=z[jvj+8];
x[jvj+14]=x[jvj+15] ;z[jvj+14]=z[jvj+15];
goto l2;
l11:v[0]=jvj; v[22]-=5; return;
}
