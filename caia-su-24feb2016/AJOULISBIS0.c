#include "dx.h"
void AJOULISBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,DX=0,V1=0,V28=0,V31=0,V27=0,V14=0,V13=0,S=0,V20=0;
int VB,HIST,Q,TY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=11585;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1594&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
VB=pile[v[22]]; HIST=pile[v[22]+1]; Q=pile[v[22]+2]; TY=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
S=incon;
pile[v[22]]=111; pile[WZ1]=Q; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,Q,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==250)) goto l9;
V1=incon;
pile[v[22]]=1547; pile[WZ1]=Q; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1547,Q,DX)*/
DX=pile[WZ2]; 
V1=DX;
l1:if((V1<0)) goto l2;
pile[v[22]]=1417; pile[WZ1]=VB; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1417,VB,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==V1) goto l2;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1545,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V1) goto l2;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:pile[v[22]]=107; pile[WZ1]=Q; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,Q,jvj+6)*/
l3:if((x[jvj+6]>0)) goto l4;
x[jvj+18]=vo[13];z[jvj+18]=vz[13];
pile[v[22]]=jvj+18; pile[WZ1]=TY; pile[WZ2]=jvj+19; 
(*f[1781])( );if(v[102]) goto l19;     /*INSVAL1(jvj+18,TY,jvj+19)*/
pile[v[22]]=246; pile[WZ1]=Q; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(246,Q,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=287; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(287,jvj+19,jvj+20)*/
l13:x[jvj+21]=x[jvj+20] ;z[jvj+21]=z[jvj+20];
pile[v[22]]=246; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(246,jvj+21,V13)*/
V13=pile[WZ2]; 
if((V13!=V14)) goto l14;
pile[v[22]]=319; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(319,jvj+21,jvj+22)*/
if((x[jvj+22]!=x[VB])) goto l14;
S=12;
l16:if(S==incon) goto l17;
goto l19;
l4:x[jvj+5]=s[x[jvj+6]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+6];
pile[v[22]]=jvj+5; 
(*f[1780])( );if(v[102]) goto l19;     /*EVL5(jvj+5,V2)*/
V2=pile[WZ1]; 
if((V2==135)) goto l5;
goto l19;
l5:x[jvj+6]=t[x[jvj+6]];
goto l3;
l6:V1=(-1);
goto l1;
l9:pile[v[22]]=763; pile[WZ1]=Q; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(763,Q,jvj+17)*/
l10:if((x[jvj+17]<=0)) goto l19;
x[jvj+8]=s[x[jvj+17]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+17];
x[jvj+7]=vo[12];z[jvj+7]=vz[12];
pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+7,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(110,jvj+8,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+8,jvj+9)*/
pile[v[22]]=345; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(345,jvj+9,jvj+10)*/
pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(365,jvj+10,jvj+11)*/
x[jvj+33]=x[jvj+11] ;z[jvj+33]=z[jvj+11];
l7:if((x[jvj+33]<=0)) goto l11;
x[jvj+12]=s[x[jvj+33]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+33];
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+12,V27)*/
V27=pile[WZ2]; 
if((V27!=V28)) goto l8;
pile[v[22]]=288; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(288,jvj+12,jvj+13)*/
if(x[jvj+13]!=44&&x[jvj+13]!=187) goto l8;
pile[v[22]]=222; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(222,jvj+12,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==V31) goto l12;
l8:x[jvj+33]=t[x[jvj+33]];
goto l7;
l12:pile[v[22]]=HIST; pile[WZ1]=VB; pile[WZ2]=Q; pile[WZ3]=TY; pile[WZ4]=jvj+12; 
(*f[1782])( );     /*AJOULISNOUV0(HIST,VB,Q,TY,jvj+12)*/
l11:x[jvj+17]=t[x[jvj+17]];
goto l10;
l14:pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+21,jvj+20)*/
goto l13;
l17:pile[v[22]]=102; pile[WZ1]=Q; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,Q,jvj+25)*/
pile[v[22]]=103; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,Q,jvj+26)*/
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,Q,jvj+27)*/
pile[v[22]]=HIST; pile[WZ1]=746; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(HIST,746,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=VB; pile[WZ2]=319; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,VB,319,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=V14; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,V14,246,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+27; pile[WZ2]=111; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,jvj+27,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+26,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+32; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+25,jvj+32,jvj+24)*/
pile[v[22]]=287; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(287,jvj+19,jvj+23)*/
pile[v[22]]=jvj+24; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+24,120,jvj+23)*/
l15:pile[v[22]]=1547; pile[WZ1]=Q; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1547,Q,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=1547; pile[WZ2]=V20; 
(*f[43])( );     /*CHGC2(jvj+24,1547,V20)*/
l18:pile[v[22]]=jvj+19; pile[WZ1]=287; pile[WZ2]=jvj+24; 
(*f[35])( );     /*CHGC1(jvj+19,287,jvj+24)*/
goto l19;
}
