#include "dx.h"
void CPNBVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,Y;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11387;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1171&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Y=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,Y,jvj+9)*/
if(x[jvj+9]==41||x[jvj+9]==89||x[jvj+9]==20) goto l9;
if((x[jvj+9]==484)) goto l6;
if((x[jvj+9]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,Y,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]==650||x[jvj+3]==654||x[jvj+3]==653) goto l7;
l3:x[jvj+4]=d[6];z[jvj+4]=0;
l1:if((x[jvj+4]>0)) goto l2;
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,Y,jvj+8)*/
l5:if((x[jvj+8]<=0)) goto l9;
x[jvj+7]=s[x[jvj+8]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+8];
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[1171])( );     /*CPNBVAR0(R,jvj+7)*/
x[jvj+8]=t[x[jvj+8]];
goto l5;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=Y; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+5,Y,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[1171])( );     /*CPNBVAR0(R,jvj+7)*/
l4:x[jvj+4]=t[x[jvj+4]];
goto l1;
l6:pile[v[22]]=R; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(R,117,1)*/
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l7:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,Y,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==654)) goto l9;
if((x[jvj+11]!=650)) goto l8;
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,Y,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]==484)) goto l6;
l8:pile[v[22]]=R; pile[WZ1]=218; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(R,218,67)*/
goto l9;
}
