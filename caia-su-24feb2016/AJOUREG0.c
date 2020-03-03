#include "dx.h"
void AJOUREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int AT,BL,V,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=11044;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1131&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
AT=pile[v[22]]; BL=pile[v[22]+1]; V=pile[v[22]+2]; X=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(265,X,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=AT; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(AT,158,jvj+6)*/
pile[v[22]]=X; pile[WZ1]=265; 
(*f[36])( );     /*PLUSC0(X,265,jvj+6)*/
l4:pile[v[22]]=1357; pile[WZ1]=BL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1357,BL,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
pile[v[22]]=1088; pile[WZ1]=BL; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1088,BL,jvj+10)*/
l8:if((x[jvj+10]<=0)) goto l13;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+11,V13)*/
V13=pile[WZ2]; 
if((V13==(-7416))) goto l9;
pile[v[22]]=258; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(258,jvj+11,jvj+12)*/
x[jvj+46]=x[jvj+12] ;z[jvj+46]=z[jvj+12];
l10:if((x[jvj+46]<=0)) goto l9;
x[jvj+13]=s[x[jvj+46]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+46];
pile[v[22]]=447; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+13,jvj+14)*/
if((x[jvj+14]!=55)) goto l11;
pile[v[22]]=1018; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1018,jvj+13,jvj+15)*/
if((x[jvj+15]!=868)) goto l11;
pile[v[22]]=145; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(145,jvj+13,jvj+16)*/
if((x[jvj+16]!=25)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+30)*/
pile[WZ3]=1030; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,1030,jvj+45)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=103; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+45,jvj+44,jvj+34)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+17)*/
l12:pile[v[22]]=jvj+6; pile[WZ1]=jvj+17; pile[WZ2]=120; pile[WZ3]=68; pile[WZ4]=jvj+18; 
(*f[1436])( );if(v[102]) goto l13;     /*CHERSAUT0(jvj+6,jvj+17,120,68,jvj+18)*/
x[jvj+19]=366 ;z[jvj+19]=366;
l14:x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=jvj+18; pile[WZ1]=BL; pile[WZ2]=jvj+19; pile[WZ3]=jvj+20; pile[WZ4]=V; pile[WZ5]=68; pile[v[22]+6]=jvj+21; 
(*f[1408])( );if(v[102]) goto l17;     /*AJOUSAUT0(jvj+18,BL,jvj+19,jvj+20,V,68,jvj+21)*/
x[jvj+22]=incon;
if((x[jvj+21]==x[jvj+6])) goto l15;
x[jvj+22]=366 ;z[jvj+22]=366;
l18:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=BL; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,BL,jvj+35)*/
pile[WZ3]=44; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=103; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,103,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+39,jvj+38,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+22,jvj+21,jvj+23)*/
pile[v[22]]=jvj+24; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+24,120,jvj+23)*/
l16:pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[35])( );     /*CHGC1(jvj+21,jvj+22,jvj+24)*/
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[AT])) goto l3;
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=297; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(297,jvj+8,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+25)*/
pile[WZ3]=jvj+9; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=103; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+42,jvj+41,jvj+29)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+28,jvj+17)*/
goto l12;
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l9:x[jvj+10]=t[x[jvj+10]];
goto l8;
l11:x[jvj+46]=t[x[jvj+46]];
goto l10;
l13:x[jvj+18]=x[jvj+6] ;z[jvj+18]=z[jvj+6];
x[jvj+19]=120 ;z[jvj+19]=120;
goto l14;
l15:x[jvj+22]=120 ;z[jvj+22]=120;
goto l18;
}
