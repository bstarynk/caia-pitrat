#include "dx.h"
void EACB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,NL=0,V4=0,V6=0;
int T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10021;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==340&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=246; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,T,NL)*/
NL=pile[WZ2]; 
V2=opn[NL];
if((V2==0)) goto l1;
dlclose(binpart[NL]);
l1:pile[v[22]]=130; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,T,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,T,jvj+2)*/
pile[v[22]]=68; pile[WZ1]=jvj+2; pile[WZ2]=V4; 
(*f[720])( );     /*CVT0(68,jvj+2,V4)*/
binpart[NL]=dlopen(srt,RTLD_NOW|RTLD_GLOBAL);if((error=dlerror())!=NULL) fputs(error,stdout);
opn[NL]=1;
l2:pile[v[22]]=130; pile[WZ1]=T; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,T,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,T,jvj+3)*/
pile[v[22]]=67; pile[WZ1]=jvj+3; pile[WZ2]=V6; 
(*f[720])( );     /*CVT0(67,jvj+3,V6)*/
f[NL]=dlsym(binpart[NL],srt);if((error=dlerror())!=NULL) fputs(error,stdout);
;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
