#include "dx.h"
void ACHEVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V5=0,V9=0,V7=0,V14=0,V13=0,V19=0,V18=0;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
L=1;
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
x[jvj+8]=x[jvj+1] ;z[jvj+8]=z[jvj+1];
pile[v[22]]=226; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(226,jvj+8,jvj+9)*/
for(i=x[jvj+9],V7=0;i>0;i=t[i],V7++)  ;
if((V7<=1)) goto l7;
V9=L*V7;
if((V9>=100000)) goto l7;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
l1:if((x[jvj+11]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+4,V5)*/
V5=pile[WZ2]; 
V14=10000*V5;
V13=V14/V9;
x[jvj+12]=x[jvj+9] ;z[jvj+12]=z[jvj+9];
l4:if((x[jvj+12]>0)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V13; 
(*f[186])( );     /*BTC0(jvj+7,117,V13)*/
l7:if((V7!=1)) goto l8;
if((x[jvj+9]<=0)) goto l8;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+7; pile[WZ2]=L; 
(*f[1530])( );     /*ACHEVE1(jvj+10,jvj+7,L)*/
l8:pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+7,V19)*/
V19=pile[WZ2]; 
V18=V19/10;
N=V18;
v[0]=jvj; v[22]-=1; pile[v[22]]=N; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+11]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+11];
pile[v[22]]=867; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(867,jvj+2,jvj+3)*/
if(x[jvj+3]!=493&&x[jvj+3]!=876&&x[jvj+3]!=1336) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,117,1)*/
l3:x[jvj+11]=t[x[jvj+11]];
goto l1;
l5:x[jvj+5]=s[x[jvj+12]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+12];
pile[v[22]]=867; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(867,jvj+5,jvj+6)*/
if((x[jvj+6]!=178)) goto l6;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; pile[WZ2]=V9; 
(*f[1530])( );     /*ACHEVE1(jvj+5,jvj+7,V9)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l4;
l9:v[0]=jvj; v[22]-=1; v[102]=1;return;
}
