#include "dx.h"
void QCY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V30=0,V8=0,V38=0,K=0,V11=0,V33=0,V27=0,V28=0,V17=0,V18=0,V19=0,V15=0,V16=0,V14=0,L=0;
int I,E;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11284;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2184&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; E=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V38=I;
l7:pile[v[22]]=159; pile[WZ1]=E; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(159,E,jvj+9)*/
if((x[jvj+9]>0)) goto l8;
pile[v[22]]=763; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(763,E,jvj+18)*/
l15:if((x[jvj+18]>0)) goto l16;
J=V38;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l2:W=s[V30];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==W) goto l3;
l6:x[jvj+7]=t[x[jvj+7]];
l4:if((x[jvj+7]>0)) goto l5;
V8=x[jvj+6];
pile[v[22]]=jvj+8; pile[WZ1]=763; pile[WZ2]=jvj+10; 
(*f[300])( );     /*TRI10(jvj+8,763,jvj+10)*/
pile[v[22]]=V38; pile[WZ1]=jvj+10; pile[WZ2]=jvj+6; 
(*f[2216])( );     /*QCX0(V38,jvj+10,jvj+6,K)*/
K=pile[WZ3]; 
pile[v[22]]=159; pile[WZ1]=E; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(159,E,V8)*/
l19:V38=K;
goto l7;
l3:V30=t[V30];
l1:if((V30>0)) goto l2;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+4)*/
goto l6;
l5:x[jvj+4]=s[x[jvj+7]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+7];
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1304,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V30=x[jvj+5];
goto l1;
l8:x[jvj+6]=s[x[jvj+9]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+9];
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=350; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(350,jvj+6,jvj+7)*/
goto l4;
l10:V11=s[V33];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V11) goto l11;
l14:x[jvj+16]=t[x[jvj+16]];
l12:if((x[jvj+16]>0)) goto l13;
V28=x[jvj+15];
pile[v[22]]=(-8107); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-8107),V38,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V17,91,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=V18; 
(*f[99])( );     /*SPM0(V27,V18,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V19,93,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V15,61,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V16; 
(*f[99])( );     /*SPM0(0,V16,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; 
(*f[1803])( );     /*SPLL0(V14,L)*/
L=pile[WZ1]; 
pile[v[22]]=763; pile[WZ1]=E; pile[WZ2]=V28; 
(*f[134])( );     /*OTA0(763,E,V28)*/
pile[v[22]]=jvj+17; pile[WZ1]=763; pile[WZ2]=jvj+19; 
(*f[300])( );     /*TRI10(jvj+17,763,jvj+19)*/
pile[v[22]]=L; pile[WZ1]=jvj+19; pile[WZ2]=0; pile[WZ3]=jvj+15; 
(*f[2217])( );     /*QCZ0(L,jvj+19,0,jvj+15,K)*/
K=pile[WZ4]; 
goto l19;
l11:V33=t[V33];
l9:if((V33>0)) goto l10;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+13)*/
goto l14;
l13:x[jvj+13]=s[x[jvj+16]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+16];
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1304,jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+13,jvj+14)*/
V33=x[jvj+14];
goto l9;
l16:x[jvj+15]=s[x[jvj+18]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+18];
pile[v[22]]=322; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(322,jvj+15,V27)*/
V27=pile[WZ2]; 
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=350; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(350,jvj+15,jvj+16)*/
goto l12;
l17:x[jvj+18]=t[x[jvj+18]];
goto l15;
}
