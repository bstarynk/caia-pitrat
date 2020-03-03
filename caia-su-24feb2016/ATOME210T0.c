#include "dx.h"
void ATOME210T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V2=0,V25=0,V27=0,V4=0,V26=0,NK=0,V3=0,P=0,V28=0,V13=0,II=0,I=0,V5=0,V6=0,Q=0,NL=0,N=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20210;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3561&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=625)) goto l13;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,R,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+5,P)*/
P=pile[WZ2]; 
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+6,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=jvj+7; 
(*f[1007])( );if(v[102]) goto l13;     /*DECFACTPREM0(P,jvj+7)*/
x[jvj+8]=d[20];z[jvj+8]=0;
l7:if((x[jvj+8]<=0)) goto l13;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+9,R,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+9,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+13,V13)*/
V13=pile[WZ2]; 
II=V13;
if((II==0)) goto l8;
V2=incon;
if((II<0)) goto l1;
V2=II;
l9:I=V2;
pile[v[22]]=I; pile[WZ1]=jvj+14; 
(*f[1007])( );if(v[102]) goto l8;     /*DECFACTPREM0(I,jvj+14)*/
x[jvj+25]=x[jvj+7] ;z[jvj+25]=z[jvj+7];
l10:if((x[jvj+25]<=0)) goto l8;
x[jvj+15]=s[x[jvj+25]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+25];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,jvj+15,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(515,jvj+15,V6)*/
V6=pile[WZ2]; 
Q=V5;
NL=V6;
V3=incon;
x[jvj+24]=x[jvj+14] ;z[jvj+24]=z[jvj+14];
l2:if((x[jvj+24]<=0)) goto l6;
x[jvj+2]=s[x[jvj+24]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+24];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+2,V25)*/
V25=pile[WZ2]; 
if((V25!=Q)) goto l3;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+2,V26)*/
V26=pile[WZ2]; 
NK=V26;
V4=incon;
if((NK>=NL)) goto l4;
V4=NK;
l5:V3=V4;
l12:N=V3;
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=jvj+16; 
(*f[445])( );     /*TRI15(41,N,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V28,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3561; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3561,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20210; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20210,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+23,1,158,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+10; pile[WZ2]=Q; pile[WZ3]=jvj+16; 
(*f[3501])( );     /*AFP1(jvj+17,jvj+10,Q,jvj+16)*/
l11:x[jvj+25]=t[x[jvj+25]];
goto l10;
l1:V24=II+P;
V2=V24;
goto l9;
l3:x[jvj+24]=t[x[jvj+24]];
goto l2;
l4:V27=(-NL);
V4=V27;
goto l5;
l6:V3=0;
goto l12;
l8:x[jvj+8]=t[x[jvj+8]];
goto l7;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
