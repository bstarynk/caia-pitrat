#include "dx.h"
void OUETRED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RA;
int EE;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=11629;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3383&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RA=pile[v[22]]; EE=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+34]=0 ;z[jvj+34]=0;
x[EE]=x[jvj+34] ;z[EE]=z[jvj+34];
pile[v[22]]=111; pile[WZ1]=RA; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,RA,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=55)) goto l17;
pile[v[22]]=107; pile[WZ1]=RA; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,RA,jvj+4)*/
if((x[jvj+4]<=0)) goto l17;
x[jvj+35]=s[x[jvj+4]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+4];
x[jvj+23]=x[jvj+35] ;z[jvj+23]=z[jvj+35];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+23]) goto l12;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+5]=s[x[jvj+38]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+38];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=48)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+8)*/
x[jvj+37]=x[jvj+8] ;z[jvj+37]=z[jvj+8];
l1:if((x[jvj+37]<=0)) goto l16;
x[jvj+10]=s[x[jvj+37]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+37];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l4;
x[jvj+37]=t[x[jvj+37]];
goto l1;
l4:x[jvj+38]=t[x[jvj+38]];
l2:if((x[jvj+38]>0)) goto l3;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+33)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+33; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+33,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+30)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+32)*/
x[jvj+39]=x[EE] ;z[jvj+39]=z[EE];
l5:if((x[jvj+39]>0)) goto l6;
pile[v[22]]=EE; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(EE,jvj+13)*/
l16:x[jvj+42]=t[x[jvj+42]];
l15:if((x[jvj+42]<=0)) goto l14;
x[jvj+9]=s[x[jvj+42]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+42];
x[jvj+38]=x[jvj+22] ;z[jvj+38]=z[jvj+22];
goto l2;
l6:x[jvj+12]=s[x[jvj+39]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+39];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l16;
x[jvj+39]=t[x[jvj+39]];
goto l5;
l8:x[jvj+15]=s[x[jvj+40]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+40];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l11;
x[jvj+40]=t[x[jvj+40]];
l7:if((x[jvj+40]>0)) goto l8;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+18)*/
l11:x[jvj+41]=t[x[jvj+41]];
l9:if((x[jvj+41]>0)) goto l10;
x[jvj+36]=x[jvj+22] ;z[jvj+36]=z[jvj+22];
if((x[jvj+36]<=0)) goto l14;
x[jvj+27]=s[x[jvj+36]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+36];
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=48)) goto l14;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+30)*/
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+31)*/
x[jvj+42]=x[jvj+31] ;z[jvj+42]=z[jvj+31];
goto l15;
l10:x[jvj+18]=s[x[jvj+41]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=48)) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
x[jvj+40]=x[jvj+21] ;z[jvj+40]=z[jvj+21];
goto l7;
l12:pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=48)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+26)*/
l13:if((x[jvj+26]<=0)) goto l17;
x[jvj+16]=s[x[jvj+26]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+26];
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+41]=x[jvj+4] ;z[jvj+41]=z[jvj+4];
goto l9;
l14:x[jvj+26]=t[x[jvj+26]];
goto l13;
}
