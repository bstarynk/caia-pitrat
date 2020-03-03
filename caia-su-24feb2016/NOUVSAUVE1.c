#include "dx.h"
void NOUVSAUVE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V4=0,Q=0,V2=0,V3=0,F=0,V10=0,V8=0,V11=0;
int P,AT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; AT=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[244]!=0)) goto l3;
pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,P,jvj+4)*/
pile[v[22]]=905; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(905,jvj+4,F)*/
F=pile[WZ2]; 
l9:x[jvj+7]=d[152];z[jvj+7]=0;
l7:if((x[jvj+7]>0)) goto l8;
x[jvj+9]=d[193];z[jvj+9]=0;
l12:if((x[jvj+9]>0)) goto l13;
pile[v[22]]=683; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,P,V8)*/
V8=pile[WZ2]; 
l16:v[0]=jvj; v[22]-=2; return;
l1:V2=incon;
pile[v[22]]=AT; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(AT,jvj+1,V4)*/
V4=pile[WZ2]; 
Q=V4;
V2=Q;
l15:pile[v[22]]=P; pile[WZ1]=jvj+1; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(P,jvj+1,V2)*/
l14:x[jvj+9]=t[x[jvj+9]];
goto l12;
l2:pile[v[22]]=1038; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1038,jvj+1,V3)*/
V3=pile[WZ2]; 
V2=V3;
goto l15;
l3:F=((-11721));
goto l9;
l4:pile[v[22]]=159; pile[WZ1]=683; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,683,jvj+5)*/
l5:if((x[jvj+5]<=0)) goto l16;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=905; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(905,jvj+6,V10)*/
V10=pile[WZ2]; 
if((V10!=F)) goto l6;
pile[v[22]]=1096; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1096,jvj+6,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=683; pile[WZ2]=V11; 
(*f[43])( );     /*CHGC2(P,683,V11)*/
goto l16;
l6:x[jvj+5]=t[x[jvj+5]];
goto l5;
l8:x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
pile[v[22]]=jvj+2; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+2,P,jvj+3)*/
l10:x[jvj+7]=t[x[jvj+7]];
goto l7;
l11:pile[v[22]]=1100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1100,jvj+2,jvj+8)*/
pile[v[22]]=P; 
(*f[35])( );     /*CHGC1(P,jvj+2,jvj+8)*/
goto l10;
l13:x[jvj+1]=s[x[jvj+9]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+9];
pile[v[22]]=jvj+1; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(jvj+1,P,V1)*/
V1=pile[WZ2]; 
goto l14;
}
