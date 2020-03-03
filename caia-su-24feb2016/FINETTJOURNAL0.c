#include "dx.h"
void FINETTJOURNAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V29=0,V35=0,V36=0,V37=0,V38=0,V39=0,V59=0,V65=0,V66=0,V67=0,V68=0,V69=0;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=10973;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==443&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=d[46];z[jvj+6]=0;
l4:if((x[jvj+6]>0)) goto l5;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=256; pile[WZ1]=S; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(256,S,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+28]=1085 ;z[jvj+28]=1085;
pile[v[22]]=218; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+28,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=S; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(jvj+29,S,jvj+30)*/
for(i=x[jvj+30],V59=0;i>0;i=t[i],V59++)  ;
if((V59<=1)) goto l8;
if((x[jvj+30]<=0)) goto l8;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=941; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(941,jvj+31,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(942,jvj+31,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(943,jvj+31,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+31,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+31,jvj+32)*/
pile[v[22]]=68; pile[WZ1]=1119; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(68,1119,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=V67; pile[WZ2]=943; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,V67,943,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=V66; pile[WZ2]=942; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,V66,942,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=V65; pile[WZ2]=941; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,V65,941,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+28; pile[WZ2]=860; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,jvj+28,860,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=V59; pile[WZ2]=667; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,V59,667,jvj+38)*/
pile[v[22]]=109; pile[WZ1]=jvj+32; pile[WZ2]=117; pile[WZ3]=V68; pile[WZ4]=jvj+38; pile[WZ5]=jvj+7; 
(*f[47])( );     /*QUADRI0(109,jvj+32,117,V68,jvj+38,jvj+7)*/
pile[v[22]]=163; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+31,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=163; pile[WZ2]=V69; 
(*f[177])( );     /*CHGC4(jvj+7,163,V69)*/
l17:if((x[jvj+30]>0)) goto l18;
pile[v[22]]=80; pile[WZ1]=994; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(80,994,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=120; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+39,120,jvj+7)*/
pile[v[22]]=994; pile[WZ1]=80; 
(*f[35])( );     /*CHGC1(994,80,jvj+7)*/
l7:pile[v[22]]=jvj+7; pile[WZ1]=1049; pile[WZ2]=jvj+5; 
(*f[34])( );     /*CHGC0(jvj+7,1049,jvj+5)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=1048; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1048,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=S; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,S,jvj+10)*/
for(i=x[jvj+10],V29=0;i>0;i=t[i],V29++)  ;
if((V29<=1)) goto l6;
if((x[jvj+10]<=0)) goto l6;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=941; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(941,jvj+11,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(942,jvj+11,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(943,jvj+11,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+11,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+11,jvj+12)*/
pile[v[22]]=68; pile[WZ1]=1119; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(68,1119,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=V37; pile[WZ2]=943; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,V37,943,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=V36; pile[WZ2]=942; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,V36,942,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=V35; pile[WZ2]=941; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,V35,941,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+8; pile[WZ2]=860; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,jvj+8,860,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=V29; pile[WZ2]=667; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,V29,667,jvj+18)*/
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=117; pile[WZ3]=V38; pile[WZ4]=jvj+18; pile[WZ5]=jvj+19; 
(*f[47])( );     /*QUADRI0(109,jvj+12,117,V38,jvj+18,jvj+19)*/
pile[v[22]]=163; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+11,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=163; pile[WZ2]=V39; 
(*f[177])( );     /*CHGC4(jvj+19,163,V39)*/
l9:if((x[jvj+10]>0)) goto l10;
pile[v[22]]=80; pile[WZ1]=994; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(80,994,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=120; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+20,120,jvj+19)*/
pile[v[22]]=994; pile[WZ1]=80; 
(*f[35])( );     /*CHGC1(994,80,jvj+19)*/
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
l10:x[jvj+26]=s[x[jvj+10]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+10];
x[jvj+23]=incon;
x[jvj+27]=994 ;z[jvj+27]=994;
l11:x[jvj+21]=x[jvj+27] ;z[jvj+21]=z[jvj+27];
pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+21,jvj+22)*/
if((x[jvj+22]!=x[jvj+26])) goto l16;
x[jvj+23]=x[jvj+21] ;z[jvj+23]=z[jvj+21];
l12:if(x[jvj+23]!=incon) goto l15;
l13:x[jvj+10]=t[x[jvj+10]];
goto l9;
l15:pile[v[22]]=120; pile[WZ1]=jvj+26; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(120,jvj+26,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+23,120,jvj+25)*/
l14:pile[v[22]]=80; pile[WZ1]=994; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(80,994,jvj+24)*/
if((x[jvj+24]!=x[jvj+26])) goto l13;
pile[v[22]]=120; pile[WZ1]=jvj+23; 
(*f[71])( );     /*ENLV0(120,jvj+23)*/
pile[v[22]]=994; pile[WZ1]=80; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(994,80,jvj+23)*/
goto l13;
l16:pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(120,jvj+21,jvj+27)*/
goto l11;
l18:x[jvj+45]=s[x[jvj+30]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+30];
x[jvj+42]=incon;
x[jvj+46]=994 ;z[jvj+46]=994;
l19:x[jvj+40]=x[jvj+46] ;z[jvj+40]=z[jvj+46];
pile[v[22]]=120; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(120,jvj+40,jvj+41)*/
if((x[jvj+41]!=x[jvj+45])) goto l24;
x[jvj+42]=x[jvj+40] ;z[jvj+42]=z[jvj+40];
l20:if(x[jvj+42]!=incon) goto l23;
l21:x[jvj+30]=t[x[jvj+30]];
goto l17;
l23:pile[v[22]]=120; pile[WZ1]=jvj+45; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(120,jvj+45,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+42,120,jvj+44)*/
l22:pile[v[22]]=80; pile[WZ1]=994; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(80,994,jvj+43)*/
if((x[jvj+43]!=x[jvj+45])) goto l21;
pile[v[22]]=120; pile[WZ1]=jvj+42; 
(*f[71])( );     /*ENLV0(120,jvj+42)*/
pile[v[22]]=994; pile[WZ1]=80; pile[WZ2]=jvj+42; 
(*f[35])( );     /*CHGC1(994,80,jvj+42)*/
goto l21;
l24:pile[v[22]]=120; pile[WZ1]=jvj+40; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(120,jvj+40,jvj+46)*/
goto l19;
}
