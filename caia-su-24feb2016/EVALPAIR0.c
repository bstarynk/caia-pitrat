#include "dx.h"
void EVALPAIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V13=0,S=0,V15=0,L=0,V29=0,V26=0,V20=0,V28=0,V25=0,NN=0,V19=0,V22=0,V18=0,V24=0,V21=0;
int R,ES;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=11339;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3734&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; ES=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+17; 
(*f[887])( );     /*VARND0(R,jvj+17)*/
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+10]=d[141];z[jvj+10]=0;
l4:if((x[jvj+17]>0)) goto l5;
x[jvj+24]=x[jvj+14] ;z[jvj+24]=z[jvj+14];
x[jvj+43]=x[jvj+24] ;z[jvj+43]=z[jvj+24];
l11:if((x[jvj+43]>0)) goto l12;
pile[v[22]]=134; pile[WZ1]=218; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(134,218,jvj+22)*/
pile[v[22]]=R; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(R,jvj+20)*/
x[jvj+44]=x[jvj+24] ;z[jvj+44]=z[jvj+24];
l15:if((x[jvj+44]>0)) goto l16;
pile[v[22]]=1358; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[1157])( );if(v[102]) goto l19;     /*NORME1(1358,jvj+20,jvj+23)*/
pile[v[22]]=2; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; pile[WZ3]=RES; 
(*f[4029])( );if(v[102]) goto l19;     /*TRPAIR0(2,jvj+23,jvj+24,RES)*/
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:S=V13;
pile[v[22]]=jvj+11; pile[WZ1]=218; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+11,218,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=117; pile[WZ3]=S; pile[WZ4]=jvj+31; pile[WZ5]=jvj+13; 
(*f[47])( );     /*QUADRI0(111,jvj+8,117,S,jvj+31,jvj+13)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[196])( );     /*PLUF0(jvj+10,jvj+13,jvj+14)*/
l6:x[jvj+17]=t[x[jvj+17]];
goto l4;
l5:x[jvj+11]=s[x[jvj+17]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+17];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1290])( );if(v[102]) goto l6;     /*DEPEXP0(jvj+11,jvj+12)*/
x[jvj+8]=x[jvj+12] ;z[jvj+8]=z[jvj+12];
x[jvj+41]=x[ES] ;z[jvj+41]=z[ES];
l1:if((x[jvj+41]<=0)) goto l6;
x[jvj+2]=s[x[jvj+41]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=1280)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+2,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+5,V9)*/
V9=pile[WZ2]; 
if((V9!=2)) goto l2;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,jvj+2,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+6,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+2,jvj+7)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+7,jvj+9)*/
if((x[jvj+9]==135)) goto l3;
l2:x[jvj+41]=t[x[jvj+41]];
goto l1;
l8:x[jvj+15]=s[x[jvj+42]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+42];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+15,V15)*/
V15=pile[WZ2]; 
if((V15!=L)) goto l10;
L++;
if((L<=100)) goto l9;
l13:x[jvj+43]=t[x[jvj+43]];
goto l11;
l10:x[jvj+42]=t[x[jvj+42]];
l7:if((x[jvj+42]>0)) goto l8;
pile[v[22]]=jvj+16; pile[WZ1]=510; pile[WZ2]=L; 
(*f[43])( );     /*CHGC2(jvj+16,510,L)*/
goto l13;
l12:x[jvj+16]=s[x[jvj+43]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+43];
L=1;
l9:x[jvj+42]=x[jvj+24] ;z[jvj+42]=z[jvj+24];
goto l7;
l14:pile[v[22]]=510; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+18,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=NN; pile[WZ1]=2; 
(*f[1006])( );if(v[102]) goto l17;     /*POWER0(NN,2,V19)*/
V19=pile[WZ2]; 
V22=NN+1;
pile[v[22]]=V22; 
(*f[1006])( );if(v[102]) goto l17;     /*POWER0(V22,2,V18)*/
V18=pile[WZ2]; 
V24=V25+1000;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+28)*/
pile[WZ3]=486; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+35)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V18; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,V18,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V24; pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,V24,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+40,jvj+39,jvj+37)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+35; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+35,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+36)*/
pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+30)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+28; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+28,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+30)*/
l18:pile[v[22]]=jvj+20; pile[WZ1]=jvj+20; pile[WZ2]=250; pile[WZ3]=jvj+19; pile[WZ4]=jvj+21; pile[WZ5]=jvj+22; 
(*f[1074])( );     /*SUBSTITUVARB0(jvj+20,jvj+20,250,jvj+19,jvj+21,jvj+22)*/
l17:x[jvj+44]=t[x[jvj+44]];
goto l15;
l16:x[jvj+18]=s[x[jvj+44]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+44];
pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+18,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=111; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+18,jvj+19)*/
NN=V21;
x[jvj+21]=incon;
if((NN>=0)) goto l14;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+18,V29)*/
V29=pile[WZ2]; 
V26=(-NN);
pile[v[22]]=V26; pile[WZ1]=2; 
(*f[1006])( );if(v[102]) goto l14;     /*POWER0(V26,2,V20)*/
V20=pile[WZ2]; 
V28=V29+1000;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V20; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,V20,jvj+26)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V28; pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,V28,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+34,jvj+33,jvj+27)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+25,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=107; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+27)*/
goto l18;
l19:x[RES]=135 ;z[RES]=135;
goto l20;
}
