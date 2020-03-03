#include "dx.h"
void TRVFONC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V10=0;
int X,ST,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; ST=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]==531)) goto l1;
if((x[jvj+1]==979)) goto l2;
if((x[jvj+1]==22)) goto l3;
if((x[jvj+1]!=484)) goto l5;
if(x[jvj+1]==96||x[jvj+1]==89||x[jvj+1]==41||x[jvj+1]==20||x[jvj+1]==128||x[jvj+1]==570||x[jvj+1]==1317) goto l5;
V10=N+1;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,X,jvj+4)*/
pile[v[22]]=1274; pile[WZ1]=ST; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1274,ST,V12)*/
V12=pile[WZ2]; 
if((V10<=V12)) goto l4;
pile[v[22]]=ST; pile[WZ1]=1274; pile[WZ2]=V10; 
(*f[43])( );     /*CHGC2(ST,1274,V10)*/
l4:pile[v[22]]=jvj+4; pile[WZ1]=ST; pile[WZ2]=V10; 
(*f[2050])( );     /*TRVFONC0(jvj+4,ST,V10)*/
l5:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,X,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=596)) goto l8;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=41)) goto l8;
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=ST; pile[WZ1]=1588; pile[WZ2]=1483; 
(*f[36])( );     /*PLUSC0(ST,1588,1483)*/
pile[v[22]]=jvj+9; pile[WZ1]=1353; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+9,1353,68)*/
l8:x[jvj+10]=d[6];z[jvj+10]=0;
l6:if((x[jvj+10]>0)) goto l7;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,X,jvj+13)*/
l10:if((x[jvj+13]>0)) goto l11;
v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=ST; pile[WZ1]=1588; pile[WZ2]=872; 
(*f[36])( );     /*PLUSC0(ST,1588,872)*/
goto l5;
l2:pile[v[22]]=ST; pile[WZ1]=1588; pile[WZ2]=1023; 
(*f[36])( );     /*PLUSC0(ST,1588,1023)*/
goto l5;
l3:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
pile[v[22]]=ST; pile[WZ1]=1300; 
(*f[36])( );     /*PLUSC0(ST,1300,jvj+3)*/
goto l5;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+11,X,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=ST; pile[WZ2]=N; 
(*f[2050])( );     /*TRVFONC0(jvj+12,ST,N)*/
l9:x[jvj+10]=t[x[jvj+10]];
goto l6;
l11:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=ST; pile[WZ2]=N; 
(*f[2050])( );     /*TRVFONC0(jvj+14,ST,N)*/
x[jvj+13]=t[x[jvj+13]];
goto l10;
}
