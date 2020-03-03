#include "dx.h"
void PEUMEM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V8=0,V13=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11019;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==610&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1051; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1051,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==753) goto l1;
x[RR]=12 ;z[RR]=12;
l3:x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=jvj+8; pile[WZ1]=1051; pile[WZ2]=753; 
(*f[36])( );     /*PLUSC0(jvj+8,1051,753)*/
x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(860,jvj+4,jvj+9)*/
if((x[jvj+9]!=530)) goto l5;
pile[v[22]]=978; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(978,jvj+4,jvj+10)*/
if((x[jvj+10]!=68)) goto l5;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+4,jvj+11)*/
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+4,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=1078; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+4,1078,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=289; pile[WZ2]=935; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,289,935,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=753; pile[WZ2]=913; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,753,913,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=V13; pile[WZ2]=683; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,V13,683,jvj+15)*/
pile[v[22]]=109; pile[WZ1]=jvj+11; pile[WZ2]=510; pile[WZ3]=V8; pile[WZ4]=jvj+15; pile[WZ5]=jvj+5; 
(*f[47])( );     /*QUADRI0(109,jvj+11,510,V8,jvj+15,jvj+5)*/
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+4,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=163; pile[WZ2]=V19; 
(*f[177])( );     /*CHGC4(jvj+5,163,V19)*/
l2:x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=901; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(901,jvj+6,jvj+7)*/
if((x[jvj+7]==0)) goto l4;
pile[v[22]]=jvj+5; pile[WZ1]=1260; 
(*f[34])( );     /*CHGC0(jvj+5,1260,jvj+7)*/
l4:pile[v[22]]=1243; pile[WZ1]=1051; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(1243,1051,jvj+5)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[RR]=1196 ;z[RR]=1196;
goto l3;
}
