#include "dx.h"
void ATOME18T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,Y=0,V22=0,K=0,V14=0,V3=0,XX=0,V23=0,V17=0,V18=0,V7=0,RT=0,V13=0,H=0,V19=0,L=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=20018;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3157&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l16;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+10,V19)*/
V19=pile[WZ2]; 
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=R; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[3159])( );if(v[102]) goto l13;     /*FACTEURS0(R,jvj+5,jvj+6,RT)*/
RT=pile[WZ3]; 
V13=RT-3;
V3=incon;
for(i=x[jvj+5],V14=0;i>0;i=t[i],V14++)  ;
if((V14==1)) goto l6;
if((V14<=1)) goto l13;
x[jvj+3]=0 ;z[jvj+3]=0;
l1:if((x[jvj+5]>0)) goto l2;
V3=x[jvj+3];
l10:if((V3!=(-99999998))) goto l11;
l13:pile[v[22]]=52; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[492])( );     /*FIGURE0(52,R,jvj+11)*/
if((x[jvj+11]==134)) goto l14;
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:V6=s[x[jvj+5]];
pile[v[22]]=jvj+3; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+3,V6)*/
V22=t[x[jvj+5]];
l3:if((V22>0)) goto l4;
x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:Y=s[V22];
pile[v[22]]=Y; pile[WZ1]=V6; 
(*f[1011])( );     /*PGCD0(Y,V6,K)*/
K=pile[WZ2]; 
if((K==1)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=K; 
(*f[207])( );     /*PLUE2(jvj+3,K)*/
l5:V22=t[V22];
goto l3;
l6:V3=x[jvj+5];
goto l10;
l8:XX=s[V23];
V17=XX%H;
if((V17!=0)) goto l9;
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,117,1)*/
l9:V23=t[V23];
l7:if((V23>0)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+4,V18)*/
V18=pile[WZ2]; 
V7=V18;
if((V7<V13)) goto l12;
pile[v[22]]=jvj+7; pile[WZ1]=H; 
(*f[207])( );     /*PLUE2(jvj+7,H)*/
l12:V3=t[V3];
l11:if((V3<=0)) goto l13;
H=s[V3];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
V23=x[jvj+6];
goto l7;
l14:if((x[jvj+7]<=0)) goto l16;
L=s[x[jvj+7]];
pile[v[22]]=R; pile[WZ1]=L; pile[WZ2]=jvj+12; 
(*f[3158])( );if(v[102]) goto l15;     /*REDIV0(R,L,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+18)*/
pile[v[22]]=V19; pile[WZ1]=858; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V19,858,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3157; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3157,246,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=20018; pile[WZ2]=218; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,20018,218,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=(-20); pile[WZ2]=jvj+17; pile[WZ3]=159; pile[WZ4]=jvj+19; 
(*f[298])( );     /*TRIENS1(jvj+18,(-20),jvj+17,159,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+19,1,158,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1296])( );     /*NOUVCONTR0(jvj+12,jvj+13)*/
l15:x[jvj+7]=t[x[jvj+7]];
goto l14;
}
