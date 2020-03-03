#include "dx.h"
void EXECUTION1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,Q=0,NV=0,V6=0,V9=0,V8=0,I=0,V5=0,V4=0,V16=0,V18=0,V17=0,V11=0,V15=0,V14=0,V38=0,V40=0,V39=0,V32=0,V37=0,V36=0,V48=0,V51=0,V50=0,V45=0,V47=0,V46=0,V25=0,V27=0,V26=0,V24=0,V28=0,V29=0,V10=0,V52=0,V21=0,V20=0,V42=0,V43=0,V57=0,V59=0,V58=0,V56=0,V55=0,V61=0,V60=0;
int C,B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10283;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1584&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+3)*/
l1:pile[v[22]]=345; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(345,A,jvj+4)*/
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+4,jvj+5)*/
l2:if((x[jvj+5]<=0)) goto l24;
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
l11:if((V25<=V26)) goto l13;
if(x[jvj+3]!=incon) goto l4;
l16:x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(128,jvj+11,jvj+12)*/
l17:if((x[jvj+12]>0)) goto l18;
pile[v[22]]=Q; pile[WZ1]=NV; pile[WZ2]=jvj+15; 
(*f[905])( );     /*EVLGG0(Q,NV,jvj+15)*/
if((x[jvj+15]!=134)) goto l24;
V57=knd[Q];
V59=knr[Q];
V58=V59-1;
l22:if((V57>V58)) goto l24;
V56=vnd[Q][V57];
V55=V56;
if((V55==(-3822))) goto l23;
V57++;
goto l22;
l3:x[jvj+5]=t[x[jvj+5]];
goto l2;
l4:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+3,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+8,V6)*/
V6=pile[WZ2]; 
V9=knd[Q];
V8=V9-1;
I=0;
l5:if((I>V8)) goto l9;
V5=vnd[Q][I];
V4=V5;
if((V4==V6)) goto l14;
I++;
goto l5;
l6:pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+9,V16)*/
V16=pile[WZ2]; 
V18=knd[Q];
V17=V18-1;
V11=0;
l7:if((V11>V17)) goto l19;
V15=vnd[Q][V11];
V14=V15;
if((V14==V16)) goto l20;
V11++;
goto l7;
l13:V24=tnd[Q][V25];
if(V24!=20&&V24!=23) goto l12;
V28=V25+NV;
V29=com+V28;
prov[V28]=V29;
l12:V25++;
goto l11;
l14:V10=I+NV;
prov[V10]=B;
l9:pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+3,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+10,V48)*/
V48=pile[WZ2]; 
V51=knd[Q];
V50=V51-1;
V45=0;
l10:if((V45>V50)) goto l16;
V47=vnd[Q][V45];
V46=V47;
if((V46==V48)) goto l15;
V45++;
goto l10;
l15:V52=V45+NV;
prov[V52]=C;
goto l16;
l18:x[jvj+9]=s[x[jvj+12]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+12];
pile[v[22]]=158; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(158,jvj+9,jvj+13)*/
if((x[jvj+13]==41)) goto l6;
if((x[jvj+13]!=599)) goto l19;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+9,V38)*/
V38=pile[WZ2]; 
V40=knd[Q];
V39=V40-1;
V32=0;
l8:if((V32>V39)) goto l19;
V37=vnd[Q][V32];
V36=V37;
if((V36==V38)) goto l21;
V32++;
goto l8;
l20:pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+9,V21)*/
V21=pile[WZ2]; 
V20=V11+NV;
prov[V20]=V21;
l19:x[jvj+12]=t[x[jvj+12]];
goto l17;
l21:V42=V32+NV;
V43=com+V42;
pile[v[22]]=128; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(128,jvj+9,jvj+14)*/
prov[V42]=V43;
x[V43]=x[jvj+14];z[V43]=0;
goto l19;
l23:V61=V57+NV;
V60=prov[V61];
R=V60;
l25:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l24:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
