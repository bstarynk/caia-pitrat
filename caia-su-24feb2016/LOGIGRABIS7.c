#include "dx.h"
void LOGIGRABIS7(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V8=0,II=0,V9=0,V27=0,V6=0,Q=0,V15=0,V35=0,V13=0,V39=0,PP=0,V38=0,V43=0,SS=0,V42=0,V44=0,P=0,V31=0,V16=0,V30=0,V33=0,V32=0,V26=0,V28=0,V10=0,V5=0,N=0,V25=0,V24=0,V23=0,L=0,V46=0,V45=0;
int H,V,MV;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=61;
x[jvj+1]=26165;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2689&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; MV=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=0 ;z[jvj+13]=0;
V26=V-1;
V28=H-1;
I=0;
l14:if((I<=V26)) goto l16;
x[NNNE]=x[jvj+13] ;z[NNNE]=z[jvj+13];
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(117,jvj+2,V27)*/
V27=pile[WZ2]; 
V6=V27;
V24=V25+V6;
V23=H-V24;
L=0;
l17:if((L>V28)) goto l15;
x[jvj+10]=0 ;z[jvj+10]=0;
V44=L+1;
P=1;
l11:if((P<=N)) goto l13;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+12; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+12)*/
V46=L*V;
V45=I+V46;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+48)*/
pile[WZ3]=25; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+56)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V45; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,V45,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+58,jvj+57,jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+49)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+12; pile[WZ2]=107; pile[WZ3]=jvj+61; 
(*f[301])( );     /*TRI11(jvj+60,jvj+12,107,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+61,22,100,jvj+50)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+50)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[522])( );     /*PLUB2(jvj+13,jvj+14)*/
L++;
goto l17;
l6:pile[v[22]]=Q; pile[WZ1]=I; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(Q,I,(-1859),V15)*/
V15=pile[WZ3]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V15; 
(*f[186])( );     /*BTC0(jvj+3,117,V15)*/
l5:Q++;
l4:if((Q<=V31)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+3,V35)*/
V35=pile[WZ2]; 
V13=V35;
V30=V31+V13;
if((L<V30)) goto l12;
V33=V30+V16;
V32=V23+V33;
if((L>=V32)) goto l12;
x[jvj+4]=0 ;z[jvj+4]=0;
V39=I*MV;
PP=0;
l7:if((PP<=V31)) goto l8;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+8)*/
x[jvj+6]=0 ;z[jvj+6]=0;
V43=I*MV;
SS=0;
l9:if((SS<=V31)) goto l10;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+9)*/
x[jvj+34]=x[jvj+8] ;z[jvj+34]=z[jvj+8];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+21)*/
pile[WZ3]=27; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+24)*/
pile[WZ3]=485; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V30; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V30,jvj+30)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+33,jvj+34,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+31)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+28,107,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+28,107,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+22)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+36)*/
pile[WZ3]=485; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V30; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,V30,jvj+42)*/
pile[WZ3]=V16; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,jvj+43)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+47; 
(*f[301])( );     /*TRI11(jvj+46,jvj+9,107,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+47,22,100,jvj+44)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+41,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=107; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+42)*/
pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V44; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V44,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+39,jvj+23)*/
pile[WZ2]=111; pile[WZ3]=jvj+21; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+21,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+23)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(jvj+10,jvj+11)*/
l12:P++;
goto l11;
l8:V38=PP+V39;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-733); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-733),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V38; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V38,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
PP++;
goto l7;
l10:V42=SS+V43;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-733); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-733),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V42; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V42,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
SS++;
goto l9;
l13:V31=P-1;
pile[v[22]]=P; pile[WZ1]=I; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l12;     /*FTAB0(P,I,(-1859),V16)*/
V16=pile[WZ3]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
Q=1;
goto l4;
l15:I++;
goto l14;
l16:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l15;     /*FTAB0(1,I,(-1859),V10)*/
V10=pile[WZ3]; 
if((V10<=0)) goto l15;
pile[v[22]]=I; pile[WZ1]=(-1859); 
(*f[3979])( );if(v[102]) goto l15;     /*LONGUEUR0(I,(-1859),V5)*/
V5=pile[WZ2]; 
N=V5;
V25=N-1;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
pile[v[22]]=I; pile[WZ1]=(-1859); 
(*f[3979])( );if(v[102]) goto l3;     /*LONGUEUR0(I,(-1859),V8)*/
V8=pile[WZ2]; 
II=1;
l1:if((II>V8)) goto l3;
pile[v[22]]=II; pile[WZ1]=I; pile[WZ2]=(-1859); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(II,I,(-1859),V9)*/
V9=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V9; 
(*f[186])( );     /*BTC0(jvj+2,117,V9)*/
l2:II++;
goto l1;
}
