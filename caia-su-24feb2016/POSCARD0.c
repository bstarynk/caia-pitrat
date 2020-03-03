#include "dx.h"
void POSCARD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,I=0,F=0,V13=0,V11=0,V16=0,V15=0,V24=0,V22=0,N=0,M=0,V30=0,V25=0,V26=0,V28=0,V27=0,V35=0,V34=0,MX=0,MN=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=11244;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2031&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+24]=0 ;z[jvj+24]=0;
x[jvj+10]=x[jvj+24] ;z[jvj+10]=z[jvj+24];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,117,jvj+11)*/
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+23]=x[A] ;z[jvj+23]=z[A];
l1:if((x[jvj+23]>0)) goto l2;
F=x[jvj+4];
x[jvj+27]=x[A] ;z[jvj+27]=z[A];
l15:if((x[jvj+27]>0)) goto l16;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+11,V28)*/
V28=pile[WZ2]; 
for(i=x[A],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=V28)) goto l25;
V25=incon;
for(i=x[jvj+10],V30=0;i>0;i=t[i],V30++)  ;
if((V30<=V27)) goto l21;
V25=V27;
l22:V26=incon;
pile[v[22]]=218; pile[WZ1]=jvj+11; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(218,jvj+11,jvj+20)*/
if((x[jvj+20]!=68)) goto l23;
V26=1;
l24:for(i=F,V35=0;i>0;i=t[i],V35++)  ;
V34=V35+V26;
MX=V25;
MN=V34;
pile[v[22]]=MN; pile[WZ1]=280; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(MN,280,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+10; pile[WZ2]=195; pile[WZ3]=jvj+22; 
(*f[301])( );     /*TRI11(jvj+21,jvj+10,195,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=MX; pile[WZ2]=164; pile[WZ3]=R; 
(*f[189])( );     /*TRI4(jvj+22,MX,164,R)*/
l26:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+23]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+23];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+3,V4)*/
V4=pile[WZ2]; 
I=V4;
pile[v[22]]=jvj+4; pile[WZ1]=I; 
(*f[207])( );     /*PLUE2(jvj+4,I)*/
l3:x[jvj+23]=t[x[jvj+23]];
goto l1;
l5:x[jvj+7]=s[x[jvj+25]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+25];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+7,V13)*/
V13=pile[WZ2]; 
for(a=F;a>0;a=t[a]) if(s[a]==V13) goto l20;
l6:x[jvj+25]=t[x[jvj+25]];
l4:if((x[jvj+25]>0)) goto l5;
pile[v[22]]=jvj+11; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+11,218,68)*/
l20:pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
l17:x[jvj+27]=t[x[jvj+27]];
goto l15;
l8:x[jvj+9]=s[x[jvj+26]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+26];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+9,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+10,V11)*/
l9:x[jvj+26]=t[x[jvj+26]];
l7:if((x[jvj+26]>0)) goto l8;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
x[jvj+25]=x[jvj+6] ;z[jvj+25]=z[jvj+6];
goto l4;
l11:for(a=F;a>0;a=t[a]) if(s[a]==V16) goto l13;
V16++;
l10:if((V16<=M)) goto l11;
pile[v[22]]=jvj+11; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+11,218,68)*/
l13:V15=N;
l12:if((V15<=M)) goto l14;
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
l19:pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+12,jvj+16)*/
if((x[jvj+16]!=484)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+12,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+17,jvj+18)*/
if(x[jvj+18]!=96&&x[jvj+18]!=89&&x[jvj+18]!=41&&x[jvj+18]!=20&&x[jvj+18]!=128&&x[jvj+18]!=570&&x[jvj+18]!=1317) goto l17;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+19; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+12,jvj+19)*/
x[jvj+5]=x[jvj+19] ;z[jvj+5]=z[jvj+19];
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+8)*/
x[jvj+26]=x[jvj+8] ;z[jvj+26]=z[jvj+8];
goto l7;
l14:pile[v[22]]=jvj+10; pile[WZ1]=V15; 
(*f[207])( );     /*PLUE2(jvj+10,V15)*/
V15++;
goto l12;
l16:x[jvj+12]=s[x[jvj+27]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+27];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+12,V24)*/
V24=pile[WZ2]; 
V22=V24;
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
pile[v[22]]=jvj+10; pile[WZ1]=V22; 
(*f[207])( );     /*PLUE2(jvj+10,V22)*/
l18:pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=1214)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
pile[v[22]]=jvj+15; 
(*f[2112])( );if(v[102]) goto l19;     /*POSCARD1(jvj+15,N,M)*/
N=pile[WZ1]; M=pile[WZ2]; 
V16=N;
goto l10;
l21:V25=V30;
goto l22;
l23:V26=0;
goto l24;
l25:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
