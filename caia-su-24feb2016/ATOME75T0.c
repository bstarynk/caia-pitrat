#include "dx.h"
void ATOME75T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V13=0,V6=0;
int R,RX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20075;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3129&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RX=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l5;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1274,R,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l5;
l1:x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+7,V13)*/
V13=pile[WZ2]; 
x[jvj+8]=d[20];z[jvj+8]=0;
l2:if((x[jvj+8]<=0)) goto l5;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+9,R,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+3,jvj+10)*/
for(i=x[jvj+10],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=1)) goto l3;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==484)) goto l3;
l4:pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+9,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+11,R,jvj+12)*/
pile[v[22]]=RX; pile[WZ1]=jvj+3; pile[WZ3]=jvj+13; pile[WZ4]=jvj+14; 
(*f[3130])( );if(v[102]) goto l3;     /*SUBSTITUVAR1(RX,jvj+3,jvj+12,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l6;
l3:x[jvj+8]=t[x[jvj+8]];
goto l2;
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l6:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+19)*/
pile[WZ1]=RX; pile[WZ3]=(-675); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,RX,110,(-675),jvj+20)*/
pile[v[22]]=V13; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V13,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3129; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3129,246,jvj+18)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20075; pile[WZ4]=jvj+18; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(158,1,218,20075,jvj+18,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=159; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+20)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[1296])( );     /*NOUVCONTR0(jvj+13,jvj+15)*/
goto l3;
}
