#include "dx.h"
void DEFMINMAX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,F=0,FF=0,V39=0,V47=0;
int AL,E,B;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=11271;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==403&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; E=pile[v[22]+1]; B=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=454; pile[WZ1]=AL; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(454,AL,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
x[jvj+40]=x[E] ;z[jvj+40]=z[E];
l10:if((x[jvj+40]>0)) goto l11;
x[jvj+41]=x[E] ;z[jvj+41]=z[E];
l14:if((x[jvj+41]>0)) goto l15;
x[jvj+42]=x[E] ;z[jvj+42]=z[E];
l17:if((x[jvj+42]<=0)) goto l6;
x[jvj+35]=s[x[jvj+42]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+42];
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+35,jvj+10)*/
pile[v[22]]=100; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+35,jvj+36)*/
pile[WZ1]=jvj+10; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+10,jvj+37)*/
if((x[jvj+36]!=22)) goto l18;
if((x[jvj+37]==20)) goto l7;
if((x[jvj+37]!=22)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+10,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=433)) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+10,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=149)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+17)*/
x[jvj+39]=x[jvj+17] ;z[jvj+39]=z[jvj+17];
l8:if((x[jvj+39]<=0)) goto l18;
x[jvj+18]=s[x[jvj+39]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+39];
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=452)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+18,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+20,jvj+21)*/
FF=x[jvj+21];
if(FF==25||FF==29||FF==30||FF==27||FF==28) goto l19;
l9:x[jvj+39]=t[x[jvj+39]];
goto l8;
l2:pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==472) goto l5;
l6:x[RES]=67 ;z[RES]=67;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=454)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+8,jvj+9)*/
x[jvj+2]=x[jvj+9] ;z[jvj+2]=z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4>1)) goto l6;
l1:pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==473) goto l2;
goto l6;
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
l7:pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+10,jvj+11)*/
F=x[jvj+11];
if(F==25||F==29||F==30||F==27||F==28) goto l19;
l18:x[jvj+42]=t[x[jvj+42]];
goto l17;
l11:x[jvj+22]=s[x[jvj+40]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+40];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=22)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+22,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+24,jvj+25)*/
V39=x[jvj+25];
if(V39!=55&&V39!=48) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+26)*/
pile[v[22]]=AL; pile[WZ1]=jvj+26; pile[WZ2]=B; pile[WZ3]=jvj+27; 
(*f[403])( );     /*DEFMINMAX0(AL,jvj+26,B,jvj+27)*/
if((x[jvj+27]==68)) goto l13;
l12:x[jvj+40]=t[x[jvj+40]];
goto l10;
l13:x[RES]=68 ;z[RES]=68;
goto l20;
l15:x[jvj+28]=s[x[jvj+41]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+41];
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+28,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+30,jvj+31)*/
V47=x[jvj+31];
if(V47!=1282&&V47!=1283&&V47!=1286&&V47!=1285&&V47!=1284&&V47!=1036) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+28,jvj+32)*/
pile[v[22]]=20; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[409])( );     /*TRI14(20,jvj+32,jvj+33)*/
pile[v[22]]=AL; pile[WZ1]=jvj+33; pile[WZ2]=B; pile[WZ3]=jvj+34; 
(*f[403])( );     /*DEFMINMAX0(AL,jvj+33,B,jvj+34)*/
if((x[jvj+34]==68)) goto l13;
l16:x[jvj+41]=t[x[jvj+41]];
goto l14;
l19:pile[v[22]]=jvj+35; pile[WZ1]=AL; pile[WZ2]=B; pile[WZ3]=jvj+38; 
(*f[763])( );if(v[102]) goto l18;     /*COMPTEVAR0(jvj+35,AL,B,jvj+38)*/
if((x[jvj+38]==68)) goto l13;
goto l18;
}
