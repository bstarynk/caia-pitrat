#include "dx.h"
void CPIM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V14=0,V15=0,V12=0,V7=0,V3=0,V6=0,V9=0,V8=0,V1=0,V36=0,V39=0;
int X,Q,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Q=pile[v[22]+1]; T=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=x[Q] ;z[jvj+13]=z[Q];
V39=X;
l1:V18=r[V39];
x[jvj+12]=V18 ;z[jvj+12]=(V18<=sepcte) ? V18 : 0;
x[jvj+3]=x[jvj+12] ;z[jvj+3]=z[jvj+12];
if(x[jvj+3]==264||x[jvj+3]==297||x[jvj+3]==360||x[jvj+3]==583) goto l3;
if((V14=w[x[jvj+3]][1])==incon) goto l7;
if((V14==20)) goto l4;
if((V14!=23)) goto l7;
if((x[jvj+3]==264)) goto l7;
V12=s[V39];
pile[v[22]]=V12; pile[WZ1]=T; pile[WZ2]=jvj+9; 
(*f[1798])( );     /*CPEL0(V12,T,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[300])( );     /*TRI10(jvj+9,jvj+3,jvj+4)*/
l12:if((x[jvj+13]==x[jvj+4])) goto l13;
t[x[jvj+13]]=x[jvj+4];
l13:V36=t[V39];
if((V36>0)) goto l14;
v[0]=jvj; v[22]-=3; return;
l2:x[jvj+1]=V15 ;z[jvj+1]=(V15<=sepcte) ? V15 : 0;
pile[v[22]]=360; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(360,jvj+1,jvj+2)*/
l7:V1=incon;
V7=s[V39];
if((V3=w[x[jvj+3]][1])==incon) goto l10;
if((V3!=96)) goto l10;
pile[v[22]]=258; pile[WZ1]=T; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(258,T,jvj+10)*/
l8:if((x[jvj+10]<=0)) goto l10;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+11,V6)*/
V6=pile[WZ2]; 
if((V6!=V7)) goto l9;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(110,jvj+11,V9)*/
V9=pile[WZ2]; 
V8=V9;
V1=V8;
l11:pile[v[22]]=V1; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(V1,jvj+3,jvj+4)*/
goto l12;
l3:x[jvj+4]=x[jvj+13] ;z[jvj+4]=z[jvj+13];
goto l12;
l4:V15=s[V39];
if((V15<=sepcte)) goto l5;
if((V15<=sepcte)) goto l7;
if(x[jvj+3]==297||x[jvj+3]==360||x[jvj+3]==583) goto l7;
x[jvj+5]=V15 ;z[jvj+5]=(V15<=sepcte) ? V15 : 0;
pile[v[22]]=360; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(360,jvj+5,jvj+6)*/
pile[v[22]]=T; pile[WZ2]=jvj+7; 
(*f[1379])( );if(v[102]) goto l2;     /*CPIL0(T,jvj+5,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(jvj+7,jvj+3,jvj+4)*/
goto l12;
l5:pile[v[22]]=V15; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(V15,jvj+3,jvj+4)*/
goto l12;
l6:pile[v[22]]=V15; pile[WZ1]=T; pile[WZ2]=jvj+8; 
(*f[1799])( );     /*CPIM1(V15,T,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(jvj+8,jvj+3,jvj+4)*/
goto l12;
l9:x[jvj+10]=t[x[jvj+10]];
goto l8;
l10:V1=V7;
goto l11;
l14:V39=V36;
x[jvj+13]=x[jvj+4] ;z[jvj+13]=z[jvj+4];
goto l1;
}
