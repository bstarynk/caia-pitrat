#include "dx.h"
void MXDIV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,D=0,V8=0,V5=0,V6=0,P=0,V13=0,V15=0,V14=0,V12=0,V10=0,V17=0;
int FA,EN;
int L;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11686;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3676&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
FA=pile[v[22]]; EN=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+9]=x[FA] ;z[jvj+9]=z[FA];
l1:if((x[jvj+9]>0)) goto l2;
x[jvj+12]=x[jvj+3] ;z[jvj+12]=z[jvj+3];
for(i=x[jvj+12],V5=0;i>0;i=t[i],V5++)  ;
for(i=x[FA],V6=0;i>0;i=t[i],V6++)  ;
if((V5!=V6)) goto l10;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+10]=x[jvj+12] ;z[jvj+10]=z[jvj+12];
l4:if((x[jvj+10]>0)) goto l5;
pile[v[22]]=jvj+6; 
(*f[4020])( );if(v[102]) goto l10;     /*PPCMENS0(jvj+6,P)*/
P=pile[WZ1]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(0,117,jvj+8)*/
x[jvj+11]=x[jvj+12] ;z[jvj+11]=z[jvj+12];
l7:if((x[jvj+11]>0)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+8,V10)*/
V10=pile[WZ2]; 
V17=V10/P;
L=V17;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=L; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+9]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+9];
pile[v[22]]=jvj+2; pile[WZ1]=EN; 
(*f[4019])( );if(v[102]) goto l3;     /*MXDIVA0(jvj+2,EN,N,D)*/
N=pile[WZ2]; D=pile[WZ3]; 
pile[v[22]]=510; pile[WZ1]=N; pile[WZ2]=515; pile[WZ3]=D; pile[WZ4]=jvj+4; 
(*f[391])( );     /*QUADRI10(510,N,515,D,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
l3:x[jvj+9]=t[x[jvj+9]];
goto l1;
l5:x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=515; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+6,V8)*/
l6:x[jvj+10]=t[x[jvj+10]];
goto l4;
l8:x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=510; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+7,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(515,jvj+7,V15)*/
V15=pile[WZ2]; 
V14=P/V15;
V12=V13*V14;
pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=V12; 
(*f[186])( );     /*BTC0(jvj+8,117,V12)*/
l9:x[jvj+11]=t[x[jvj+11]];
goto l7;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
