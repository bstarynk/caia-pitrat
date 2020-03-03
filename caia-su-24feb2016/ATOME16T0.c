#include "dx.h"
void ATOME16T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V3=0,V9=0,V23=0,V5=0,V6=0,V25=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20016;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3048&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=vo[12];z[jvj+15]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+15,jvj+16)*/
if((x[jvj+16]!=1178)) goto l7;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1035; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1035,jvj+2,V9)*/
V9=pile[WZ2]; 
if((V9>=500)) goto l7;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+17,V23)*/
V23=pile[WZ2]; 
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=509; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(509,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
for(i=x[jvj+9],V5=0;i>0;i=t[i],V5++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(0,117,jvj+14)*/
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+11)*/
l5:if((x[jvj+11]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+14,V3)*/
V3=pile[WZ2]; 
V6=V3-1;
if((V5<V6)) goto l7;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1178; 
(*f[42])( );     /*SRA1(135,0,1178,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
pile[v[22]]=V23; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V23,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3048; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3048,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20016; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,20016,jvj+21,jvj+18)*/
pile[v[22]]=jvj+18; 
(*f[3049])( );     /*CHERSYM0(jvj+18)*/
l7:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l3;
pile[v[22]]=1054; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1054,jvj+4,jvj+7)*/
if((x[jvj+7]!=20003)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(jvj+4,jvj+8)*/
x[jvj+22]=x[jvj+8] ;z[jvj+22]=z[jvj+8];
l4:if((x[jvj+22]<=0)) goto l3;
x[jvj+10]=s[x[jvj+22]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+22];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
x[jvj+22]=t[x[jvj+22]];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=480; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(480,jvj+12,jvj+13)*/
for(i=x[jvj+13],V20=0;i>0;i=t[i],V20++)  ;
pile[v[22]]=jvj+14; pile[WZ1]=117; pile[WZ2]=V20; 
(*f[186])( );     /*BTC0(jvj+14,117,V20)*/
x[jvj+11]=t[x[jvj+11]];
goto l5;
}
