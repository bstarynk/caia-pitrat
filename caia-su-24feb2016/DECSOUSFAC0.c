#include "dx.h"
void DECSOUSFAC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V3=0,V15=0,V14=0,V17=0;
int P,N;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11684;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3675&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; N=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,P,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=P; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,P,jvj+9)*/
x[jvj+6]=0 ;z[jvj+6]=0;
l1:if((x[jvj+9]>0)) goto l2;
for(i=x[jvj+6],V3=0;i>0;i=t[i],V3++)  ;
if((V3<N)) goto l8;
x[jvj+10]=x[jvj+6] ;z[jvj+10]=z[jvj+6];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[4017])( );if(v[102]) goto l8;     /*DECSOUSFACA0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=0; pile[WZ2]=N; pile[WZ3]=jvj+12; 
(*f[4018])( );if(v[102]) goto l8;     /*CRESOUSENS0(jvj+11,0,N,jvj+12)*/
for(i=x[jvj+12],V15=0;i>0;i=t[i],V15++)  ;
if((V15>8)) goto l7;
V14=N-1;
pile[WZ2]=V14; pile[WZ3]=jvj+16; 
(*f[4018])( );if(v[102]) goto l7;     /*CRESOUSENS0(jvj+11,0,V14,jvj+16)*/
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+17]=x[jvj+12] ;z[jvj+17]=z[jvj+12];
l4:if((x[jvj+17]<=0)) goto l5;
x[jvj+14]=s[x[jvj+17]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+17];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
x[jvj+17]=t[x[jvj+17]];
goto l4;
l2:x[jvj+2]=s[x[jvj+9]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+9];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=484)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+2,jvj+4)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
pile[v[22]]=280; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(280,jvj+5,V8)*/
V8=pile[WZ2]; 
if((V8<=0)) goto l3;
pile[v[22]]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+5)*/
l3:x[jvj+9]=t[x[jvj+9]];
goto l1;
l6:x[jvj+15]=s[x[jvj+16]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+16];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+15)*/
x[jvj+16]=t[x[jvj+16]];
l5:if((x[jvj+16]>0)) goto l6;
x[R]=x[jvj+13] ;z[R]=z[jvj+13];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l7:for(i=x[jvj+12],V17=0;i>0;i=t[i],V17++)  ;
if((V17<=8)) goto l8;
x[R]=x[jvj+12] ;z[R]=z[jvj+12];
goto l9;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
