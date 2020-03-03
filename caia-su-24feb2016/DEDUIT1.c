#include "dx.h"
void DEDUIT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V8=0,V10=0;
int EE,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11678;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1740&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
EE=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(509,jvj+17,jvj+18)*/
V20=N+1;
l7:if((x[jvj+18]>0)) goto l8;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l5:x[jvj+16]=s[x[jvj+22]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+22];
for(a=x[EE];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l6;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
l6:x[jvj+22]=t[x[jvj+22]];
l4:if((x[jvj+22]>0)) goto l5;
for(i=x[jvj+15],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=1)) goto l9;
if((x[jvj+15]<=0)) goto l9;
x[jvj+21]=s[x[jvj+15]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+15];
pile[v[22]]=1358; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1358,jvj+3,jvj+13)*/
if((x[jvj+13]==68)) goto l10;
l1:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l9;
x[jvj+6]=d[20];z[jvj+6]=0;
l2:if((x[jvj+6]<=0)) goto l9;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+8,jvj+3,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+21]) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+7,jvj+3,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1739])( );     /*ALGEBRIQUE0(jvj+11,jvj+12)*/
if((x[jvj+12]==68)) goto l10;
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l8:x[jvj+3]=s[x[jvj+18]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+18];
pile[v[22]]=868; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(868,jvj+3,jvj+19)*/
if((x[jvj+19]!=25)) goto l9;
pile[v[22]]=1070; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1070,jvj+3,jvj+20)*/
if((x[jvj+20]!=68)) goto l9;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(870,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8>N)) goto l9;
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+3,jvj+14)*/
x[jvj+22]=x[jvj+14] ;z[jvj+22]=z[jvj+14];
goto l4;
l10:pile[v[22]]=EE; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(EE,jvj+21)*/
pile[WZ1]=V20; 
(*f[1740])( );     /*DEDUIT1(EE,V20)*/
l9:x[jvj+18]=t[x[jvj+18]];
goto l7;
}
