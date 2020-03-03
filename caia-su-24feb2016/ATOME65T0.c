#include "dx.h"
void ATOME65T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V19=0,V18=0,V25=0,V28=0,V7=0,V22=0,V23=0,V21=0,V66=0,V42=0,V53=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=20065;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3085&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,R,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l18;
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l18;     /*FNDOND0(498,D,jvj+14)*/
pile[v[22]]=365; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+15)*/
for(i=x[jvj+15],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=2)) goto l18;
x[jvj+16]=vo[16];z[jvj+16]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1948])( );if(v[102]) goto l18;     /*FNDOND0(498,jvj+16,jvj+17)*/
pile[v[22]]=1182; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1182,jvj+17,jvj+18)*/
if((68!=x[jvj+18])) goto l18;
pile[v[22]]=164; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(164,D,V19)*/
V19=pile[WZ2]; 
x[jvj+54]=x[jvj+15] ;z[jvj+54]=z[jvj+15];
l3:if((x[jvj+54]<=0)) goto l18;
x[jvj+7]=s[x[jvj+54]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+54];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+7,V18)*/
V18=pile[WZ2]; 
if((V18!=V19)) goto l4;
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+7,V22)*/
V22=pile[WZ2]; 
l5:if((x[jvj+15]<=0)) goto l18;
x[jvj+19]=s[x[jvj+15]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+15];
if((x[jvj+19]!=x[jvj+7])) goto l10;
x[jvj+15]=t[x[jvj+15]];
goto l5;
l1:pile[v[22]]=921; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(921,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[D]) goto l16;
l2:pile[v[22]]=688; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l14;     /*FNDCND0(688,jvj+6,V15)*/
V15=pile[WZ2]; 
if((V15==1)) goto l16;
l14:x[jvj+57]=t[x[jvj+57]];
l13:if((x[jvj+57]<=0)) goto l12;
x[jvj+34]=s[x[jvj+57]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+57];
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=484)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+34,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+36,jvj+37)*/
if(x[jvj+37]!=96&&x[jvj+37]!=89&&x[jvj+37]!=41&&x[jvj+37]!=20&&x[jvj+37]!=128&&x[jvj+37]!=570&&x[jvj+37]!=1317) goto l14;
x[jvj+38]=x[jvj+34] ;z[jvj+38]=z[jvj+34];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+38,jvj+39)*/
x[jvj+4]=x[jvj+39] ;z[jvj+4]=z[jvj+39];
if((x[jvj+4]==x[D])) goto l14;
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+40; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+4,jvj+40)*/
if((x[jvj+14]!=x[jvj+40])) goto l14;
pile[v[22]]=365; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(365,jvj+4,jvj+10)*/
x[jvj+56]=x[jvj+10] ;z[jvj+56]=z[jvj+10];
l8:if((x[jvj+56]<=0)) goto l14;
x[jvj+11]=s[x[jvj+56]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+56];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+11,V28)*/
V28=pile[WZ2]; 
if((V28!=V23)) goto l9;
pile[v[22]]=921; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(921,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[D]) goto l1;
goto l2;
l4:x[jvj+54]=t[x[jvj+54]];
goto l3;
l7:x[jvj+55]=t[x[jvj+55]];
l6:if((x[jvj+55]<=0)) goto l12;
x[jvj+9]=s[x[jvj+55]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+55];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+9,V25)*/
V25=pile[WZ2]; 
if((V25!=V22)) goto l7;
x[jvj+57]=x[jvj+28] ;z[jvj+57]=z[jvj+28];
goto l13;
l9:x[jvj+56]=t[x[jvj+56]];
goto l8;
l10:pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+19,V23)*/
V23=pile[WZ2]; 
V21=V22-V23;
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+20,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=242; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(242,jvj+16,jvj+21)*/
x[jvj+22]=d[20];z[jvj+22]=0;
l11:if((x[jvj+22]<=0)) goto l18;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+23,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+24,R,jvj+25)*/
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=485)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+28)*/
for(i=x[jvj+28],V42=0;i>0;i=t[i],V42++)  ;
if((V42!=2)) goto l12;
pile[v[22]]=jvj+23; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+23,R,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l12;
pile[v[22]]=102; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+29,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+31,jvj+32)*/
if(x[jvj+32]!=96&&x[jvj+32]!=89&&x[jvj+32]!=41&&x[jvj+32]!=20&&x[jvj+32]!=128&&x[jvj+32]!=570&&x[jvj+32]!=1317) goto l12;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+33; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(jvj+29,jvj+33)*/
x[jvj+2]=x[jvj+33] ;z[jvj+2]=z[jvj+33];
if((x[jvj+2]==x[D])) goto l12;
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l12;     /*FNDOND0(498,jvj+2,jvj+6)*/
if((x[jvj+14]!=x[jvj+6])) goto l12;
pile[v[22]]=365; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,jvj+2,jvj+8)*/
x[jvj+55]=x[jvj+8] ;z[jvj+55]=z[jvj+8];
goto l6;
l12:x[jvj+22]=t[x[jvj+22]];
goto l11;
l16:x[jvj+58]=x[jvj+28] ;z[jvj+58]=z[jvj+28];
l15:if((x[jvj+58]<=0)) goto l14;
x[jvj+41]=s[x[jvj+58]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+58];
if((x[jvj+34]==x[jvj+41])) goto l17;
pile[v[22]]=130; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+41,V53)*/
V53=pile[WZ2]; 
if((V21!=V53)) goto l17;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+47)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+48)*/
pile[v[22]]=V66; pile[WZ1]=858; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(V66,858,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,v[13],642,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=3085; pile[WZ2]=246; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,3085,246,jvj+46)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+46; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+46,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=159; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+42,159,jvj+47)*/
pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+42,159,jvj+48)*/
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; pile[WZ3]=jvj+42; 
(*f[1569])( );     /*DELIER0(365,jvj+2,jvj+9,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+52)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+53)*/
pile[v[22]]=V66; pile[WZ1]=858; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(V66,858,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+49,v[13],642,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=3085; pile[WZ2]=246; pile[WZ3]=jvj+51; 
(*f[189])( );     /*TRI4(jvj+50,3085,246,jvj+51)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+51; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(158,1,218,20065,jvj+51,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=159; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+43,159,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+43,159,jvj+53)*/
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; pile[WZ3]=jvj+43; 
(*f[1569])( );     /*DELIER0(365,jvj+4,jvj+11,jvj+43)*/
l17:x[jvj+58]=t[x[jvj+58]];
goto l15;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
