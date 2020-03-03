#include "dx.h"
void ENLISNOM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,P,S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11622;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1322&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; P=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[S] ;z[jvj+2]=z[S];
x[jvj+6]=x[P] ;z[jvj+6]=z[P];
l9:x[jvj+16]=287 ;z[jvj+16]=287;
x[jvj+8]=x[jvj+16] ;z[jvj+8]=z[jvj+16];
x[jvj+9]=x[jvj+2] ;z[jvj+9]=z[jvj+2];
l10:x[jvj+10]=incon;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+8,jvj+9,jvj+10)*/
pile[v[22]]=120; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(120,jvj+10,jvj+11)*/
x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
if((x[jvj+13]==250)) goto l13;
pile[v[22]]=319; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(319,jvj+10,jvj+12)*/
if((x[jvj+12]!=x[R])) goto l14;
x[jvj+17]=x[jvj+9] ;z[jvj+17]=z[jvj+9];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+9,jvj+8,jvj+13)*/
l11:if((x[jvj+17]==250)) goto l1;
x[jvj+9]=x[jvj+17] ;z[jvj+9]=z[jvj+17];
x[jvj+8]=120 ;z[jvj+8]=120;
goto l10;
l2:x[jvj+7]=250 ;z[jvj+7]=250;
l3:pile[v[22]]=287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(287,jvj+2,jvj+4)*/
l6:x[jvj+15]=x[jvj+2] ;z[jvj+15]=z[jvj+2];
l7:if((x[jvj+15]==250)) goto l8;
if((x[jvj+7]==250)) goto l8;
x[jvj+6]=x[jvj+15] ;z[jvj+6]=z[jvj+15];
x[jvj+2]=x[jvj+7] ;z[jvj+2]=z[jvj+7];
goto l9;
l4:pile[v[22]]=120; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(120,jvj+6)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l5:x[jvj+15]=x[jvj+6] ;z[jvj+15]=z[jvj+6];
pile[v[22]]=jvj+6; pile[WZ1]=120; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+6,120,jvj+7)*/
goto l7;
l12:if(x[jvj+10]!=incon) goto l13;
l1:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+2,jvj+3)*/
x[jvj+7]=x[jvj+3] ;z[jvj+7]=z[jvj+3];
if((x[jvj+7]==250)) goto l3;
pile[v[22]]=287; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(287,jvj+2,jvj+5)*/
goto l6;
l13:pile[v[22]]=319; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(319,jvj+10,jvj+14)*/
if((x[jvj+14]!=x[R])) goto l14;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[71])( );     /*ENLV0(jvj+8,jvj+9)*/
goto l1;
l14:x[jvj+17]=x[jvj+10] ;z[jvj+17]=z[jvj+10];
goto l11;
}
