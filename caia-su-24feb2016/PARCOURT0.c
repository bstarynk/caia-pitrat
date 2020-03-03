#include "dx.h"
void PARCOURT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V4=0,V2=0,V1=0,V3=0,V5=0,V16=0,V13=0,RES=0,V12=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0;
int S,RL,R,SN,K,LIM,M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10473;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1473&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; RL=pile[v[22]+1]; R=pile[v[22]+2]; SN=pile[v[22]+3]; K=pile[v[22]+4]; LIM=pile[v[22]+5]; M=pile[v[22]+6]; v[22]+=7; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V5=K;
l1:I=150;
if((I>M)) goto l7;
V4=v[I];
if((S==(-6275))) goto l16;
if((S==(-6290))) goto l17;
if((S==(-6277))) goto l18;
if((S==(-6278))) goto l19;
if((S==(-6279))) goto l20;
if((S==(-6280))) goto l21;
if((S==(-6281))) goto l22;
if((S==(-6276))) goto l23;
if((S!=(-6274))) goto l9;
V16=tp[V5];
x[jvj+2]=V16 ;z[jvj+2]=(V16<=sepcte) ? V16 : 0;
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+2,V13)*/
V13=pile[WZ2]; 
l8:if((x[RL]==25)) goto l11;
if((x[RL]==26)) goto l12;
if((x[RL]==27)) goto l13;
if((x[RL]==28)) goto l14;
if((x[RL]==29)) goto l15;
if((x[RL]!=30)) goto l9;
if((V13<=V4)) goto l10;
l9:RES=134;
l5:if((RES!=135)) goto l2;
pile[v[22]]=V5; 
(*f[1187])( );     /*SORELT0(V5)*/
l2:if((x[R]==324)) goto l3;
if((RES==134)) goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l3:V1=incon;
if((x[SN]==689)) goto l4;
if((x[SN]!=404)) goto l7;
if((V5<=0)) goto l7;
V3=V5-1;
V1=V3;
l6:if((V1==(-99999998))) goto l7;
V5=V1;
goto l1;
l4:if((V5>=LIM)) goto l7;
V2=V5+1;
V1=V2;
goto l6;
l10:RES=135;
goto l5;
l11:if((V13==V4)) goto l10;
goto l9;
l12:if((V13!=V4)) goto l10;
goto l9;
l13:if((V13>V4)) goto l10;
goto l9;
l14:if((V13>=V4)) goto l10;
goto l9;
l15:if((V13<V4)) goto l10;
goto l9;
l16:V12=tt[V5];
V13=V12;
goto l8;
l17:V17=tm[V5];
V13=V17;
goto l8;
l18:V18=ta1[V5];
V13=V18;
goto l8;
l19:V19=ta2[V5];
V13=V19;
goto l8;
l20:V20=ta3[V5];
V13=V20;
goto l8;
l21:V21=ta4[V5];
V13=V21;
goto l8;
l22:V22=ta5[V5];
V13=V22;
goto l8;
l23:V23=tn[V5];
V13=V23;
goto l8;
}
