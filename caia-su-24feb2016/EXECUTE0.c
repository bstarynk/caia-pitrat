#include "dx.h"
void EXECUTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,Q=0,NV=0,V6=0,V9=0,V8=0,I=0,V5=0,V4=0,V16=0,V18=0,V17=0,V11=0,V15=0,V14=0,V38=0,V40=0,V39=0,V32=0,V37=0,V36=0,V25=0,V27=0,V26=0,V24=0,V28=0,V29=0,V10=0,V21=0,V20=0,V42=0,V43=0,V48=0,V50=0,V49=0,V47=0,V46=0,V54=0,V53=0,V51=0;
int A,B;
int RN;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10138;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3026&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=345; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(345,A,jvj+3)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l19;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=246; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(246,jvj+5,V3)*/
V3=pile[WZ2]; 
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
Q=V3;
NV=100;
pile[v[22]]=Q; pile[WZ1]=jvj+6; 
(*f[27])( );     /*CRETND0(Q,jvj+6)*/
V25=knd[Q];
V27=knr[Q];
V26=V27-1;
l7:if((V25<=V26)) goto l9;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,A,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+7,V6)*/
V6=pile[WZ2]; 
V9=knd[Q];
V8=V9-1;
I=0;
l3:if((I>V8)) goto l11;
V5=vnd[Q][I];
V4=V5;
if((V4==V6)) goto l10;
I++;
goto l3;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+8,V16)*/
V16=pile[WZ2]; 
V18=knd[Q];
V17=V18-1;
V11=0;
l5:if((V11>V17)) goto l14;
V15=vnd[Q][V11];
V14=V15;
if((V14==V16)) goto l15;
V11++;
goto l5;
l9:V24=tnd[Q][V25];
if(V24!=20&&V24!=23) goto l8;
V28=V25+NV;
V29=com+V28;
prov[V28]=V29;
l8:V25++;
goto l7;
l10:V10=I+NV;
prov[V10]=B;
l11:x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(128,jvj+9,jvj+10)*/
l12:if((x[jvj+10]>0)) goto l13;
pile[v[22]]=Q; pile[WZ1]=NV; pile[WZ2]=jvj+13; 
(*f[905])( );     /*EVLGG0(Q,NV,jvj+13)*/
if((x[jvj+13]!=134)) goto l19;
V48=knd[Q];
V50=knr[Q];
V49=V50-1;
l17:if((V48>V49)) goto l19;
V47=vnd[Q][V48];
V46=V47;
if((V46==(-3822))) goto l18;
V48++;
goto l17;
l13:x[jvj+8]=s[x[jvj+10]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+10];
pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+8,jvj+11)*/
if((x[jvj+11]==41)) goto l4;
if((x[jvj+11]!=599)) goto l14;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+8,V38)*/
V38=pile[WZ2]; 
V40=knd[Q];
V39=V40-1;
V32=0;
l6:if((V32>V39)) goto l14;
V37=vnd[Q][V32];
V36=V37;
if((V36==V38)) goto l16;
V32++;
goto l6;
l15:pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+8,V21)*/
V21=pile[WZ2]; 
V20=V11+NV;
prov[V20]=V21;
l14:x[jvj+10]=t[x[jvj+10]];
goto l12;
l16:V42=V32+NV;
V43=com+V42;
pile[v[22]]=128; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(128,jvj+8,jvj+12)*/
prov[V42]=V43;
x[V43]=x[jvj+12];z[V43]=0;
goto l14;
l18:V54=V48+NV;
V53=prov[V54];
x[jvj+14]=x[V53];z[jvj+14]=z[V53];
V51=x[jvj+14];
RN=V51;
l20:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=RN; v[102]=0;return;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
