#include "dx.h"
void NOUVSAUVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,Q=0,V2=0,V3=0,F=0,V10=0,V8=0,V11=0;
int P;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=1038 ;z[jvj+4]=1038;
if((v[244]!=0)) goto l3;
pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,P,jvj+5)*/
pile[v[22]]=905; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(905,jvj+5,F)*/
F=pile[WZ2]; 
l9:x[jvj+8]=d[152];z[jvj+8]=0;
l7:if((x[jvj+8]>0)) goto l8;
x[jvj+10]=d[193];z[jvj+10]=0;
l12:if((x[jvj+10]>0)) goto l13;
pile[v[22]]=683; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,P,V8)*/
V8=pile[WZ2]; 
l16:v[0]=jvj; v[22]-=1; return;
l1:V2=incon;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(jvj+4,jvj+3,V4)*/
V4=pile[WZ2]; 
Q=V4;
V2=Q;
l15:pile[v[22]]=P; pile[WZ1]=jvj+3; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(P,jvj+3,V2)*/
l14:x[jvj+10]=t[x[jvj+10]];
goto l12;
l2:pile[v[22]]=1038; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1038,jvj+3,V3)*/
V3=pile[WZ2]; 
V2=V3;
goto l15;
l3:F=((-11721));
goto l9;
l4:pile[v[22]]=159; pile[WZ1]=683; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,683,jvj+6)*/
l5:if((x[jvj+6]<=0)) goto l16;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=905; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(905,jvj+7,V10)*/
V10=pile[WZ2]; 
if((V10!=F)) goto l6;
pile[v[22]]=1096; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1096,jvj+7,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=683; pile[WZ2]=V11; 
(*f[43])( );     /*CHGC2(P,683,V11)*/
goto l16;
l6:x[jvj+6]=t[x[jvj+6]];
goto l5;
l8:x[jvj+1]=s[x[jvj+8]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+8];
pile[v[22]]=jvj+1; pile[WZ1]=P; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+1,P,jvj+2)*/
l10:x[jvj+8]=t[x[jvj+8]];
goto l7;
l11:pile[v[22]]=1100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1100,jvj+1,jvj+9)*/
pile[v[22]]=P; 
(*f[35])( );     /*CHGC1(P,jvj+1,jvj+9)*/
goto l10;
l13:x[jvj+3]=s[x[jvj+10]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+10];
pile[v[22]]=jvj+3; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(jvj+3,P,V1)*/
V1=pile[WZ2]; 
goto l14;
}
