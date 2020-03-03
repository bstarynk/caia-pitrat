#include "dx.h"
void ATOME65T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V21=0,V20=0,V27=0,V30=0,V72=0,V9=0,V24=0,V25=0,V23=0,V76=0,V44=0,V55=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=69;
x[jvj+1]=20065;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3210&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+22; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+22)*/
for(i=x[jvj+22],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=2)) goto l24;
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[1948])( );if(v[102]) goto l24;     /*FNDOND0(498,jvj+23,jvj+24)*/
pile[v[22]]=1182; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1182,jvj+24,jvj+25)*/
if((68!=x[jvj+25])) goto l24;
pile[v[22]]=164; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l24;     /*FNDCND0(164,D,V21)*/
V21=pile[WZ2]; 
x[jvj+64]=x[jvj+22] ;z[jvj+64]=z[jvj+22];
l3:if((x[jvj+64]<=0)) goto l24;
x[jvj+8]=s[x[jvj+64]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+64];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+8,V20)*/
V20=pile[WZ2]; 
if((V20!=V21)) goto l4;
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+8,V24)*/
V24=pile[WZ2]; 
l5:if((x[jvj+22]<=0)) goto l24;
x[jvj+26]=s[x[jvj+22]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+22];
if((x[jvj+26]!=x[jvj+8])) goto l14;
x[jvj+22]=t[x[jvj+22]];
goto l5;
l1:pile[v[22]]=921; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(921,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[D]) goto l22;
l2:pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l20;     /*FNDCND0(688,jvj+7,V17)*/
V17=pile[WZ2]; 
if((V17==1)) goto l22;
l20:x[jvj+68]=t[x[jvj+68]];
l19:if((x[jvj+68]<=0)) goto l18;
x[jvj+44]=s[x[jvj+68]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+68];
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=484)) goto l20;
pile[v[22]]=102; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+44,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+46,jvj+47)*/
if(x[jvj+47]!=96&&x[jvj+47]!=89&&x[jvj+47]!=41&&x[jvj+47]!=20&&x[jvj+47]!=128&&x[jvj+47]!=570&&x[jvj+47]!=1317) goto l20;
x[jvj+48]=x[jvj+44] ;z[jvj+48]=z[jvj+44];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[200])( );if(v[102]) goto l20;     /*NDD0(jvj+48,jvj+49)*/
x[jvj+5]=x[jvj+49] ;z[jvj+5]=z[jvj+49];
if((x[jvj+5]==x[D])) goto l20;
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+50; 
(*f[1948])( );if(v[102]) goto l20;     /*FNDOND0(498,jvj+5,jvj+50)*/
if((x[jvj+13]!=x[jvj+50])) goto l20;
pile[v[22]]=365; pile[WZ2]=jvj+11; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+11)*/
x[jvj+66]=x[jvj+11] ;z[jvj+66]=z[jvj+11];
l8:if((x[jvj+66]<=0)) goto l20;
x[jvj+12]=s[x[jvj+66]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+66];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+12,V30)*/
V30=pile[WZ2]; 
if((V30!=V25)) goto l9;
pile[v[22]]=921; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(921,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[D]) goto l1;
goto l2;
l4:x[jvj+64]=t[x[jvj+64]];
goto l3;
l7:x[jvj+65]=t[x[jvj+65]];
l6:if((x[jvj+65]<=0)) goto l18;
x[jvj+10]=s[x[jvj+65]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+65];
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+10,V27)*/
V27=pile[WZ2]; 
if((V27!=V24)) goto l7;
x[jvj+68]=x[jvj+38] ;z[jvj+68]=z[jvj+38];
goto l19;
l9:x[jvj+66]=t[x[jvj+66]];
goto l8;
l12:x[jvj+17]=s[x[jvj+67]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+67];
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=25)) goto l13;
pile[v[22]]=870; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(870,jvj+17,V72)*/
V72=pile[WZ2]; 
if((V72!=2)) goto l13;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+20; 
(*f[887])( );     /*VARND0(jvj+17,jvj+20)*/
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==x[D]) goto l13;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+17)*/
l13:x[jvj+67]=t[x[jvj+67]];
l11:if((x[jvj+67]>0)) goto l12;
x[jvj+14]=t[x[jvj+14]];
l10:if((x[jvj+14]<=0)) goto l15;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=509; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(509,jvj+15,jvj+16)*/
x[jvj+67]=x[jvj+16] ;z[jvj+67]=z[jvj+16];
goto l11;
l14:pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+26,V25)*/
V25=pile[WZ2]; 
V23=V24-V25;
x[jvj+27]=vo[14];z[jvj+27]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+27,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=242; pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(242,jvj+23,jvj+28)*/
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l24;     /*FNDOND0(498,D,jvj+13)*/
x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=480; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(480,jvj+13,jvj+14)*/
goto l10;
l16:x[jvj+21]=t[x[jvj+21]];
l15:if((x[jvj+21]<=0)) goto l24;
x[jvj+29]=s[x[jvj+21]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+21];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=25)) goto l16;
x[jvj+32]=d[20];z[jvj+32]=0;
l17:if((x[jvj+32]<=0)) goto l16;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=268; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(268,jvj+33,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+29; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+34,jvj+29,jvj+35)*/
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=485)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+38)*/
for(i=x[jvj+38],V44=0;i>0;i=t[i],V44++)  ;
if((V44!=2)) goto l18;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+29; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+33,jvj+29,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=484)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+39,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+41,jvj+42)*/
if(x[jvj+42]!=96&&x[jvj+42]!=89&&x[jvj+42]!=41&&x[jvj+42]!=20&&x[jvj+42]!=128&&x[jvj+42]!=570&&x[jvj+42]!=1317) goto l18;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+43; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(jvj+39,jvj+43)*/
x[jvj+3]=x[jvj+43] ;z[jvj+3]=z[jvj+43];
if((x[jvj+3]==x[D])) goto l18;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l18;     /*FNDOND0(498,jvj+3,jvj+7)*/
if((x[jvj+13]!=x[jvj+7])) goto l18;
pile[v[22]]=365; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+9)*/
x[jvj+65]=x[jvj+9] ;z[jvj+65]=z[jvj+9];
goto l6;
l18:x[jvj+32]=t[x[jvj+32]];
goto l17;
l22:x[jvj+69]=x[jvj+38] ;z[jvj+69]=z[jvj+38];
l21:if((x[jvj+69]<=0)) goto l20;
x[jvj+51]=s[x[jvj+69]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+69];
if((x[jvj+44]==x[jvj+51])) goto l23;
pile[v[22]]=130; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+51,V55)*/
V55=pile[WZ2]; 
if((V23!=V55)) goto l23;
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,jvj+29,110,(-601),jvj+57)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+58)*/
pile[v[22]]=V76; pile[WZ1]=858; pile[WZ2]=jvj+54; 
(*f[46])( );     /*TRI0(V76,858,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,v[13],642,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=3210; pile[WZ2]=246; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,3210,246,jvj+56)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+56; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+56,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=159; pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+58)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; pile[WZ3]=jvj+52; 
(*f[1569])( );     /*DELIER0(365,jvj+3,jvj+10,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(101,jvj+29,110,(-601),jvj+62)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+63)*/
pile[v[22]]=V76; pile[WZ1]=858; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(V76,858,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+60; 
(*f[189])( );     /*TRI4(jvj+59,v[13],642,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=3210; pile[WZ2]=246; pile[WZ3]=jvj+61; 
(*f[189])( );     /*TRI4(jvj+60,3210,246,jvj+61)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+61; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+61,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=159; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+53,159,jvj+62)*/
pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+53,159,jvj+63)*/
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; pile[WZ3]=jvj+53; 
(*f[1569])( );     /*DELIER0(365,jvj+5,jvj+12,jvj+53)*/
l23:x[jvj+69]=t[x[jvj+69]];
goto l21;
l24:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
