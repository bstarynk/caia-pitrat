#include "dx.h"
void EXECUTION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,Q=0,NV=0,V6=0,V9=0,V8=0,I=0,V5=0,V4=0,V16=0,V18=0,V17=0,V11=0,V15=0,V14=0,V38=0,V40=0,V39=0,V32=0,V37=0,V36=0,V25=0,V27=0,V26=0,V24=0,V28=0,V29=0,V10=0,V21=0,V20=0,V42=0,V43=0,V49=0,V51=0,V50=0,V48=0,V47=0,V53=0,V52=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10283;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1012&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+3)*/
l1:pile[v[22]]=345; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(345,A,jvj+4)*/
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+4,jvj+5)*/
l2:if((x[jvj+5]<=0)) goto l21;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=246; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,jvj+6,V3)*/
V3=pile[WZ2]; 
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
Q=V3;
NV=100;
pile[v[22]]=Q; pile[WZ1]=jvj+7; 
(*f[27])( );     /*CRETND0(Q,jvj+7)*/
V25=knd[Q];
V27=knr[Q];
V26=V27-1;
l9:if((V25<=V26)) goto l11;
if(x[jvj+3]!=incon) goto l4;
l13:x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(128,jvj+10,jvj+11)*/
l14:if((x[jvj+11]>0)) goto l15;
pile[v[22]]=Q; pile[WZ1]=NV; pile[WZ2]=jvj+14; 
(*f[905])( );     /*EVLGG0(Q,NV,jvj+14)*/
if((x[jvj+14]!=134)) goto l21;
V49=knd[Q];
V51=knr[Q];
V50=V51-1;
l19:if((V49>V50)) goto l21;
V48=vnd[Q][V49];
V47=V48;
if((V47==(-3822))) goto l20;
V49++;
goto l19;
l3:x[jvj+5]=t[x[jvj+5]];
goto l2;
l4:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+3,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+8,V6)*/
V6=pile[WZ2]; 
V9=knd[Q];
V8=V9-1;
I=0;
l5:if((I>V8)) goto l13;
V5=vnd[Q][I];
V4=V5;
if((V4==V6)) goto l12;
I++;
goto l5;
l6:pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+9,V16)*/
V16=pile[WZ2]; 
V18=knd[Q];
V17=V18-1;
V11=0;
l7:if((V11>V17)) goto l16;
V15=vnd[Q][V11];
V14=V15;
if((V14==V16)) goto l17;
V11++;
goto l7;
l11:V24=tnd[Q][V25];
if(V24!=20&&V24!=23) goto l10;
V28=V25+NV;
V29=com+V28;
prov[V28]=V29;
l10:V25++;
goto l9;
l12:V10=I+NV;
prov[V10]=B;
goto l13;
l15:x[jvj+9]=s[x[jvj+11]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+11];
pile[v[22]]=158; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+9,jvj+12)*/
if((x[jvj+12]==41)) goto l6;
if((x[jvj+12]!=599)) goto l16;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+9,V38)*/
V38=pile[WZ2]; 
V40=knd[Q];
V39=V40-1;
V32=0;
l8:if((V32>V39)) goto l16;
V37=vnd[Q][V32];
V36=V37;
if((V36==V38)) goto l18;
V32++;
goto l8;
l17:pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+9,V21)*/
V21=pile[WZ2]; 
V20=V11+NV;
prov[V20]=V21;
l16:x[jvj+11]=t[x[jvj+11]];
goto l14;
l18:V42=V32+NV;
V43=com+V42;
pile[v[22]]=128; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(128,jvj+9,jvj+13)*/
prov[V42]=V43;
x[V43]=x[jvj+13];z[V43]=0;
goto l16;
l20:V53=V49+NV;
V52=prov[V53];
R=V52;
l22:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
