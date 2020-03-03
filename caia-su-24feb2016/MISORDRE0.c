#include "dx.h"
void MISORDRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V34=0,V1=0,V46=0;
int M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=11897;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1693&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[M] ;z[jvj+2]=z[M];
l1:pile[v[22]]=287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(287,jvj+2,jvj+3)*/
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
l10:pile[v[22]]=319; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(319,jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+5,jvj+12)*/
if((x[jvj+12]!=448)) goto l13;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+5,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+13,jvj+14)*/
if(x[jvj+14]!=128&&x[jvj+14]!=451) goto l13;
pile[v[22]]=436; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(436,jvj+5,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=21)) goto l13;
pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,jvj+4,jvj+17)*/
x[jvj+18]=vo[13];z[jvj+18]=vz[13];
pile[WZ1]=jvj+18; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,jvj+18,jvj+11)*/
pile[v[22]]=287; pile[WZ1]=jvj+11; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(287,jvj+11,jvj+19)*/
pile[v[22]]=273; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(273,jvj+5,jvj+6)*/
l3:if((x[jvj+6]<=0)) goto l13;
W=s[x[jvj+6]];
x[jvj+20]=x[jvj+19] ;z[jvj+20]=z[jvj+19];
l14:if((x[jvj+20]==x[jvj+4])) goto l15;
pile[v[22]]=319; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(319,jvj+20,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=448)) goto l16;
pile[v[22]]=436; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(436,jvj+21,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+23,V34)*/
V34=pile[WZ2]; 
if((W!=V34)) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+21,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+24,jvj+25)*/
if(x[jvj+25]!=128&&x[jvj+25]!=451) goto l16;
V1=135;
l5:if((V1==134)) goto l17;
l4:x[jvj+6]=t[x[jvj+6]];
goto l3;
l2:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+2,jvj+4)*/
goto l10;
l6:pile[v[22]]=120; pile[WZ1]=jvj+9; 
(*f[71])( );     /*ENLV0(120,jvj+9)*/
l7:pile[v[22]]=120; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+7,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+9,120,jvj+10)*/
l8:pile[v[22]]=jvj+7; pile[WZ1]=120; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+7,120,jvj+4)*/
if((x[jvj+19]==x[jvj+4])) goto l9;
pile[v[22]]=jvj+2; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+2,120,jvj+7)*/
l12:x[jvj+2]=x[jvj+11] ;z[jvj+2]=z[jvj+11];
goto l1;
l9:pile[v[22]]=jvj+11; pile[WZ1]=287; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+11,287,jvj+7)*/
goto l12;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l13:x[jvj+2]=x[jvj+4] ;z[jvj+2]=z[jvj+4];
goto l1;
l15:V1=134;
goto l5;
l16:pile[v[22]]=120; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+20,jvj+26)*/
x[jvj+20]=x[jvj+26] ;z[jvj+20]=z[jvj+26];
goto l14;
l17:x[jvj+27]=x[jvj+17] ;z[jvj+27]=z[jvj+17];
x[jvj+34]=x[jvj+4] ;z[jvj+34]=z[jvj+4];
l18:pile[v[22]]=319; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(319,jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=448)) goto l19;
pile[v[22]]=436; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(436,jvj+28,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+30,V46)*/
V46=pile[WZ2]; 
if((W!=V46)) goto l19;
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+28,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+31,jvj+32)*/
if(x[jvj+32]!=128&&x[jvj+32]!=451) goto l19;
x[jvj+9]=x[jvj+34] ;z[jvj+9]=z[jvj+34];
x[jvj+7]=x[jvj+27] ;z[jvj+7]=z[jvj+27];
pile[v[22]]=120; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+7,jvj+8)*/
goto l7;
l19:pile[v[22]]=120; pile[WZ1]=jvj+27; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,jvj+27,jvj+33)*/
x[jvj+34]=x[jvj+27] ;z[jvj+34]=z[jvj+27];
x[jvj+27]=x[jvj+33] ;z[jvj+27]=z[jvj+33];
goto l18;
}
