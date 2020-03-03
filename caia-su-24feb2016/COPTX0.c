#include "dx.h"
void COPTX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,BT,R,RM;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11162;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1826&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; BT=pile[v[22]+1]; R=pile[v[22]+2]; RM=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=x[jvj+6]=x[jvj+3]=incon;
pile[v[22]]=1225; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1225,X,jvj+2)*/
if((x[jvj+2]==68)) goto l6;
l1:x[jvj+3]=x[X] ;z[jvj+3]=z[X];
pile[v[22]]=X; pile[WZ1]=1225; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(X,1225,68)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+3; pile[WZ3]=RM; pile[WZ4]=jvj+6; 
(*f[1987])( );     /*COPS0(R,BT,jvj+3,RM,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+7)*/
if((x[jvj+7]==42)) goto l2;
if((x[jvj+7]==452)) goto l2;
if((x[jvj+7]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if(x[jvj+5]==54||x[jvj+5]==48||x[jvj+5]==55||x[jvj+5]==50||x[jvj+5]==267||x[jvj+5]==156||x[jvj+5]==1272) goto l2;
l3:if((x[jvj+6]!=68)) goto l5;
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(184,jvj+3,jvj+8)*/
l4:if((x[jvj+8]<=0)) goto l5;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=184; pile[WZ2]=jvj+3; pile[WZ3]=jvj+9; 
(*f[1826])( );     /*COPTX0(jvj+9,184,jvj+3,jvj+9)*/
x[jvj+8]=t[x[jvj+8]];
goto l4;
l2:x[jvj+13]=x[jvj+3] ;z[jvj+13]=z[jvj+3];
goto l3;
l5:if(x[jvj+13]==incon) goto l6;
l8:if((x[jvj+6]!=68)) goto l15;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+3,jvj+10)*/
x[jvj+17]=w[x[jvj+10]][9];
l9:if((x[jvj+17]>0)) goto l10;
x[jvj+18]=w[x[jvj+10]][8];
l12:if((x[jvj+18]<=0)) goto l15;
x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
if((x[jvj+14]==184)) goto l13;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,jvj+3,jvj+15)*/
x[jvj+19]=x[jvj+15] ;z[jvj+19]=z[jvj+15];
l14:if((x[jvj+19]<=0)) goto l13;
x[jvj+16]=s[x[jvj+19]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+19];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+14; pile[WZ2]=jvj+3; pile[WZ3]=jvj+13; 
(*f[1826])( );     /*COPTX0(jvj+16,jvj+14,jvj+3,jvj+13)*/
x[jvj+19]=t[x[jvj+19]];
goto l14;
l6:x[jvj+13]=x[RM] ;z[jvj+13]=z[RM];
if(x[jvj+6]!=incon) goto l7;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l7:if(x[jvj+3]!=incon) goto l8;
goto l15;
l10:x[jvj+11]=s[x[jvj+17]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+17];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+11,jvj+3,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; pile[WZ2]=jvj+3; pile[WZ3]=jvj+13; 
(*f[1826])( );     /*COPTX0(jvj+12,jvj+11,jvj+3,jvj+13)*/
l11:x[jvj+17]=t[x[jvj+17]];
goto l9;
l13:x[jvj+18]=t[x[jvj+18]];
goto l12;
}
