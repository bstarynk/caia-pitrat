#include "dx.h"
void PILOUFACE3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V6=0,KK=0,V9=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=26084;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2333&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+2]=d[132];z[jvj+2]=0;
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+8)*/
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+5]=d[132];z[jvj+5]=0;
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+30)*/
pile[WZ3]=485; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+37; 
(*f[301])( );     /*TRI11(jvj+36,jvj+8,107,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+37,22,100,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+40; 
(*f[301])( );     /*TRI11(jvj+39,jvj+9,107,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+40,22,100,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(jvj+10,jvj+11)*/
x[NNNE]=x[jvj+10] ;z[NNNE]=z[jvj+10];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:K=s[x[jvj+2]];
pile[v[22]]=K; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(K,(-630),V6)*/
V6=pile[WZ2]; 
if((V6<=1)) goto l3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+12)*/
pile[WZ3]=486; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+17)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+15; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+15,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+14)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+4,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+4,107,jvj+14)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:KK=s[x[jvj+5]];
pile[v[22]]=KK; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l6;     /*FCOEFF0(KK,(-630),V9)*/
V9=pile[WZ2]; 
if((V9!=1)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+21)*/
pile[WZ3]=486; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=KK; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,KK,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+29,jvj+28,jvj+26)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+23)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+21; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+21,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+23)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
}
