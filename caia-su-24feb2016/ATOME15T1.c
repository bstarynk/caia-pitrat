#include "dx.h"
void ATOME15T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V2=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=20015;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3471&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+11,V11)*/
V11=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(509,jvj+3,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
for(i=x[jvj+10],V2=0;i>0;i=t[i],V2++)  ;
if((V2<2)) goto l4;
pile[v[22]]=V11; pile[WZ1]=858; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V11,858,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3471; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3471,246,jvj+16)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20015; pile[WZ4]=jvj+16; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,1,218,20015,jvj+16,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=1081; pile[WZ2]=jvj+13; 
(*f[300])( );     /*TRI10(jvj+10,1081,jvj+13)*/
pile[v[22]]=jvj+12; 
(*f[1047])( );     /*EVENEMENT0(jvj+12,1081,jvj+13)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; return;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l3;
pile[v[22]]=869; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(869,jvj+5,jvj+8)*/
if((x[jvj+8]!=769)) goto l3;
pile[v[22]]=1070; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1070,jvj+5,jvj+9)*/
if((x[jvj+9]!=68)) goto l3;
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+5)*/
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
}
