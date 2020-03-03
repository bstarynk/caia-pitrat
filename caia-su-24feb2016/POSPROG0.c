#include "dx.h"
void POSPROG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V35=0,V30=0,F=0;
int AL;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11074;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==430&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; RES=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[25]>0)) goto l1;
pile[v[22]]=1274; pile[WZ1]=AL; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1274,AL,V35)*/
V35=pile[WZ2]; 
if((V35>0)) goto l3;
l4:pile[v[22]]=896; pile[WZ1]=AL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(896,AL,jvj+2)*/
if((x[jvj+2]!=0)) goto l3;
pile[v[22]]=455; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(455,AL,jvj+3)*/
l5:if((x[jvj+3]>0)) goto l6;
pile[v[22]]=454; pile[WZ1]=AL; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(454,AL,jvj+8)*/
x[jvj+27]=x[jvj+8] ;z[jvj+27]=z[jvj+8];
l8:if((x[jvj+27]>0)) goto l9;
x[jvj+28]=x[jvj+8] ;z[jvj+28]=z[jvj+8];
l11:if((x[jvj+28]<=0)) goto l15;
x[jvj+14]=s[x[jvj+28]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+28];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=454)) goto l12;
pile[v[22]]=160; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,jvj+14,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=128)) goto l12;
pile[v[22]]=128; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,jvj+16,jvj+18)*/
x[jvj+29]=x[jvj+18] ;z[jvj+29]=z[jvj+18];
l13:if((x[jvj+29]<=0)) goto l12;
x[jvj+19]=s[x[jvj+29]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+29];
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+19,jvj+20)*/
F=x[jvj+20];
if(F==473||F==472||F==766) goto l3;
l14:x[jvj+29]=t[x[jvj+29]];
goto l13;
l1:x[RES]=68 ;z[RES]=68;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==472) goto l16;
l3:x[RES]=67 ;z[RES]=67;
goto l17;
l6:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+4,jvj+5)*/
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
pile[v[22]]=1171; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[492])( );     /*FIGURE0(1171,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l3;
l7:x[jvj+3]=t[x[jvj+3]];
goto l5;
l9:x[jvj+9]=s[x[jvj+27]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+27];
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=454)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+11,jvj+12)*/
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+13,V30)*/
V30=pile[WZ2]; 
if((V30>1)) goto l3;
l10:x[jvj+27]=t[x[jvj+27]];
goto l8;
l12:x[jvj+28]=t[x[jvj+28]];
goto l11;
l16:x[jvj+8]=t[x[jvj+8]];
l15:if((x[jvj+8]<=0)) goto l1;
x[jvj+21]=s[x[jvj+8]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+8];
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=454)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+21,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+23,jvj+24)*/
x[jvj+25]=x[jvj+24] ;z[jvj+25]=z[jvj+24];
pile[v[22]]=480; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(480,jvj+25,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==473) goto l2;
goto l3;
}
