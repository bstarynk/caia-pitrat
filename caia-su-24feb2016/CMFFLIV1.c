#include "dx.h"
void CMFFLIV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V10=0,V13=0;
int S,RR,P,EA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11681;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4015&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; RR=pile[v[22]+1]; P=pile[v[22]+2]; EA=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l10:x[jvj+21]=x[jvj+11]=incon;
pile[v[22]]=S; pile[WZ1]=jvj+3; 
(*f[4013])( );if(v[102]) goto l9;     /*COMBI0(S,jvj+3)*/
if((x[jvj+3]!=68)) goto l9;
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+4]=d[126];z[jvj+4]=0;
x[jvj+6]=x[S] ;z[jvj+6]=z[S];
l1:x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
pile[v[22]]=459; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(459,jvj+5,jvj+7)*/
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+7,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+5,jvj+8)*/
pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+8,jvj+9)*/
pile[v[22]]=117; pile[WZ1]=V6; pile[WZ2]=218; pile[WZ3]=jvj+9; pile[WZ4]=jvj+10; 
(*f[567])( );     /*QUADRI11(117,V6,218,jvj+9,jvj+10)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+10,jvj+11)*/
l2:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+5,jvj+6)*/
goto l1;
l3:x[jvj+12]=d[126];z[jvj+12]=0;
x[jvj+14]=x[S] ;z[jvj+14]=z[S];
l4:x[jvj+13]=x[jvj+14] ;z[jvj+13]=z[jvj+14];
pile[v[22]]=218; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+13,jvj+15)*/
x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
pile[v[22]]=195; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(195,jvj+16,jvj+17)*/
for(i=x[jvj+17],V10=0;i>0;i=t[i],V10++)  ;
if((V10<=1)) goto l5;
pile[v[22]]=459; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(459,jvj+13,jvj+18)*/
pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+18,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+16,jvj+19)*/
pile[v[22]]=117; pile[WZ1]=V13; pile[WZ2]=218; pile[WZ3]=jvj+19; pile[WZ4]=jvj+20; 
(*f[567])( );     /*QUADRI11(117,V13,218,jvj+19,jvj+20)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[196])( );     /*PLUF0(jvj+12,jvj+20,jvj+21)*/
l5:pile[v[22]]=120; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+13,jvj+14)*/
goto l4;
l7:if(x[jvj+11]!=incon) goto l8;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l8:pile[v[22]]=jvj+11; pile[WZ1]=RR; pile[WZ2]=P; pile[WZ3]=jvj+23; 
(*f[4014])( );if(v[102]) goto l9;     /*METEXPO1(jvj+11,RR,P,jvj+23)*/
if((x[jvj+23]==0)) goto l10;
x[jvj+21]=0 ;z[jvj+21]=0;
if(x[jvj+21]!=incon) goto l3;
l6:if(x[jvj+21]!=incon) goto l11;
goto l10;
l11:pile[v[22]]=jvj+21; pile[WZ1]=763; pile[WZ2]=jvj+22; 
(*f[300])( );     /*TRI10(jvj+21,763,jvj+22)*/
pile[v[22]]=EA; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(EA,jvj+22)*/
goto l10;
}
