#include "dx.h"
void RSNBILBT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V19=0,V24=0,V28=0,V29=0,V32=0,V30=0,V35=0,RN=0,V60=0,V49=0,V48=0,V47=0,EN=0,V53=0,V50=0,V51=0,V52=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=67;
x[jvj+1]=10024;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1314&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(250,158,jvj+35)*/
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+21]=vo[16];z[jvj+21]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(509,jvj+21,jvj+22)*/
l9:if((x[jvj+22]>0)) goto l10;
pile[v[22]]=454; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(454,jvj+21,jvj+26)*/
l12:if((x[jvj+26]>0)) goto l13;
x[jvj+67]=x[jvj+25] ;z[jvj+67]=z[jvj+25];
if((v[219]<=0)) goto l25;
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
V60=x[jvj+67];
l22:if((V60<=0)) goto l25;
RN=s[V60];
V49=RN;
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V49,0,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; 
(*f[40])( );     /*SLG0(V48)*/
V60=t[V60];
goto l22;
l6:x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+12,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=365; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+14)*/
x[jvj+15]=d[76];z[jvj+15]=0;
x[jvj+61]=x[jvj+14] ;z[jvj+61]=z[jvj+14];
l7:if((x[jvj+61]<=0)) goto l21;
x[jvj+16]=s[x[jvj+61]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+61];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1290])( );if(v[102]) goto l8;     /*DEPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V35; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V35,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+50; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+50,jvj+19)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[196])( );     /*PLUF0(jvj+15,jvj+19,jvj+20)*/
l8:x[jvj+61]=t[x[jvj+61]];
goto l7;
l10:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=868; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(868,jvj+23,jvj+24)*/
if((x[jvj+24]!=55)) goto l11;
pile[v[22]]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+23)*/
l11:x[jvj+22]=t[x[jvj+22]];
goto l9;
l13:x[jvj+2]=s[x[jvj+26]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+26];
pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+27)*/
x[jvj+62]=x[jvj+27] ;z[jvj+62]=z[jvj+27];
l14:if((x[jvj+62]>0)) goto l15;
pile[v[22]]=481; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(481,jvj+2,jvj+31)*/
x[jvj+63]=x[jvj+31] ;z[jvj+63]=z[jvj+31];
l18:if((x[jvj+63]>0)) goto l19;
x[jvj+26]=t[x[jvj+26]];
goto l12;
l15:x[jvj+3]=s[x[jvj+62]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+62];
pile[v[22]]=202; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(202,jvj+3,jvj+28)*/
if((x[jvj+28]!=68)) goto l16;
pile[v[22]]=472; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(472,jvj+2,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=489; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(489,jvj+3,jvj+4)*/
for(i=x[jvj+4],V19=0;i>0;i=t[i],V19++)  ;
if((V19>=V21)) goto l16;
l1:x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[1290])( );if(v[102]) goto l17;     /*DEPEXP0(jvj+3,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
x[jvj+8]=d[76];z[jvj+8]=0;
x[jvj+60]=x[jvj+5] ;z[jvj+60]=z[jvj+5];
l2:if((x[jvj+60]<=0)) goto l17;
x[jvj+9]=s[x[jvj+60]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+60];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+9,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+46; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+46,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[196])( );     /*PLUF0(jvj+8,jvj+10,jvj+11)*/
l3:x[jvj+60]=t[x[jvj+60]];
goto l2;
l17:pile[v[22]]=jvj+11; pile[WZ1]=jvj+29; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+29; pile[WZ2]=107; pile[WZ3]=jvj+53; 
(*f[301])( );     /*TRI11(jvj+52,jvj+29,107,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+53,22,100,jvj+30)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+30)*/
l16:x[jvj+62]=t[x[jvj+62]];
goto l14;
l19:x[jvj+12]=s[x[jvj+63]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+63];
pile[v[22]]=688; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(688,jvj+12,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=489; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(489,jvj+12,jvj+13)*/
for(i=x[jvj+13],V30=0;i>0;i=t[i],V30++)  ;
if((V30>=V32)) goto l20;
l4:pile[v[22]]=750; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(750,jvj+12,V28)*/
V28=pile[WZ2]; 
if((V28>=0)) goto l6;
l5:pile[v[22]]=688; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(688,jvj+12,V29)*/
V29=pile[WZ2]; 
if((V29>=0)) goto l6;
l20:x[jvj+63]=t[x[jvj+63]];
goto l18;
l21:pile[v[22]]=jvj+20; pile[WZ1]=jvj+32; 
(*f[299])( );     /*COPEL0(jvj+20,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+32; pile[WZ2]=107; pile[WZ3]=jvj+56; 
(*f[301])( );     /*TRI11(jvj+55,jvj+32,107,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+56,22,100,jvj+33)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+33; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+33)*/
goto l20;
l24:x[jvj+34]=s[x[jvj+64]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+64];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[1560])( );     /*RSNANOU0(jvj+34,jvj+35)*/
x[jvj+64]=t[x[jvj+64]];
l23:if((x[jvj+64]>0)) goto l24;
x[jvj+57]=0 ;z[jvj+57]=0;
pile[v[22]]=1212; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1212,jvj+35,jvj+36)*/
l26:if((x[jvj+36]>0)) goto l27;
EN=x[jvj+57];
V53=EN;
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10024; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,10024,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V53; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(23,V53,V51,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
pile[v[22]]=1212; pile[WZ1]=jvj+35; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1212,jvj+35,jvj+41)*/
l31:if((x[jvj+41]>0)) goto l32;
l33:x[jvj+1]=incon; v[0]=jvj; return;
l25:x[jvj+64]=x[jvj+67] ;z[jvj+64]=z[jvj+67];
goto l23;
l27:x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=1260; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(1260,jvj+37,jvj+38)*/
x[jvj+65]=x[jvj+38] ;z[jvj+65]=z[jvj+38];
l28:if((x[jvj+65]>0)) goto l29;
x[jvj+36]=t[x[jvj+36]];
goto l26;
l29:x[jvj+39]=s[x[jvj+65]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+65];
pile[v[22]]=218; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(218,jvj+39,jvj+40)*/
x[jvj+66]=x[jvj+57] ;z[jvj+66]=z[jvj+57];
l34:if((x[jvj+66]>0)) goto l35;
pile[v[22]]=jvj+57; pile[WZ1]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+57,jvj+40)*/
l30:x[jvj+65]=t[x[jvj+65]];
goto l28;
l32:x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=jvj+42; 
(*f[1561])( );     /*RSNANOUL0(jvj+42)*/
x[jvj+41]=t[x[jvj+41]];
goto l31;
l35:x[jvj+58]=s[x[jvj+66]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+66];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[760])( );     /*MEMEX0(jvj+40,jvj+58,jvj+59)*/
if((x[jvj+59]==135)) goto l30;
x[jvj+66]=t[x[jvj+66]];
goto l34;
}
