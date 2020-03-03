#include "dx.h"
void ATOME177T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V66=0,V21=0,VV=0,V68=0,V64=0,V28=0,V33=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=73;
x[jvj+1]=20177;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3655&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,R,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=25)) goto l21;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(870,R,V28)*/
V28=pile[WZ2]; 
if((V28!=2)) goto l21;
pile[v[22]]=869; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(869,R,jvj+38)*/
if((x[jvj+38]!=769)) goto l21;
x[jvj+39]=d[20];z[jvj+39]=0;
l14:if((x[jvj+39]<=0)) goto l21;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=jvj+40; pile[WZ1]=R; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+40,R,jvj+41)*/
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]!=485)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+41,jvj+44)*/
for(i=x[jvj+44],V33=0;i>0;i=t[i],V33++)  ;
if((V33!=2)) goto l15;
pile[v[22]]=268; pile[WZ1]=jvj+40; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+40,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=R; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+45,R,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+46,jvj+47)*/
x[jvj+72]=x[jvj+44] ;z[jvj+72]=z[jvj+44];
l16:if((x[jvj+72]<=0)) goto l15;
x[jvj+48]=s[x[jvj+72]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+72];
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]!=484)) goto l17;
x[jvj+20]=x[jvj+48] ;z[jvj+20]=z[jvj+48];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+50; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+20,jvj+50)*/
x[jvj+31]=x[jvj+50] ;z[jvj+31]=z[jvj+50];
pile[v[22]]=498; pile[WZ1]=jvj+31; pile[WZ2]=jvj+51; 
(*f[1948])( );if(v[102]) goto l17;     /*FNDOND0(498,jvj+31,jvj+51)*/
x[jvj+6]=x[jvj+51] ;z[jvj+6]=z[jvj+51];
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
x[jvj+70]=x[jvj+10] ;z[jvj+70]=z[jvj+10];
l4:if((x[jvj+70]<=0)) goto l3;
x[jvj+11]=s[x[jvj+70]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+70];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==923)) goto l17;
l5:x[jvj+70]=t[x[jvj+70]];
goto l4;
l2:V=s[V66];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l20;
V66=t[V66];
l1:if((V66>0)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+54; 
(*f[887])( );     /*VARND0(jvj+4,jvj+54)*/
for(a=x[jvj+54];a>0;a=t[a]) if(s[a]==x[jvj+31]) goto l20;
x[jvj+30]=vo[14];z[jvj+30]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(642,jvj+30,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[1969])( );     /*FNDEND0(509,jvj+31,jvj+32)*/
x[jvj+71]=x[jvj+32] ;z[jvj+71]=z[jvj+32];
l12:if((x[jvj+71]<=0)) goto l20;
x[jvj+15]=s[x[jvj+71]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+71];
if((x[jvj+15]==x[R])) goto l13;
pile[v[22]]=1300; pile[WZ1]=jvj+15; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1300,jvj+15,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==1280) goto l13;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1071,jvj+13,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(jvj+15,jvj+16)*/
V68=x[jvj+14];
l6:if((V68>0)) goto l7;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+20; pile[WZ2]=jvj+4; pile[WZ3]=jvj+29; pile[WZ4]=jvj+34; 
(*f[3130])( );if(v[102]) goto l13;     /*SUBSTITUVAR1(jvj+15,jvj+20,jvj+4,jvj+29,jvj+34)*/
if((x[jvj+34]==135)) goto l8;
l13:x[jvj+71]=t[x[jvj+71]];
goto l12;
l3:pile[v[22]]=688; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l19;     /*FNDCND0(688,jvj+6,V21)*/
V21=pile[WZ2]; 
if((V21==1)) goto l17;
l19:x[jvj+73]=x[jvj+44] ;z[jvj+73]=z[jvj+44];
l18:if((x[jvj+73]<=0)) goto l17;
x[jvj+52]=s[x[jvj+73]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+73];
if((x[jvj+48]==x[jvj+52])) goto l20;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+52,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+55)*/
pile[WZ3]=52; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+69; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+69,jvj+56)*/
pile[WZ2]=111; pile[WZ3]=jvj+55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+55,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=107; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+4,107,jvj+47)*/
pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+4,107,jvj+56)*/
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1071,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V66=x[jvj+3];
goto l1;
l7:VV=s[V68];
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==VV) goto l13;
V68=t[V68];
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
if((x[jvj+21]==135)) goto l13;
l9:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+15,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=408)) goto l11;
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+15,jvj+24)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[760])( );     /*MEMEX0(jvj+20,jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l13;
l11:pile[v[22]]=1070; pile[WZ1]=jvj+15; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1070,jvj+15,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+29,1070,jvj+28)*/
l10:pile[v[22]]=1294; pile[WZ1]=jvj+15; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1294,jvj+15,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==1340) goto l22;
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==1327) goto l22;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+61)*/
pile[v[22]]=V64; pile[WZ1]=858; pile[WZ2]=jvj+57; 
(*f[46])( );     /*TRI0(V64,858,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+58; 
(*f[189])( );     /*TRI4(jvj+57,v[13],642,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=3655; pile[WZ2]=246; pile[WZ3]=jvj+59; 
(*f[189])( );     /*TRI4(jvj+58,3655,246,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=20177; pile[WZ2]=218; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+59,20177,218,jvj+60)*/
pile[v[22]]=jvj+61; pile[WZ1]=(-20); pile[WZ2]=jvj+60; pile[WZ3]=159; pile[WZ4]=jvj+62; 
(*f[298])( );     /*TRIENS1(jvj+61,(-20),jvj+60,159,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+62,1,158,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+15; 
(*f[966])( );     /*ELIMINE0(jvj+27,jvj+15)*/
l22:pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(101,jvj+15,110,(-608),jvj+66)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+67)*/
pile[v[22]]=V64; pile[WZ1]=858; pile[WZ2]=jvj+63; 
(*f[46])( );     /*TRI0(V64,858,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+64; 
(*f[189])( );     /*TRI4(jvj+63,v[13],642,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=3655; pile[WZ2]=246; pile[WZ3]=jvj+65; 
(*f[189])( );     /*TRI4(jvj+64,3655,246,jvj+65)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20177; pile[WZ4]=jvj+65; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(158,1,218,20177,jvj+65,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=159; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+67)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+35; 
(*f[1296])( );     /*NOUVCONTR0(jvj+29,jvj+35)*/
pile[v[22]]=R; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1070,68)*/
goto l13;
l15:x[jvj+39]=t[x[jvj+39]];
goto l14;
l17:x[jvj+72]=t[x[jvj+72]];
goto l16;
l20:x[jvj+73]=t[x[jvj+73]];
goto l18;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
