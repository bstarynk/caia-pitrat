#include "dx.h"
void GEREDX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V10=0,V6=0,V5=0,EZ=0;
int XA,NA,NB,HA,HB,PB,XB;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=11671;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1468&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
XA=pile[v[22]]; NA=pile[v[22]+1]; NB=pile[v[22]+2]; HA=pile[v[22]+3]; HB=pile[v[22]+4]; PB=pile[v[22]+5]; XB=pile[v[22]+6]; v[22]+=7; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=905; pile[WZ1]=PB; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(905,PB,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(457,324,jvj+6)*/
l6:if((x[jvj+6]<=0)) goto l10;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=905; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(905,jvj+7,V5)*/
V5=pile[WZ2]; 
if((V5!=V6)) goto l7;
pile[v[22]]=983; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(983,jvj+7,jvj+8)*/
pile[v[22]]=878; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(878,jvj+8,jvj+9)*/
x[jvj+32]=x[jvj+9] ;z[jvj+32]=z[jvj+9];
l8:if((x[jvj+32]<=0)) goto l7;
x[jvj+3]=s[x[jvj+32]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+32];
pile[v[22]]=1543; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1543,jvj+3,jvj+4)*/
x[jvj+30]=x[jvj+4] ;z[jvj+30]=z[jvj+4];
l1:if((x[jvj+30]>0)) goto l2;
x[jvj+31]=x[jvj+4] ;z[jvj+31]=z[jvj+4];
l4:if((x[jvj+31]<=0)) goto l9;
x[jvj+5]=s[x[jvj+31]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+31];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+5,V10)*/
V10=pile[WZ2]; 
if((V10!=NA)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+10; 
(*f[1179])( );if(v[102]) goto l9;     /*TRDESSAIS0(jvj+3,jvj+10)*/
pile[v[22]]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+10)*/
l9:x[jvj+32]=t[x[jvj+32]];
goto l8;
l2:x[jvj+2]=s[x[jvj+30]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+30];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+2,V12)*/
V12=pile[WZ2]; 
if((V12==NB)) goto l9;
l3:x[jvj+30]=t[x[jvj+30]];
goto l1;
l5:x[jvj+31]=t[x[jvj+31]];
goto l4;
l7:x[jvj+6]=t[x[jvj+6]];
goto l6;
l10:EZ=x[jvj+11];
pile[v[22]]=jvj+11; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[300])( );     /*TRI10(jvj+11,159,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=300; pile[WZ2]=158; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+27,300,158,jvj+12)*/
pile[v[22]]=XA; pile[WZ1]=763; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(XA,763,jvj+12)*/
x[jvj+16]=0 ;z[jvj+16]=0;
pile[v[22]]=297; pile[WZ1]=1005; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(297,1005,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=HB; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(jvj+13,HB,jvj+14)*/
pile[WZ1]=HA; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+13,HA,jvj+15)*/
l11:if((x[jvj+15]<=0)) goto l18;
x[jvj+17]=s[x[jvj+15]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+15];
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[jvj+17]) goto l12;
for(a=EZ;a>0;a=t[a]) if(s[a]==x[jvj+17]) goto l12;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+17)*/
l12:x[jvj+15]=t[x[jvj+15]];
goto l11;
l16:x[jvj+18]=s[x[jvj+25]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+25];
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=297; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(297,jvj+18,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=HA; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(jvj+19,HA,jvj+20)*/
pile[WZ1]=HB; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(jvj+19,HB,jvj+21)*/
x[jvj+33]=x[jvj+21] ;z[jvj+33]=z[jvj+21];
l13:if((x[jvj+33]<=0)) goto l19;
x[jvj+23]=s[x[jvj+33]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+33];
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==x[jvj+23]) goto l14;
for(a=EZ;a>0;a=t[a]) if(s[a]==x[jvj+23]) goto l14;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+23)*/
l14:x[jvj+33]=t[x[jvj+33]];
goto l13;
l18:pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+28; 
(*f[300])( );     /*TRI10(jvj+16,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1005; pile[WZ2]=158; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+28,1005,158,jvj+24)*/
pile[v[22]]=XA; pile[WZ1]=763; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(XA,763,jvj+24)*/
x[jvj+25]=d[191];z[jvj+25]=0;
l15:if((x[jvj+25]>0)) goto l16;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l19:pile[v[22]]=jvj+22; pile[WZ1]=159; pile[WZ2]=jvj+29; 
(*f[300])( );     /*TRI10(jvj+22,159,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+18; pile[WZ2]=158; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+29,jvj+18,158,jvj+26)*/
pile[v[22]]=XB; pile[WZ1]=763; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(XB,763,jvj+26)*/
x[jvj+25]=t[x[jvj+25]];
goto l15;
}
