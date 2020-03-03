#include "dx.h"
void ATOME74T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V6=0,V19=0,V26=0,J=0,V66=0,II=0,V103=0,I=0,V124=0,M=0,V146=0,K=0,V154=0,V47=0,V49=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=112;
x[jvj+1]=20074;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3059&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+81]=vo[14];z[jvj+81]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(642,jvj+81,V154)*/
V154=pile[WZ2]; 
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[1969])( );     /*FNDEND0(509,jvj+18,jvj+19)*/
l13:if((x[jvj+19]>0)) goto l14;
x[jvj+52]=0 ;z[jvj+52]=0;
x[jvj+110]=x[jvj+31] ;z[jvj+110]=z[jvj+31];
l25:if((x[jvj+110]>0)) goto l26;
for(i=x[jvj+52],V47=0;i>0;i=t[i],V47++)  ;
if((V47<=1)) goto l42;
x[jvj+63]=0 ;z[jvj+63]=0;
x[jvj+111]=x[jvj+31] ;z[jvj+111]=z[jvj+31];
l30:if((x[jvj+111]>0)) goto l31;
for(i=x[jvj+63],V49=0;i>0;i=t[i],V49++)  ;
if((V47!=V49)) goto l42;
x[jvj+101]=0 ;z[jvj+101]=0;
x[jvj+108]=x[jvj+31] ;z[jvj+108]=z[jvj+31];
l18:if((x[jvj+108]>0)) goto l19;
x[jvj+107]=x[jvj+101] ;z[jvj+107]=z[jvj+101];
l8:if((x[jvj+107]>0)) goto l9;
x[jvj+66]=0 ;z[jvj+66]=0;
l35:if((x[jvj+101]>0)) goto l36;
x[jvj+79]=0 ;z[jvj+79]=0;
l37:if((x[jvj+31]>0)) goto l38;
pile[v[22]]=jvj+79; pile[WZ1]=jvj+82; 
(*f[299])( );     /*COPEL0(jvj+79,jvj+82)*/
pile[v[22]]=V154; pile[WZ1]=858; pile[WZ2]=jvj+87; 
(*f[46])( );     /*TRI0(V154,858,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+88; 
(*f[189])( );     /*TRI4(jvj+87,v[13],642,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=3059; pile[WZ2]=246; pile[WZ3]=jvj+89; 
(*f[189])( );     /*TRI4(jvj+88,3059,246,jvj+89)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20074; pile[WZ4]=jvj+89; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(158,1,218,20074,jvj+89,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+90)*/
pile[WZ3]=485; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+66; pile[WZ2]=107; pile[WZ3]=jvj+97; 
(*f[301])( );     /*TRI11(jvj+96,jvj+66,107,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+97,22,100,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=111; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,111,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+82; pile[WZ2]=107; pile[WZ3]=jvj+100; 
(*f[301])( );     /*TRI11(jvj+99,jvj+82,107,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+92; 
(*f[58])( );     /*TRI3(jvj+100,22,100,jvj+92)*/
pile[v[22]]=jvj+90; pile[WZ1]=111; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+90,111,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; pile[WZ2]=103; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+91,jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+93,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+83; 
(*f[1296])( );     /*NOUVCONTR0(jvj+84,jvj+83)*/
l42:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+105]=x[jvj+31] ;z[jvj+105]=z[jvj+31];
l1:if((x[jvj+105]<=0)) goto l42;
x[jvj+2]=s[x[jvj+105]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+105];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l3;
x[jvj+5]=d[20];z[jvj+5]=0;
l4:if((x[jvj+5]<=0)) goto l3;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+6,jvj+2,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=1273)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+10,V38)*/
V38=pile[WZ2]; 
if((J!=V38)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+11)*/
if((x[jvj+11]<=0)) goto l5;
V6=s[x[jvj+11]];
l12:x[jvj+16]=t[x[jvj+16]];
l11:if((x[jvj+16]<=0)) goto l10;
J=s[x[jvj+16]];
if((J==0)) goto l12;
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==J) goto l2;
goto l42;
l3:x[jvj+105]=t[x[jvj+105]];
goto l1;
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
l9:x[jvj+14]=s[x[jvj+107]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+107];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+17; 
(*f[887])( );     /*VARND0(jvj+14,jvj+17)*/
for(i=x[jvj+17],V26=0;i>0;i=t[i],V26++)  ;
if((V26!=1)) goto l10;
if((x[jvj+17]<=0)) goto l10;
x[jvj+12]=s[x[jvj+17]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+17];
x[jvj+16]=0 ;z[jvj+16]=0;
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1969])( );     /*FNDEND0(365,jvj+12,jvj+13)*/
x[jvj+106]=x[jvj+13] ;z[jvj+106]=z[jvj+13];
l6:if((x[jvj+106]<=0)) goto l11;
x[jvj+15]=s[x[jvj+106]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+106];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[1738])( );if(v[102]) goto l7;     /*EVLM0(jvj+14,jvj+12,jvj+15,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=jvj+16; pile[WZ1]=V19; 
(*f[207])( );     /*PLUE2(jvj+16,V19)*/
l7:x[jvj+106]=t[x[jvj+106]];
goto l6;
l10:x[jvj+107]=t[x[jvj+107]];
goto l8;
l14:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=25)) goto l15;
pile[v[22]]=1070; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1070,jvj+20,jvj+23)*/
if((x[jvj+23]!=68)) goto l15;
x[jvj+24]=d[20];z[jvj+24]=0;
l16:if((x[jvj+24]<=0)) goto l15;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=268; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+25,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+20; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+26,jvj+20,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=1273)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+27,jvj+30)*/
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+30,V66)*/
V66=pile[WZ2]; 
II=V66;
if((II==0)) goto l17;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+20)*/
l17:x[jvj+24]=t[x[jvj+24]];
goto l16;
l15:x[jvj+19]=t[x[jvj+19]];
goto l13;
l19:x[jvj+32]=s[x[jvj+108]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+108];
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=25)) goto l20;
x[jvj+35]=d[20];z[jvj+35]=0;
l21:if((x[jvj+35]<=0)) goto l20;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=268; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+36,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+32; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+37,jvj+32,jvj+38)*/
pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+38,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=1273)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+41)*/
x[jvj+109]=x[jvj+41] ;z[jvj+109]=z[jvj+41];
l23:if((x[jvj+109]<=0)) goto l22;
x[jvj+102]=s[x[jvj+109]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+109];
x[jvj+112]=x[jvj+101] ;z[jvj+112]=z[jvj+101];
l43:if((x[jvj+112]>0)) goto l44;
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; 
(*f[68])( );     /*PLUE0(jvj+101,jvj+102)*/
l24:x[jvj+109]=t[x[jvj+109]];
goto l23;
l20:x[jvj+108]=t[x[jvj+108]];
goto l18;
l22:x[jvj+35]=t[x[jvj+35]];
goto l21;
l26:x[jvj+42]=s[x[jvj+110]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+110];
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+42,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+44]!=25)) goto l27;
x[jvj+45]=d[20];z[jvj+45]=0;
l28:if((x[jvj+45]<=0)) goto l27;
x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=268; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(268,jvj+46,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+42; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+47,jvj+42,jvj+48)*/
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=1273)) goto l29;
pile[v[22]]=102; pile[WZ1]=jvj+48; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+48,jvj+51)*/
pile[v[22]]=130; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+51,V103)*/
V103=pile[WZ2]; 
I=V103;
pile[v[22]]=jvj+52; pile[WZ1]=I; 
(*f[978])( );     /*PLUB3(jvj+52,I)*/
l29:x[jvj+45]=t[x[jvj+45]];
goto l28;
l27:x[jvj+110]=t[x[jvj+110]];
goto l25;
l31:x[jvj+53]=s[x[jvj+111]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+111];
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=25)) goto l32;
x[jvj+56]=d[20];z[jvj+56]=0;
l33:if((x[jvj+56]<=0)) goto l32;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=268; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+57,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+53; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+58,jvj+53,jvj+59)*/
pile[v[22]]=111; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+59,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+60,jvj+61)*/
if((x[jvj+61]!=1273)) goto l34;
pile[v[22]]=102; pile[WZ1]=jvj+59; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+59,jvj+62)*/
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+62,V124)*/
V124=pile[WZ2]; 
M=V124;
pile[v[22]]=jvj+63; pile[WZ1]=M; 
(*f[207])( );     /*PLUE2(jvj+63,M)*/
l34:x[jvj+56]=t[x[jvj+56]];
goto l33;
l32:x[jvj+111]=t[x[jvj+111]];
goto l30;
l36:x[jvj+64]=s[x[jvj+101]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+101];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[255])( );     /*COPEXP0(jvj+64,jvj+65)*/
pile[v[22]]=jvj+66; 
(*f[68])( );     /*PLUE0(jvj+66,jvj+65)*/
x[jvj+101]=t[x[jvj+101]];
goto l35;
l38:x[jvj+67]=s[x[jvj+31]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+31];
pile[v[22]]=111; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+67,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]!=25)) goto l39;
x[jvj+70]=d[20];z[jvj+70]=0;
l40:if((x[jvj+70]<=0)) goto l39;
x[jvj+71]=s[x[jvj+70]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+70];
pile[v[22]]=268; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(268,jvj+71,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+67; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+72,jvj+67,jvj+73)*/
pile[v[22]]=111; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+73,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]!=1273)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+73; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+73,jvj+76)*/
pile[v[22]]=130; pile[WZ1]=jvj+76; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+76,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=jvj+71; pile[WZ1]=jvj+67; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+71,jvj+67,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; 
(*f[255])( );     /*COPEXP0(jvj+77,jvj+78)*/
K=V146;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+85)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+86; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+86)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+85; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+85,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=107; pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+80,107,jvj+86)*/
pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+80,107,jvj+78)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[68])( );     /*PLUE0(jvj+79,jvj+80)*/
l41:x[jvj+70]=t[x[jvj+70]];
goto l40;
l39:x[jvj+31]=t[x[jvj+31]];
goto l37;
l44:x[jvj+103]=s[x[jvj+112]] ;z[jvj+103]=(x[jvj+103]<=sepcte) ? x[jvj+103] : z[jvj+112];
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[760])( );     /*MEMEX0(jvj+102,jvj+103,jvj+104)*/
if((x[jvj+104]==135)) goto l24;
x[jvj+112]=t[x[jvj+112]];
goto l43;
}
