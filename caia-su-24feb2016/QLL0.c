#include "dx.h"
void QLL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V60=0,V59=0,V63=0,V62=0,V66=0,V65=0;
int Y,AT,X;
int H;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; AT=pile[v[22]+1]; X=pile[v[22]+2]; H=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]==43)) goto l2;
if((x[jvj+1]!=22)) goto l6;
pile[v[22]]=107; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,X,jvj+7)*/
for(i=x[jvj+7],V16=0;i>0;i=t[i],V16++)  ;
if((V16==1)) goto l1;
if((V16<=1)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,X,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+11,jvj+12)*/
if(x[jvj+12]!=485&&x[jvj+12]!=486&&x[jvj+12]!=55&&x[jvj+12]!=48&&x[jvj+12]!=1029) goto l6;
pile[v[22]]=145; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,jvj+12,jvj+13)*/
if((x[jvj+7]<=0)) goto l6;
x[jvj+14]=s[x[jvj+7]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+7];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
x[jvj+41]=x[jvj+7] ;z[jvj+41]=z[jvj+7];
l15:if((x[jvj+41]>0)) goto l16;
l6:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,X,jvj+19)*/
x[jvj+38]=w[x[jvj+19]][9];
l7:if((x[jvj+38]>0)) goto l8;
x[jvj+39]=w[x[jvj+19]][8];
l10:if((x[jvj+39]<=0)) goto l13;
x[jvj+22]=s[x[jvj+39]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+39];
pile[v[22]]=jvj+22; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(jvj+22,X,jvj+23)*/
x[jvj+40]=x[jvj+23] ;z[jvj+40]=z[jvj+23];
l11:if((x[jvj+40]>0)) goto l12;
x[jvj+39]=t[x[jvj+39]];
goto l10;
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+10]=s[x[jvj+7]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+7];
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]!=485&&x[jvj+9]!=486&&x[jvj+9]!=55&&x[jvj+9]!=48&&x[jvj+9]!=1029) goto l6;
if((V63=w[x[AT]][1])==incon) goto l4;
if((V63!=23)) goto l22;
V62=x[X];
pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=V62; 
(*f[134])( );     /*OTA0(AT,Y,V62)*/
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+10)*/
l4:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+10; 
(*f[2189])( );     /*QLL1(Y,AT,jvj+10)*/
l13:pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=H; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(AT,Y,H)*/
v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=201)) goto l6;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,X,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=186; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,186,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+26; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+26,jvj+6)*/
if((V60=w[x[AT]][1])==incon) goto l3;
if((V60!=23)) goto l21;
V59=x[X];
pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=V59; 
(*f[134])( );     /*OTA0(AT,Y,V59)*/
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+6)*/
l3:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+6; 
(*f[2189])( );     /*QLL1(Y,AT,jvj+6)*/
goto l13;
l8:x[jvj+20]=s[x[jvj+38]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+38];
pile[v[22]]=jvj+20; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+20,X,jvj+21)*/
pile[v[22]]=X; pile[WZ1]=jvj+20; 
(*f[2189])( );     /*QLL1(X,jvj+20,jvj+21)*/
l9:x[jvj+38]=t[x[jvj+38]];
goto l7;
l12:x[jvj+24]=s[x[jvj+40]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+40];
pile[v[22]]=X; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[2189])( );     /*QLL1(X,jvj+22,jvj+24)*/
x[jvj+40]=t[x[jvj+40]];
goto l11;
l14:v[0]=jvj; v[22]-=4; v[102]=1;return;
l16:x[jvj+34]=s[x[jvj+41]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+41];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+14; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+34,jvj+14,jvj+35)*/
if((x[jvj+35]==135)) goto l17;
x[jvj+41]=t[x[jvj+41]];
goto l15;
l17:x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+42]=x[jvj+7] ;z[jvj+42]=z[jvj+7];
l18:if((x[jvj+42]>0)) goto l19;
x[jvj+16]=x[jvj+36] ;z[jvj+16]=z[jvj+36];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+13; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+13,jvj+27)*/
pile[WZ3]=jvj+12; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+32,jvj+17,107,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+33,22,100,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+28,jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+30; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+30,jvj+18)*/
if((V66=w[x[AT]][1])==incon) goto l5;
if((V66!=23)) goto l23;
V65=x[X];
pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=V65; 
(*f[134])( );     /*OTA0(AT,Y,V65)*/
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+18)*/
l5:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+18; 
(*f[2189])( );     /*QLL1(Y,AT,jvj+18)*/
goto l13;
l19:x[jvj+37]=s[x[jvj+42]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+42];
if((x[jvj+37]==x[jvj+34])) goto l20;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+37)*/
l20:x[jvj+42]=t[x[jvj+42]];
goto l18;
l21:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+6)*/
goto l3;
l22:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+10)*/
goto l4;
l23:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+18)*/
goto l5;
}
