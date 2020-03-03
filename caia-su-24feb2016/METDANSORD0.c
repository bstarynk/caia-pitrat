#include "dx.h"
void METDANSORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V41=0,V38=0,V25=0,V=0,V22=0;
int E,Y,EE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11047;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1092&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; Y=pile[v[22]+1]; EE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=x[Y] ;z[jvj+29]=z[Y];
l23:x[jvj+13]=incon;
x[jvj+39]=x[E] ;z[jvj+39]=z[E];
l3:if((x[jvj+39]<=0)) goto l17;
x[jvj+4]=s[x[jvj+39]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+39];
for(a=x[EE];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l4;
pile[v[22]]=248; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(248,jvj+4,jvj+7)*/
if((x[jvj+7]!=0)) goto l4;
pile[v[22]]=857; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(857,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l5;
x[jvj+38]=x[E] ;z[jvj+38]=z[E];
l1:if((x[jvj+38]<=0)) goto l5;
x[jvj+2]=s[x[jvj+38]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+38];
for(a=x[EE];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l2;
pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+6)*/
if((x[jvj+6]!=0)) goto l2;
pile[v[22]]=857; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(857,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l2;
l4:x[jvj+39]=t[x[jvj+39]];
goto l3;
l2:x[jvj+38]=t[x[jvj+38]];
goto l1;
l5:x[jvj+13]=x[jvj+4] ;z[jvj+13]=z[jvj+4];
pile[v[22]]=EE; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(EE,jvj+4)*/
V41=x[jvj+13];
x[jvj+41]=x[E] ;z[jvj+41]=z[E];
l9:if((x[jvj+41]>0)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=69)) goto l17;
pile[v[22]]=108; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(108,jvj+14,jvj+16)*/
x[jvj+42]=x[jvj+16] ;z[jvj+42]=z[jvj+16];
l11:if((x[jvj+42]>0)) goto l12;
x[jvj+40]=x[jvj+16] ;z[jvj+40]=z[jvj+16];
l6:if((x[jvj+40]<=0)) goto l15;
x[jvj+8]=s[x[jvj+40]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+40];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=108)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+10,jvj+11)*/
F=x[jvj+11];
if(F==758||F==761) goto l17;
l7:x[jvj+40]=t[x[jvj+40]];
goto l6;
l8:x[jvj+43]=454 ;z[jvj+43]=454;
l14:V=V38;
x[jvj+37]=x[jvj+43] ;z[jvj+37]=z[jvj+43];
l24:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+13; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+13,jvj+32)*/
pile[WZ3]=44; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+36,jvj+35,jvj+25)*/
if((x[jvj+37]==250)) goto l18;
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+26)*/
pile[v[22]]=jvj+25; pile[WZ1]=160; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+25,160,jvj+26)*/
l18:x[jvj+30]=0 ;z[jvj+30]=0;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+13; pile[WZ2]=120; pile[WZ3]=jvj+30; pile[WZ4]=V; pile[WZ5]=67; pile[v[22]+6]=jvj+27; 
(*f[1408])( );if(v[102]) goto l20;     /*AJOUSAUT0(jvj+29,jvj+13,120,jvj+30,V,67,jvj+27)*/
if((x[jvj+27]==x[jvj+29])) goto l20;
if((x[jvj+37]==250)) goto l19;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+28)*/
pile[v[22]]=jvj+27; pile[WZ1]=160; pile[WZ2]=jvj+28; 
(*f[35])( );     /*CHGC1(jvj+27,160,jvj+28)*/
l19:pile[v[22]]=jvj+27; pile[WZ1]=366; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(jvj+27,366,jvj+25)*/
l21:pile[v[22]]=120; pile[WZ1]=jvj+29; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(120,jvj+29,jvj+31)*/
x[jvj+29]=x[jvj+31] ;z[jvj+29]=z[jvj+31];
goto l23;
l10:x[jvj+12]=s[x[jvj+41]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+41];
pile[v[22]]=248; pile[WZ1]=jvj+12; pile[WZ2]=V41; 
(*f[134])( );     /*OTA0(248,jvj+12,V41)*/
x[jvj+41]=t[x[jvj+41]];
goto l9;
l12:x[jvj+17]=s[x[jvj+42]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+42];
pile[v[22]]=103; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+17,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+18,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+17,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+19,jvj+20)*/
V25=x[jvj+20];
if(V25!=758&&V25!=761) goto l13;
x[jvj+43]=incon;
if((V25==758)) goto l8;
x[jvj+43]=455 ;z[jvj+43]=455;
goto l14;
l13:x[jvj+42]=t[x[jvj+42]];
goto l11;
l16:x[jvj+16]=t[x[jvj+16]];
l15:if((x[jvj+16]<=0)) goto l17;
x[jvj+21]=s[x[jvj+16]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+16];
pile[v[22]]=103; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+21,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+22,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+21,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=759)) goto l16;
V=V22;
x[jvj+37]=448 ;z[jvj+37]=448;
goto l24;
l17:x[jvj+37]=250 ;z[jvj+37]=250;
V=((-7141));
if(x[jvj+13]!=incon) goto l24;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l20:pile[v[22]]=jvj+29; pile[WZ1]=120; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(jvj+29,120,jvj+25)*/
goto l21;
}
