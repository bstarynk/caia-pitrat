#include "dx.h"
void CHDEG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V10=0,V11=0,V23=0,V24=0,DA=0,DB=0;
int X,R;
int D;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11486;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3747&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; R=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[R] ;z[jvj+5]=z[R];
l6:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==485)) goto l7;
if((x[jvj+7]==486)) goto l8;
if((x[jvj+7]==52)) goto l9;
if((x[jvj+7]!=25)) goto l13;
x[jvj+11]=d[20];z[jvj+11]=0;
l10:if((x[jvj+11]<=0)) goto l13;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+12,jvj+5,jvj+13)*/
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+12,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+14,jvj+5,jvj+15)*/
pile[v[22]]=X; pile[WZ1]=jvj+13; 
(*f[3747])( );     /*CHDEG0(X,jvj+13,DA)*/
DA=pile[WZ2]; 
pile[WZ1]=jvj+15; 
(*f[3747])( );     /*CHDEG0(X,jvj+15,DB)*/
DB=pile[WZ2]; 
V2=incon;
if((DA>=DB)) goto l1;
V2=DB;
l12:D=V2;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=D; return;
l1:V2=DA;
goto l12;
l3:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[3747])( );     /*CHDEG0(X,jvj+2,V11)*/
V11=pile[WZ2]; 
if(V11>V10) V10=V11;
x[jvj+8]=t[x[jvj+8]];
l2:if((x[jvj+8]>0)) goto l3;
if((V10==(-999999))) goto l13;
D=V10;
goto l15;
l5:x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=X; pile[WZ1]=jvj+3; 
(*f[3747])( );     /*CHDEG0(X,jvj+3,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=V23; 
(*f[186])( );     /*BTC0(jvj+4,117,V23)*/
x[jvj+9]=t[x[jvj+9]];
l4:if((x[jvj+9]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+4,V24)*/
V24=pile[WZ2]; 
D=V24;
goto l15;
l7:pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+8)*/
V10=(-999999);
goto l2;
l8:pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+9)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
goto l4;
l9:pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+5,jvj+10)*/
x[jvj+5]=x[jvj+10] ;z[jvj+5]=z[jvj+10];
goto l6;
l11:x[jvj+11]=t[x[jvj+11]];
goto l10;
l13:pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[760])( );     /*MEMEX0(jvj+5,X,jvj+16)*/
if((x[jvj+16]==135)) goto l14;
D=0;
goto l15;
l14:D=1;
goto l15;
}
