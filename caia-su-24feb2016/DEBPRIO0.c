#include "dx.h"
void DEBPRIO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0;
int X,ND;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=11314;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==705&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; ND=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+2,jvj+3)*/
pile[v[22]]=11639; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[492])( );     /*FIGURE0(11639,jvj+3,jvj+21)*/
if((x[jvj+21]==135)) goto l16;
l4:x[jvj+41]=incon;
pile[v[22]]=1423; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1423,jvj+3,jvj+13)*/
if((x[jvj+13]!=68)) goto l6;
x[jvj+41]=606 ;z[jvj+41]=606;
l6:pile[v[22]]=1297; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1297,jvj+3,jvj+14)*/
if((x[jvj+14]!=68)) goto l8;
pile[v[22]]=1033; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1033,jvj+3,jvj+15)*/
if((x[jvj+15]!=68)) goto l8;
pile[v[22]]=1423; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1423,jvj+3,jvj+12)*/
if((x[jvj+12]==68)) goto l8;
l7:x[jvj+41]=605 ;z[jvj+41]=605;
l8:pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(184,jvj+3,jvj+16)*/
l9:if((x[jvj+16]>0)) goto l10;
if(x[jvj+41]==incon) goto l15;
l1:pile[v[22]]=1297; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1297,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l17;
l2:pile[v[22]]=1033; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1033,jvj+3,jvj+5)*/
if((x[jvj+5]==68)) goto l17;
l3:pile[v[22]]=1859; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[492])( );     /*FIGURE0(1859,jvj+3,jvj+6)*/
if((x[jvj+6]==135)) goto l17;
l33:x[jvj+37]=d[42];z[jvj+37]=0;
l31:if((x[jvj+37]>0)) goto l32;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l10:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=105; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(105,jvj+17,jvj+18)*/
x[jvj+40]=x[jvj+18] ;z[jvj+40]=z[jvj+18];
l11:if((x[jvj+40]>0)) goto l12;
x[jvj+16]=t[x[jvj+16]];
goto l9;
l12:x[jvj+9]=s[x[jvj+40]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+40];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+9,jvj+7)*/
pile[v[22]]=100; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+9,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+7,jvj+20)*/
if((x[jvj+19]!=73)) goto l13;
if((x[jvj+20]==580)) goto l14;
F=x[jvj+20];
if(F!=1318&&F!=902&&F!=904) goto l5;
pile[v[22]]=100; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]==20)) goto l14;
l5:if((x[jvj+20]!=1342)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==1287)) goto l14;
l13:x[jvj+40]=t[x[jvj+40]];
goto l11;
l14:x[jvj+41]=602 ;z[jvj+41]=602;
goto l1;
l15:x[jvj+41]=206 ;z[jvj+41]=206;
goto l1;
l16:pile[v[22]]=jvj+3; pile[WZ1]=1600; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,1600,68)*/
goto l4;
l17:x[jvj+23]=x[jvj+41] ;z[jvj+23]=z[jvj+41];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=187; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,187,jvj+22)*/
pile[v[22]]=X; pile[WZ1]=102; pile[WZ2]=jvj+22; 
(*f[35])( );     /*CHGC1(X,102,jvj+22)*/
x[jvj+28]=incon;
pile[v[22]]=196; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(196,jvj+23,jvj+24)*/
pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(196,jvj+24,jvj+25)*/
pile[v[22]]=1232; pile[WZ1]=jvj+3; pile[WZ2]=jvj+26; 
(*f[492])( );     /*FIGURE0(1232,jvj+3,jvj+26)*/
if((x[jvj+26]==135)) goto l18;
l19:pile[v[22]]=312; pile[WZ1]=jvj+3; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(312,jvj+3,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==10879) goto l20;
l21:for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==10312) goto l22;
if(x[jvj+28]==incon) goto l23;
l24:x[jvj+32]=incon;
pile[v[22]]=196; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(196,jvj+28,jvj+29)*/
pile[v[22]]=11294; pile[WZ1]=jvj+3; pile[WZ2]=jvj+30; 
(*f[492])( );     /*FIGURE0(11294,jvj+3,jvj+30)*/
if((x[jvj+30]==135)) goto l25;
l26:pile[v[22]]=1600; pile[WZ1]=jvj+3; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(1600,jvj+3,jvj+31)*/
if((x[jvj+31]!=68)) goto l27;
pile[v[22]]=242; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(242,jvj+28,jvj+32)*/
l29:x[jvj+33]=x[jvj+32] ;z[jvj+33]=z[jvj+32];
if((ND>0)) goto l30;
if((ND!=0)) goto l33;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+33; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+33,jvj+36)*/
pile[v[22]]=X; pile[WZ1]=959; pile[WZ2]=jvj+36; 
(*f[35])( );     /*CHGC1(X,959,jvj+36)*/
goto l33;
l18:x[jvj+28]=x[jvj+25] ;z[jvj+28]=z[jvj+25];
goto l19;
l20:x[jvj+28]=x[jvj+25] ;z[jvj+28]=z[jvj+25];
goto l21;
l22:x[jvj+28]=x[jvj+25] ;z[jvj+28]=z[jvj+25];
goto l24;
l23:x[jvj+28]=x[jvj+23] ;z[jvj+28]=z[jvj+23];
goto l24;
l25:x[jvj+32]=x[jvj+29] ;z[jvj+32]=z[jvj+29];
goto l26;
l27:if(x[jvj+32]==incon) goto l28;
goto l29;
l28:x[jvj+32]=x[jvj+28] ;z[jvj+32]=z[jvj+28];
goto l29;
l30:pile[v[22]]=jvj+33; pile[WZ1]=X; pile[WZ2]=ND; pile[WZ3]=jvj+3; pile[WZ4]=jvj+34; 
(*f[1094])( );     /*MODIFPRIO0(jvj+33,X,ND,jvj+3,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+34; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,jvj+35)*/
pile[v[22]]=X; pile[WZ1]=959; pile[WZ2]=jvj+35; 
(*f[35])( );     /*CHGC1(X,959,jvj+35)*/
goto l33;
l32:x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=jvj+38; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+38,X,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=ND; 
(*f[705])( );     /*DEBPRIO0(jvj+39,ND)*/
l34:x[jvj+37]=t[x[jvj+37]];
goto l31;
}
