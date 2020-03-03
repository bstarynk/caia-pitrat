#include "dx.h"
void CALDETVAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V19=0,V13=0,V8=0;
int F,E,DD;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
if(v[0]>99700) (*f[6])( );

F=pile[v[22]]; E=pile[v[22]+1]; DD=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+25]=x[E] ;z[jvj+25]=z[E];
x[jvj+24]=x[F] ;z[jvj+24]=z[F];
l17:x[jvj+12]=incon;
x[jvj+20]=x[jvj+24] ;z[jvj+20]=z[jvj+24];
l3:if((x[jvj+20]<=0)) goto l13;
x[jvj+1]=s[x[jvj+20]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+20];
pile[v[22]]=510; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+1,V2)*/
V2=pile[WZ2]; 
x[jvj+18]=x[jvj+24] ;z[jvj+18]=z[jvj+24];
l1:if((x[jvj+18]<=0)) goto l4;
x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
if((x[jvj+2]==x[jvj+1])) goto l2;
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1<V2)) goto l2;
x[jvj+20]=t[x[jvj+20]];
goto l3;
l2:x[jvj+18]=t[x[jvj+18]];
goto l1;
l4:x[jvj+12]=x[jvj+1] ;z[jvj+12]=z[jvj+1];
l13:for(i=x[jvj+25],V19=0;i>0;i=t[i],V19++)  ;
if((V19!=1)) goto l14;
x[jvj+19]=x[jvj+25] ;z[jvj+19]=z[jvj+25];
if((x[jvj+19]<=0)) goto l14;
x[jvj+10]=s[x[jvj+19]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+19];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l14;
pile[v[22]]=DD; 
(*f[68])( );     /*PLUE0(DD,jvj+10)*/
l14:if(x[jvj+12]!=incon) goto l15;
l16:v[0]=jvj; v[22]-=3; return;
l6:x[jvj+4]=s[x[jvj+21]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+21];
if((x[jvj+4]==x[jvj+13])) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
l7:x[jvj+21]=t[x[jvj+21]];
l5:if((x[jvj+21]>0)) goto l6;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+23]=x[jvj+24] ;z[jvj+23]=z[jvj+24];
l10:if((x[jvj+23]>0)) goto l11;
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+22]=x[jvj+3] ;z[jvj+22]=z[jvj+3];
l8:if((x[jvj+22]>0)) goto l9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+17; 
(*f[301])( );     /*TRI11(jvj+16,jvj+7,107,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+17,22,100,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[1160])( );if(v[102]) goto l16;     /*SUP0(jvj+14,V8)*/
V8=pile[WZ1]; 
if((V8>=V13)) goto l16;
pile[v[22]]=DD; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(DD,jvj+13)*/
x[jvj+24]=x[jvj+8] ;z[jvj+24]=z[jvj+8];
x[jvj+25]=x[jvj+3] ;z[jvj+25]=z[jvj+3];
goto l17;
l9:x[jvj+5]=s[x[jvj+22]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+22];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+22]=t[x[jvj+22]];
goto l8;
l11:x[jvj+9]=s[x[jvj+23]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+23];
if((x[jvj+9]==x[jvj+12])) goto l12;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
l12:x[jvj+23]=t[x[jvj+23]];
goto l10;
l15:pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(510,jvj+12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(447,jvj+12,jvj+13)*/
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+21]=x[jvj+25] ;z[jvj+21]=z[jvj+25];
goto l5;
}
