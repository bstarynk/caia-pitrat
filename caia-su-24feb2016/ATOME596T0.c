#include "dx.h"
void ATOME596T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V11=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20596;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3854&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[1361])( );     /*VAROBJ0(R,jvj+2)*/
for(i=x[jvj+2],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=1)) goto l5;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+3,V11)*/
V11=pile[WZ2]; 
l1:if((x[jvj+2]<=0)) goto l5;
x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
pile[v[22]]=202; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(202,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l2;
pile[v[22]]=365; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(365,jvj+4,jvj+6)*/
x[jvj+20]=x[jvj+6] ;z[jvj+20]=z[jvj+6];
l3:if((x[jvj+20]<=0)) goto l2;
x[jvj+7]=s[x[jvj+20]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+20];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1972])( );if(v[102]) goto l4;     /*INVEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+4; pile[WZ2]=R; pile[WZ3]=jvj+9; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+4,jvj+8,R,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[965])( );if(v[102]) goto l4;     /*NORM0(jvj+9,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=134)) goto l4;
pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+18)*/
pile[v[22]]=V11; pile[WZ1]=858; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V11,858,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3854; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3854,246,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=20596; pile[WZ2]=218; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,20596,218,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=(-20); pile[WZ2]=jvj+17; pile[WZ3]=159; pile[WZ4]=jvj+19; 
(*f[298])( );     /*TRIENS1(jvj+18,(-20),jvj+17,159,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+19,1,158,jvj+13)*/
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[1569])( );     /*DELIER0(365,jvj+4,jvj+7,jvj+13)*/
l4:x[jvj+20]=t[x[jvj+20]];
goto l3;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
