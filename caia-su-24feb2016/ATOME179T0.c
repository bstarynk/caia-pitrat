#include "dx.h"
void ATOME179T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V64=0,V76=0,V87=0,V99=0,V120=0,I=0,V147=0,V160=0,V154=0,K=0,V167=0,V134=0,II=0,V172=0,V185=0,V179=0,KK=0,V195=0,J=0,V197=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=145;
x[jvj+1]=20179;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3657&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,R,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]!=55)) goto l51;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+113; 
(*f[33])( );     /*FNDE0(1294,R,jvj+113)*/
for(a=x[jvj+113];a>0;a=t[a]) if(s[a]==1598) goto l51;
x[jvj+114]=vo[14];z[jvj+114]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+114; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(642,jvj+114,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+115; 
(*f[887])( );     /*VARND0(R,jvj+115)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+116; 
(*f[33])( );     /*FNDE0(107,R,jvj+116)*/
l48:if((x[jvj+115]<=0)) goto l51;
x[jvj+105]=s[x[jvj+115]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+115];
x[jvj+139]=x[jvj+116] ;z[jvj+139]=z[jvj+116];
l24:if((x[jvj+139]>0)) goto l25;
x[jvj+73]=0 ;z[jvj+73]=0;
x[jvj+140]=x[jvj+116] ;z[jvj+140]=z[jvj+116];
l27:if((x[jvj+140]>0)) goto l28;
x[jvj+110]=0 ;z[jvj+110]=0;
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; 
(*f[1290])( );if(v[102]) goto l50;     /*DEPEXP0(jvj+105,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+107; 
(*f[255])( );     /*COPEXP0(jvj+106,jvj+107)*/
x[jvj+108]=d[76];z[jvj+108]=0;
l47:if((x[jvj+73]<=0)) goto l50;
J=s[x[jvj+73]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+120)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+122; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+122)*/
pile[v[22]]=jvj+120; pile[WZ1]=111; pile[WZ2]=jvj+121; 
(*f[54])( );     /*TRI1(jvj+120,111,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; pile[WZ2]=103; pile[WZ3]=jvj+123; 
(*f[58])( );     /*TRI3(jvj+121,jvj+122,103,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+123; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+107,jvj+123,jvj+109)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[196])( );     /*PLUF0(jvj+108,jvj+109,jvj+110)*/
x[jvj+73]=t[x[jvj+73]];
goto l47;
l3:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+2,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=48)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+15)*/
x[jvj+133]=x[jvj+15] ;z[jvj+133]=z[jvj+15];
l4:if((x[jvj+133]<=0)) goto l15;
x[jvj+16]=s[x[jvj+133]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+133];
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=25)) goto l5;
x[jvj+19]=d[20];z[jvj+19]=0;
l6:if((x[jvj+19]<=0)) goto l5;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+20,jvj+16,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=484)) goto l7;
pile[v[22]]=268; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+20,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+16; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+23,jvj+16,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=41)) goto l7;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+26; 
(*f[200])( );if(v[102]) goto l7;     /*NDD0(jvj+21,jvj+26)*/
if((x[jvj+26]==x[jvj+105])) goto l26;
l7:x[jvj+19]=t[x[jvj+19]];
goto l6;
l5:x[jvj+133]=t[x[jvj+133]];
goto l4;
l8:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=25)) goto l3;
x[jvj+29]=d[20];z[jvj+29]=0;
l9:if((x[jvj+29]<=0)) goto l3;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+30,jvj+2,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=485)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+34)*/
for(i=x[jvj+34],V64=0;i>0;i=t[i],V64++)  ;
if((V64!=2)) goto l10;
pile[v[22]]=268; pile[WZ1]=jvj+30; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+30,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+2; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+35,jvj+2,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+36,V76)*/
V76=pile[WZ2]; 
if((V76!=0)) goto l10;
x[jvj+134]=x[jvj+34] ;z[jvj+134]=z[jvj+34];
l11:if((x[jvj+134]<=0)) goto l10;
x[jvj+37]=s[x[jvj+134]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+134];
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=484)) goto l12;
x[jvj+39]=x[jvj+37] ;z[jvj+39]=z[jvj+37];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(jvj+39,jvj+40)*/
if((x[jvj+40]!=x[jvj+105])) goto l12;
x[jvj+135]=x[jvj+34] ;z[jvj+135]=z[jvj+34];
l13:if((x[jvj+135]<=0)) goto l12;
x[jvj+41]=s[x[jvj+135]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+135];
if((x[jvj+37]==x[jvj+41])) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]==41)) goto l26;
l14:x[jvj+135]=t[x[jvj+135]];
goto l13;
l10:x[jvj+29]=t[x[jvj+29]];
goto l9;
l12:x[jvj+134]=t[x[jvj+134]];
goto l11;
l15:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+2,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+44]!=48)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+45)*/
x[jvj+136]=x[jvj+45] ;z[jvj+136]=z[jvj+45];
l16:if((x[jvj+136]<=0)) goto l49;
x[jvj+46]=s[x[jvj+136]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+136];
pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+46,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]!=25)) goto l17;
x[jvj+49]=d[20];z[jvj+49]=0;
l18:if((x[jvj+49]<=0)) goto l17;
x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+46; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+50,jvj+46,jvj+51)*/
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=485)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(107,jvj+51,jvj+54)*/
for(i=x[jvj+54],V87=0;i>0;i=t[i],V87++)  ;
if((V87!=2)) goto l19;
pile[v[22]]=268; pile[WZ1]=jvj+50; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+50,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+46; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+55,jvj+46,jvj+56)*/
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+56,V99)*/
V99=pile[WZ2]; 
if((V99!=0)) goto l19;
x[jvj+137]=x[jvj+54] ;z[jvj+137]=z[jvj+54];
l20:if((x[jvj+137]<=0)) goto l19;
x[jvj+57]=s[x[jvj+137]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+137];
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+57,jvj+58)*/
if((x[jvj+58]!=484)) goto l21;
x[jvj+59]=x[jvj+57] ;z[jvj+59]=z[jvj+57];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[200])( );if(v[102]) goto l21;     /*NDD0(jvj+59,jvj+60)*/
if((x[jvj+60]!=x[jvj+105])) goto l21;
x[jvj+138]=x[jvj+54] ;z[jvj+138]=z[jvj+54];
l22:if((x[jvj+138]<=0)) goto l21;
x[jvj+61]=s[x[jvj+138]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+138];
if((x[jvj+57]==x[jvj+61])) goto l23;
pile[v[22]]=100; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+61,jvj+62)*/
if((x[jvj+62]==41)) goto l26;
l23:x[jvj+138]=t[x[jvj+138]];
goto l22;
l17:x[jvj+136]=t[x[jvj+136]];
goto l16;
l19:x[jvj+49]=t[x[jvj+49]];
goto l18;
l21:x[jvj+137]=t[x[jvj+137]];
goto l20;
l25:x[jvj+2]=s[x[jvj+139]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+139];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l8;
x[jvj+5]=d[20];z[jvj+5]=0;
l1:if((x[jvj+5]<=0)) goto l8;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+6,jvj+2,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+6,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+9,jvj+2,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=41)) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+7,jvj+12)*/
if((x[jvj+12]==x[jvj+105])) goto l26;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l26:x[jvj+139]=t[x[jvj+139]];
goto l24;
l28:x[jvj+63]=s[x[jvj+140]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+140];
pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+63,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]==25)) goto l31;
if((x[jvj+65]!=48)) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+63; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,jvj+63,jvj+84)*/
x[jvj+143]=x[jvj+84] ;z[jvj+143]=z[jvj+84];
l38:if((x[jvj+143]<=0)) goto l29;
x[jvj+85]=s[x[jvj+143]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+143];
pile[v[22]]=111; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+85,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+86,jvj+87)*/
if((x[jvj+87]!=25)) goto l39;
x[jvj+88]=d[20];z[jvj+88]=0;
l40:if((x[jvj+88]<=0)) goto l39;
x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=jvj+89; pile[WZ1]=jvj+85; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+89,jvj+85,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+90,jvj+91)*/
if((x[jvj+91]!=484)) goto l42;
pile[v[22]]=268; pile[WZ1]=jvj+89; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(268,jvj+89,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+85; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+92,jvj+85,jvj+93)*/
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+93,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=jvj+90; pile[WZ1]=jvj+94; 
(*f[200])( );if(v[102]) goto l42;     /*NDD0(jvj+90,jvj+94)*/
if((x[jvj+94]!=x[jvj+105])) goto l42;
II=V134;
pile[v[22]]=jvj+73; pile[WZ1]=II; 
(*f[207])( );     /*PLUE2(jvj+73,II)*/
l42:pile[v[22]]=111; pile[WZ1]=jvj+90; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+90,jvj+95)*/
pile[v[22]]=101; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+95,jvj+96)*/
if((x[jvj+96]!=485)) goto l41;
pile[v[22]]=107; pile[WZ1]=jvj+90; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(107,jvj+90,jvj+97)*/
for(i=x[jvj+97],V172=0;i>0;i=t[i],V172++)  ;
if((V172!=2)) goto l41;
pile[v[22]]=268; pile[WZ1]=jvj+89; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(268,jvj+89,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+85; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+98,jvj+85,jvj+99)*/
pile[v[22]]=130; pile[WZ1]=jvj+99; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+99,V185)*/
V185=pile[WZ2]; 
if((V185!=0)) goto l41;
x[jvj+144]=x[jvj+97] ;z[jvj+144]=z[jvj+97];
l43:if((x[jvj+144]<=0)) goto l41;
x[jvj+100]=s[x[jvj+144]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+144];
pile[v[22]]=100; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+100,jvj+101)*/
if((x[jvj+101]!=484)) goto l44;
x[jvj+102]=x[jvj+100] ;z[jvj+102]=z[jvj+100];
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[200])( );if(v[102]) goto l44;     /*NDD0(jvj+102,jvj+103)*/
if((x[jvj+103]!=x[jvj+105])) goto l44;
x[jvj+145]=x[jvj+97] ;z[jvj+145]=z[jvj+97];
l45:if((x[jvj+145]<=0)) goto l44;
x[jvj+104]=s[x[jvj+145]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+145];
if((x[jvj+100]==x[jvj+104])) goto l46;
pile[v[22]]=130; pile[WZ1]=jvj+104; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+104,V179)*/
V179=pile[WZ2]; 
KK=V179;
V195=(-KK);
pile[v[22]]=jvj+73; pile[WZ1]=V195; 
(*f[207])( );     /*PLUE2(jvj+73,V195)*/
l46:x[jvj+145]=t[x[jvj+145]];
goto l45;
l29:x[jvj+140]=t[x[jvj+140]];
goto l27;
l31:x[jvj+66]=d[20];z[jvj+66]=0;
l30:if((x[jvj+66]<=0)) goto l29;
x[jvj+67]=s[x[jvj+66]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+66];
pile[v[22]]=jvj+67; pile[WZ1]=jvj+63; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+67,jvj+63,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+68,jvj+69)*/
if((x[jvj+69]!=484)) goto l33;
pile[v[22]]=268; pile[WZ1]=jvj+67; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+67,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+63; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+70,jvj+63,jvj+71)*/
pile[v[22]]=130; pile[WZ1]=jvj+71; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+71,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=jvj+68; pile[WZ1]=jvj+72; 
(*f[200])( );if(v[102]) goto l33;     /*NDD0(jvj+68,jvj+72)*/
if((x[jvj+72]!=x[jvj+105])) goto l33;
I=V120;
pile[v[22]]=jvj+73; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+73,I)*/
l33:pile[v[22]]=111; pile[WZ1]=jvj+68; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+68,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]!=485)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+68; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(107,jvj+68,jvj+76)*/
for(i=x[jvj+76],V147=0;i>0;i=t[i],V147++)  ;
if((V147!=2)) goto l32;
pile[v[22]]=268; pile[WZ1]=jvj+67; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(268,jvj+67,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+63; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+77,jvj+63,jvj+78)*/
pile[v[22]]=130; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+78,V160)*/
V160=pile[WZ2]; 
if((V160!=0)) goto l32;
x[jvj+141]=x[jvj+76] ;z[jvj+141]=z[jvj+76];
l34:if((x[jvj+141]<=0)) goto l32;
x[jvj+79]=s[x[jvj+141]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+141];
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=484)) goto l35;
x[jvj+81]=x[jvj+79] ;z[jvj+81]=z[jvj+79];
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; 
(*f[200])( );if(v[102]) goto l35;     /*NDD0(jvj+81,jvj+82)*/
if((x[jvj+82]!=x[jvj+105])) goto l35;
x[jvj+142]=x[jvj+76] ;z[jvj+142]=z[jvj+76];
l36:if((x[jvj+142]<=0)) goto l35;
x[jvj+83]=s[x[jvj+142]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+142];
if((x[jvj+79]==x[jvj+83])) goto l37;
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+83,V154)*/
V154=pile[WZ2]; 
K=V154;
V167=(-K);
pile[v[22]]=jvj+73; pile[WZ1]=V167; 
(*f[207])( );     /*PLUE2(jvj+73,V167)*/
l37:x[jvj+142]=t[x[jvj+142]];
goto l36;
l32:x[jvj+66]=t[x[jvj+66]];
goto l30;
l35:x[jvj+141]=t[x[jvj+141]];
goto l34;
l39:x[jvj+143]=t[x[jvj+143]];
goto l38;
l41:x[jvj+88]=t[x[jvj+88]];
goto l40;
l44:x[jvj+144]=t[x[jvj+144]];
goto l43;
l50:pile[v[22]]=jvj+110; pile[WZ1]=jvj+117; 
(*f[299])( );     /*COPEL0(jvj+110,jvj+117)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+128; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+128)*/
pile[v[22]]=V197; pile[WZ1]=858; pile[WZ2]=jvj+124; 
(*f[46])( );     /*TRI0(V197,858,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+125; 
(*f[189])( );     /*TRI4(jvj+124,v[13],642,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=3657; pile[WZ2]=246; pile[WZ3]=jvj+126; 
(*f[189])( );     /*TRI4(jvj+125,3657,246,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=20179; pile[WZ2]=218; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+126,20179,218,jvj+127)*/
pile[v[22]]=jvj+128; pile[WZ1]=(-20); pile[WZ2]=jvj+127; pile[WZ3]=159; pile[WZ4]=jvj+129; 
(*f[298])( );     /*TRIENS1(jvj+128,(-20),jvj+127,159,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+118; 
(*f[58])( );     /*TRI3(jvj+129,1,158,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=111; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,111,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=jvj+117; pile[WZ2]=107; pile[WZ3]=jvj+132; 
(*f[301])( );     /*TRI11(jvj+131,jvj+117,107,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+132,22,100,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+118; 
(*f[1296])( );     /*NOUVCONTR0(jvj+119,jvj+118)*/
l49:x[jvj+115]=t[x[jvj+115]];
goto l48;
l51:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
