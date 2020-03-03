#include "dx.h"
void ATOME562T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V31=0,V23=0,V28=0,V26=0,V25=0,V22=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=20562;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3852&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+21; 
(*f[1361])( );     /*VAROBJ0(R,jvj+21)*/
for(i=x[jvj+21],V30=0;i>0;i=t[i],V30++)  ;
if((V30!=3)) goto l15;
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+22,V31)*/
V31=pile[WZ2]; 
x[jvj+39]=x[jvj+21] ;z[jvj+39]=z[jvj+21];
l7:if((x[jvj+39]<=0)) goto l15;
x[jvj+14]=s[x[jvj+39]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+39];
pile[v[22]]=202; pile[WZ1]=jvj+14; pile[WZ2]=jvj+23; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(202,jvj+14,jvj+23)*/
if((x[jvj+23]!=68)) goto l8;
pile[v[22]]=365; pile[WZ2]=jvj+24; 
(*f[1969])( );     /*FNDEND0(365,jvj+14,jvj+24)*/
for(i=x[jvj+24],V23=0;i>0;i=t[i],V23++)  ;
x[jvj+40]=x[jvj+21] ;z[jvj+40]=z[jvj+21];
l9:if((x[jvj+40]<=0)) goto l8;
x[jvj+9]=s[x[jvj+40]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+40];
if((x[jvj+9]==x[jvj+14])) goto l10;
pile[v[22]]=202; pile[WZ1]=jvj+9; pile[WZ2]=jvj+25; 
(*f[1948])( );if(v[102]) goto l10;     /*FNDOND0(202,jvj+9,jvj+25)*/
if((x[jvj+25]!=68)) goto l10;
pile[v[22]]=365; pile[WZ2]=jvj+26; 
(*f[1969])( );     /*FNDEND0(365,jvj+9,jvj+26)*/
for(i=x[jvj+26],V28=0;i>0;i=t[i],V28++)  ;
x[jvj+41]=x[jvj+21] ;z[jvj+41]=z[jvj+21];
l11:if((x[jvj+41]<=0)) goto l10;
x[jvj+5]=s[x[jvj+41]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+41];
if((x[jvj+5]==x[jvj+14])) goto l12;
if((x[jvj+5]==x[jvj+9])) goto l12;
pile[v[22]]=202; pile[WZ1]=jvj+5; pile[WZ2]=jvj+27; 
(*f[1948])( );if(v[102]) goto l12;     /*FNDOND0(202,jvj+5,jvj+27)*/
if((x[jvj+27]!=68)) goto l12;
pile[v[22]]=365; pile[WZ2]=jvj+28; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+28)*/
for(i=x[jvj+28],V26=0;i>0;i=t[i],V26++)  ;
V25=V26*V28;
V22=V23*V25;
if((V22>=500)) goto l12;
x[jvj+42]=x[jvj+24] ;z[jvj+42]=z[jvj+24];
l13:if((x[jvj+42]<=0)) goto l12;
x[jvj+15]=s[x[jvj+42]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+42];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+29; 
(*f[1972])( );if(v[102]) goto l14;     /*INVEXP0(jvj+15,jvj+29)*/
pile[v[22]]=jvj+14; pile[WZ2]=R; pile[WZ3]=jvj+4; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+14,jvj+29,R,jvj+4)*/
pile[WZ1]=jvj+15; pile[WZ2]=jvj+9; pile[WZ3]=jvj+20; 
(*f[3850])( );if(v[102]) goto l16;     /*COMPAT0(jvj+14,jvj+15,jvj+9,jvj+20)*/
x[jvj+38]=x[jvj+20] ;z[jvj+38]=z[jvj+20];
l4:if((x[jvj+38]<=0)) goto l16;
x[jvj+7]=s[x[jvj+38]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+38];
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+5; pile[WZ3]=jvj+16; 
(*f[3850])( );if(v[102]) goto l5;     /*COMPAT0(jvj+14,jvj+15,jvj+5,jvj+16)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+7; pile[WZ3]=jvj+17; 
(*f[3850])( );if(v[102]) goto l5;     /*COMPAT0(jvj+9,jvj+7,jvj+5,jvj+17)*/
x[jvj+37]=x[jvj+16] ;z[jvj+37]=z[jvj+16];
l1:if((x[jvj+37]<=0)) goto l5;
x[jvj+19]=s[x[jvj+37]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+37];
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+19]) goto l3;
l2:x[jvj+37]=t[x[jvj+37]];
goto l1;
l3:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+19)*/
goto l2;
l6:x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1972])( );if(v[102]) goto l14;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=jvj+6; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+5,jvj+3,jvj+4,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1972])( );if(v[102]) goto l14;     /*INVEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ2]=jvj+6; pile[WZ3]=jvj+10; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+9,jvj+8,jvj+6,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[965])( );if(v[102]) goto l14;     /*NORM0(jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=134)) goto l14;
x[jvj+18]=t[x[jvj+18]];
l5:if((x[jvj+18]>0)) goto l6;
x[jvj+38]=t[x[jvj+38]];
goto l4;
l8:x[jvj+39]=t[x[jvj+39]];
goto l7;
l10:x[jvj+40]=t[x[jvj+40]];
goto l9;
l12:x[jvj+41]=t[x[jvj+41]];
goto l11;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l16:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+35)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V31,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3852; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3852,246,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=20562; pile[WZ2]=218; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,20562,218,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=jvj+34; pile[WZ3]=159; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,159,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+36,1,158,jvj+30)*/
pile[v[22]]=365; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1569])( );     /*DELIER0(365,jvj+14,jvj+15,jvj+30)*/
l14:x[jvj+42]=t[x[jvj+42]];
goto l13;
}
