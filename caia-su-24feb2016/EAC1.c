#include "dx.h"
void EAC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,H=0,V11=0,V12=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10085;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==307&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l15:x[jvj+8]=incon;
pile[v[22]]=888; pile[WZ1]=240; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(888,240,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
H=67;
pile[v[22]]=888; pile[WZ1]=240; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(888,240,jvj+11)*/
l5:if((x[jvj+11]<=0)) goto l13;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+12,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+12,jvj+13)*/
pile[v[22]]=10085; pile[WZ1]=jvj+13; pile[WZ2]=(-4348); pile[WZ3]=V11; 
(*f[685])( );     /*FAUTE1(10085,jvj+13,(-4348),V11)*/
l6:x[jvj+11]=t[x[jvj+11]];
goto l5;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=V7; pile[WZ2]=jvj+6; 
(*f[133])( );if(v[102]) goto l3;     /*TLDEBL1(jvj+5,V7,jvj+6)*/
x[jvj+8]=x[jvj+6] ;z[jvj+8]=z[jvj+6];
H=68;
pile[v[22]]=583; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(583,jvj+8,jvj+9)*/
if((x[jvj+9]==11728)) goto l4;
pile[v[22]]=1913; pile[WZ1]=11728; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1913,11728,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l4;
l7:pile[v[22]]=jvj+8; 
(*f[357])( );     /*CL0(jvj+8)*/
l13:x[jvj+17]=vo[20];z[jvj+17]=vz[20];
pile[v[22]]=jvj+17; pile[WZ1]=191; pile[WZ2]=675; 
(*f[35])( );     /*CHGC1(jvj+17,191,675)*/
pile[WZ1]=1654; pile[WZ2]=1684; 
(*f[35])( );     /*CHGC1(jvj+17,1654,1684)*/
if(x[jvj+8]!=incon) goto l8;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+10]=vo[20];z[jvj+10]=vz[20];
pile[v[22]]=jvj+10; pile[WZ1]=191; pile[WZ2]=1694; 
(*f[35])( );     /*CHGC1(jvj+10,191,1694)*/
pile[WZ1]=1654; pile[WZ2]=1699; 
(*f[35])( );     /*CHGC1(jvj+10,1654,1699)*/
goto l7;
l8:V12=incon;
if((H==67)) goto l9;
if((H!=68)) goto l10;
pile[v[22]]=888; pile[WZ1]=240; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(888,240,jvj+14)*/
if((x[jvj+14]==0)) goto l9;
l10:V12=1;
l11:if((V12!=0)) goto l12;
x[jvj+15]=vo[20];z[jvj+15]=vz[20];
pile[v[22]]=jvj+16; 
(*f[683])( );     /*MENB0(jvj+16)*/
(*f[684])( );     /*CF0(jvj+16)*/
pile[v[22]]=209; pile[WZ1]=jvj+15; 
(*f[71])( );     /*ENLV0(209,jvj+15)*/
l12:if((H!=68)) goto l14;
if((V12>0)) goto l15;
goto l14;
l9:V12=0;
goto l11;
}
