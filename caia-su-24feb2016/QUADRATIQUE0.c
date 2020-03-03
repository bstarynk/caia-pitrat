#include "dx.h"
void QUADRATIQUE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V54=0,V5=0,V14=0,V17=0,V30=0,V33=0,V46=0,V49=0;
int R,V;
int A,B,C;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=62;
x[jvj+1]=11330;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3603&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; V=pile[v[22]+1]; A=pile[v[22]+2]; B=pile[v[22]+3]; C=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+62]=x[B]=x[C]=incon;
pile[v[22]]=V; pile[WZ1]=jvj+2; 
(*f[1290])( );if(v[102]) goto l31;     /*DEPEXP0(V,jvj+2)*/
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(R,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[799])( );if(v[102]) goto l31;     /*NORME0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; pile[WZ3]=jvj+6; 
(*f[4006])( );if(v[102]) goto l31;     /*DECOMPVAR0(jvj+4,jvj+2,jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l1;
l31:if(x[jvj+62]!=incon) goto l7;
l33:x[A]=x[B]=x[C]=incon;
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l1:x[jvj+62]=x[jvj+5] ;z[jvj+62]=z[jvj+5];
x[jvj+55]=x[jvj+62] ;z[jvj+55]=z[jvj+62];
l4:if((x[jvj+55]>0)) goto l5;
x[jvj+54]=x[jvj+62] ;z[jvj+54]=z[jvj+62];
l2:if((x[jvj+54]<=0)) goto l33;
x[jvj+7]=s[x[jvj+54]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+54];
pile[v[22]]=510; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+7,V54)*/
V54=pile[WZ2]; 
if((V54==2)) goto l31;
l3:x[jvj+54]=t[x[jvj+54]];
goto l2;
l5:x[jvj+8]=s[x[jvj+55]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+55];
pile[v[22]]=510; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+8,V5)*/
V5=pile[WZ2]; 
if((V5>2)) goto l33;
l6:x[jvj+55]=t[x[jvj+55]];
goto l4;
l7:x[jvj+15]=0 ;z[jvj+15]=0;
x[jvj+57]=x[jvj+62] ;z[jvj+57]=z[jvj+62];
l12:if((x[jvj+57]>0)) goto l13;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+33; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+33; pile[WZ2]=107; pile[WZ3]=jvj+47; 
(*f[301])( );     /*TRI11(jvj+46,jvj+33,107,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+47,22,100,jvj+34)*/
pile[v[22]]=129; pile[WZ1]=jvj+34; pile[WZ2]=C; 
(*f[1157])( );if(v[102]) goto l15;     /*NORME1(129,jvj+34,C)*/
l15:x[jvj+23]=0 ;z[jvj+23]=0;
x[jvj+59]=x[jvj+62] ;z[jvj+59]=z[jvj+62];
l20:if((x[jvj+59]>0)) goto l21;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+35; 
(*f[299])( );     /*COPEL0(jvj+23,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+35; pile[WZ2]=107; pile[WZ3]=jvj+50; 
(*f[301])( );     /*TRI11(jvj+49,jvj+35,107,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+50,22,100,jvj+36)*/
pile[v[22]]=129; pile[WZ1]=jvj+36; pile[WZ2]=B; 
(*f[1157])( );if(v[102]) goto l23;     /*NORME1(129,jvj+36,B)*/
l23:x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+61]=x[jvj+62] ;z[jvj+61]=z[jvj+62];
l28:if((x[jvj+61]>0)) goto l29;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+37; 
(*f[299])( );     /*COPEL0(jvj+31,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+37; pile[WZ2]=107; pile[WZ3]=jvj+53; 
(*f[301])( );     /*TRI11(jvj+52,jvj+37,107,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+53,22,100,jvj+38)*/
pile[v[22]]=129; pile[WZ1]=jvj+38; pile[WZ2]=A; 
(*f[1157])( );if(v[102]) goto l33;     /*NORME1(129,jvj+38,A)*/
if(x[B]!=incon) goto l34;
goto l33;
l10:x[jvj+11]=s[x[jvj+56]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+56];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
x[jvj+56]=t[x[jvj+56]];
l9:if((x[jvj+56]>0)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,jvj+40)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+39; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+39,jvj+16)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+16; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+13,jvj+16,107)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+40)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
l14:x[jvj+57]=t[x[jvj+57]];
goto l12;
l11:V14=1;
l8:x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=1260; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1260,jvj+9,jvj+10)*/
x[jvj+56]=x[jvj+10] ;z[jvj+56]=z[jvj+10];
goto l9;
l13:x[jvj+9]=s[x[jvj+57]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+57];
pile[v[22]]=510; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+9,V17)*/
V17=pile[WZ2]; 
if((V17!=0)) goto l14;
V14=incon;
pile[v[22]]=218; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+9,jvj+14)*/
if((x[jvj+14]!=52)) goto l11;
V14=(-1);
goto l8;
l18:x[jvj+19]=s[x[jvj+58]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+58];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+20)*/
x[jvj+58]=t[x[jvj+58]];
l17:if((x[jvj+58]>0)) goto l18;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V30; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,V30,jvj+42)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+41,jvj+24)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+24; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+21,jvj+24,107)*/
pile[v[22]]=jvj+24; pile[WZ1]=107; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+42)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+24)*/
l22:x[jvj+59]=t[x[jvj+59]];
goto l20;
l19:V30=1;
l16:x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=1260; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1260,jvj+17,jvj+18)*/
x[jvj+58]=x[jvj+18] ;z[jvj+58]=z[jvj+18];
goto l17;
l21:x[jvj+17]=s[x[jvj+59]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+59];
pile[v[22]]=510; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+17,V33)*/
V33=pile[WZ2]; 
if((V33!=1)) goto l22;
V30=incon;
pile[v[22]]=218; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+17,jvj+22)*/
if((x[jvj+22]!=52)) goto l19;
V30=(-1);
goto l16;
l26:x[jvj+27]=s[x[jvj+60]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+60];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+28)*/
x[jvj+60]=t[x[jvj+60]];
l25:if((x[jvj+60]>0)) goto l26;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V46; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,V46,jvj+44)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+43; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+43,jvj+32)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+32; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+29,jvj+32,107)*/
pile[v[22]]=jvj+32; pile[WZ1]=107; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+44)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+32)*/
l30:x[jvj+61]=t[x[jvj+61]];
goto l28;
l27:V46=1;
l24:x[jvj+29]=0 ;z[jvj+29]=0;
pile[v[22]]=1260; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1260,jvj+25,jvj+26)*/
x[jvj+60]=x[jvj+26] ;z[jvj+60]=z[jvj+26];
goto l25;
l29:x[jvj+25]=s[x[jvj+61]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+61];
pile[v[22]]=510; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(510,jvj+25,V49)*/
V49=pile[WZ2]; 
if((V49!=2)) goto l30;
V46=incon;
pile[v[22]]=218; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(218,jvj+25,jvj+30)*/
if((x[jvj+30]!=52)) goto l27;
V46=(-1);
goto l24;
l34:if(x[C]!=incon) goto l35;
goto l33;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
}
