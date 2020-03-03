#include "dx.h"
void EAP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M=0,NRR=0,V9=0,V10=0;
int NR,NK;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10522;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==75&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; NK=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=M=x[jvj+5]=incon;
if((NR!=7)) goto l1;
M=0;
l1:x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=276; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(276,jvj+3,jvj+4)*/
l2:if((NR!=0)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=510; pile[WZ2]=NK; 
(*f[43])( );     /*CHGC2(jvj+3,510,NK)*/
l5:if(x[jvj+4]!=incon) goto l6;
l7:if(M==incon) goto l8;
l11:if(x[jvj+4]!=incon) goto l12;
l17:if(x[jvj+5]!=incon) goto l18;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+6]=68 ;z[jvj+6]=68;
l14:pile[v[22]]=jvj+4; pile[WZ1]=366; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+4,366,jvj+6)*/
if(x[jvj+5]!=incon) goto l15;
l16:if((NR!=7)) goto l17;
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(498,jvj+4,jvj+8)*/
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,NRR)*/
NRR=pile[WZ1]; 
pile[v[22]]=jvj+8; pile[WZ1]=130; pile[WZ2]=NRR; 
(*f[43])( );     /*CHGC2(jvj+8,130,NRR)*/
goto l17;
l6:pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+4,jvj+5)*/
goto l7;
l8:if(x[jvj+4]!=incon) goto l9;
l10:M=NR;
goto l11;
l9:if((NR!=6)) goto l10;
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+4,M)*/
M=pile[WZ2]; 
l13:pile[v[22]]=jvj+4; pile[WZ1]=220; pile[WZ2]=NK; 
(*f[43])( );     /*CHGC2(jvj+4,220,NK)*/
l3:x[jvj+6]=incon;
if((NR==6)) goto l4;
x[jvj+6]=67 ;z[jvj+6]=67;
goto l14;
l12:if((NR>0)) goto l13;
goto l3;
l15:pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,jvj+4,jvj+7)*/
if((x[jvj+5]!=x[jvj+7])) goto l16;
pile[v[22]]=jvj+4; pile[WZ1]=130; pile[WZ2]=M; 
(*f[43])( );     /*CHGC2(jvj+4,130,M)*/
goto l16;
l18:if((x[jvj+5]!=12)) goto l19;
pile[v[22]]=0; pile[WZ1]=(-1761); 
(*f[37])( );     /*SRA0(0,(-1761),V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V9,(-3412),V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l19;
}
