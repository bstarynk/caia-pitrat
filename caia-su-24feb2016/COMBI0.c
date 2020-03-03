#include "dx.h"
void COMBI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11287;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4013&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+7]=x[R]=incon;
pile[v[22]]=459; pile[WZ1]=S; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(459,S,jvj+2)*/
l1:pile[v[22]]=120; pile[WZ1]=S; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,S,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+7; 
(*f[4013])( );if(v[102]) goto l10;     /*COMBI0(jvj+3,jvj+7)*/
if((x[jvj+7]==68)) goto l6;
if(x[jvj+2]!=incon) goto l7;
l8:if((x[jvj+7]==67)) goto l9;
l10:if(x[jvj+2]!=incon) goto l11;
l14:if(x[R]!=incon) goto l15;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:if(x[jvj+2]!=incon) goto l3;
l5:pile[v[22]]=447; pile[WZ1]=S; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(447,S,jvj+6)*/
x[R]=67 ;z[R]=67;
pile[v[22]]=S; pile[WZ1]=459; 
(*f[35])( );     /*CHGC1(S,459,jvj+6)*/
goto l10;
l3:if((x[jvj+2]==250)) goto l4;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+2,jvj+5)*/
x[R]=68 ;z[R]=68;
pile[v[22]]=S; pile[WZ1]=459; 
(*f[35])( );     /*CHGC1(S,459,jvj+5)*/
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l4:pile[v[22]]=447; pile[WZ1]=S; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(447,S,jvj+4)*/
x[R]=68 ;z[R]=68;
pile[v[22]]=S; pile[WZ1]=459; 
(*f[35])( );     /*CHGC1(S,459,jvj+4)*/
goto l15;
l6:x[R]=68 ;z[R]=68;
goto l10;
l7:if((x[jvj+7]!=67)) goto l8;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(120,jvj+2,jvj+8)*/
x[R]=68 ;z[R]=68;
pile[v[22]]=S; pile[WZ1]=459; 
(*f[35])( );     /*CHGC1(S,459,jvj+8)*/
goto l15;
l9:pile[v[22]]=447; pile[WZ1]=S; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(447,S,jvj+9)*/
x[R]=67 ;z[R]=67;
pile[v[22]]=S; pile[WZ1]=459; 
(*f[35])( );     /*CHGC1(S,459,jvj+9)*/
goto l10;
l11:if(x[jvj+7]!=incon) goto l12;
goto l14;
l12:if((x[jvj+7]!=68)) goto l14;
if((x[jvj+2]!=250)) goto l14;
pile[v[22]]=447; pile[WZ1]=S; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(447,S,jvj+10)*/
pile[v[22]]=S; pile[WZ1]=459; 
(*f[35])( );     /*CHGC1(S,459,jvj+10)*/
goto l14;
}
