#include "dx.h"
void ATOME65T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V21=0,V20=0,V27=0,V30=0,V71=0,V73=0,V44=0,V55=0,K=0,V9=0,V24=0,V25=0,V23=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=70;
x[jvj+1]=20065;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3256&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,R,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=25)) goto l24;
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[1948])( );if(v[102]) goto l24;     /*FNDOND0(498,jvj+23,jvj+24)*/
pile[v[22]]=1182; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1182,jvj+24,jvj+25)*/
if((68!=x[jvj+25])) goto l24;
x[jvj+26]=vo[14];z[jvj+26]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+26,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=242; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(242,jvj+23,jvj+27)*/
x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(678,R,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(R,jvj+15)*/
l10:if((x[jvj+14]>0)) goto l11;
x[jvj+28]=d[20];z[jvj+28]=0;
l15:if((x[jvj+28]<=0)) goto l24;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+29,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+30,R,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=485)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+34)*/
for(i=x[jvj+34],V44=0;i>0;i=t[i],V44++)  ;
if((V44!=2)) goto l16;
pile[v[22]]=jvj+29; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+29,R,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=484)) goto l16;
pile[v[22]]=102; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+35,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+37,jvj+38)*/
if(x[jvj+38]!=96&&x[jvj+38]!=89&&x[jvj+38]!=41&&x[jvj+38]!=20&&x[jvj+38]!=128&&x[jvj+38]!=570&&x[jvj+38]!=1317) goto l16;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+39; 
(*f[200])( );if(v[102]) goto l16;     /*NDD0(jvj+35,jvj+39)*/
x[jvj+3]=x[jvj+39] ;z[jvj+3]=z[jvj+39];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l16;     /*FNDOND0(498,jvj+3,jvj+7)*/
x[jvj+68]=x[jvj+34] ;z[jvj+68]=z[jvj+34];
l17:if((x[jvj+68]<=0)) goto l16;
x[jvj+40]=s[x[jvj+68]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+68];
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=484)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+40,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+42,jvj+43)*/
if(x[jvj+43]!=96&&x[jvj+43]!=89&&x[jvj+43]!=41&&x[jvj+43]!=20&&x[jvj+43]!=128&&x[jvj+43]!=570&&x[jvj+43]!=1317) goto l18;
x[jvj+44]=x[jvj+40] ;z[jvj+44]=z[jvj+40];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(jvj+44,jvj+45)*/
x[jvj+5]=x[jvj+45] ;z[jvj+5]=z[jvj+45];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+46; 
(*f[1948])( );if(v[102]) goto l18;     /*FNDOND0(498,jvj+5,jvj+46)*/
x[jvj+69]=x[jvj+34] ;z[jvj+69]=z[jvj+34];
l19:if((x[jvj+69]<=0)) goto l18;
x[jvj+47]=s[x[jvj+69]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+69];
if((x[jvj+40]==x[jvj+47])) goto l20;
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+47,V55)*/
V55=pile[WZ2]; 
K=V55;
x[jvj+70]=x[jvj+20] ;z[jvj+70]=z[jvj+20];
l21:if((x[jvj+70]<=0)) goto l20;
x[jvj+8]=s[x[jvj+70]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+70];
if((x[jvj+3]==x[jvj+8])) goto l22;
if((x[jvj+5]==x[jvj+8])) goto l22;
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+48; 
(*f[1948])( );if(v[102]) goto l22;     /*FNDOND0(498,jvj+8,jvj+48)*/
if((x[jvj+48]!=x[jvj+46])) goto l22;
pile[v[22]]=365; pile[WZ2]=jvj+49; 
(*f[1969])( );     /*FNDEND0(365,jvj+8,jvj+49)*/
for(i=x[jvj+49],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=2)) goto l22;
if((x[jvj+48]!=x[jvj+7])) goto l22;
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l22;     /*FNDCND0(164,jvj+8,V21)*/
V21=pile[WZ2]; 
x[jvj+63]=x[jvj+49] ;z[jvj+63]=z[jvj+49];
l3:if((x[jvj+63]<=0)) goto l22;
x[jvj+9]=s[x[jvj+63]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+63];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+9,V20)*/
V20=pile[WZ2]; 
if((V20!=V21)) goto l4;
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+9,V24)*/
V24=pile[WZ2]; 
x[jvj+64]=x[jvj+49] ;z[jvj+64]=z[jvj+49];
l5:if((x[jvj+64]<=0)) goto l22;
x[jvj+50]=s[x[jvj+64]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+64];
if((x[jvj+50]!=x[jvj+9])) goto l23;
x[jvj+64]=t[x[jvj+64]];
goto l5;
l1:pile[v[22]]=921; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(921,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l25;
l2:pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l22;     /*FNDCND0(688,jvj+7,V17)*/
V17=pile[WZ2]; 
if((V17==1)) goto l25;
l22:x[jvj+70]=t[x[jvj+70]];
goto l21;
l4:x[jvj+63]=t[x[jvj+63]];
goto l3;
l7:x[jvj+65]=t[x[jvj+65]];
l6:if((x[jvj+65]<=0)) goto l22;
x[jvj+11]=s[x[jvj+65]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+65];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+11,V27)*/
V27=pile[WZ2]; 
if((V27!=V24)) goto l7;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+12)*/
x[jvj+66]=x[jvj+12] ;z[jvj+66]=z[jvj+12];
l8:if((x[jvj+66]<=0)) goto l22;
x[jvj+13]=s[x[jvj+66]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+66];
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+13,V30)*/
V30=pile[WZ2]; 
if((V30!=V25)) goto l9;
pile[v[22]]=921; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(921,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l1;
goto l2;
l9:x[jvj+66]=t[x[jvj+66]];
goto l8;
l11:x[jvj+16]=s[x[jvj+14]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+14];
pile[v[22]]=480; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(480,jvj+16,jvj+17)*/
x[jvj+67]=x[jvj+17] ;z[jvj+67]=z[jvj+17];
l12:if((x[jvj+67]>0)) goto l13;
x[jvj+14]=t[x[jvj+14]];
goto l10;
l13:x[jvj+18]=s[x[jvj+67]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+67];
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[jvj+18]) goto l14;
pile[v[22]]=365; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[1969])( );     /*FNDEND0(365,jvj+18,jvj+19)*/
for(i=x[jvj+19],V71=0;i>0;i=t[i],V71++)  ;
if((V71!=2)) goto l14;
pile[v[22]]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+18)*/
l14:x[jvj+67]=t[x[jvj+67]];
goto l12;
l16:x[jvj+28]=t[x[jvj+28]];
goto l15;
l18:x[jvj+68]=t[x[jvj+68]];
goto l17;
l20:x[jvj+69]=t[x[jvj+69]];
goto l19;
l23:pile[v[22]]=130; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+50,V25)*/
V25=pile[WZ2]; 
V23=V24-V25;
if((V23!=K)) goto l22;
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+10)*/
x[jvj+65]=x[jvj+10] ;z[jvj+65]=z[jvj+10];
goto l6;
l24:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l25:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+56)*/
pile[WZ1]=jvj+8; pile[WZ3]=(-656); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,jvj+8,110,(-656),jvj+57)*/
pile[v[22]]=V73; pile[WZ1]=858; pile[WZ2]=jvj+53; 
(*f[46])( );     /*TRI0(V73,858,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,v[13],642,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=3256; pile[WZ2]=246; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,3256,246,jvj+55)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+55; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+55,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=159; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+51,159,jvj+56)*/
pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+51,159,jvj+57)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; pile[WZ3]=jvj+51; 
(*f[1569])( );     /*DELIER0(365,jvj+3,jvj+11,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+61)*/
pile[WZ1]=jvj+8; pile[WZ3]=(-656); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(101,jvj+8,110,(-656),jvj+62)*/
pile[v[22]]=V73; pile[WZ1]=858; pile[WZ2]=jvj+58; 
(*f[46])( );     /*TRI0(V73,858,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+59; 
(*f[189])( );     /*TRI4(jvj+58,v[13],642,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=3256; pile[WZ2]=246; pile[WZ3]=jvj+60; 
(*f[189])( );     /*TRI4(jvj+59,3256,246,jvj+60)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+60; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+60,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=159; pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+61)*/
pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+62)*/
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; pile[WZ3]=jvj+52; 
(*f[1569])( );     /*DELIER0(365,jvj+5,jvj+13,jvj+52)*/
goto l22;
}
