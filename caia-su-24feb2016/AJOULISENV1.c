#include "dx.h"
void AJOULISENV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VB=0,VA=0;
int T,HIST,PR,D,M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10397;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1167&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; HIST=pile[v[22]+1]; PR=pile[v[22]+2]; D=pile[v[22]+3]; M=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[T] ;z[jvj+3]=z[T];
x[jvj+8]=x[M] ;z[jvj+8]=z[M];
x[jvj+7]=x[D] ;z[jvj+7]=z[D];
l14:x[jvj+4]=VA=VB=incon;
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,jvj+3,jvj+4)*/
l1:pile[v[22]]=130; pile[WZ1]=PR; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,PR,VB)*/
VB=pile[WZ2]; 
l2:pile[v[22]]=715; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(715,jvj+3,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+5,VA)*/
VA=pile[WZ2]; 
l3:if(x[jvj+4]==incon) goto l4;
l7:if(VA!=incon) goto l8;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l4:if(VA!=incon) goto l5;
goto l13;
l5:if(VB!=incon) goto l6;
goto l13;
l6:if((VA<=VB)) goto l7;
pile[v[22]]=HIST; pile[WZ1]=(-20); pile[WZ2]=718; pile[WZ3]=jvj+11; 
(*f[180])( );     /*TRIENS0(HIST,(-20),718,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=PR; pile[WZ2]=715; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+11,PR,715,jvj+6)*/
pile[v[22]]=jvj+3; pile[WZ1]=120; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+3,120,jvj+6)*/
goto l7;
l8:if(VB!=incon) goto l9;
goto l13;
l9:if((VA!=VB)) goto l10;
pile[v[22]]=jvj+3; pile[WZ1]=718; pile[WZ2]=HIST; 
(*f[36])( );     /*PLUSC0(jvj+3,718,HIST)*/
l10:if((VA>=VB)) goto l11;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+7,jvj+8,jvj+9)*/
pile[v[22]]=HIST; pile[WZ1]=(-20); pile[WZ2]=718; pile[WZ3]=jvj+12; 
(*f[180])( );     /*TRIENS0(HIST,(-20),718,jvj+12)*/
pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=715; pile[WZ3]=PR; pile[WZ4]=jvj+12; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(120,jvj+9,715,PR,jvj+12,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+8,jvj+7,jvj+10)*/
l11:if(x[jvj+4]!=incon) goto l12;
goto l13;
l12:if((VA<=VB)) goto l13;
x[jvj+7]=120 ;z[jvj+7]=120;
x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
goto l14;
}
