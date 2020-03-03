#include "dx.h"
void LOGIGRAPH11(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,J=0,V5=0,V20=0,V3=0,V15=0,V8=0,V22=0,V6=0,V17=0,V18=0,I=0,V24=0,V2=0,N=0,V19=0,V23=0,V27=0,K=0,V12=0,V14=0,V9=0,V11=0,V16=0,V13=0,V25=0,V28=0;
int H,V,MV;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=26166;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2704&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; MV=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=0 ;z[jvj+4]=0;
V17=H-1;
V18=V-1;
I=0;
l7:if((I<=V17)) goto l8;
x[NNNE]=x[jvj+4] ;z[NNNE]=z[jvj+4];
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:pile[v[22]]=L; pile[WZ1]=J; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(L,J,(-1859),V5)*/
V5=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V5; 
(*f[186])( );     /*BTC0(jvj+2,117,V5)*/
l2:L++;
l1:if((L<=K)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+2,V20)*/
V20=pile[WZ2]; 
V3=V20;
V11=V3+V12;
if((V11>I)) goto l13;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
l4:if((V15<=N)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+3,V22)*/
V22=pile[WZ2]; 
V6=V22;
V16=V6+N;
V13=V14-V16;
if((I>=V13)) goto l13;
V25=V12+V27;
V28=K+V27;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+6)*/
pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+7)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+18)*/
pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-757); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-757),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V25; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,V25,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+25)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-757); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-757),jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V28; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,V28,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+36,jvj+35,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+9)*/
pile[WZ2]=111; pile[WZ3]=jvj+6; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+6,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+7)*/
pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+8)*/
pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+9)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l13:K++;
l12:if((K>V19)) goto l10;
V12=K-1;
V15=K+1;
V14=H+V15;
pile[v[22]]=K; pile[WZ1]=J; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l13;     /*FTAB0(K,J,(-1859),V9)*/
V9=pile[WZ3]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
L=1;
goto l1;
l6:pile[v[22]]=V15; pile[WZ1]=J; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(V15,J,(-1859),V8)*/
V8=pile[WZ3]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V8; 
(*f[186])( );     /*BTC0(jvj+3,117,V8)*/
l5:V15++;
goto l4;
l8:V24=I*V;
J=0;
l9:if((J<=V18)) goto l11;
I++;
goto l7;
l10:J++;
goto l9;
l11:pile[v[22]]=J; pile[WZ1]=(-1859); 
(*f[3979])( );if(v[102]) goto l10;     /*LONGUEUR0(J,(-1859),V2)*/
V2=pile[WZ2]; 
N=V2;
if((N<2)) goto l10;
V19=N-1;
V23=J+V24;
V27=J*MV;
K=1;
goto l12;
}
