#include "dx.h"
void NETTJOURNAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V16=0,V17=0;
int H,S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10972;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==442&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; S=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=860; pile[WZ1]=H; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(860,H,jvj+4)*/
if((x[jvj+4]!=1085)) goto l1;
pile[v[22]]=935; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(935,H,jvj+5)*/
if((x[jvj+5]==547)) goto l1;
pile[v[22]]=218; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+4,jvj+6)*/
pile[v[22]]=S; pile[WZ1]=jvj+6; pile[WZ2]=H; 
(*f[36])( );     /*PLUSC0(S,jvj+6,H)*/
l1:if(x[jvj+4]!=1082&&x[jvj+4]!=336) goto l2;
pile[v[22]]=935; pile[WZ1]=H; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(935,H,jvj+7)*/
if(x[jvj+7]==1000||x[jvj+7]==547||x[jvj+7]==371) goto l2;
pile[v[22]]=218; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+4,jvj+8)*/
pile[v[22]]=S; pile[WZ1]=jvj+8; pile[WZ2]=H; 
(*f[36])( );     /*PLUSC0(S,jvj+8,H)*/
l2:if((x[jvj+4]!=530)) goto l5;
pile[v[22]]=935; pile[WZ1]=H; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(935,H,jvj+9)*/
if((x[jvj+9]==547)) goto l8;
pile[v[22]]=109; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,H,jvj+10)*/
x[jvj+11]=994 ;z[jvj+11]=994;
l3:pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+11,jvj+2)*/
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+2,jvj+12)*/
if((x[jvj+12]!=x[jvj+10])) goto l4;
pile[v[22]]=860; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(860,jvj+2,jvj+13)*/
if((x[jvj+13]!=530)) goto l4;
pile[v[22]]=935; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(935,jvj+2,jvj+14)*/
if((x[jvj+14]!=547)) goto l4;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+2,V7)*/
V7=pile[WZ2]; 
pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,H,V8)*/
V8=pile[WZ2]; 
if((V7!=V8)) goto l4;
l9:x[jvj+23]=incon;
x[jvj+26]=994 ;z[jvj+26]=994;
l10:x[jvj+21]=x[jvj+26] ;z[jvj+21]=z[jvj+26];
pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(120,jvj+21,jvj+22)*/
if((x[jvj+22]!=x[H])) goto l14;
x[jvj+23]=x[jvj+21] ;z[jvj+23]=z[jvj+21];
l11:if(x[jvj+23]!=incon) goto l13;
l4:x[jvj+11]=x[jvj+2] ;z[jvj+11]=z[jvj+2];
goto l3;
l5:if((x[jvj+4]!=954)) goto l8;
pile[v[22]]=935; pile[WZ1]=H; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(935,H,jvj+15)*/
if((x[jvj+15]==325)) goto l8;
pile[v[22]]=109; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,H,jvj+16)*/
x[jvj+17]=994 ;z[jvj+17]=994;
l6:pile[v[22]]=120; pile[WZ1]=jvj+17; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+17,jvj+3)*/
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+3,jvj+18)*/
if((x[jvj+18]!=x[jvj+16])) goto l7;
pile[v[22]]=860; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+3,jvj+19)*/
if((x[jvj+19]!=954)) goto l7;
pile[v[22]]=935; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(935,jvj+3,jvj+20)*/
if((x[jvj+20]!=325)) goto l7;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+3,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,H,V17)*/
V17=pile[WZ2]; 
if((V16!=V17)) goto l7;
l15:x[jvj+29]=incon;
x[jvj+32]=994 ;z[jvj+32]=994;
l16:x[jvj+27]=x[jvj+32] ;z[jvj+27]=z[jvj+32];
pile[v[22]]=120; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(120,jvj+27,jvj+28)*/
if((x[jvj+28]!=x[H])) goto l20;
x[jvj+29]=x[jvj+27] ;z[jvj+29]=z[jvj+27];
l17:if(x[jvj+29]!=incon) goto l19;
l7:x[jvj+17]=x[jvj+3] ;z[jvj+17]=z[jvj+3];
goto l6;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l13:pile[v[22]]=120; pile[WZ1]=H; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(120,H,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+23,120,jvj+25)*/
l12:pile[v[22]]=80; pile[WZ1]=994; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(80,994,jvj+24)*/
if((x[jvj+24]!=x[H])) goto l4;
pile[v[22]]=120; pile[WZ1]=jvj+23; 
(*f[71])( );     /*ENLV0(120,jvj+23)*/
pile[v[22]]=994; pile[WZ1]=80; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(994,80,jvj+23)*/
goto l4;
l14:pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+21,jvj+26)*/
goto l10;
l19:pile[v[22]]=120; pile[WZ1]=H; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(120,H,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+29,120,jvj+31)*/
l18:pile[v[22]]=80; pile[WZ1]=994; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(80,994,jvj+30)*/
if((x[jvj+30]!=x[H])) goto l7;
pile[v[22]]=120; pile[WZ1]=jvj+29; 
(*f[71])( );     /*ENLV0(120,jvj+29)*/
pile[v[22]]=994; pile[WZ1]=80; pile[WZ2]=jvj+29; 
(*f[35])( );     /*CHGC1(994,80,jvj+29)*/
goto l7;
l20:pile[v[22]]=120; pile[WZ1]=jvj+27; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(120,jvj+27,jvj+32)*/
goto l16;
}
