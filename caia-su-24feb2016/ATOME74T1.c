#include "dx.h"
void ATOME74T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V6=0,V19=0,V26=0,J=0,V66=0,II=0,V103=0,I=0,V124=0,M=0,V146=0,K=0,V154=0,V47=0,V49=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=113;
x[jvj+1]=20074;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3470&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+82]=vo[14];z[jvj+82]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(642,jvj+82,V154)*/
V154=pile[WZ2]; 
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1969])( );     /*FNDEND0(509,jvj+19,jvj+20)*/
l13:if((x[jvj+20]>0)) goto l14;
x[jvj+53]=0 ;z[jvj+53]=0;
x[jvj+111]=x[jvj+32] ;z[jvj+111]=z[jvj+32];
l25:if((x[jvj+111]>0)) goto l26;
for(i=x[jvj+53],V47=0;i>0;i=t[i],V47++)  ;
if((V47<=1)) goto l42;
x[jvj+64]=0 ;z[jvj+64]=0;
x[jvj+112]=x[jvj+32] ;z[jvj+112]=z[jvj+32];
l30:if((x[jvj+112]>0)) goto l31;
for(i=x[jvj+64],V49=0;i>0;i=t[i],V49++)  ;
if((V47!=V49)) goto l42;
x[jvj+102]=0 ;z[jvj+102]=0;
x[jvj+109]=x[jvj+32] ;z[jvj+109]=z[jvj+32];
l18:if((x[jvj+109]>0)) goto l19;
x[jvj+108]=x[jvj+102] ;z[jvj+108]=z[jvj+102];
l8:if((x[jvj+108]>0)) goto l9;
x[jvj+67]=0 ;z[jvj+67]=0;
l35:if((x[jvj+102]>0)) goto l36;
x[jvj+80]=0 ;z[jvj+80]=0;
l37:if((x[jvj+32]>0)) goto l38;
pile[v[22]]=jvj+80; pile[WZ1]=jvj+83; 
(*f[299])( );     /*COPEL0(jvj+80,jvj+83)*/
pile[v[22]]=V154; pile[WZ1]=858; pile[WZ2]=jvj+88; 
(*f[46])( );     /*TRI0(V154,858,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+89; 
(*f[189])( );     /*TRI4(jvj+88,v[13],642,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=3470; pile[WZ2]=246; pile[WZ3]=jvj+90; 
(*f[189])( );     /*TRI4(jvj+89,3470,246,jvj+90)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20074; pile[WZ4]=jvj+90; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(158,1,218,20074,jvj+90,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+91)*/
pile[WZ3]=485; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+67; pile[WZ2]=107; pile[WZ3]=jvj+98; 
(*f[301])( );     /*TRI11(jvj+97,jvj+67,107,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+95; 
(*f[58])( );     /*TRI3(jvj+98,22,100,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=111; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,111,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+83; pile[WZ2]=107; pile[WZ3]=jvj+101; 
(*f[301])( );     /*TRI11(jvj+100,jvj+83,107,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+101,22,100,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; pile[WZ2]=103; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+92,jvj+93,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+95,jvj+94,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+84; 
(*f[1296])( );     /*NOUVCONTR0(jvj+85,jvj+84)*/
l42:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l2:x[jvj+106]=x[jvj+32] ;z[jvj+106]=z[jvj+32];
l1:if((x[jvj+106]<=0)) goto l42;
x[jvj+3]=s[x[jvj+106]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+106];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l3;
x[jvj+6]=d[20];z[jvj+6]=0;
l4:if((x[jvj+6]<=0)) goto l3;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+7,jvj+3,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=1273)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+8,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+11,V38)*/
V38=pile[WZ2]; 
if((J!=V38)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+12)*/
if((x[jvj+12]<=0)) goto l5;
V6=s[x[jvj+12]];
l12:x[jvj+17]=t[x[jvj+17]];
l11:if((x[jvj+17]<=0)) goto l10;
J=s[x[jvj+17]];
if((J==0)) goto l12;
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==J) goto l2;
goto l42;
l3:x[jvj+106]=t[x[jvj+106]];
goto l1;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l9:x[jvj+15]=s[x[jvj+108]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+108];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+18; 
(*f[887])( );     /*VARND0(jvj+15,jvj+18)*/
for(i=x[jvj+18],V26=0;i>0;i=t[i],V26++)  ;
if((V26!=1)) goto l10;
if((x[jvj+18]<=0)) goto l10;
x[jvj+13]=s[x[jvj+18]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+18];
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(365,jvj+13,jvj+14)*/
x[jvj+107]=x[jvj+14] ;z[jvj+107]=z[jvj+14];
l6:if((x[jvj+107]<=0)) goto l11;
x[jvj+16]=s[x[jvj+107]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+107];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[1738])( );if(v[102]) goto l7;     /*EVLM0(jvj+15,jvj+13,jvj+16,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=jvj+17; pile[WZ1]=V19; 
(*f[207])( );     /*PLUE2(jvj+17,V19)*/
l7:x[jvj+107]=t[x[jvj+107]];
goto l6;
l10:x[jvj+108]=t[x[jvj+108]];
goto l8;
l14:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=25)) goto l15;
pile[v[22]]=1070; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1070,jvj+21,jvj+24)*/
if((x[jvj+24]!=68)) goto l15;
x[jvj+25]=d[20];z[jvj+25]=0;
l16:if((x[jvj+25]<=0)) goto l15;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+26,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+21; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+27,jvj+21,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=1273)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+28,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+31,V66)*/
V66=pile[WZ2]; 
II=V66;
if((II==0)) goto l17;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+21)*/
l17:x[jvj+25]=t[x[jvj+25]];
goto l16;
l15:x[jvj+20]=t[x[jvj+20]];
goto l13;
l19:x[jvj+33]=s[x[jvj+109]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+109];
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=25)) goto l20;
x[jvj+36]=d[20];z[jvj+36]=0;
l21:if((x[jvj+36]<=0)) goto l20;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=268; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+37,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+33; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+38,jvj+33,jvj+39)*/
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=1273)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+39,jvj+42)*/
x[jvj+110]=x[jvj+42] ;z[jvj+110]=z[jvj+42];
l23:if((x[jvj+110]<=0)) goto l22;
x[jvj+103]=s[x[jvj+110]] ;z[jvj+103]=(x[jvj+103]<=sepcte) ? x[jvj+103] : z[jvj+110];
x[jvj+113]=x[jvj+102] ;z[jvj+113]=z[jvj+102];
l43:if((x[jvj+113]>0)) goto l44;
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[68])( );     /*PLUE0(jvj+102,jvj+103)*/
l24:x[jvj+110]=t[x[jvj+110]];
goto l23;
l20:x[jvj+109]=t[x[jvj+109]];
goto l18;
l22:x[jvj+36]=t[x[jvj+36]];
goto l21;
l26:x[jvj+43]=s[x[jvj+111]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+111];
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+43,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=25)) goto l27;
x[jvj+46]=d[20];z[jvj+46]=0;
l28:if((x[jvj+46]<=0)) goto l27;
x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=268; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(268,jvj+47,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+43; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+48,jvj+43,jvj+49)*/
pile[v[22]]=111; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+49,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+50,jvj+51)*/
if((x[jvj+51]!=1273)) goto l29;
pile[v[22]]=102; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+49,jvj+52)*/
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+52,V103)*/
V103=pile[WZ2]; 
I=V103;
pile[v[22]]=jvj+53; pile[WZ1]=I; 
(*f[978])( );     /*PLUB3(jvj+53,I)*/
l29:x[jvj+46]=t[x[jvj+46]];
goto l28;
l27:x[jvj+111]=t[x[jvj+111]];
goto l25;
l31:x[jvj+54]=s[x[jvj+112]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+112];
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=25)) goto l32;
x[jvj+57]=d[20];z[jvj+57]=0;
l33:if((x[jvj+57]<=0)) goto l32;
x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=268; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+58,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+54; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+59,jvj+54,jvj+60)*/
pile[v[22]]=111; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+60,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+61,jvj+62)*/
if((x[jvj+62]!=1273)) goto l34;
pile[v[22]]=102; pile[WZ1]=jvj+60; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+60,jvj+63)*/
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+63,V124)*/
V124=pile[WZ2]; 
M=V124;
pile[v[22]]=jvj+64; pile[WZ1]=M; 
(*f[207])( );     /*PLUE2(jvj+64,M)*/
l34:x[jvj+57]=t[x[jvj+57]];
goto l33;
l32:x[jvj+112]=t[x[jvj+112]];
goto l30;
l36:x[jvj+65]=s[x[jvj+102]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+102];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(jvj+65,jvj+66)*/
pile[v[22]]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+67,jvj+66)*/
x[jvj+102]=t[x[jvj+102]];
goto l35;
l38:x[jvj+68]=s[x[jvj+32]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+32];
pile[v[22]]=111; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+68,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=25)) goto l39;
x[jvj+71]=d[20];z[jvj+71]=0;
l40:if((x[jvj+71]<=0)) goto l39;
x[jvj+72]=s[x[jvj+71]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+71];
pile[v[22]]=268; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(268,jvj+72,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+68; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+73,jvj+68,jvj+74)*/
pile[v[22]]=111; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+74,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+76]!=1273)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+74; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+74,jvj+77)*/
pile[v[22]]=130; pile[WZ1]=jvj+77; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+77,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=jvj+72; pile[WZ1]=jvj+68; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+72,jvj+68,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; 
(*f[255])( );     /*COPEXP0(jvj+78,jvj+79)*/
K=V146;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+86)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+87; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+87)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+86; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+86,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=107; pile[WZ2]=jvj+87; 
(*f[36])( );     /*PLUSC0(jvj+81,107,jvj+87)*/
pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+81,107,jvj+79)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; 
(*f[68])( );     /*PLUE0(jvj+80,jvj+81)*/
l41:x[jvj+71]=t[x[jvj+71]];
goto l40;
l39:x[jvj+32]=t[x[jvj+32]];
goto l37;
l44:x[jvj+104]=s[x[jvj+113]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+113];
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[760])( );     /*MEMEX0(jvj+103,jvj+104,jvj+105)*/
if((x[jvj+105]==135)) goto l24;
x[jvj+113]=t[x[jvj+113]];
goto l43;
}
