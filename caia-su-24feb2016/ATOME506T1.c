#include "dx.h"
void ATOME506T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V1=0,V18=0,V2=0,V19=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=20506;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3930&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,NNNI,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=29)) goto l5;
pile[v[22]]=103; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,NNNI,jvj+5)*/
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=485)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+8)*/
for(i=x[jvj+8],V8=0;i>0;i=t[i],V8++)  ;
if((V8!=2)) goto l5;
pile[v[22]]=102; pile[WZ1]=NNNI; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,NNNI,jvj+9)*/
V18=x[jvj+8];
l1:if((V18<=0)) goto l5;
V1=s[V18];
V19=x[jvj+8];
l2:if((V19>0)) goto l3;
V18=t[V18];
goto l1;
l3:V2=s[V19];
if((V1==V2)) goto l4;
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+15)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(605,715,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3929; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3929,246,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=20506; pile[WZ2]=218; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,20506,218,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=jvj+14; pile[WZ3]=159; pile[WZ4]=jvj+16; 
(*f[298])( );     /*TRIENS1(jvj+15,(-20),jvj+14,159,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+16,289,158,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[481])( );     /*STOCKER0(jvj+10)*/
l4:V19=t[V19];
goto l2;
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
