#include "dx.h"
void AJOULISENV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VA=0,VB=0;
int HIST,M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10397;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==826&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[jvj+4]=VA=VB=incon;
x[jvj+9]=717 ;z[jvj+9]=717;
pile[v[22]]=717; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(717,M,jvj+3)*/
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,jvj+3,jvj+4)*/
l1:pile[v[22]]=715; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(715,jvj+3,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+5,VA)*/
VA=pile[WZ2]; 
l2:pile[v[22]]=715; pile[WZ1]=HIST; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(715,HIST,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+6,VB)*/
VB=pile[WZ2]; 
l3:if(x[jvj+3]==incon) goto l22;
l4:if(x[jvj+4]==incon) goto l5;
l9:if(VA!=incon) goto l10;
l12:if(x[jvj+3]!=incon) goto l13;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l5:if(x[jvj+3]!=incon) goto l6;
goto l9;
l6:if(VA!=incon) goto l7;
goto l21;
l7:if(VB!=incon) goto l8;
goto l21;
l8:if((VA<=VB)) goto l9;
pile[v[22]]=HIST; pile[WZ1]=(-20); pile[WZ2]=718; pile[WZ3]=jvj+13; 
(*f[180])( );     /*TRIENS0(HIST,(-20),718,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+6; pile[WZ2]=715; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+13,jvj+6,715,jvj+8)*/
pile[v[22]]=jvj+3; pile[WZ1]=120; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+3,120,jvj+8)*/
goto l9;
l10:if(VB!=incon) goto l11;
goto l12;
l11:if((VA>=VB)) goto l12;
pile[v[22]]=jvj+9; pile[WZ1]=M; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+9,M,jvj+10)*/
pile[v[22]]=HIST; pile[WZ1]=(-20); pile[WZ2]=718; pile[WZ3]=jvj+14; 
(*f[180])( );     /*TRIENS0(HIST,(-20),718,jvj+14)*/
pile[v[22]]=120; pile[WZ1]=jvj+10; pile[WZ2]=715; pile[WZ3]=jvj+6; pile[WZ4]=jvj+14; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(120,jvj+10,715,jvj+6,jvj+14,jvj+11)*/
pile[v[22]]=M; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(M,jvj+9,jvj+11)*/
goto l12;
l13:if(x[jvj+4]!=incon) goto l14;
l18:if(VA!=incon) goto l19;
goto l21;
l14:if(VA!=incon) goto l15;
goto l21;
l15:if(VB!=incon) goto l16;
goto l21;
l16:if((VA<=VB)) goto l18;
pile[v[22]]=jvj+4; pile[WZ1]=HIST; pile[WZ2]=jvj+6; pile[WZ3]=120; pile[WZ4]=jvj+3; 
(*f[1167])( );     /*AJOULISENV1(jvj+4,HIST,jvj+6,120,jvj+3)*/
goto l18;
l17:if(x[jvj+3]!=incon) goto l18;
goto l21;
l19:if(VB!=incon) goto l20;
goto l21;
l20:if((VA!=VB)) goto l21;
pile[v[22]]=jvj+3; pile[WZ1]=718; pile[WZ2]=HIST; 
(*f[36])( );     /*PLUSC0(jvj+3,718,HIST)*/
goto l21;
l22:pile[v[22]]=HIST; pile[WZ1]=(-20); pile[WZ2]=718; pile[WZ3]=jvj+12; 
(*f[180])( );     /*TRIENS0(HIST,(-20),718,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+6; pile[WZ2]=715; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+12,jvj+6,715,jvj+7)*/
pile[v[22]]=M; pile[WZ1]=717; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(M,717,jvj+7)*/
goto l4;
}
