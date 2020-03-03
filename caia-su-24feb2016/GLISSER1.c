#include "dx.h"
void GLISSER1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V17=0,V16=0,V15=0,V6=0,LL=0,V21=0,V20=0,V19=0,V9=0,V24=0,V23=0,V22=0,V12=0,V25=0,V10=0,J=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=26085;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2337&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=0 ;z[jvj+9]=0;
J=0;
l9:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
L=0;
l6:V24=L*5;
V23=J+V24;
V22=V23+1;
pile[v[22]]=V22; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l5;     /*FCOEFF0(V22,(-630),V12)*/
V12=pile[WZ2]; 
if((V12<=0)) goto l5;
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,117,1)*/
l5:L++;
if((L<=4)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+6,V25)*/
V25=pile[WZ2]; 
V10=V25;
x[jvj+2]=0 ;z[jvj+2]=0;
L=0;
l2:V17=L*5;
V16=J+V17;
V15=V16+1;
pile[v[22]]=V15; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l1;     /*FCOEFF0(V15,(-630),V6)*/
V6=pile[WZ2]; 
if((V6!=0)) goto l1;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+13,jvj+12,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l1:L++;
if((L<=4)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+7; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+7)*/
x[jvj+4]=0 ;z[jvj+4]=0;
LL=0;
l4:V21=LL*5;
V20=J+V21;
V19=V20+1;
pile[v[22]]=V19; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(V19,(-630),V9)*/
V9=pile[WZ2]; 
if((V9<=0)) goto l3;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+16,jvj+15,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l3:LL++;
if((LL<=4)) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+8)*/
x[jvj+27]=x[jvj+7] ;z[jvj+27]=z[jvj+7];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+17)*/
pile[WZ3]=485; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+22)*/
pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=107; pile[WZ3]=jvj+28; 
(*f[301])( );     /*TRI11(jvj+26,jvj+27,107,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+28,22,100,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+24)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+22,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+30)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+8,107,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+34,22,100,jvj+31)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+31)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[522])( );     /*PLUB2(jvj+9,jvj+10)*/
l7:J++;
if((J<=4)) goto l9;
x[NNNE]=x[jvj+9] ;z[NNNE]=z[jvj+9];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
