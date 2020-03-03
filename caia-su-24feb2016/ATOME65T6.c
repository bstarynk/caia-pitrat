#include "dx.h"
void ATOME65T6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V21=0,V20=0,V27=0,V30=0,V69=0,V44=0,V55=0,K=0,V9=0,V24=0,V25=0,V23=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=65;
x[jvj+1]=20065;z[jvj+1]=(-100);
x[jvj+2]=6;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3332&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,R,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=25)) goto l21;
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1948])( );if(v[102]) goto l21;     /*FNDOND0(498,jvj+19,jvj+20)*/
pile[v[22]]=1182; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1182,jvj+20,jvj+21)*/
if((68!=x[jvj+21])) goto l21;
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+22,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=242; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(242,jvj+19,jvj+23)*/
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=R; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(R,jvj+14)*/
l10:if((x[jvj+14]>0)) goto l11;
x[jvj+24]=d[20];z[jvj+24]=0;
l12:if((x[jvj+24]<=0)) goto l21;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=268; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+25,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+26,R,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=485)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+30)*/
for(i=x[jvj+30],V44=0;i>0;i=t[i],V44++)  ;
if((V44!=2)) goto l13;
pile[v[22]]=jvj+25; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+25,R,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=484)) goto l13;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+31,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+33,jvj+34)*/
if(x[jvj+34]!=96&&x[jvj+34]!=89&&x[jvj+34]!=41&&x[jvj+34]!=20&&x[jvj+34]!=128&&x[jvj+34]!=570&&x[jvj+34]!=1317) goto l13;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+35; 
(*f[200])( );if(v[102]) goto l13;     /*NDD0(jvj+31,jvj+35)*/
x[jvj+3]=x[jvj+35] ;z[jvj+3]=z[jvj+35];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,jvj+3,jvj+7)*/
x[jvj+63]=x[jvj+30] ;z[jvj+63]=z[jvj+30];
l14:if((x[jvj+63]<=0)) goto l13;
x[jvj+36]=s[x[jvj+63]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+63];
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=484)) goto l15;
pile[v[22]]=102; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+36,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+38,jvj+39)*/
if(x[jvj+39]!=96&&x[jvj+39]!=89&&x[jvj+39]!=41&&x[jvj+39]!=20&&x[jvj+39]!=128&&x[jvj+39]!=570&&x[jvj+39]!=1317) goto l15;
x[jvj+40]=x[jvj+36] ;z[jvj+40]=z[jvj+36];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+40,jvj+41)*/
x[jvj+5]=x[jvj+41] ;z[jvj+5]=z[jvj+41];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+42; 
(*f[1948])( );if(v[102]) goto l15;     /*FNDOND0(498,jvj+5,jvj+42)*/
x[jvj+64]=x[jvj+30] ;z[jvj+64]=z[jvj+30];
l16:if((x[jvj+64]<=0)) goto l15;
x[jvj+43]=s[x[jvj+64]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+64];
if((x[jvj+36]==x[jvj+43])) goto l17;
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+43,V55)*/
V55=pile[WZ2]; 
K=V55;
x[jvj+65]=x[jvj+15] ;z[jvj+65]=z[jvj+15];
l18:if((x[jvj+65]<=0)) goto l17;
x[jvj+8]=s[x[jvj+65]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+65];
if((x[jvj+3]==x[jvj+8])) goto l19;
if((x[jvj+5]==x[jvj+8])) goto l19;
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+44; 
(*f[1948])( );if(v[102]) goto l19;     /*FNDOND0(498,jvj+8,jvj+44)*/
if((x[jvj+44]!=x[jvj+42])) goto l19;
pile[v[22]]=365; pile[WZ2]=jvj+45; 
(*f[1969])( );     /*FNDEND0(365,jvj+8,jvj+45)*/
for(i=x[jvj+45],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=2)) goto l19;
if((x[jvj+44]!=x[jvj+7])) goto l19;
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l19;     /*FNDCND0(164,jvj+8,V21)*/
V21=pile[WZ2]; 
x[jvj+59]=x[jvj+45] ;z[jvj+59]=z[jvj+45];
l3:if((x[jvj+59]<=0)) goto l19;
x[jvj+9]=s[x[jvj+59]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+59];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+9,V20)*/
V20=pile[WZ2]; 
if((V20!=V21)) goto l4;
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+9,V24)*/
V24=pile[WZ2]; 
x[jvj+60]=x[jvj+45] ;z[jvj+60]=z[jvj+45];
l5:if((x[jvj+60]<=0)) goto l19;
x[jvj+46]=s[x[jvj+60]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+60];
if((x[jvj+46]!=x[jvj+9])) goto l20;
x[jvj+60]=t[x[jvj+60]];
goto l5;
l1:pile[v[22]]=921; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(921,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l22;
l2:pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l19;     /*FNDCND0(688,jvj+7,V17)*/
V17=pile[WZ2]; 
if((V17==1)) goto l22;
l19:x[jvj+65]=t[x[jvj+65]];
goto l18;
l4:x[jvj+59]=t[x[jvj+59]];
goto l3;
l7:x[jvj+61]=t[x[jvj+61]];
l6:if((x[jvj+61]<=0)) goto l19;
x[jvj+11]=s[x[jvj+61]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+61];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+11,V27)*/
V27=pile[WZ2]; 
if((V27!=V24)) goto l7;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+12)*/
x[jvj+62]=x[jvj+12] ;z[jvj+62]=z[jvj+12];
l8:if((x[jvj+62]<=0)) goto l19;
x[jvj+13]=s[x[jvj+62]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+62];
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+13,V30)*/
V30=pile[WZ2]; 
if((V30!=V25)) goto l9;
pile[v[22]]=921; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(921,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l1;
goto l2;
l9:x[jvj+62]=t[x[jvj+62]];
goto l8;
l11:x[jvj+16]=s[x[jvj+14]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
x[jvj+14]=t[x[jvj+14]];
goto l10;
l13:x[jvj+24]=t[x[jvj+24]];
goto l12;
l15:x[jvj+63]=t[x[jvj+63]];
goto l14;
l17:x[jvj+64]=t[x[jvj+64]];
goto l16;
l20:pile[v[22]]=130; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+46,V25)*/
V25=pile[WZ2]; 
V23=V24-V25;
if((V23!=K)) goto l19;
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+10)*/
x[jvj+61]=x[jvj+10] ;z[jvj+61]=z[jvj+10];
goto l6;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l22:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+52)*/
pile[WZ1]=jvj+8; pile[WZ3]=(-656); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(101,jvj+8,110,(-656),jvj+53)*/
pile[v[22]]=V69; pile[WZ1]=858; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(V69,858,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+49,v[13],642,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=3332; pile[WZ2]=246; pile[WZ3]=jvj+51; 
(*f[189])( );     /*TRI4(jvj+50,3332,246,jvj+51)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+51; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+51,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=159; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+47,159,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+47,159,jvj+53)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; pile[WZ3]=jvj+47; 
(*f[1569])( );     /*DELIER0(365,jvj+3,jvj+11,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+57)*/
pile[WZ1]=jvj+8; pile[WZ3]=(-656); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,jvj+8,110,(-656),jvj+58)*/
pile[v[22]]=V69; pile[WZ1]=858; pile[WZ2]=jvj+54; 
(*f[46])( );     /*TRI0(V69,858,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,v[13],642,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=3332; pile[WZ2]=246; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,3332,246,jvj+56)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+56; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+56,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=159; pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+58)*/
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; pile[WZ3]=jvj+48; 
(*f[1569])( );     /*DELIER0(365,jvj+5,jvj+13,jvj+48)*/
goto l19;
}
