#include "dx.h"
void ATOME166T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,J=0,Z=0,V10=0,V17=0,V32=0,V24=0,I=0,Q=0,V4=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=20166;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3551&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=625)) goto l10;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,R,V10)*/
V10=pile[WZ2]; 
if((V10!=1)) goto l10;
pile[v[22]]=160; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,R,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+14,V17)*/
V17=pile[WZ2]; 
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+15,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+16)*/
pile[v[22]]=103; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,R,jvj+17)*/
pile[v[22]]=R; pile[WZ1]=jvj+18; 
(*f[3517])( );     /*DECSOM2(R,jvj+18)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1294,R,jvj+19)*/
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1483) goto l6;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:Z=s[x[jvj+7]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Z; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,Z,jvj+39)*/
pile[WZ3]=Q; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,Q,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=160; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,160,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=111; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+40; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+40,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+10,jvj+11)*/
x[jvj+7]=t[x[jvj+7]];
l4:if((x[jvj+7]>0)) goto l5;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+26; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+45)*/
pile[v[22]]=V32; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V32,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3551; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3551,246,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=20166; pile[WZ2]=218; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,20166,218,jvj+44)*/
pile[v[22]]=jvj+45; pile[WZ1]=(-20); pile[WZ2]=jvj+44; pile[WZ3]=159; pile[WZ4]=jvj+46; 
(*f[298])( );     /*TRIENS1(jvj+45,(-20),jvj+44,159,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+46,1,158,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+26; pile[WZ2]=107; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+48,jvj+26,107,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+49,22,100,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+27; 
(*f[1296])( );     /*NOUVCONTR0(jvj+28,jvj+27)*/
l8:Q++;
if((Q<=32)) goto l9;
l7:x[jvj+18]=t[x[jvj+18]];
l6:if((x[jvj+18]<=0)) goto l10;
x[jvj+20]=s[x[jvj+18]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+18];
pile[v[22]]=218; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+20,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=596)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+21,jvj+24)*/
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+24,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+21; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+21,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+5,jvj+25)*/
if((x[jvj+25]!=484)) goto l7;
I=V24;
Q=2;
l9:pile[v[22]]=V17; pile[WZ1]=Q; pile[WZ2]=I; 
(*f[1041])( );if(v[102]) goto l8;     /*MODPUI0(V17,Q,I,V4)*/
V4=pile[WZ3]; 
if((V4!=1)) goto l8;
x[jvj+7]=0 ;z[jvj+7]=0;
V30=Q-1;
J=0;
l1:if((J<=V30)) goto l11;
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+8)*/
x[jvj+9]=d[119];z[jvj+9]=0;
goto l4;
l11:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+29)*/
pile[WZ3]=486; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Q; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,Q,jvj+33)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7141); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7141),jvj+34)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+32,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+33)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+31)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+31)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=R; pile[WZ3]=jvj+2; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+5,jvj+6,R,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[799])( );if(v[102]) goto l3;     /*NORME0(jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==134)) goto l2;
l3:pile[v[22]]=jvj+7; pile[WZ1]=J; 
(*f[207])( );     /*PLUE2(jvj+7,J)*/
l2:J++;
goto l1;
}
