#include "dx.h"
void QZZB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V73=0,L=0,V18=0,V23=0,V85=0,V52=0,V100=0,V96=0,V101=0,V98=0,V102=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,R,jvj+11)*/
if((x[jvj+11]!=22)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,R,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==1215)) goto l5;
if((x[jvj+14]!=1273)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+12,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+19,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+20,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+21,jvj+22)*/
if(x[jvj+22]!=25&&x[jvj+22]!=29&&x[jvj+22]!=30&&x[jvj+22]!=27&&x[jvj+22]!=28) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+23)*/
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+1]=d[76];z[jvj+1]=0;
l1:if((x[jvj+23]>0)) goto l2;
L=V23;
x[jvj+29]=x[jvj+22] ;z[jvj+29]=z[jvj+22];
x[jvj+18]=x[jvj+5] ;z[jvj+18]=z[jvj+5];
l10:x[jvj+46]=incon;
if((x[jvj+29]==29)) goto l11;
if((x[jvj+29]==27)) goto l12;
x[jvj+46]=x[jvj+29] ;z[jvj+46]=z[jvj+29];
l13:V96=incon;
if((x[jvj+29]==29)) goto l14;
if((x[jvj+29]==27)) goto l15;
V96=L;
l16:x[jvj+37]=vo[16];z[jvj+37]=vz[16];
pile[v[22]]=322; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(322,jvj+37,V98)*/
V98=pile[WZ2]; 
x[jvj+55]=x[jvj+18] ;z[jvj+55]=z[jvj+18];
l8:if((x[jvj+55]>0)) goto l9;
pile[v[22]]=R; pile[WZ1]=jvj+38; 
(*f[887])( );     /*VARND0(R,jvj+38)*/
for(i=x[jvj+18],V102=0;i>0;i=t[i],V102++)  ;
x[jvj+39]=vo[14];z[jvj+39]=vz[14];
pile[v[22]]=V102; pile[WZ1]=515; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V102,515,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=0; pile[WZ2]=510; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,0,510,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+18; pile[WZ2]=350; pile[WZ3]=jvj+43; 
(*f[301])( );     /*TRI11(jvj+42,jvj+18,350,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=V98; pile[WZ2]=322; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,V98,322,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+38; pile[WZ2]=258; pile[WZ3]=jvj+45; 
(*f[301])( );     /*TRI11(jvj+44,jvj+38,258,jvj+45)*/
pile[v[22]]=117; pile[WZ1]=V96; pile[WZ2]=145; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+40; 
(*f[725])( );     /*QUADRI14(117,V96,145,jvj+46,jvj+45,jvj+40)*/
pile[v[22]]=jvj+39; pile[WZ1]=1305; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+39,1305,jvj+40)*/
pile[v[22]]=R; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,191,68)*/
pile[v[22]]=jvj+37; pile[WZ1]=322; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+37,322,1)*/
l17:v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+23]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+23];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V18; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V18,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+50; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+50,jvj+4)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[196])( );     /*PLUF0(jvj+1,jvj+4,jvj+5)*/
x[jvj+23]=t[x[jvj+23]];
goto l1;
l4:x[jvj+7]=s[x[jvj+34]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+34];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V52; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,V52,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+54; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+54,jvj+9)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+6,jvj+9,jvj+10)*/
x[jvj+34]=t[x[jvj+34]];
l3:if((x[jvj+34]>0)) goto l4;
L=V85;
x[jvj+29]=x[jvj+33] ;z[jvj+29]=z[jvj+33];
x[jvj+18]=x[jvj+10] ;z[jvj+18]=z[jvj+10];
goto l10;
l5:pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+15)*/
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+15,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+16,jvj+17)*/
if(x[jvj+17]!=25&&x[jvj+17]!=29&&x[jvj+17]!=30&&x[jvj+17]!=27&&x[jvj+17]!=28) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+18)*/
L=V73;
x[jvj+29]=x[jvj+17] ;z[jvj+29]=z[jvj+17];
goto l10;
l6:pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+12,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,R,jvj+24)*/
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]==1215)) goto l7;
if((x[jvj+26]!=1273)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+24,jvj+30)*/
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+30,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+31,jvj+32)*/
if(x[jvj+32]!=25&&x[jvj+32]!=29&&x[jvj+32]!=30&&x[jvj+32]!=27&&x[jvj+32]!=28) goto l17;
pile[v[22]]=844; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(844,jvj+32,jvj+33)*/
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+34)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+6]=d[76];z[jvj+6]=0;
goto l3;
l7:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+27,jvj+28)*/
if(x[jvj+28]!=25&&x[jvj+28]!=29&&x[jvj+28]!=30&&x[jvj+28]!=27&&x[jvj+28]!=28) goto l17;
pile[v[22]]=844; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(844,jvj+28,jvj+29)*/
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+18)*/
L=V85;
goto l10;
l9:x[jvj+35]=s[x[jvj+55]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+55];
pile[v[22]]=1273; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[492])( );     /*FIGURE0(1273,jvj+35,jvj+36)*/
if((x[jvj+36]==135)) goto l17;
x[jvj+55]=t[x[jvj+55]];
goto l8;
l11:x[jvj+46]=30 ;z[jvj+46]=30;
goto l13;
l12:x[jvj+46]=28 ;z[jvj+46]=28;
goto l13;
l14:V100=L-1;
V96=V100;
goto l16;
l15:V101=L+1;
V96=V101;
goto l16;
}
