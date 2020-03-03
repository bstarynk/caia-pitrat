#include "dx.h"
void COPWY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V12=0,V16=0,V17=0,V18=0,V37=0,V36=0,V39=0,V57=0,V65=0,V43=0,V50=0,V=0;
int R,Y,BT,RM,P;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=104;
x[jvj+1]=10616;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2156&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Y=pile[v[22]+1]; BT=pile[v[22]+2]; RM=pile[v[22]+3]; P=pile[v[22]+4]; RES=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,Y,jvj+48)*/
if((x[jvj+48]!=22)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,Y,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+49,jvj+15)*/
if((x[jvj+15]==217)) goto l19;
pile[v[22]]=11; pile[WZ1]=jvj+15; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(11,jvj+15,jvj+50)*/
if((x[jvj+50]!=135)) goto l19;
pile[v[22]]=109; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(109,jvj+15,jvj+51)*/
x[jvj+16]=incon;
if((x[P]!=68)) goto l6;
pile[v[22]]=218; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+15,jvj+16)*/
l7:x[jvj+24]=0 ;z[jvj+24]=0;
pile[v[22]]=118; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(118,jvj+15,V37)*/
V37=pile[WZ2]; 
x[jvj+18]=d[7];z[jvj+18]=0;
x[jvj+19]=d[6];z[jvj+19]=0;
l8:if((x[jvj+19]<=0)) goto l18;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+20,V36)*/
V36=pile[WZ2]; 
if((V36>=V37)) goto l9;
pile[v[22]]=754; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(754,jvj+20,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=Y; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+20,Y,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V39; pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(100,21,140,V39,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=103; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+84; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+22,jvj+84,jvj+23)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[196])( );     /*PLUF0(jvj+18,jvj+23,jvj+24)*/
l9:x[jvj+19]=t[x[jvj+19]];
goto l8;
l2:x[jvj+103]=t[x[jvj+103]];
l1:if((x[jvj+103]<=0)) goto l5;
x[jvj+5]=s[x[jvj+103]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+103];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+5,V12)*/
V12=pile[WZ2]; 
if((V12>V13)) goto l2;
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V12) goto l2;
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+5,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+5,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(110,jvj+5,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=V16; pile[WZ1]=195; pile[WZ2]=jvj+2; 
(*f[235])( );     /*PLUSC2(V16,195,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V17; pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,V17,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=103; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,103,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+80; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+7,jvj+80,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+10,114,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V18; pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(100,21,140,V18,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=103; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+82; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+9,jvj+82,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+10,114,jvj+12)*/
l5:x[jvj+104]=t[x[jvj+104]];
l3:if((x[jvj+104]>0)) goto l4;
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=RM; pile[WZ4]=jvj+10; 
(*f[1818])( );     /*COPV0(RM,107,Y,RM,jvj+10)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+64)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+64)*/
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=0;return;
l4:x[jvj+13]=s[x[jvj+104]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+104];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=114)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+13,jvj+6)*/
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+13,jvj+8)*/
for(i=x[jvj+61],V13=0;i>0;i=t[i],V13++)  ;
pile[v[22]]=195; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(195,jvj+2,jvj+3)*/
pile[v[22]]=236; pile[WZ1]=581; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(236,581,jvj+4)*/
x[jvj+103]=x[jvj+4] ;z[jvj+103]=z[jvj+4];
goto l1;
l6:pile[v[22]]=218; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+15,jvj+17)*/
pile[v[22]]=201; pile[WZ1]=jvj+17; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(201,jvj+17,jvj+16)*/
goto l7;
l10:if((x[jvj+54]<=0)) goto l23;
x[jvj+26]=s[x[jvj+54]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+54];
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+26; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+26)*/
goto l23;
l12:pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+15,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V57; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V57,jvj+25)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+25)*/
goto l23;
l13:pile[v[22]]=145; pile[WZ1]=jvj+15; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(145,jvj+15,jvj+27)*/
if((x[jvj+54]<=0)) goto l23;
x[jvj+26]=s[x[jvj+54]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+54];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+28)*/
V65=V50-1;
(*f[1817])( );     /*NOUV2(V43)*/
V43=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+85)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V43; pile[WZ4]=jvj+87; 
(*f[270])( );     /*QUADRI7(100,21,140,V43,jvj+87)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; pile[WZ2]=103; pile[WZ3]=jvj+88; 
(*f[58])( );     /*TRI3(jvj+86,jvj+87,103,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+88; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+88,jvj+29)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+29; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+29)*/
pile[v[22]]=jvj+26; pile[WZ1]=(-20); pile[WZ2]=159; pile[WZ3]=jvj+30; 
(*f[180])( );     /*TRIENS0(jvj+26,(-20),159,jvj+30)*/
pile[v[22]]=RM; pile[WZ1]=jvj+30; pile[WZ2]=V43; pile[WZ3]=jvj+27; pile[WZ4]=V65; pile[WZ5]=Y; 
(*f[2201])( );     /*COPWSP0(RM,jvj+30,V43,jvj+27,V65,Y)*/
goto l23;
l14:pile[v[22]]=jvj+26; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+32)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+31; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+31,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+91; 
(*f[58])( );     /*TRI3(jvj+90,jvj+34,103,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+91; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+91,jvj+35)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+35; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+35)*/
goto l23;
l17:x[jvj+47]=s[x[jvj+57]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+57];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+47)*/
x[jvj+57]=t[x[jvj+57]];
l16:if((x[jvj+57]>0)) goto l17;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+59; 
(*f[299])( );     /*COPEL0(jvj+45,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+59; pile[WZ2]=107; pile[WZ3]=jvj+97; 
(*f[301])( );     /*TRI11(jvj+96,jvj+59,107,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+97,22,100,jvj+60)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=RM; pile[WZ4]=jvj+60; 
(*f[1818])( );     /*COPV0(RM,107,Y,RM,jvj+60)*/
x[RES]=67 ;z[RES]=67;
goto l23;
l18:pile[v[22]]=jvj+24; pile[WZ1]=jvj+52; 
(*f[299])( );     /*COPEL0(jvj+24,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+51; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+51,jvj+73)*/
pile[WZ3]=jvj+16; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+16,jvj+94)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+92; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=103; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+94,jvj+93,jvj+71)*/
pile[v[22]]=jvj+52; pile[WZ1]=114; pile[WZ2]=jvj+70; 
(*f[300])( );     /*TRI10(jvj+52,114,jvj+70)*/
pile[v[22]]=jvj+71; pile[WZ1]=(-20); pile[WZ3]=113; pile[WZ4]=jvj+72; 
(*f[298])( );     /*TRIENS1(jvj+71,(-20),jvj+70,113,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+73; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+73,jvj+72,jvj+53)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=RM; pile[WZ4]=jvj+53; 
(*f[1818])( );     /*COPV0(RM,107,Y,RM,jvj+53)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=jvj+53; pile[WZ1]=860; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(jvj+53,860,jvj+15)*/
goto l23;
l19:if(x[jvj+15]!=485&&x[jvj+15]!=486) goto l20;
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(107,Y,jvj+54)*/
for(i=x[jvj+54],V50=0;i>0;i=t[i],V50++)  ;
x[RES]=67 ;z[RES]=67;
if((V50==0)) goto l12;
if((V50==1)) goto l10;
if((V50>2)) goto l13;
if((V50!=2)) goto l23;
pile[v[22]]=145; pile[WZ1]=jvj+15; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(145,jvj+15,jvj+31)*/
if((x[jvj+54]<=0)) goto l23;
x[jvj+26]=s[x[jvj+54]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+54];
l11:if((x[jvj+54]<=0)) goto l23;
x[jvj+33]=s[x[jvj+54]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+54];
if((x[jvj+33]!=x[jvj+26])) goto l14;
x[jvj+54]=t[x[jvj+54]];
goto l11;
l20:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,Y,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]==217)) goto l21;
if((x[jvj+56]!=581)) goto l22;
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(216,158,jvj+2)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(107,Y,jvj+61)*/
pile[v[22]]=102; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,Y,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10107; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,10107,jvj+78)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=103; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,103,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+99; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+63,jvj+99,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+102; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+102)*/
pile[WZ3]=(-609); pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,(-609),jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=103; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,103,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+102,jvj+101,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+75; 
(*f[180])( );     /*TRIENS0(jvj+74,(-20),114,jvj+75)*/
pile[v[22]]=jvj+76; pile[WZ2]=jvj+75; pile[WZ3]=113; pile[WZ4]=jvj+77; 
(*f[298])( );     /*TRIENS1(jvj+76,(-20),jvj+75,113,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+78; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+78,jvj+77,jvj+10)*/
x[jvj+104]=x[jvj+61] ;z[jvj+104]=z[jvj+61];
goto l3;
l21:pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(107,Y,jvj+57)*/
pile[v[22]]=102; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,Y,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+58)*/
x[jvj+45]=0 ;z[jvj+45]=0;
x[jvj+46]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=22)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+36,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+38,jvj+39)*/
pile[v[22]]=268; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+39,jvj+40)*/
pile[v[22]]=102; pile[WZ1]=jvj+36; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+36,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+42)*/
pile[v[22]]=103; pile[WZ1]=jvj+36; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+36,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+40; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+40,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+66,jvj+44,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+67; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+42,jvj+67,jvj+46)*/
l15:pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+46)*/
goto l16;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l24:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=67; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,67,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+69; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+69,jvj+46)*/
goto l15;
}
