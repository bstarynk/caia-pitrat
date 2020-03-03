#include "dx.h"
void SAUVEPOS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V6=0;
int B;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10930;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1313&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(454,jvj+5,jvj+6)*/
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
l1:if((x[jvj+6]>0)) goto l2;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+8)*/
x[jvj+14]=x[jvj+8] ;z[jvj+14]=z[jvj+8];
l3:if((x[jvj+14]>0)) goto l4;
x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+9)*/
if((x[jvj+3]==x[B])) goto l6;
pile[v[22]]=473; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(473,jvj+2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=489; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(489,jvj+3,jvj+4)*/
for(i=x[jvj+4],V6=0;i>0;i=t[i],V6++)  ;
if((V6>=V8)) goto l5;
l6:pile[v[22]]=jvj+3; pile[WZ1]=jvj+10; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(jvj+3,jvj+10)*/
x[jvj+15]=x[jvj+9] ;z[jvj+15]=z[jvj+9];
l7:if((x[jvj+15]<=0)) goto l5;
x[jvj+11]=s[x[jvj+15]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+15];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1291])( );if(v[102]) goto l8;     /*CONVEXP0(jvj+11,jvj+12)*/
pile[v[22]]=80; pile[WZ2]=287; pile[WZ3]=jvj+10; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(80,jvj+12,287,jvj+10,jvj+13)*/
pile[v[22]]=jvj+7; pile[WZ1]=1246; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+7,1246,jvj+13)*/
l8:x[jvj+15]=t[x[jvj+15]];
goto l7;
l5:x[jvj+14]=t[x[jvj+14]];
goto l3;
}
