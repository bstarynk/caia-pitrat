#include "dx.h"
void QLL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V60=0,V59=0,V63=0,V62=0,V66=0,V65=0;
int Y,AT,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; AT=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[X] ;z[jvj+1]=z[X];
l2:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]==43)) goto l3;
if((x[jvj+2]!=22)) goto l4;
pile[v[22]]=107; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+7)*/
for(i=x[jvj+7],V16=0;i>0;i=t[i],V16++)  ;
if((V16==1)) goto l1;
if((V16<=1)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
if(x[jvj+11]!=485&&x[jvj+11]!=486&&x[jvj+11]!=55&&x[jvj+11]!=48&&x[jvj+11]!=1029) goto l4;
pile[v[22]]=145; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(145,jvj+11,jvj+12)*/
if((x[jvj+7]<=0)) goto l4;
x[jvj+13]=s[x[jvj+7]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+7];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
x[jvj+42]=x[jvj+7] ;z[jvj+42]=z[jvj+7];
l15:if((x[jvj+42]>0)) goto l16;
l4:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+1,jvj+17)*/
x[jvj+39]=w[x[jvj+17]][9];
l5:if((x[jvj+39]>0)) goto l6;
x[jvj+40]=w[x[jvj+17]][8];
l8:if((x[jvj+40]<=0)) goto l11;
x[jvj+20]=s[x[jvj+40]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+40];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+1; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(jvj+20,jvj+1,jvj+21)*/
x[jvj+41]=x[jvj+21] ;z[jvj+41]=z[jvj+21];
l9:if((x[jvj+41]>0)) goto l10;
x[jvj+40]=t[x[jvj+40]];
goto l8;
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+38]=s[x[jvj+7]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+7];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]!=485&&x[jvj+9]!=486&&x[jvj+9]!=55&&x[jvj+9]!=48&&x[jvj+9]!=1029) goto l4;
if((V63=w[x[AT]][1])==incon) goto l13;
if((V63!=23)) goto l22;
V62=x[jvj+1];
pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=V62; 
(*f[134])( );     /*OTA0(AT,Y,V62)*/
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+38)*/
l13:x[jvj+1]=x[jvj+38] ;z[jvj+1]=z[jvj+38];
goto l2;
l3:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+1,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=201)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+1,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=186; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,186,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+24; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+24,jvj+25)*/
if((V60=w[x[AT]][1])==incon) goto l12;
if((V60!=23)) goto l21;
V59=x[jvj+1];
pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=V59; 
(*f[134])( );     /*OTA0(AT,Y,V59)*/
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+25)*/
l12:x[jvj+1]=x[jvj+25] ;z[jvj+1]=z[jvj+25];
goto l2;
l6:x[jvj+18]=s[x[jvj+39]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+39];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+1; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+18,jvj+1,jvj+19)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+18; 
(*f[2189])( );     /*QLL1(jvj+1,jvj+18,jvj+19)*/
l7:x[jvj+39]=t[x[jvj+39]];
goto l5;
l10:x[jvj+22]=s[x[jvj+41]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+41];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+20; pile[WZ2]=jvj+22; 
(*f[2189])( );     /*QLL1(jvj+1,jvj+20,jvj+22)*/
x[jvj+41]=t[x[jvj+41]];
goto l9;
l11:v[0]=jvj; v[22]-=3; return;
l16:x[jvj+34]=s[x[jvj+42]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+42];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+13; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+34,jvj+13,jvj+35)*/
if((x[jvj+35]==135)) goto l17;
x[jvj+42]=t[x[jvj+42]];
goto l15;
l17:x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+43]=x[jvj+7] ;z[jvj+43]=z[jvj+7];
l18:if((x[jvj+43]>0)) goto l19;
x[jvj+15]=x[jvj+36] ;z[jvj+15]=z[jvj+36];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+26)*/
pile[WZ3]=jvj+11; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+11,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+32,jvj+16,107,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+33,22,100,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+29; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+29,jvj+30)*/
if((V66=w[x[AT]][1])==incon) goto l14;
if((V66!=23)) goto l23;
V65=x[jvj+1];
pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=V65; 
(*f[134])( );     /*OTA0(AT,Y,V65)*/
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+30)*/
l14:x[jvj+1]=x[jvj+30] ;z[jvj+1]=z[jvj+30];
goto l2;
l19:x[jvj+37]=s[x[jvj+43]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+43];
if((x[jvj+37]==x[jvj+34])) goto l20;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+37)*/
l20:x[jvj+43]=t[x[jvj+43]];
goto l18;
l21:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+25)*/
goto l12;
l22:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+38; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+38)*/
goto l13;
l23:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+30; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+30)*/
goto l14;
}
