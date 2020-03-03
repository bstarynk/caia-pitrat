#include "dx.h"
void ATOME561T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V17=0,V20=0,V15=0,V14=0;
int W;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=20561;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3942&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
W=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=W; pile[WZ2]=jvj+12; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,W,jvj+12)*/
if((x[jvj+12]!=68)) goto l9;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+13,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=W; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(365,W,jvj+14)*/
for(i=x[jvj+14],V17=0;i>0;i=t[i],V17++)  ;
pile[v[22]]=509; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(509,W,jvj+15)*/
l2:if((x[jvj+15]<=0)) goto l9;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1361])( );     /*VAROBJ0(jvj+16,jvj+17)*/
for(i=x[jvj+17],V20=0;i>0;i=t[i],V20++)  ;
if((V20!=2)) goto l3;
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[W]) goto l5;
l3:x[jvj+15]=t[x[jvj+15]];
goto l2;
l5:x[jvj+29]=x[jvj+17] ;z[jvj+29]=z[jvj+17];
l4:if((x[jvj+29]<=0)) goto l3;
x[jvj+9]=s[x[jvj+29]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+29];
if((x[W]==x[jvj+9])) goto l6;
pile[v[22]]=202; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,jvj+9,jvj+18)*/
if((x[jvj+18]!=68)) goto l6;
pile[v[22]]=365; pile[WZ2]=jvj+19; 
(*f[1969])( );     /*FNDEND0(365,jvj+9,jvj+19)*/
for(i=x[jvj+19],V15=0;i>0;i=t[i],V15++)  ;
V14=V15*V17;
if((V14>=200)) goto l6;
x[jvj+30]=x[jvj+19] ;z[jvj+30]=z[jvj+19];
l7:if((x[jvj+30]<=0)) goto l6;
x[jvj+10]=s[x[jvj+30]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+30];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+20; 
(*f[1972])( );if(v[102]) goto l8;     /*INVEXP0(jvj+10,jvj+20)*/
pile[v[22]]=jvj+9; pile[WZ2]=jvj+16; pile[WZ3]=jvj+4; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+9,jvj+20,jvj+16,jvj+4)*/
pile[WZ1]=jvj+10; pile[WZ2]=W; pile[WZ3]=jvj+11; 
(*f[3850])( );if(v[102]) goto l10;     /*COMPAT0(jvj+9,jvj+10,W,jvj+11)*/
x[jvj+28]=x[jvj+11] ;z[jvj+28]=z[jvj+11];
l1:if((x[jvj+28]<=0)) goto l10;
x[jvj+2]=s[x[jvj+28]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+28];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1972])( );if(v[102]) goto l8;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=W; pile[WZ2]=jvj+4; pile[WZ3]=jvj+5; 
(*f[1719])( );     /*SUBSTITUTES0(W,jvj+3,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[965])( );if(v[102]) goto l8;     /*NORM0(jvj+5,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=134)) goto l8;
x[jvj+28]=t[x[jvj+28]];
goto l1;
l6:x[jvj+29]=t[x[jvj+29]];
goto l4;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l10:pile[v[22]]=101; pile[WZ1]=W; pile[WZ2]=110; pile[WZ3]=(-622); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,W,110,(-622),jvj+26)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V21,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3942; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3942,246,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=20561; pile[WZ2]=218; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,20561,218,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=(-20); pile[WZ2]=jvj+25; pile[WZ3]=159; pile[WZ4]=jvj+27; 
(*f[298])( );     /*TRIENS1(jvj+26,(-20),jvj+25,159,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+27,1,158,jvj+21)*/
pile[v[22]]=365; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1569])( );     /*DELIER0(365,jvj+9,jvj+10,jvj+21)*/
l8:x[jvj+30]=t[x[jvj+30]];
goto l7;
}
