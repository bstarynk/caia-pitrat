#include "dx.h"
void ORG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V57=0,G=0,F=0,V36=0,C=0,V47=0,L=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=10681;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2091&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=d[10];z[jvj+2]=0;
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(159,R,jvj+34)*/
l24:if((x[jvj+34]>0)) goto l25;
x[jvj+21]=0 ;z[jvj+21]=0;
x[jvj+17]=d[10];z[jvj+17]=0;
l11:if((x[jvj+17]>0)) goto l12;
x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+51]=x[jvj+21] ;z[jvj+51]=z[jvj+21];
l18:if((x[jvj+51]>0)) goto l19;
pile[v[22]]=R; pile[WZ1]=226; pile[WZ2]=jvj+33; 
(*f[34])( );     /*CHGC0(R,226,jvj+33)*/
x[jvj+42]=d[10];z[jvj+42]=0;
l29:if((x[jvj+42]>0)) goto l30;
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(jvj+3,R,jvj+4)*/
x[jvj+48]=x[jvj+4] ;z[jvj+48]=z[jvj+4];
l3:if((x[jvj+48]>0)) goto l4;
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+5]=s[x[jvj+48]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+48];
pile[v[22]]=122; pile[WZ1]=jvj+3; pile[WZ2]=218; pile[WZ3]=jvj+5; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(122,jvj+3,218,jvj+5,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=218; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+5,218,jvj+6)*/
x[jvj+48]=t[x[jvj+48]];
goto l3;
l5:pile[v[22]]=263; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(263,R,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V) goto l6;
l10:V57=t[V57];
l8:if((V57>0)) goto l9;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+20)*/
l15:x[jvj+49]=t[x[jvj+49]];
l13:if((x[jvj+49]>0)) goto l14;
x[jvj+17]=t[x[jvj+17]];
goto l11;
l6:pile[v[22]]=251; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(251,R,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==V) goto l10;
goto l15;
l9:V=s[V57];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V) goto l10;
pile[v[22]]=237; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(237,R,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==V) goto l5;
goto l15;
l12:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(jvj+18,R,jvj+19)*/
x[jvj+49]=x[jvj+19] ;z[jvj+49]=z[jvj+19];
goto l13;
l14:x[jvj+10]=s[x[jvj+49]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+49];
pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(218,jvj+10,jvj+20)*/
pile[v[22]]=100; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+10,jvj+13)*/
if((x[jvj+13]!=435)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+10,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==734)) goto l15;
l7:pile[v[22]]=251; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(251,jvj+10,jvj+11)*/
pile[v[22]]=253; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(253,jvj+10,jvj+12)*/
V57=x[jvj+12];
goto l8;
l17:x[jvj+50]=t[x[jvj+50]];
l16:if((x[jvj+50]<=0)) goto l21;
x[jvj+22]=s[x[jvj+50]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+50];
if((x[jvj+22]==x[jvj+27])) goto l17;
pile[v[22]]=122; pile[WZ1]=jvj+22; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(122,jvj+22,jvj+32)*/
if((x[jvj+32]!=107)) goto l17;
pile[v[22]]=218; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(218,jvj+22,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=435)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+23,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+25,jvj+26)*/
G=x[jvj+26];
if(G==180||G==353||G==723||G==79||G==903||G==908||G==911) goto l17;
l20:x[jvj+51]=t[x[jvj+51]];
goto l18;
l19:x[jvj+27]=s[x[jvj+51]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+51];
pile[v[22]]=218; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(218,jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=435)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+28,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+30,jvj+31)*/
F=x[jvj+31];
if(F!=180&&F!=353&&F!=723&&F!=79&&F!=903&&F!=908&&F!=911) goto l21;
x[jvj+50]=x[jvj+21] ;z[jvj+50]=z[jvj+21];
goto l16;
l21:pile[v[22]]=jvj+33; pile[WZ1]=jvj+27; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+27)*/
goto l20;
l23:x[jvj+52]=t[x[jvj+52]];
l22:if((x[jvj+52]<=0)) goto l26;
x[jvj+38]=s[x[jvj+52]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+52];
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==x[jvj+38]) goto l23;
pile[v[22]]=218; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(218,jvj+38,jvj+39)*/
x[jvj+53]=x[jvj+37] ;z[jvj+53]=z[jvj+37];
l27:if((x[jvj+53]<=0)) goto l26;
x[jvj+40]=s[x[jvj+53]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+53];
pile[v[22]]=218; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(218,jvj+40,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=226; 
(*f[36])( );     /*PLUSC0(jvj+39,226,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=248; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+41,248,jvj+39)*/
l28:x[jvj+53]=t[x[jvj+53]];
goto l27;
l25:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=470; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(470,jvj+35,jvj+36)*/
for(i=x[jvj+36],V36=0;i>0;i=t[i],V36++)  ;
if((V36!=1)) goto l26;
pile[v[22]]=333; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(333,jvj+35,jvj+37)*/
x[jvj+52]=x[jvj+36] ;z[jvj+52]=z[jvj+36];
goto l22;
l26:x[jvj+34]=t[x[jvj+34]];
goto l24;
l30:x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=jvj+43; pile[WZ1]=R; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(jvj+43,R,jvj+44)*/
x[jvj+54]=x[jvj+44] ;z[jvj+54]=z[jvj+44];
l31:if((x[jvj+54]>0)) goto l32;
x[jvj+42]=t[x[jvj+42]];
goto l29;
l32:x[jvj+45]=s[x[jvj+54]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+54];
pile[v[22]]=218; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(218,jvj+45,jvj+46)*/
pile[v[22]]=226; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(226,jvj+46,jvj+47)*/
if((x[jvj+47]!=0)) goto l33;
pile[v[22]]=jvj+45; pile[WZ1]=R; 
(*f[2108])( );if(v[102]) goto l33;     /*ORW0(jvj+45,R,C,V47,L)*/
C=pile[WZ2]; V47=pile[WZ3]; L=pile[WZ4]; 
pile[v[22]]=jvj+46; pile[WZ1]=204; pile[WZ2]=C; 
(*f[43])( );     /*CHGC2(jvj+46,204,C)*/
pile[WZ1]=528; pile[WZ2]=V47; 
(*f[43])( );     /*CHGC2(jvj+46,528,V47)*/
pile[WZ1]=238; pile[WZ2]=L; 
(*f[43])( );     /*CHGC2(jvj+46,238,L)*/
pile[WZ1]=R; 
(*f[2170])( );     /*ORV0(jvj+46,R)*/
l33:x[jvj+54]=t[x[jvj+54]];
goto l31;
}
