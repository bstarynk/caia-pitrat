#include "dx.h"
void DOUB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V35=0,V=0,V25=0,V36=0,V48=0;
int R,T,H;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=10241;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1639&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; T=pile[v[22]+1]; H=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V48=x[H];
l15:pile[v[22]]=R; pile[WZ1]=T; 
(*f[1828])( );     /*DOUBB0(R,T)*/
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,R,jvj+27)*/
x[jvj+46]=w[x[jvj+27]][8];
l16:if((x[jvj+46]<=0)) goto l19;
x[jvj+28]=s[x[jvj+46]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+46];
pile[v[22]]=jvj+28; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(jvj+28,R,jvj+29)*/
x[jvj+47]=x[jvj+29] ;z[jvj+47]=z[jvj+29];
l17:if((x[jvj+47]>0)) goto l18;
x[jvj+46]=t[x[jvj+46]];
goto l16;
l2:x[jvj+4]=s[x[jvj+41]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=48)) goto l22;
l3:x[jvj+41]=t[x[jvj+41]];
l1:if((x[jvj+41]>0)) goto l2;
x[jvj+48]=x[jvj+35] ;z[jvj+48]=z[jvj+35];
l23:if((x[jvj+48]<=0)) goto l22;
x[jvj+36]=s[x[jvj+48]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+48];
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+36,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=179)) goto l24;
pile[v[22]]=436; pile[WZ1]=jvj+36; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(436,jvj+36,jvj+39)*/
pile[v[22]]=140; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+39,V25)*/
V25=pile[WZ2]; 
V36=x[jvj+36];
pile[v[22]]=102; pile[WZ1]=jvj+36; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+36,jvj+14)*/
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+16)*/
x[jvj+43]=x[jvj+16] ;z[jvj+43]=z[jvj+16];
l6:if((x[jvj+43]>0)) goto l7;
V=V25;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+24)*/
x[jvj+25]=vo[15];z[jvj+25]=vz[15];
x[jvj+45]=x[jvj+24] ;z[jvj+45]=z[jvj+24];
l11:if((x[jvj+45]>0)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+34; pile[WZ2]=V36; 
(*f[134])( );     /*OTA0(107,jvj+34,V36)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(R,107,jvj+36)*/
pile[v[22]]=T; pile[WZ1]=415; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(T,415,68)*/
l24:x[jvj+48]=t[x[jvj+48]];
goto l23;
l7:x[jvj+8]=s[x[jvj+43]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+43];
if((x[jvj+8]==x[jvj+34])) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+9)*/
x[jvj+42]=x[jvj+9] ;z[jvj+42]=z[jvj+9];
l4:if((x[jvj+42]<=0)) goto l24;
x[jvj+10]=s[x[jvj+42]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+42];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=179)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+10,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[760])( );     /*MEMEX0(jvj+14,jvj+13,jvj+15)*/
if((x[jvj+15]==135)) goto l8;
l5:x[jvj+42]=t[x[jvj+42]];
goto l4;
l8:x[jvj+43]=t[x[jvj+43]];
goto l6;
l12:x[jvj+17]=s[x[jvj+45]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+45];
if((x[jvj+17]==x[jvj+34])) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+18)*/
x[jvj+44]=x[jvj+18] ;z[jvj+44]=z[jvj+18];
l9:if((x[jvj+44]<=0)) goto l13;
x[jvj+19]=s[x[jvj+44]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+44];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=179)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+14,jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l14;
l10:x[jvj+44]=t[x[jvj+44]];
goto l9;
l14:pile[v[22]]=436; pile[WZ1]=jvj+19; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(436,jvj+19,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+26,V32)*/
V32=pile[WZ2]; 
V35=x[jvj+19];
pile[v[22]]=V32; pile[WZ1]=V; pile[WZ2]=R; pile[WZ3]=jvj+25; 
(*f[1802])( );     /*SUBST1(V32,V,R,jvj+25)*/
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=V35; 
(*f[134])( );     /*OTA0(107,jvj+17,V35)*/
l13:x[jvj+45]=t[x[jvj+45]];
goto l11;
l18:x[jvj+30]=s[x[jvj+47]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+47];
pile[v[22]]=jvj+30; pile[WZ1]=T; pile[WZ2]=67; 
(*f[1639])( );     /*DOUB0(jvj+30,T,67)*/
x[jvj+47]=t[x[jvj+47]];
goto l17;
l19:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,R,jvj+31)*/
l20:if((x[jvj+31]>0)) goto l21;
if((V48!=68)) goto l25;
pile[v[22]]=415; pile[WZ1]=T; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(415,T,jvj+40)*/
if((x[jvj+40]!=68)) goto l25;
pile[v[22]]=T; pile[WZ1]=415; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(T,415,67)*/
V48=68;
goto l15;
l21:x[jvj+2]=s[x[jvj+31]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+31];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+2,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=55)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+7)*/
if((x[jvj+7]<=0)) goto l22;
x[jvj+34]=s[x[jvj+7]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+7];
pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+35)*/
pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+3)*/
x[jvj+41]=x[jvj+3] ;z[jvj+41]=z[jvj+3];
goto l1;
l22:x[jvj+31]=t[x[jvj+31]];
goto l20;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
