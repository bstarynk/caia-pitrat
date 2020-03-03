#include "dx.h"
void ATOME231T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V49=0,Z=0,V51=0,V26=0,V45=0,V28=0,EY=0,V85=0,V88=0,V82=0,V79=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=65;
x[jvj+1]=20231;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3692&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=55)) goto l17;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,RR,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=25)) goto l17;
pile[v[22]]=1232; pile[WZ1]=R; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(1232,R,jvj+34)*/
for(i=x[jvj+34],V26=0;i>0;i=t[i],V26++)  ;
if((V26<=1)) goto l17;
x[jvj+35]=vo[14];z[jvj+35]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+35,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(RR,jvj+3)*/
V49=x[jvj+34];
l1:if((V49<=0)) goto l17;
W=s[V49];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==W) goto l2;
V49=t[V49];
goto l1;
l2:x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(RR,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
for(i=x[jvj+5],V28=0;i>0;i=t[i],V28++)  ;
if((V28!=1)) goto l17;
if((x[jvj+5]<=0)) goto l17;
x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,R,jvj+36)*/
x[jvj+25]=0 ;z[jvj+25]=0;
l11:if((x[jvj+36]>0)) goto l12;
x[jvj+29]=0 ;z[jvj+29]=0;
l15:if((x[jvj+25]>0)) goto l16;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+29; pile[WZ2]=107; pile[WZ3]=jvj+52; 
(*f[301])( );     /*TRI11(jvj+51,jvj+29,107,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+52,22,100,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[799])( );if(v[102]) goto l17;     /*NORME0(jvj+37,jvj+38)*/
pile[v[22]]=R; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(R,jvj+38,jvj+39)*/
if((x[jvj+39]==134)) goto l19;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l5;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
l5:x[jvj+4]=t[x[jvj+4]];
goto l3;
l8:pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+44; 
(*f[301])( );     /*TRI11(jvj+43,jvj+13,107,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+44,22,100,jvj+41)*/
l14:pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+22)*/
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+65]=x[jvj+22] ;z[jvj+65]=z[jvj+22];
l9:if((x[jvj+65]>0)) goto l10;
x[jvj+23]=x[jvj+41] ;z[jvj+23]=z[jvj+41];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+49)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+49; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+49,jvj+26)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+26; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+16,jvj+26,107)*/
pile[v[22]]=jvj+26; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
l13:x[jvj+36]=t[x[jvj+36]];
goto l11;
l10:x[jvj+14]=s[x[jvj+65]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+65];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
x[jvj+65]=t[x[jvj+65]];
goto l9;
l12:x[jvj+17]=s[x[jvj+36]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+36];
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=48)) goto l13;
pile[v[22]]=RR; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; pile[WZ3]=jvj+21; 
(*f[3693])( );if(v[102]) goto l13;     /*TRVAL0(RR,jvj+17,jvj+20,jvj+21)*/
x[jvj+41]=incon;
if((x[jvj+21]==134)) goto l18;
if((x[jvj+21]==135)) goto l20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+41)*/
goto l14;
l16:x[jvj+27]=s[x[jvj+25]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+25];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+28)*/
x[jvj+25]=t[x[jvj+25]];
goto l15;
l18:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+41)*/
goto l14;
l19:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+56)*/
pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+57)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+58)*/
pile[v[22]]=V45; pile[WZ1]=858; pile[WZ2]=jvj+53; 
(*f[46])( );     /*TRI0(V45,858,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,v[13],642,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=3692; pile[WZ2]=246; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,3692,246,jvj+55)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20231; pile[WZ4]=jvj+55; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(158,1,218,20231,jvj+55,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=159; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+40,159,jvj+56)*/
pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+40,159,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+40,159,jvj+58)*/
pile[v[22]]=R; pile[WZ1]=jvj+38; pile[WZ2]=jvj+40; 
(*f[1558])( );     /*RESTAURE0(R,jvj+38,jvj+40)*/
goto l17;
l20:pile[v[22]]=202; pile[WZ1]=jvj+7; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(202,jvj+7,jvj+59)*/
if((x[jvj+59]!=68)) goto l26;
x[jvj+64]=0 ;z[jvj+64]=0;
pile[v[22]]=365; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(365,jvj+7,jvj+60)*/
l21:if((x[jvj+60]>0)) goto l27;
EY=x[jvj+64];
l6:x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1290])( );if(v[102]) goto l8;     /*DEPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
x[jvj+10]=d[76];z[jvj+10]=0;
V51=EY;
l7:if((V51<=0)) goto l8;
Z=s[V51];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Z; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,Z,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+48; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+48,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[196])( );     /*PLUF0(jvj+10,jvj+11,jvj+12)*/
V51=t[V51];
goto l7;
l23:V85=s[V88];
pile[v[22]]=V85; pile[WZ1]=jvj+7; pile[WZ2]=jvj+61; 
(*f[3591])( );     /*VALCOR0(V85,jvj+7,jvj+61)*/
if((x[jvj+61]==135)) goto l25;
l24:V88=t[V88];
l22:if((V88>0)) goto l23;
EY=x[jvj+62];
goto l6;
l25:pile[v[22]]=jvj+62; pile[WZ1]=V85; 
(*f[207])( );     /*PLUE2(jvj+62,V85)*/
goto l24;
l26:x[jvj+62]=0 ;z[jvj+62]=0;
V88=x[jvj+20];
goto l22;
l27:x[jvj+63]=s[x[jvj+60]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+60];
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+63,V82)*/
V82=pile[WZ2]; 
V79=V82;
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==V79) goto l29;
l28:x[jvj+60]=t[x[jvj+60]];
goto l21;
l29:pile[v[22]]=jvj+64; pile[WZ1]=V79; 
(*f[207])( );     /*PLUE2(jvj+64,V79)*/
goto l28;
}
