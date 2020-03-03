#include "dx.h"
void INIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V11=0,I=0,V7=0,V31=0,V30=0;
int S;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=10519;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1688&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[1903])( );     /*RESTVAR0()*/
pile[v[22]]=455; pile[WZ1]=S; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(455,S,jvj+7)*/
pile[v[22]]=1016; pile[WZ1]=1216; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1016,1216,jvj+8)*/
l4:if((x[jvj+7]>0)) goto l5;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+4,jvj+22)*/
pile[v[22]]=983; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(983,jvj+22,jvj+23)*/
pile[v[22]]=878; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(878,jvj+23,jvj+24)*/
l19:if((x[jvj+24]<=0)) goto l6;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=163; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,jvj+25,V31)*/
V31=pile[WZ2]; 
pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,jvj+4,V30)*/
V30=pile[WZ2]; 
if((V31==V30)) goto l20;
x[jvj+24]=t[x[jvj+24]];
goto l19;
l2:x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]<=0)) goto l17;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=688; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(688,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=1)) goto l2;
pile[v[22]]=S; pile[WZ1]=242; pile[WZ2]=688; 
(*f[35])( );     /*CHGC1(S,242,688)*/
l17:pile[v[22]]=242; pile[WZ1]=S; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(242,S,jvj+21)*/
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:x[jvj+9]=s[x[jvj+7]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=S; pile[WZ2]=jvj+9; pile[WZ3]=1216; 
(*f[690])( );     /*FIGURENS0(jvj+8,S,jvj+9,1216)*/
x[jvj+7]=t[x[jvj+7]];
goto l4;
l6:pile[v[22]]=S; pile[WZ1]=1189; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(S,1189,jvj+6)*/
pile[v[22]]=454; pile[WZ1]=S; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(454,S,jvj+10)*/
l7:if((x[jvj+10]>0)) goto l8;
pile[v[22]]=454; pile[WZ1]=S; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(454,S,jvj+2)*/
goto l1;
l8:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=925; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(925,jvj+11,jvj+12)*/
x[jvj+26]=x[jvj+12] ;z[jvj+26]=z[jvj+12];
l9:if((x[jvj+26]>0)) goto l10;
x[jvj+10]=t[x[jvj+10]];
goto l7;
l10:x[jvj+13]=s[x[jvj+26]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+26];
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+13,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+13,jvj+14)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+14; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+11,jvj+14,V7)*/
l11:x[jvj+26]=t[x[jvj+26]];
goto l9;
l12:pile[v[22]]=454; pile[WZ1]=S; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(454,S,jvj+15)*/
l13:if((x[jvj+15]<=0)) goto l18;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=160; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(160,jvj+16,jvj+17)*/
pile[v[22]]=128; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,jvj+17,jvj+18)*/
x[jvj+27]=x[jvj+18] ;z[jvj+27]=z[jvj+18];
l15:if((x[jvj+27]<=0)) goto l14;
x[jvj+19]=s[x[jvj+27]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+27];
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+19,jvj+20)*/
if((923!=x[jvj+20])) goto l16;
pile[v[22]]=S; pile[WZ1]=242; pile[WZ2]=923; 
(*f[35])( );     /*CHGC1(S,242,923)*/
goto l18;
l14:x[jvj+15]=t[x[jvj+15]];
goto l13;
l16:x[jvj+27]=t[x[jvj+27]];
goto l15;
l20:x[jvj+5]=x[jvj+25] ;z[jvj+5]=z[jvj+25];
pile[v[22]]=1180; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1180,jvj+5,V11)*/
V11=pile[WZ2]; 
I=1;
l3:if((I>V11)) goto l6;
pile[v[22]]=jvj+6; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+6,I)*/
I++;
goto l3;
}
