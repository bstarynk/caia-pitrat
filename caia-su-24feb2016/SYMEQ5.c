#include "dx.h"
void SYMEQ5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V8=0,Q=0,V9=0,P=0,V10=0,J=0,V13=0,QQ=0,V14=0,PP=0,V15=0,V4=0,V5=0,K=0;
int NR,ND;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=26098;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2397&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; ND=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=0 ;z[jvj+10]=0;
I=1;
l5:if((I<=NR)) goto l7;
x[NNNE]=x[jvj+10] ;z[NNNE]=z[jvj+10];
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l6:I++;
goto l5;
l7:pile[v[22]]=I; pile[WZ1]=(-595); 
(*f[201])( );if(v[102]) goto l6;     /*FCOEFF0(I,(-595),V4)*/
V4=pile[WZ2]; 
J=1;
l8:if((J>NR)) goto l6;
pile[v[22]]=J; pile[WZ1]=(-595); 
(*f[201])( );if(v[102]) goto l9;     /*FCOEFF0(J,(-595),V5)*/
V5=pile[WZ2]; 
if((V4!=V5)) goto l9;
K=1;
l10:if((K>ND)) goto l9;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=I; pile[WZ1]=(-662); 
(*f[201])( );if(v[102]) goto l11;     /*FCOEFF0(I,(-662),V8)*/
V8=pile[WZ2]; 
x[jvj+2]=d[118];z[jvj+2]=0;
Q=1;
l1:if((Q>V8)) goto l11;
pile[v[22]]=Q; pile[WZ1]=I; pile[WZ2]=(-7362); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(Q,I,(-7362),V9)*/
V9=pile[WZ3]; 
P=V9;
pile[v[22]]=P; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l2;     /*FCOEFF0(P,(-630),V10)*/
V10=pile[WZ2]; 
if((V10!=K)) goto l2;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,jvj+4)*/
l2:Q++;
goto l1;
l9:J++;
goto l8;
l11:pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+8)*/
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=J; pile[WZ1]=(-662); 
(*f[201])( );if(v[102]) goto l12;     /*FCOEFF0(J,(-662),V13)*/
V13=pile[WZ2]; 
x[jvj+5]=d[118];z[jvj+5]=0;
QQ=1;
l3:if((QQ>V13)) goto l12;
pile[v[22]]=QQ; pile[WZ1]=J; pile[WZ2]=(-7362); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(QQ,J,(-7362),V14)*/
V14=pile[WZ3]; 
PP=V14;
pile[v[22]]=PP; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l4;     /*FCOEFF0(PP,(-630),V15)*/
V15=pile[WZ2]; 
if((V15!=K)) goto l4;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=PP; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=1050; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,1050,102,jvj+17,jvj+16,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+6,jvj+7)*/
l4:QQ++;
goto l3;
l12:pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+9)*/
x[jvj+32]=x[jvj+8] ;z[jvj+32]=z[jvj+8];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+18)*/
pile[WZ3]=26; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+19)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1171; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,1171,jvj+30)*/
pile[v[22]]=jvj+9; pile[WZ1]=184; pile[WZ2]=jvj+29; 
(*f[300])( );     /*TRI10(jvj+9,184,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=111; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=107; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+31,jvj+32,107,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+33,22,100,jvj+20)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+20)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(jvj+10,jvj+11)*/
K++;
goto l10;
}
