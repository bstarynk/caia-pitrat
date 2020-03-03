#include "dx.h"
void CREGRILLE11(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int XX=0,V5=0,V12=0,V3=0,V11=0,X=0,V1=0,YY=0,V10=0,V15=0,V8=0,V14=0,Y=0,V6=0,V17=0;
int NT,NO,NH,NV;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=26127;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2523&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NT=pile[v[22]]; NO=pile[v[22]+1]; NH=pile[v[22]+2]; NV=pile[v[22]+3]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
V11=NH+NO;
X=1;
l4:if((X<=V11)) goto l13;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+3,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(0,117,jvj+5)*/
V14=NV+NO;
Y=1;
l9:if((Y<=V14)) goto l14;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+5,V6)*/
V6=pile[WZ2]; 
V17=V1+V6;
NNNX=V17;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=NNNX; v[102]=0;return;
l3:pile[v[22]]=XX; pile[WZ1]=(-630); 
(*f[1010])( );if(v[102]) goto l2;     /*FVECT0(XX,(-630),V5)*/
V5=pile[WZ2]; 
if((V5!=X)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
l2:XX++;
l1:if((XX<=NT)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+2,V12)*/
V12=pile[WZ2]; 
V3=V12;
if((V3<=1)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
l5:X++;
goto l4;
l8:pile[v[22]]=YY; pile[WZ1]=(-622); 
(*f[1010])( );if(v[102]) goto l7;     /*FVECT0(YY,(-622),V10)*/
V10=pile[WZ2]; 
if((V10!=Y)) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,117,1)*/
l7:YY++;
l6:if((YY<=NT)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+4,V15)*/
V15=pile[WZ2]; 
V8=V15;
if((V8<=1)) goto l10;
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,117,1)*/
l10:Y++;
goto l9;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l13:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
XX=1;
goto l1;
l14:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
YY=1;
goto l6;
}
