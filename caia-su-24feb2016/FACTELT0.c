#include "dx.h"
void FACTELT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V1=0,Z=0,V27=0,V10=0,N=0,I=0,V21=0,V29=0;
int X,P,MM;
int E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11292;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4009&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; P=pile[v[22]+1]; MM=pile[v[22]+2]; E=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=x[jvj+4]=x[E]=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,X,jvj+3)*/
if((x[jvj+3]!=484)) goto l9;
pile[v[22]]=X; pile[WZ1]=jvj+4; 
(*f[200])( );if(v[102]) goto l9;     /*NDD0(X,jvj+4)*/
pile[v[22]]=1310; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1310,jvj+4,jvj+5)*/
l6:if((x[jvj+5]>0)) goto l7;
pile[v[22]]=1287; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1287,jvj+4,jvj+8)*/
if((x[jvj+8]==0)) goto l9;
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=jvj+9; 
(*f[445])( );     /*TRI15(41,0,jvj+9)*/
l9:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,X,N)*/
N=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=jvj+10; 
(*f[1007])( );if(v[102]) goto l11;     /*DECFACTPREM0(N,jvj+10)*/
V1=incon;
l1:if((x[jvj+10]<=0)) goto l3;
x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4!=P)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+2,V1)*/
V1=pile[WZ2]; 
l10:pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=E; 
(*f[445])( );     /*TRI15(41,V1,E)*/
l11:if(x[jvj+9]==incon) goto l12;
l20:if(x[E]==incon) goto l21;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+10]=t[x[jvj+10]];
goto l1;
l3:V1=0;
goto l10;
l5:Z=s[V27];
if((Z<0)) goto l8;
V27=t[V27];
l4:if((V27>0)) goto l5;
x[jvj+9]=x[jvj+7] ;z[jvj+9]=z[jvj+7];
goto l9;
l7:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+6,V10)*/
V10=pile[WZ2]; 
if((V10!=P)) goto l8;
pile[v[22]]=195; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,jvj+6,jvj+7)*/
V27=x[jvj+7];
goto l4;
l8:x[jvj+5]=t[x[jvj+5]];
goto l6;
l12:if(x[jvj+4]!=incon) goto l13;
l16:if((MM<0)) goto l20;
x[jvj+13]=0 ;z[jvj+13]=0;
I=0;
l14:if((I<=MM)) goto l15;
x[jvj+9]=x[jvj+13] ;z[jvj+9]=z[jvj+13];
goto l20;
l13:pile[v[22]]=131; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(131,jvj+4,jvj+12)*/
if((x[jvj+12]!=68)) goto l16;
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=jvj+11; pile[WZ1]=0; 
(*f[207])( );     /*PLUE2(jvj+11,0)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+11,1)*/
x[jvj+9]=x[jvj+11] ;z[jvj+9]=z[jvj+11];
goto l20;
l15:pile[v[22]]=jvj+13; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+13,I)*/
I++;
goto l14;
l18:V21=s[V29];
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V21) goto l19;
pile[v[22]]=jvj+14; pile[WZ1]=V21; 
(*f[207])( );     /*PLUE2(jvj+14,V21)*/
l19:V29=t[V29];
l17:if((V29>0)) goto l18;
x[E]=x[jvj+14] ;z[E]=z[jvj+14];
goto l26;
l21:if(x[jvj+4]!=incon) goto l22;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l22:if(x[jvj+9]!=incon) goto l23;
goto l25;
l23:pile[v[22]]=1344; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1344,jvj+4,jvj+15)*/
if((x[jvj+15]==0)) goto l24;
x[jvj+14]=0 ;z[jvj+14]=0;
V29=x[jvj+9];
goto l17;
l24:x[E]=x[jvj+9] ;z[E]=z[jvj+9];
goto l26;
}
