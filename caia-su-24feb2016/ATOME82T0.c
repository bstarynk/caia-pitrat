#include "dx.h"
void ATOME82T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V57=0,V15=0,VV=0,V59=0,V52=0,V22=0,V27=0,V41=0,K=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=61;
x[jvj+1]=20082;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3151&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=25)) goto l19;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(870,R,V22)*/
V22=pile[WZ2]; 
if((V22!=2)) goto l19;
pile[v[22]]=869; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(869,R,jvj+29)*/
if((x[jvj+29]!=769)) goto l19;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
x[jvj+30]=d[20];z[jvj+30]=0;
l11:if((x[jvj+30]<=0)) goto l19;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=R; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+31,R,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=485)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+35)*/
for(i=x[jvj+35],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=2)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+31,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+36,R,jvj+37)*/
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+37,V41)*/
V41=pile[WZ2]; 
K=V41;
x[jvj+60]=x[jvj+35] ;z[jvj+60]=z[jvj+35];
l13:if((x[jvj+60]<=0)) goto l12;
x[jvj+38]=s[x[jvj+60]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+60];
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=484)) goto l14;
x[jvj+22]=x[jvj+38] ;z[jvj+22]=z[jvj+38];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+40; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+22,jvj+40)*/
x[jvj+19]=x[jvj+40] ;z[jvj+19]=z[jvj+40];
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+41; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+19,jvj+41)*/
x[jvj+6]=x[jvj+41] ;z[jvj+6]=z[jvj+41];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=454)) goto l3;
pile[v[22]]=160; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,jvj+6,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=128)) goto l3;
pile[v[22]]=128; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(128,jvj+8,jvj+10)*/
x[jvj+58]=x[jvj+10] ;z[jvj+58]=z[jvj+10];
l4:if((x[jvj+58]<=0)) goto l3;
x[jvj+11]=s[x[jvj+58]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+58];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==923)) goto l14;
l5:x[jvj+58]=t[x[jvj+58]];
goto l4;
l2:V=s[V57];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l17;
V57=t[V57];
l1:if((V57>0)) goto l2;
x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+18,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1969])( );     /*FNDEND0(509,jvj+19,jvj+20)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+21)*/
x[jvj+59]=x[jvj+20] ;z[jvj+59]=z[jvj+20];
l9:if((x[jvj+59]<=0)) goto l18;
x[jvj+14]=s[x[jvj+59]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+59];
if((x[jvj+14]==x[R])) goto l10;
pile[v[22]]=1071; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1071,jvj+2,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(jvj+14,jvj+15)*/
V59=x[jvj+13];
l6:if((V59>0)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+43)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+46; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+46,jvj+44)*/
pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+44)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; pile[WZ3]=jvj+17; pile[WZ4]=jvj+24; 
(*f[3130])( );if(v[102]) goto l10;     /*SUBSTITUVAR1(jvj+14,jvj+22,jvj+23,jvj+17,jvj+24)*/
if((x[jvj+24]==135)) goto l8;
l10:x[jvj+59]=t[x[jvj+59]];
goto l9;
l3:pile[v[22]]=688; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l16;     /*FNDCND0(688,jvj+6,V15)*/
V15=pile[WZ2]; 
if((V15==1)) goto l14;
l16:x[jvj+61]=x[jvj+35] ;z[jvj+61]=z[jvj+35];
l15:if((x[jvj+61]<=0)) goto l14;
x[jvj+4]=s[x[jvj+61]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+61];
if((x[jvj+38]==x[jvj+4])) goto l17;
pile[v[22]]=1071; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1071,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V57=x[jvj+3];
goto l1;
l7:VV=s[V59];
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==VV) goto l10;
V59=t[V59];
goto l6;
l8:pile[v[22]]=1070; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1070,jvj+14,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+17,1070,jvj+16)*/
l20:pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(101,jvj+14,110,(-608),jvj+50)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+51)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+47; 
(*f[46])( );     /*TRI0(V52,858,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+48; 
(*f[189])( );     /*TRI4(jvj+47,v[13],642,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=3151; pile[WZ2]=246; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,3151,246,jvj+49)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20082; pile[WZ4]=jvj+49; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,1,218,20082,jvj+49,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=159; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+50)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+51)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+25; 
(*f[1296])( );     /*NOUVCONTR0(jvj+17,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+56)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+52; 
(*f[46])( );     /*TRI0(V52,858,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,v[13],642,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=3151; pile[WZ2]=246; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,3151,246,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=20082; pile[WZ2]=218; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+54,20082,218,jvj+55)*/
pile[v[22]]=jvj+56; pile[WZ1]=(-20); pile[WZ2]=jvj+55; pile[WZ3]=159; pile[WZ4]=jvj+57; 
(*f[298])( );     /*TRIENS1(jvj+56,(-20),jvj+55,159,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+57,1,158,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+14; 
(*f[966])( );     /*ELIMINE0(jvj+26,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1070,68)*/
goto l10;
l12:x[jvj+30]=t[x[jvj+30]];
goto l11;
l14:x[jvj+60]=t[x[jvj+60]];
goto l13;
l18:pile[v[22]]=jvj+2; pile[WZ1]=1071; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+2,1071,jvj+40)*/
l17:x[jvj+61]=t[x[jvj+61]];
goto l15;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
