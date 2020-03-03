#include "dx.h"
void ATOME595T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V2=0,V34=0,V3=0,V35=0;
int NNNQ;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20595;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3909&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NNNQ=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNQ; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,NNNQ,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l11;
x[jvj+9]=d[20];z[jvj+9]=0;
l5:if((x[jvj+9]<=0)) goto l11;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=NNNQ; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+10,NNNQ,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=1273)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+10,jvj+14)*/
pile[v[22]]=NNNQ; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(NNNQ,jvj+14,V30,jvj+15)*/
V30=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+11,jvj+16)*/
pile[v[22]]=107; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+17)*/
V34=x[jvj+17];
l7:if((V34<=0)) goto l6;
V2=s[V34];
V35=x[jvj+17];
l8:if((V35>0)) goto l9;
V34=t[V34];
goto l7;
l2:x[jvj+3]=s[x[jvj+25]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+25];
if((x[jvj+3]==V2)) goto l3;
if((x[jvj+3]==V3)) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==649)) goto l3;
l4:pile[v[22]]=jvj+6; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+3)*/
l3:x[jvj+25]=t[x[jvj+25]];
l1:if((x[jvj+25]>0)) goto l2;
pile[v[22]]=101; pile[WZ1]=NNNQ; pile[WZ2]=110; pile[WZ3]=(-11768); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,NNNQ,110,(-11768),jvj+23)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(206,715,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3908; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3908,246,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=20595; pile[WZ2]=218; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,20595,218,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ2]=jvj+22; pile[WZ3]=159; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+22,159,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+24,289,158,jvj+18)*/
pile[v[22]]=jvj+18; 
(*f[481])( );     /*STOCKER0(jvj+18)*/
l10:V35=t[V35];
goto l8;
l6:x[jvj+9]=t[x[jvj+9]];
goto l5;
l9:V3=s[V35];
if((V2==V3)) goto l10;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+25]=x[jvj+17] ;z[jvj+25]=z[jvj+17];
goto l1;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
