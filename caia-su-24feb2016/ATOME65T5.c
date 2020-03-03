#include "dx.h"
void ATOME65T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V20=0,V19=0,V26=0,V29=0,V8=0,V23=0,V24=0,V22=0,V72=0,V43=0,V54=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=65;
x[jvj+1]=20065;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3302&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+19; 
(*f[1948])( );if(v[102]) goto l23;     /*FNDOND0(498,D,jvj+19)*/
pile[v[22]]=365; pile[WZ2]=jvj+20; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+20)*/
for(i=x[jvj+20],V8=0;i>0;i=t[i],V8++)  ;
if((V8!=2)) goto l23;
x[jvj+21]=vo[16];z[jvj+21]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[1948])( );if(v[102]) goto l23;     /*FNDOND0(498,jvj+21,jvj+22)*/
pile[v[22]]=1182; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1182,jvj+22,jvj+23)*/
if((68!=x[jvj+23])) goto l23;
pile[v[22]]=164; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l23;     /*FNDCND0(164,D,V20)*/
V20=pile[WZ2]; 
x[jvj+61]=x[jvj+20] ;z[jvj+61]=z[jvj+20];
l3:if((x[jvj+61]<=0)) goto l23;
x[jvj+8]=s[x[jvj+61]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+61];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+8,V19)*/
V19=pile[WZ2]; 
if((V19!=V20)) goto l4;
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+8,V23)*/
V23=pile[WZ2]; 
l5:if((x[jvj+20]<=0)) goto l23;
x[jvj+24]=s[x[jvj+20]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+20];
if((x[jvj+24]!=x[jvj+8])) goto l13;
x[jvj+20]=t[x[jvj+20]];
goto l5;
l1:pile[v[22]]=921; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(921,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[D]) goto l21;
l2:pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l19;     /*FNDCND0(688,jvj+7,V16)*/
V16=pile[WZ2]; 
if((V16==1)) goto l21;
l19:x[jvj+64]=t[x[jvj+64]];
l18:if((x[jvj+64]<=0)) goto l17;
x[jvj+41]=s[x[jvj+64]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+64];
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=484)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+41,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+43,jvj+44)*/
if(x[jvj+44]!=96&&x[jvj+44]!=89&&x[jvj+44]!=41&&x[jvj+44]!=20&&x[jvj+44]!=128&&x[jvj+44]!=570&&x[jvj+44]!=1317) goto l19;
x[jvj+45]=x[jvj+41] ;z[jvj+45]=z[jvj+41];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[200])( );if(v[102]) goto l19;     /*NDD0(jvj+45,jvj+46)*/
x[jvj+5]=x[jvj+46] ;z[jvj+5]=z[jvj+46];
if((x[jvj+5]==x[D])) goto l19;
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+47; 
(*f[1948])( );if(v[102]) goto l19;     /*FNDOND0(498,jvj+5,jvj+47)*/
if((x[jvj+19]!=x[jvj+47])) goto l19;
pile[v[22]]=365; pile[WZ2]=jvj+11; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+11)*/
x[jvj+63]=x[jvj+11] ;z[jvj+63]=z[jvj+11];
l8:if((x[jvj+63]<=0)) goto l19;
x[jvj+12]=s[x[jvj+63]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+63];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+12,V29)*/
V29=pile[WZ2]; 
if((V29!=V24)) goto l9;
pile[v[22]]=921; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(921,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[D]) goto l1;
goto l2;
l4:x[jvj+61]=t[x[jvj+61]];
goto l3;
l7:x[jvj+62]=t[x[jvj+62]];
l6:if((x[jvj+62]<=0)) goto l17;
x[jvj+10]=s[x[jvj+62]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+62];
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+10,V26)*/
V26=pile[WZ2]; 
if((V26!=V23)) goto l7;
x[jvj+64]=x[jvj+35] ;z[jvj+64]=z[jvj+35];
goto l18;
l9:x[jvj+63]=t[x[jvj+63]];
goto l8;
l12:pile[v[22]]=jvj+18; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+13)*/
l11:x[jvj+17]=t[x[jvj+17]];
l10:if((x[jvj+17]<=0)) goto l14;
x[jvj+13]=s[x[jvj+17]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+17];
pile[v[22]]=1417; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1417,jvj+13,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==195) goto l12;
pile[v[22]]=1545; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1545,jvj+15,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==195) goto l12;
goto l11;
l13:pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+24,V24)*/
V24=pile[WZ2]; 
V22=V23-V24;
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(642,jvj+15,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=242; pile[WZ1]=jvj+21; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(242,jvj+21,jvj+25)*/
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+17; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+17)*/
goto l10;
l15:x[jvj+18]=t[x[jvj+18]];
l14:if((x[jvj+18]<=0)) goto l23;
x[jvj+26]=s[x[jvj+18]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+18];
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=25)) goto l15;
x[jvj+29]=d[20];z[jvj+29]=0;
l16:if((x[jvj+29]<=0)) goto l15;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=268; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+30,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+26; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+31,jvj+26,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=485)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+35)*/
for(i=x[jvj+35],V43=0;i>0;i=t[i],V43++)  ;
if((V43!=2)) goto l17;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+26; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+30,jvj+26,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=484)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+36,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+38,jvj+39)*/
if(x[jvj+39]!=96&&x[jvj+39]!=89&&x[jvj+39]!=41&&x[jvj+39]!=20&&x[jvj+39]!=128&&x[jvj+39]!=570&&x[jvj+39]!=1317) goto l17;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+40; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+36,jvj+40)*/
x[jvj+3]=x[jvj+40] ;z[jvj+3]=z[jvj+40];
if((x[jvj+3]==x[D])) goto l17;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l17;     /*FNDOND0(498,jvj+3,jvj+7)*/
if((x[jvj+19]!=x[jvj+7])) goto l17;
pile[v[22]]=365; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+9)*/
x[jvj+62]=x[jvj+9] ;z[jvj+62]=z[jvj+9];
goto l6;
l17:x[jvj+29]=t[x[jvj+29]];
goto l16;
l21:x[jvj+65]=x[jvj+35] ;z[jvj+65]=z[jvj+35];
l20:if((x[jvj+65]<=0)) goto l19;
x[jvj+48]=s[x[jvj+65]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+65];
if((x[jvj+41]==x[jvj+48])) goto l22;
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+48,V54)*/
V54=pile[WZ2]; 
if((V22!=V54)) goto l22;
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(101,jvj+26,110,(-601),jvj+54)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+55)*/
pile[v[22]]=V72; pile[WZ1]=858; pile[WZ2]=jvj+51; 
(*f[46])( );     /*TRI0(V72,858,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+52; 
(*f[189])( );     /*TRI4(jvj+51,v[13],642,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=3302; pile[WZ2]=246; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,3302,246,jvj+53)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+53; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+53,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=159; pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+49,159,jvj+54)*/
pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+49,159,jvj+55)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; pile[WZ3]=jvj+49; 
(*f[1569])( );     /*DELIER0(365,jvj+3,jvj+10,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(101,jvj+26,110,(-601),jvj+59)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+60)*/
pile[v[22]]=V72; pile[WZ1]=858; pile[WZ2]=jvj+56; 
(*f[46])( );     /*TRI0(V72,858,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+57; 
(*f[189])( );     /*TRI4(jvj+56,v[13],642,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=3302; pile[WZ2]=246; pile[WZ3]=jvj+58; 
(*f[189])( );     /*TRI4(jvj+57,3302,246,jvj+58)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+58; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+58,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=159; pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+50,159,jvj+59)*/
pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+50,159,jvj+60)*/
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; pile[WZ3]=jvj+50; 
(*f[1569])( );     /*DELIER0(365,jvj+5,jvj+12,jvj+50)*/
l22:x[jvj+65]=t[x[jvj+65]];
goto l20;
l23:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
