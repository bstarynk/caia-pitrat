#include "dx.h"
void LIGHTUP3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V3=0,V4=0,M=0,V20=0,V19=0,V22=0,V21=0,Q=0,V8=0,V9=0,V7=0,V23=0,XI=0,YI=0,V14=0,L=0,V16=0,V15=0,V18=0,V17=0,V25=0,V24=0,V11=0,V12=0,XA=0,YA=0,V27=0,V26=0;
int NC,NL,NK;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=26252;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2979&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NC=pile[v[22]]; NL=pile[v[22]+1]; NK=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
V11=NC-1;
V12=NL-1;
XA=0;
l17:if((XA<=V11)) goto l19;
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:K=1;
l1:if((K<=NK)) goto l4;
x[jvj+2]=0 ;z[jvj+2]=0;
V7=incon;
if((NC>NL)) goto l10;
V7=NL;
l11:V23=V7-1;
XI=(-1);
l12:YI=(-1);
l14:V14=XI*YI;
if((V14!=0)) goto l13;
if((XI==YI)) goto l13;
L=1;
l15:if((L>V23)) goto l13;
V16=L*XI;
V15=XA+V16;
if((V15<0)) goto l16;
if((V15>=NC)) goto l16;
V18=L*YI;
V17=YA+V18;
if((V17<0)) goto l16;
if((V17>=NL)) goto l16;
M=1;
l5:if((M<=L)) goto l6;
V25=NC*V17;
V24=V15+V25;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+7)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+9,jvj+8,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l16:L++;
goto l15;
l4:pile[v[22]]=K; pile[WZ1]=(-596); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(K,(-596),V3)*/
V3=pile[WZ2]; 
if((XA!=V3)) goto l3;
pile[WZ1]=(-606); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(K,(-606),V4)*/
V4=pile[WZ2]; 
if((YA==V4)) goto l20;
l3:K++;
goto l1;
l6:V20=M*XI;
V19=XA+V20;
V22=M*YI;
V21=YA+V22;
Q=1;
l7:if((Q<=NK)) goto l9;
M++;
goto l5;
l9:pile[v[22]]=Q; pile[WZ1]=(-596); 
(*f[201])( );if(v[102]) goto l8;     /*FCOEFF0(Q,(-596),V8)*/
V8=pile[WZ2]; 
if((V19!=V8)) goto l8;
pile[WZ1]=(-606); 
(*f[201])( );if(v[102]) goto l8;     /*FCOEFF0(Q,(-606),V9)*/
V9=pile[WZ2]; 
if((V21==V9)) goto l16;
l8:Q++;
goto l7;
l10:V7=NC;
goto l11;
l13:YI++;
if((YI<=1)) goto l14;
XI++;
if((XI<=1)) goto l12;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
V27=NC*YA;
V26=XA+V27;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+10)*/
pile[WZ3]=25; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V26; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V26,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+17)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,103,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+16,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[WZ3]=485; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+28; 
(*f[301])( );     /*TRI11(jvj+27,jvj+4,107,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+28,22,100,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+12)*/
pile[WZ2]=111; pile[WZ3]=jvj+10; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+10,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+12)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
l20:YA++;
l18:if((YA<=V12)) goto l2;
XA++;
goto l17;
l19:YA=0;
goto l18;
}
