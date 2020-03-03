#include "dx.h"
void EXPPB3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V10=0,V15=0;
int T,FF;
int E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10626;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==553&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; FF=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if(x[T]==324||x[T]==301||x[T]==104||x[T]==528||x[T]==981) goto l1;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(457,324,jvj+9)*/
l6:if((x[jvj+9]>0)) goto l7;
x[E]=x[jvj+12] ;z[E]=z[jvj+12];
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:pile[v[22]]=970; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(970,jvj+3,jvj+4)*/
if((x[jvj+4]==324)) goto l2;
l11:x[jvj+15]=t[x[jvj+15]];
l10:if((x[jvj+15]<=0)) goto l8;
x[jvj+3]=s[x[jvj+15]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+15];
if((x[T]==324)) goto l3;
if((x[T]==104)) goto l4;
if((x[T]!=528)) goto l2;
pile[v[22]]=1249; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1249,jvj+3,jvj+6)*/
if((x[jvj+6]==68)) goto l2;
goto l11;
l4:pile[v[22]]=970; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(970,jvj+3,jvj+5)*/
if((x[jvj+5]==324)) goto l11;
l2:pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5==(-7141))) goto l11;
l5:pile[v[22]]=1923; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1923,jvj+3,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==901) goto l11;
pile[v[22]]=498; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(498,jvj+3,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=109; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+14,109,jvj+13)*/
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+3,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=163; pile[WZ2]=V15; 
(*f[177])( );     /*CHGC4(jvj+13,163,V15)*/
l12:pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+13)*/
goto l11;
l7:x[jvj+7]=s[x[jvj+9]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+9];
pile[v[22]]=896; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(896,jvj+7,jvj+10)*/
if((x[jvj+10]!=0)) goto l8;
if((FF==(-11721))) goto l9;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(905,jvj+7,V10)*/
V10=pile[WZ2]; 
if((V10==FF)) goto l9;
l8:x[jvj+9]=t[x[jvj+9]];
goto l6;
l9:pile[v[22]]=878; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(878,jvj+7,jvj+11)*/
x[jvj+15]=x[jvj+11] ;z[jvj+15]=z[jvj+11];
goto l10;
}
