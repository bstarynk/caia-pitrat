#include "dx.h"
void CRESOUSENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V1=0,HH=0,NX=0,V4=0,V8=0,V9=0,V10=0,V35=0,V28=0,V30=0,V32=0,V34=0,V6=0,V11=0,H=0,V13=0,V17=0,V25=0,V24=0,V26=0,V19=0,V20=0,V18=0,V21=0,V41=0,V42=0;
int T,C,M;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11683;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4018&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; C=pile[v[22]+1]; M=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
H=x[R]=NX=incon;
pile[v[22]]=510; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,T,V3)*/
V3=pile[WZ2]; 
V2=C+V3;
V1=V2-M;
HH=V1;
if((HH<0)) goto l1;
V4=M-C;
NX=V4;
l4:V6=C+NX;
V11=V6-M;
if((v[216]<=0)) goto l5;
x[jvj+4]=x[T] ;z[jvj+4]=z[T];
l2:x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
pile[v[22]]=609; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(609,jvj+3,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+3,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+3,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+3,jvj+5)*/
V35=x[jvj+5];
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V10,0,V28)*/
V28=pile[WZ3]; 
pile[WZ1]=V9; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,V9,V28,V30)*/
V30=pile[WZ3]; 
pile[WZ1]=V8; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,V8,V30,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V35; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V35,V32,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l3:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+4)*/
goto l2;
l1:NX=V3;
goto l4;
l5:H=V11;
pile[v[22]]=T; pile[WZ1]=609; pile[WZ2]=V6; 
(*f[43])( );     /*CHGC2(T,609,V6)*/
pile[WZ1]=515; pile[WZ2]=NX; 
(*f[43])( );     /*CHGC2(T,515,NX)*/
l6:x[jvj+16]=0 ;z[jvj+16]=0;
x[R]=x[jvj+16] ;z[R]=z[jvj+16];
if(H!=incon) goto l7;
l14:if(NX!=incon) goto l15;
l18:if(x[R]!=incon) goto l13;
l20:if(x[R]!=incon) goto l21;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l7:if(x[R]!=incon) goto l8;
goto l14;
l8:if((H<0)) goto l9;
x[jvj+12]=incon;
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+12]=x[jvj+17] ;z[jvj+12]=z[jvj+17];
x[jvj+15]=x[T] ;z[jvj+15]=z[T];
l23:x[jvj+13]=x[jvj+15] ;z[jvj+13]=z[jvj+15];
pile[v[22]]=515; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(515,jvj+13,V41)*/
V41=pile[WZ2]; 
if((V41<=0)) goto l25;
pile[v[22]]=218; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,jvj+13,jvj+14)*/
V42=1;
l24:if((V42>V41)) goto l25;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[522])( );     /*PLUB2(jvj+12,jvj+14)*/
V42++;
goto l24;
l11:x[jvj+8]=x[T] ;z[jvj+8]=z[T];
l10:pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(498,jvj+8,jvj+9)*/
pile[v[22]]=515; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+9,V17)*/
V17=pile[WZ2]; 
if((V17<=0)) goto l12;
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(609,jvj+9,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(515,jvj+9,V20)*/
V20=pile[WZ2]; 
V18=V19-V20;
V21=V20-1;
pile[v[22]]=V18; pile[WZ1]=M; pile[WZ2]=jvj+9; pile[WZ3]=R; pile[WZ4]=V21; 
(*f[4079])( );     /*CRESOUSENS2(V18,M,jvj+9,R,V21)*/
goto l20;
l12:x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
goto l10;
l13:pile[v[22]]=120; pile[WZ1]=T; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,T,jvj+10)*/
goto l20;
l15:if(H!=incon) goto l16;
goto l18;
l16:if(x[R]!=incon) goto l17;
goto l18;
l17:if((H<0)) goto l18;
pile[v[22]]=609; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(609,T,V25)*/
V25=pile[WZ2]; 
V24=V25-1;
pile[v[22]]=120; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(120,T,jvj+11)*/
V26=NX-1;
pile[v[22]]=T; pile[WZ1]=515; pile[WZ2]=V26; 
(*f[43])( );     /*CHGC2(T,515,V26)*/
pile[WZ1]=609; pile[WZ2]=V24; 
(*f[43])( );     /*CHGC2(T,609,V24)*/
pile[v[22]]=V24; pile[WZ1]=M; pile[WZ2]=jvj+11; pile[WZ3]=R; 
(*f[4078])( );     /*CRESOUSENS1(V24,M,jvj+11,R)*/
goto l18;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l22:pile[v[22]]=jvj+12; pile[WZ1]=763; pile[WZ2]=jvj+6; 
(*f[300])( );     /*TRI10(jvj+12,763,jvj+6)*/
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(R,jvj+6)*/
l9:if((H>=0)) goto l14;
pile[v[22]]=609; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(609,T,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=120; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(120,T,jvj+7)*/
pile[v[22]]=V13; pile[WZ1]=M; pile[WZ3]=R; 
(*f[4078])( );     /*CRESOUSENS1(V13,M,jvj+7,R)*/
goto l14;
l25:pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(498,jvj+13,jvj+15)*/
goto l23;
l26:if(x[jvj+12]!=incon) goto l22;
goto l9;
}
