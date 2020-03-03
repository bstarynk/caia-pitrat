#include "dx.h"
void PREPOU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V5=0,I=0,II=0,JJ=0;
int E,D;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11256;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3205&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; D=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+17]=0 ;z[jvj+17]=0;
x[P]=x[jvj+17] ;z[P]=z[jvj+17];
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(365,D,jvj+11)*/
l17:if((x[jvj+11]>0)) goto l18;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:if((x[jvj+14]==26)) goto l2;
if((x[jvj+14]==27)) goto l3;
if((x[jvj+14]==28)) goto l4;
if((x[jvj+14]==29)) goto l5;
if((x[jvj+14]!=30)) goto l21;
if((I>II)) goto l8;
l21:x[jvj+20]=t[x[jvj+20]];
l20:if((x[jvj+20]<=0)) goto l19;
x[jvj+13]=s[x[jvj+20]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+20];
pile[v[22]]=jvj+13; pile[WZ1]=D; pile[WZ2]=jvj+14; pile[WZ4]=jvj+3; pile[WZ5]=jvj+15; 
(*f[3998])( );if(v[102]) goto l21;     /*PREPOUA0(jvj+13,D,jvj+14,II,jvj+3,jvj+15,JJ)*/
II=pile[WZ3]; JJ=pile[v[22]+6]; 
if((x[jvj+15]==28)) goto l6;
if((x[jvj+15]==27)) goto l7;
if((x[jvj+15]==250)) goto l1;
goto l21;
l2:if((I==II)) goto l8;
goto l21;
l3:if((I<=II)) goto l8;
goto l21;
l4:if((I<II)) goto l8;
goto l21;
l5:if((I>=II)) goto l8;
goto l21;
l6:if((I<JJ)) goto l1;
goto l21;
l7:if((I<=JJ)) goto l1;
goto l21;
l8:x[jvj+16]=incon;
x[jvj+18]=x[P] ;z[jvj+18]=z[P];
l9:if((x[jvj+18]>0)) goto l10;
pile[v[22]]=I; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(I,117,jvj+16)*/
l15:x[jvj+9]=x[jvj+16] ;z[jvj+9]=z[jvj+16];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+3,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=48)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+8)*/
x[jvj+19]=x[jvj+8] ;z[jvj+19]=z[jvj+8];
l13:if((x[jvj+19]<=0)) goto l12;
x[jvj+10]=s[x[jvj+19]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+19];
pile[v[22]]=jvj+9; pile[WZ1]=763; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+9,763,jvj+10)*/
x[jvj+19]=t[x[jvj+19]];
goto l13;
l10:x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V6!=I)) goto l11;
x[jvj+16]=x[jvj+2] ;z[jvj+16]=z[jvj+2];
goto l15;
l11:x[jvj+18]=t[x[jvj+18]];
goto l9;
l12:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==48)) goto l16;
l14:pile[v[22]]=jvj+9; pile[WZ1]=763; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+9,763,jvj+3)*/
l16:pile[v[22]]=P; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(P,jvj+9)*/
goto l21;
l18:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+12,V5)*/
V5=pile[WZ2]; 
I=V5;
x[jvj+20]=x[E] ;z[jvj+20]=z[E];
goto l20;
l19:x[jvj+11]=t[x[jvj+11]];
goto l17;
}
