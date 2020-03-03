#include "dx.h"
void FACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=32;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+30]=0 ;z[jvj+30]=0;
x[R]=x[jvj+30] ;z[R]=z[jvj+30];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+5)*/
if((x[jvj+5]!=484)) goto l7;
pile[v[22]]=A; pile[WZ1]=jvj+6; 
(*f[200])( );if(v[102]) goto l7;     /*NDD0(A,jvj+6)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+6)*/
l7:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,A,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==52)) goto l8;
if((x[jvj+8]==486)) goto l15;
if((x[jvj+8]!=485)) goto l20;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,A,jvj+26)*/
if((x[jvj+26]<=0)) goto l20;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[1457])( );     /*FACT0(jvj+27,jvj+28)*/
l18:if((x[jvj+28]<=0)) goto l20;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
x[jvj+31]=x[jvj+26] ;z[jvj+31]=z[jvj+26];
l1:if((x[jvj+31]>0)) goto l2;
pile[v[22]]=R; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(R,jvj+29)*/
l19:x[jvj+28]=t[x[jvj+28]];
goto l18;
l2:x[jvj+1]=s[x[jvj+31]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+31];
if((x[jvj+1]==x[jvj+27])) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1457])( );     /*FACT0(jvj+1,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+29]) goto l3;
goto l19;
l3:x[jvj+31]=t[x[jvj+31]];
goto l1;
l5:x[jvj+3]=s[x[jvj+32]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+32];
if((x[jvj+3]==x[jvj+19])) goto l6;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1457])( );     /*FACT0(jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+21]) goto l6;
l14:x[jvj+20]=t[x[jvj+20]];
l13:if((x[jvj+20]<=0)) goto l20;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
x[jvj+32]=x[jvj+18] ;z[jvj+32]=z[jvj+18];
l4:if((x[jvj+32]>0)) goto l5;
pile[v[22]]=R; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(R,jvj+21)*/
goto l14;
l6:x[jvj+32]=t[x[jvj+32]];
goto l4;
l8:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,A,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l9;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l9;     /*NDD0(jvj+9,jvj+11)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+11)*/
l9:pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+9,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==486)) goto l10;
if((x[jvj+13]!=485)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+18)*/
if((x[jvj+18]<=0)) goto l20;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1457])( );     /*FACT0(jvj+19,jvj+20)*/
goto l13;
l10:pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+14)*/
l11:if((x[jvj+14]<=0)) goto l20;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l12;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(jvj+15,jvj+17)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+17)*/
l12:x[jvj+14]=t[x[jvj+14]];
goto l11;
l15:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,A,jvj+22)*/
l16:if((x[jvj+22]<=0)) goto l20;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l17;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+23,jvj+25)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+25)*/
l17:x[jvj+22]=t[x[jvj+22]];
goto l16;
l20:v[0]=jvj; v[22]-=2; return;
}
