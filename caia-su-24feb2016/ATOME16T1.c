#include "dx.h"
void ATOME16T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V3=0,V9=0,V23=0,V5=0,V6=0,V25=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20016;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3472&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+16]=vo[12];z[jvj+16]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+16,jvj+17)*/
if((x[jvj+17]!=1178)) goto l7;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=1035; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1035,jvj+3,V9)*/
V9=pile[WZ2]; 
if((V9>=500)) goto l7;
x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+18,V23)*/
V23=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=509; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(509,jvj+3,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
for(i=x[jvj+10],V5=0;i>0;i=t[i],V5++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(0,117,jvj+15)*/
pile[v[22]]=454; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(454,jvj+3,jvj+12)*/
l5:if((x[jvj+12]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+15,V3)*/
V3=pile[WZ2]; 
V6=V3-1;
if((V5<V6)) goto l7;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1178; 
(*f[42])( );     /*SRA1(135,0,1178,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
pile[v[22]]=V23; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V23,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3472; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3472,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20016; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,1,218,20016,jvj+22,jvj+19)*/
pile[v[22]]=jvj+19; 
(*f[3049])( );     /*CHERSYM0(jvj+19)*/
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l3;
pile[v[22]]=1054; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1054,jvj+5,jvj+8)*/
if((x[jvj+8]!=20003)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(jvj+5,jvj+9)*/
x[jvj+23]=x[jvj+9] ;z[jvj+23]=z[jvj+9];
l4:if((x[jvj+23]<=0)) goto l3;
x[jvj+11]=s[x[jvj+23]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+23];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+11)*/
x[jvj+23]=t[x[jvj+23]];
goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l6:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=480; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(480,jvj+13,jvj+14)*/
for(i=x[jvj+14],V20=0;i>0;i=t[i],V20++)  ;
pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=V20; 
(*f[186])( );     /*BTC0(jvj+15,117,V20)*/
x[jvj+12]=t[x[jvj+12]];
goto l5;
}
