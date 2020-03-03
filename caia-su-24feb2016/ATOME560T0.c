#include "dx.h"
void ATOME560T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V20=0,V15=0,V17=0,V14=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=20560;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3849&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+13; 
(*f[1361])( );     /*VAROBJ0(R,jvj+13)*/
for(i=x[jvj+13],V19=0;i>0;i=t[i],V19++)  ;
if((V19!=2)) goto l8;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+14,V20)*/
V20=pile[WZ2]; 
x[jvj+28]=x[jvj+13] ;z[jvj+28]=z[jvj+13];
l2:if((x[jvj+28]<=0)) goto l8;
x[jvj+10]=s[x[jvj+28]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+28];
pile[v[22]]=202; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(202,jvj+10,jvj+15)*/
if((x[jvj+15]!=68)) goto l3;
pile[v[22]]=365; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(365,jvj+10,jvj+16)*/
for(i=x[jvj+16],V15=0;i>0;i=t[i],V15++)  ;
x[jvj+29]=x[jvj+13] ;z[jvj+29]=z[jvj+13];
l4:if((x[jvj+29]<=0)) goto l3;
x[jvj+5]=s[x[jvj+29]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+29];
if((x[jvj+5]==x[jvj+10])) goto l5;
pile[v[22]]=202; pile[WZ1]=jvj+5; pile[WZ2]=jvj+17; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(202,jvj+5,jvj+17)*/
if((x[jvj+17]!=68)) goto l5;
pile[v[22]]=365; pile[WZ2]=jvj+18; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+18)*/
for(i=x[jvj+18],V17=0;i>0;i=t[i],V17++)  ;
V14=V15*V17;
if((V14>=200)) goto l5;
x[jvj+30]=x[jvj+16] ;z[jvj+30]=z[jvj+16];
l6:if((x[jvj+30]<=0)) goto l5;
x[jvj+11]=s[x[jvj+30]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+30];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+19; 
(*f[1972])( );if(v[102]) goto l7;     /*INVEXP0(jvj+11,jvj+19)*/
pile[v[22]]=jvj+10; pile[WZ2]=R; pile[WZ3]=jvj+4; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+10,jvj+19,R,jvj+4)*/
pile[WZ1]=jvj+11; pile[WZ2]=jvj+5; pile[WZ3]=jvj+12; 
(*f[3850])( );if(v[102]) goto l9;     /*COMPAT0(jvj+10,jvj+11,jvj+5,jvj+12)*/
x[jvj+27]=x[jvj+12] ;z[jvj+27]=z[jvj+12];
l1:if((x[jvj+27]<=0)) goto l9;
x[jvj+2]=s[x[jvj+27]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+27];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1972])( );if(v[102]) goto l7;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=jvj+6; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+5,jvj+3,jvj+4,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[965])( );if(v[102]) goto l7;     /*NORM0(jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=134)) goto l7;
x[jvj+27]=t[x[jvj+27]];
goto l1;
l3:x[jvj+28]=t[x[jvj+28]];
goto l2;
l5:x[jvj+29]=t[x[jvj+29]];
goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+25)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V20,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3849; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3849,246,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=20560; pile[WZ2]=218; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,20560,218,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=jvj+24; pile[WZ3]=159; pile[WZ4]=jvj+26; 
(*f[298])( );     /*TRIENS1(jvj+25,(-20),jvj+24,159,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+26,1,158,jvj+20)*/
pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1569])( );     /*DELIER0(365,jvj+10,jvj+11,jvj+20)*/
l7:x[jvj+30]=t[x[jvj+30]];
goto l6;
}
