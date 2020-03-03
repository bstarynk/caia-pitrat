#include "dx.h"
void ATOME104T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V77=0,V23=0,VV=0,V79=0,V72=0,V31=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=81;
x[jvj+1]=20104;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3613&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,R,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=25)) goto l27;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(870,R,V31)*/
V31=pile[WZ2]; 
if((V31!=2)) goto l27;
pile[v[22]]=869; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(869,R,jvj+60)*/
if((x[jvj+60]!=769)) goto l27;
x[jvj+61]=d[20];z[jvj+61]=0;
l24:if((x[jvj+61]<=0)) goto l27;
x[jvj+62]=s[x[jvj+61]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+61];
pile[v[22]]=jvj+62; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+62,R,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+20,jvj+63)*/
if((x[jvj+63]!=484)) goto l25;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+64; 
(*f[200])( );if(v[102]) goto l25;     /*NDD0(jvj+20,jvj+64)*/
x[jvj+48]=x[jvj+64] ;z[jvj+48]=z[jvj+64];
pile[v[22]]=498; pile[WZ1]=jvj+48; pile[WZ2]=jvj+65; 
(*f[1948])( );if(v[102]) goto l25;     /*FNDOND0(498,jvj+48,jvj+65)*/
x[jvj+6]=x[jvj+65] ;z[jvj+6]=z[jvj+65];
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
x[jvj+79]=x[jvj+10] ;z[jvj+79]=z[jvj+10];
l4:if((x[jvj+79]<=0)) goto l3;
x[jvj+11]=s[x[jvj+79]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+79];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==923)) goto l25;
l5:x[jvj+79]=t[x[jvj+79]];
goto l4;
l2:V=s[V77];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l25;
V77=t[V77];
l1:if((V77>0)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+67; 
(*f[887])( );     /*VARND0(jvj+4,jvj+67)*/
for(a=x[jvj+67];a>0;a=t[a]) if(s[a]==x[jvj+48]) goto l25;
x[jvj+47]=vo[14];z[jvj+47]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(642,jvj+47,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[1969])( );     /*FNDEND0(509,jvj+48,jvj+49)*/
x[jvj+81]=x[jvj+49] ;z[jvj+81]=z[jvj+49];
l21:if((x[jvj+81]<=0)) goto l23;
x[jvj+15]=s[x[jvj+81]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+81];
if((x[jvj+15]==x[R])) goto l22;
pile[v[22]]=1300; pile[WZ1]=jvj+15; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1300,jvj+15,jvj+50)*/
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==1280) goto l22;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1071,jvj+13,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(jvj+15,jvj+16)*/
V79=x[jvj+14];
l6:if((V79>0)) goto l7;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+20; pile[WZ2]=jvj+4; pile[WZ3]=jvj+46; pile[WZ4]=jvj+51; 
(*f[3130])( );if(v[102]) goto l22;     /*SUBSTITUVAR1(jvj+15,jvj+20,jvj+4,jvj+46,jvj+51)*/
if((x[jvj+51]==135)) goto l8;
l22:x[jvj+81]=t[x[jvj+81]];
goto l21;
l3:pile[v[22]]=688; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l26;     /*FNDCND0(688,jvj+6,V23)*/
V23=pile[WZ2]; 
if((V23==1)) goto l25;
l26:pile[v[22]]=268; pile[WZ1]=jvj+62; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(268,jvj+62,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+66,R,jvj+4)*/
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1071,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V77=x[jvj+3];
goto l1;
l7:VV=s[V79];
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==VV) goto l22;
V79=t[V79];
goto l6;
l8:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+15,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=408)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+15,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[760])( );     /*MEMEX0(jvj+20,jvj+19,jvj+21)*/
if((x[jvj+21]==135)) goto l22;
l9:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+15,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=408)) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+15,jvj+24)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[760])( );     /*MEMEX0(jvj+20,jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l22;
l10:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+15,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=625)) goto l13;
x[jvj+28]=d[20];z[jvj+28]=0;
l11:if((x[jvj+28]<=0)) goto l13;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+15; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+29,jvj+15,jvj+30)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[760])( );     /*MEMEX0(jvj+20,jvj+30,jvj+31)*/
if((x[jvj+31]==135)) goto l22;
l12:x[jvj+28]=t[x[jvj+28]];
goto l11;
l13:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+15,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=55)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+34)*/
x[jvj+80]=x[jvj+34] ;z[jvj+80]=z[jvj+34];
l14:if((x[jvj+80]<=0)) goto l20;
x[jvj+35]=s[x[jvj+80]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+80];
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=625)) goto l15;
x[jvj+38]=d[20];z[jvj+38]=0;
l16:if((x[jvj+38]<=0)) goto l15;
x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+35; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+39,jvj+35,jvj+40)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[760])( );     /*MEMEX0(jvj+20,jvj+40,jvj+41)*/
if((x[jvj+41]==135)) goto l22;
l17:x[jvj+38]=t[x[jvj+38]];
goto l16;
l15:x[jvj+80]=t[x[jvj+80]];
goto l14;
l20:pile[v[22]]=1070; pile[WZ1]=jvj+15; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1070,jvj+15,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+46,1070,jvj+45)*/
l18:for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==770) goto l28;
pile[v[22]]=868; pile[WZ1]=jvj+15; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(868,jvj+15,jvj+42)*/
if((x[jvj+42]==625)) goto l19;
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==596) goto l28;
l19:pile[v[22]]=1294; pile[WZ1]=jvj+15; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1294,jvj+15,jvj+43)*/
for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==1340) goto l28;
for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==1327) goto l28;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+72)*/
pile[v[22]]=V72; pile[WZ1]=858; pile[WZ2]=jvj+68; 
(*f[46])( );     /*TRI0(V72,858,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+69; 
(*f[189])( );     /*TRI4(jvj+68,v[13],642,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=3613; pile[WZ2]=246; pile[WZ3]=jvj+70; 
(*f[189])( );     /*TRI4(jvj+69,3613,246,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=20104; pile[WZ2]=218; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+70,20104,218,jvj+71)*/
pile[v[22]]=jvj+72; pile[WZ1]=(-20); pile[WZ2]=jvj+71; pile[WZ3]=159; pile[WZ4]=jvj+73; 
(*f[298])( );     /*TRIENS1(jvj+72,(-20),jvj+71,159,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+73,1,158,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+15; 
(*f[966])( );     /*ELIMINE0(jvj+44,jvj+15)*/
l28:pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+77; 
(*f[270])( );     /*QUADRI7(101,jvj+15,110,(-608),jvj+77)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+78; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+78)*/
pile[v[22]]=V72; pile[WZ1]=858; pile[WZ2]=jvj+74; 
(*f[46])( );     /*TRI0(V72,858,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+75; 
(*f[189])( );     /*TRI4(jvj+74,v[13],642,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=3613; pile[WZ2]=246; pile[WZ3]=jvj+76; 
(*f[189])( );     /*TRI4(jvj+75,3613,246,jvj+76)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20104; pile[WZ4]=jvj+76; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(158,1,218,20104,jvj+76,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=159; pile[WZ2]=jvj+77; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+77)*/
pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+78)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+52; 
(*f[1296])( );     /*NOUVCONTR0(jvj+46,jvj+52)*/
pile[v[22]]=R; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1070,68)*/
goto l22;
l23:pile[v[22]]=jvj+20; pile[WZ1]=jvj+53; 
(*f[200])( );if(v[102]) goto l25;     /*NDD0(jvj+20,jvj+53)*/
x[jvj+54]=x[jvj+53] ;z[jvj+54]=z[jvj+53];
pile[v[22]]=498; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[1948])( );if(v[102]) goto l25;     /*FNDOND0(498,jvj+54,jvj+55)*/
pile[v[22]]=1348; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1348,jvj+55,jvj+56)*/
if((x[jvj+56]!=68)) goto l25;
x[jvj+57]=vo[16];z[jvj+57]=vz[16];
pile[v[22]]=jvj+57; pile[WZ1]=1071; pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+57,1071,jvj+54)*/
l25:x[jvj+61]=t[x[jvj+61]];
goto l24;
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
