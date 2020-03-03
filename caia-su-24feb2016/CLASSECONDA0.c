#include "dx.h"
void CLASSECONDA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V273=0,V154=0,V40=0,V187=0,V443=0,V453=0,V358=0,V297=0,N=0,V138=0,V130=0,V222=0,V71=0,V382=0,V371=0,V372=0,V405=0,V420=0,V335=0,V309=0,V465=0,V466=0,V470=0,V471=0,V475=0,V476=0;
int Z;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=119;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V13=x[Z];
pile[v[22]]=Z; pile[WZ1]=0; pile[WZ2]=V13; pile[WZ3]=447; 
(*f[285])( );     /*ENLY0(Z,0,V13,447,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=459; 
(*f[285])( );     /*ENLY0(Z,V2,V1,459,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=475; 
(*f[285])( );     /*ENLY0(Z,V4,V3,475,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=510; 
(*f[285])( );     /*ENLY0(Z,V6,V5,510,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[WZ1]=V8; pile[WZ2]=V7; pile[WZ3]=515; 
(*f[285])( );     /*ENLY0(Z,V8,V7,515,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[WZ1]=V10; pile[WZ2]=V9; pile[WZ3]=1260; 
(*f[285])( );     /*ENLY0(Z,V10,V9,1260,V11,V12)*/
V11=pile[WZ4]; V12=pile[WZ5]; 
pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,Z,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==44)) goto l4;
if((x[jvj+6]!=25)) goto l8;
x[jvj+25]=d[20];z[jvj+25]=0;
l6:if((x[jvj+25]<=0)) goto l8;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=Z; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+26,Z,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+27,jvj+28)*/
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+26,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=Z; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+29,Z,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=43)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+30,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+32,jvj+33)*/
pile[v[22]]=103; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+30,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=43)) goto l7;
pile[v[22]]=103; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+34,jvj+36)*/
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+36,V40)*/
V40=pile[WZ2]; 
if((V40!=(-3629))) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+34,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=498)) goto l7;
x[jvj+39]=x[jvj+28] ;z[jvj+39]=z[jvj+28];
x[jvj+40]=x[jvj+33] ;z[jvj+40]=z[jvj+33];
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=3; 
(*f[43])( );     /*CHGC2(Z,510,3)*/
pile[WZ1]=459; pile[WZ2]=jvj+39; 
(*f[35])( );     /*CHGC1(Z,459,jvj+39)*/
pile[WZ1]=475; pile[WZ2]=jvj+40; 
(*f[35])( );     /*CHGC1(Z,475,jvj+40)*/
l7:x[jvj+25]=t[x[jvj+25]];
goto l6;
l2:x[jvj+1]=s[x[jvj+60]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+60];
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+1,jvj+2)*/
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
l3:x[jvj+60]=t[x[jvj+60]];
l1:if((x[jvj+60]>0)) goto l2;
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=12; 
(*f[43])( );     /*CHGC2(Z,510,12)*/
pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,447,jvj+6)*/
pile[WZ1]=459; pile[WZ2]=jvj+57; 
(*f[35])( );     /*CHGC1(Z,459,jvj+57)*/
pile[WZ1]=1260; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(Z,1260,jvj+3)*/
l11:if(x[jvj+6]!=25&&x[jvj+6]!=26) goto l13;
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,Z,jvj+61)*/
if((x[jvj+61]!=22)) goto l13;
pile[v[22]]=102; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,Z,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+62,jvj+63)*/
if((x[jvj+63]!=43)) goto l13;
pile[v[22]]=103; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+62,jvj+64)*/
pile[v[22]]=140; pile[WZ1]=jvj+64; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+64,V297)*/
V297=pile[WZ2]; 
if((V297!=(-7423))) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+62; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+62,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+65,jvj+66)*/
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,Z,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+67,jvj+68)*/
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=10; 
(*f[43])( );     /*CHGC2(Z,510,10)*/
pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,447,jvj+6)*/
pile[WZ1]=459; pile[WZ2]=jvj+66; 
(*f[35])( );     /*CHGC1(Z,459,jvj+66)*/
pile[WZ1]=475; pile[WZ2]=jvj+68; 
(*f[35])( );     /*CHGC1(Z,475,jvj+68)*/
l12:pile[v[22]]=102; pile[WZ1]=jvj+62; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+62,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+69,jvj+70)*/
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,Z,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+71,jvj+72)*/
pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(762,21,jvj+73)*/
for(a=x[jvj+73];a>0;a=t[a]) if(s[a]==V297) goto l24;
l13:if(x[jvj+6]!=25&&x[jvj+6]!=26&&x[jvj+6]!=29&&x[jvj+6]!=30&&x[jvj+6]!=27&&x[jvj+6]!=28) goto l19;
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,Z,jvj+74)*/
if((x[jvj+74]!=22)) goto l19;
pile[v[22]]=103; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,Z,jvj+75)*/
pile[v[22]]=130; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+75,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,Z,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+76,jvj+77)*/
if((x[jvj+77]!=43)) goto l15;
pile[v[22]]=103; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+76,jvj+78)*/
pile[v[22]]=140; pile[WZ1]=jvj+78; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+78,V130)*/
V130=pile[WZ2]; 
if((V130!=(-7423))) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+76; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+76,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+79,jvj+80)*/
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=4; 
(*f[43])( );     /*CHGC2(Z,510,4)*/
pile[WZ1]=515; pile[WZ2]=V138; 
(*f[43])( );     /*CHGC2(Z,515,V138)*/
pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,447,jvj+6)*/
pile[WZ1]=459; pile[WZ2]=jvj+80; 
(*f[35])( );     /*CHGC1(Z,459,jvj+80)*/
l14:pile[v[22]]=102; pile[WZ1]=jvj+76; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+76,jvj+81)*/
pile[v[22]]=101; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+81,jvj+82)*/
pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(762,21,jvj+83)*/
for(a=x[jvj+83];a>0;a=t[a]) if(s[a]==V130) goto l28;
l15:pile[v[22]]=111; pile[WZ1]=jvj+76; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+76,jvj+84)*/
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+84,jvj+85)*/
if((x[jvj+85]!=74)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+76; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+76,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+86,jvj+87)*/
if((x[jvj+87]!=43)) goto l17;
pile[v[22]]=103; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+86,jvj+88)*/
pile[v[22]]=140; pile[WZ1]=jvj+88; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+88,V71)*/
V71=pile[WZ2]; 
if((V71!=(-7423))) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+86; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+86,jvj+89)*/
pile[v[22]]=101; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+89,jvj+90)*/
if((x[jvj+90]==489)) goto l16;
if((x[jvj+90]!=365)) goto l17;
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=2; 
(*f[43])( );     /*CHGC2(Z,510,2)*/
pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,447,jvj+6)*/
pile[WZ1]=515; pile[WZ2]=V138; 
(*f[43])( );     /*CHGC2(Z,515,V138)*/
l17:pile[v[22]]=100; pile[WZ1]=jvj+75; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+75,jvj+91)*/
if((x[jvj+91]!=43)) goto l19;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,Z,jvj+92)*/
pile[v[22]]=130; pile[WZ1]=jvj+92; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+92,V382)*/
V382=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+75; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+75,jvj+93)*/
pile[v[22]]=140; pile[WZ1]=jvj+93; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+93,V371)*/
V371=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+75; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+75,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+94,jvj+95)*/
pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(762,21,jvj+96)*/
for(a=x[jvj+96];a>0;a=t[a]) if(s[a]==V371) goto l18;
l19:if((x[jvj+6]!=50)) goto l23;
pile[v[22]]=107; pile[WZ1]=Z; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(107,Z,jvj+98)*/
for(i=x[jvj+98],V405=0;i>0;i=t[i],V405++)  ;
if((V405==1)) goto l20;
l23:v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,Z,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,Z,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=43)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+9,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=43)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+15,V273)*/
V273=pile[WZ2]; 
if((V273!=(-3629))) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=498)) goto l5;
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=9; 
(*f[43])( );     /*CHGC2(Z,510,9)*/
pile[WZ1]=459; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(Z,459,jvj+8)*/
pile[WZ1]=475; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(Z,475,jvj+12)*/
l5:pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+7,jvj+18)*/
if((x[jvj+18]!=43)) goto l8;
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+7,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+19,V154)*/
V154=pile[WZ2]; 
if((V154!=(-7423))) goto l8;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,Z,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=69)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+7,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+22,jvj+23)*/
x[jvj+24]=0 ;z[jvj+24]=0;
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=5; 
(*f[43])( );     /*CHGC2(Z,510,5)*/
pile[WZ1]=459; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(Z,459,jvj+23)*/
pile[WZ1]=1260; pile[WZ2]=jvj+24; 
(*f[34])( );     /*CHGC0(Z,1260,jvj+24)*/
l8:if(x[jvj+6]!=44&&x[jvj+6]!=45) goto l11;
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,Z,jvj+41)*/
if((x[jvj+41]!=22)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,Z,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+42,jvj+43)*/
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,Z,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=43)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+44,jvj+46)*/
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+46,V187)*/
V187=pile[WZ2]; 
if((V187!=(-7423))) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+44,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+47,jvj+48)*/
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=6; 
(*f[43])( );     /*CHGC2(Z,510,6)*/
pile[WZ1]=459; pile[WZ2]=jvj+43; 
(*f[35])( );     /*CHGC1(Z,459,jvj+43)*/
pile[WZ1]=447; pile[WZ2]=jvj+48; 
(*f[35])( );     /*CHGC1(Z,447,jvj+48)*/
pile[WZ1]=475; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,475,jvj+6)*/
l9:pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+42,V443)*/
V443=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,Z,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=43)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+49,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+51,V453)*/
V453=pile[WZ2]; 
if((V453!=(-7423))) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+49,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+52,jvj+53)*/
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=13; 
(*f[43])( );     /*CHGC2(Z,510,13)*/
pile[WZ1]=459; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,459,jvj+6)*/
pile[WZ1]=447; pile[WZ2]=jvj+53; 
(*f[35])( );     /*CHGC1(Z,447,jvj+53)*/
pile[WZ1]=515; pile[WZ2]=V443; 
(*f[43])( );     /*CHGC2(Z,515,V443)*/
l10:pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+42,jvj+54)*/
if((x[jvj+54]!=43)) goto l11;
pile[v[22]]=103; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+42,jvj+55)*/
pile[v[22]]=140; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+55,V358)*/
V358=pile[WZ2]; 
if((V358!=(-7423))) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+42; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+42,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+56,jvj+57)*/
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,Z,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+58,jvj+59)*/
if((x[jvj+59]!=128)) goto l11;
pile[v[22]]=128; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(128,jvj+58,jvj+60)*/
x[jvj+3]=0 ;z[jvj+3]=0;
goto l1;
l16:pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(Z,510,1)*/
pile[WZ1]=515; pile[WZ2]=V138; 
(*f[43])( );     /*CHGC2(Z,515,V138)*/
pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,447,jvj+6)*/
goto l17;
l18:pile[v[22]]=844; pile[WZ1]=jvj+6; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(844,jvj+6,jvj+97)*/
pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(258,21,jvj+118)*/
l32:if((x[jvj+118]>0)) goto l33;
goto l19;
l24:pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+114; 
(*f[33])( );     /*FNDE0(258,21,jvj+114)*/
l25:if((x[jvj+114]>0)) goto l26;
goto l13;
l26:x[jvj+115]=s[x[jvj+114]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+114];
pile[v[22]]=140; pile[WZ1]=jvj+115; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+115,V465)*/
V465=pile[WZ2]; 
if((V465!=V297)) goto l27;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+115,V466)*/
V466=pile[WZ2]; 
N=V466;
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=7; 
(*f[43])( );     /*CHGC2(Z,510,7)*/
pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,447,jvj+6)*/
pile[WZ1]=459; pile[WZ2]=jvj+70; 
(*f[35])( );     /*CHGC1(Z,459,jvj+70)*/
pile[WZ1]=475; pile[WZ2]=jvj+72; 
(*f[35])( );     /*CHGC1(Z,475,jvj+72)*/
pile[WZ1]=609; pile[WZ2]=N; 
(*f[43])( );     /*CHGC2(Z,609,N)*/
goto l13;
l27:x[jvj+114]=t[x[jvj+114]];
goto l25;
l28:pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+116; 
(*f[33])( );     /*FNDE0(258,21,jvj+116)*/
l29:if((x[jvj+116]>0)) goto l30;
goto l15;
l30:x[jvj+117]=s[x[jvj+116]] ;z[jvj+117]=(x[jvj+117]<=sepcte) ? x[jvj+117] : z[jvj+116];
pile[v[22]]=140; pile[WZ1]=jvj+117; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+117,V470)*/
V470=pile[WZ2]; 
if((V470!=V130)) goto l31;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(117,jvj+117,V471)*/
V471=pile[WZ2]; 
V222=V471;
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=8; 
(*f[43])( );     /*CHGC2(Z,510,8)*/
pile[WZ1]=515; pile[WZ2]=V138; 
(*f[43])( );     /*CHGC2(Z,515,V138)*/
pile[WZ1]=447; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Z,447,jvj+6)*/
pile[WZ1]=459; pile[WZ2]=jvj+82; 
(*f[35])( );     /*CHGC1(Z,459,jvj+82)*/
pile[WZ1]=609; pile[WZ2]=V222; 
(*f[43])( );     /*CHGC2(Z,609,V222)*/
goto l15;
l31:x[jvj+116]=t[x[jvj+116]];
goto l29;
l33:x[jvj+119]=s[x[jvj+118]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+118];
pile[v[22]]=140; pile[WZ1]=jvj+119; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+119,V475)*/
V475=pile[WZ2]; 
if((V475!=V371)) goto l34;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(117,jvj+119,V476)*/
V476=pile[WZ2]; 
V372=V476;
pile[v[22]]=Z; pile[WZ1]=510; pile[WZ2]=8; 
(*f[43])( );     /*CHGC2(Z,510,8)*/
pile[WZ1]=515; pile[WZ2]=V382; 
(*f[43])( );     /*CHGC2(Z,515,V382)*/
pile[WZ1]=447; pile[WZ2]=jvj+97; 
(*f[35])( );     /*CHGC1(Z,447,jvj+97)*/
pile[WZ1]=459; pile[WZ2]=jvj+95; 
(*f[35])( );     /*CHGC1(Z,459,jvj+95)*/
pile[WZ1]=609; pile[WZ2]=V372; 
(*f[43])( );     /*CHGC2(Z,609,V372)*/
goto l19;
l34:x[jvj+118]=t[x[jvj+118]];
goto l32;
l20:if((x[jvj+98]<=0)) goto l23;
x[jvj+99]=s[x[jvj+98]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+98];
pile[v[22]]=100; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+99,jvj+100)*/
if((x[jvj+100]!=22)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+99,jvj+101)*/
pile[v[22]]=101; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+101,jvj+102)*/
x[jvj+110]=x[jvj+102] ;z[jvj+110]=z[jvj+102];
if(x[jvj+110]!=25&&x[jvj+110]!=26&&x[jvj+110]!=29&&x[jvj+110]!=30&&x[jvj+110]!=27&&x[jvj+110]!=28) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+99; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+99,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+103,jvj+104)*/
if((x[jvj+104]!=43)) goto l21;
pile[v[22]]=103; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+103,jvj+105)*/
pile[v[22]]=140; pile[WZ1]=jvj+105; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+105,V420)*/
V420=pile[WZ2]; 
if((V420!=(-7423))) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+103; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+103,jvj+106)*/
pile[v[22]]=101; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+106,jvj+107)*/
pile[v[22]]=103; pile[WZ1]=jvj+99; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+99,jvj+108)*/
pile[v[22]]=101; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+108,jvj+109)*/
x[jvj+111]=x[jvj+107] ;z[jvj+111]=z[jvj+107];
x[jvj+112]=x[jvj+109] ;z[jvj+112]=z[jvj+109];
pile[v[22]]=Z; pile[WZ1]=447; pile[WZ2]=jvj+110; 
(*f[35])( );     /*CHGC1(Z,447,jvj+110)*/
pile[WZ1]=510; pile[WZ2]=11; 
(*f[43])( );     /*CHGC2(Z,510,11)*/
pile[WZ1]=459; pile[WZ2]=jvj+111; 
(*f[35])( );     /*CHGC1(Z,459,jvj+111)*/
pile[WZ1]=475; pile[WZ2]=jvj+112; 
(*f[35])( );     /*CHGC1(Z,475,jvj+112)*/
l22:pile[v[22]]=130; pile[WZ1]=jvj+108; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+108,V335)*/
V335=pile[WZ2]; 
x[jvj+113]=x[jvj+107] ;z[jvj+113]=z[jvj+107];
V309=V335;
pile[v[22]]=Z; pile[WZ1]=447; pile[WZ2]=jvj+110; 
(*f[35])( );     /*CHGC1(Z,447,jvj+110)*/
pile[WZ1]=510; pile[WZ2]=11; 
(*f[43])( );     /*CHGC2(Z,510,11)*/
pile[WZ1]=459; pile[WZ2]=jvj+113; 
(*f[35])( );     /*CHGC1(Z,459,jvj+113)*/
pile[WZ1]=515; pile[WZ2]=V309; 
(*f[43])( );     /*CHGC2(Z,515,V309)*/
l21:x[jvj+98]=t[x[jvj+98]];
goto l20;
}
