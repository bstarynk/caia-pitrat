#include "dx.h"
void ATOME244T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V45=0,V15=0,V17=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=20244;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3593&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,R,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=55)) goto l18;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,R,jvj+32)*/
for(i=x[jvj+32],V18=0;i>0;i=t[i],V18++)  ;
x[jvj+33]=vo[14];z[jvj+33]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+33,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=1232; pile[WZ1]=R; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(1232,R,jvj+34)*/
if((x[jvj+34]==0)) goto l18;
pile[v[22]]=R; pile[WZ1]=jvj+35; 
(*f[887])( );     /*VARND0(R,jvj+35)*/
for(i=x[jvj+35],V15=0;i>0;i=t[i],V15++)  ;
if((V15>1)) goto l16;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+7]=d[20];z[jvj+7]=0;
l2:if((x[jvj+7]<=0)) goto l9;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+8,jvj+4,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+9,jvj+10)*/
if((x[jvj+10]!=x[jvj+2])) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+8,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+11,jvj+4,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+12,jvj+13)*/
if(x[jvj+13]!=96&&x[jvj+13]!=89&&x[jvj+13]!=41&&x[jvj+13]!=20&&x[jvj+13]!=128&&x[jvj+13]!=570&&x[jvj+13]!=1317) goto l4;
x[jvj+49]=x[jvj+4] ;z[jvj+49]=z[jvj+4];
l13:if((x[jvj+49]==(-99999998))) goto l12;
x[jvj+26]=x[jvj+49] ;z[jvj+26]=z[jvj+49];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
l12:x[jvj+48]=t[x[jvj+48]];
l10:if((x[jvj+48]>0)) goto l11;
for(i=x[jvj+25],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=V18)) goto l17;
x[jvj+29]=0 ;z[jvj+29]=0;
l14:if((x[jvj+25]>0)) goto l15;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+42)*/
pile[v[22]]=V45; pile[WZ1]=858; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(V45,858,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,v[13],642,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=3593; pile[WZ2]=246; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,3593,246,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=20244; pile[WZ2]=218; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,20244,218,jvj+41)*/
pile[v[22]]=jvj+42; pile[WZ1]=(-20); pile[WZ2]=jvj+41; pile[WZ3]=159; pile[WZ4]=jvj+43; 
(*f[298])( );     /*TRIENS1(jvj+42,(-20),jvj+41,159,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+43,1,158,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+29; pile[WZ2]=107; pile[WZ3]=jvj+46; 
(*f[301])( );     /*TRI11(jvj+45,jvj+29,107,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+46,22,100,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+36; 
(*f[1296])( );     /*NOUVCONTR0(jvj+37,jvj+36)*/
l17:x[jvj+34]=t[x[jvj+34]];
l16:if((x[jvj+34]<=0)) goto l18;
x[jvj+2]=s[x[jvj+34]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+34];
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l17;
l1:x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+48]=x[jvj+32] ;z[jvj+48]=z[jvj+32];
goto l10;
l4:x[jvj+7]=t[x[jvj+7]];
goto l2;
l6:x[jvj+47]=t[x[jvj+47]];
l5:if((x[jvj+47]<=0)) goto l9;
x[jvj+15]=s[x[jvj+47]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+47];
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=25)) goto l6;
x[jvj+50]=x[jvj+15] ;z[jvj+50]=z[jvj+15];
x[jvj+18]=d[20];z[jvj+18]=0;
l7:if((x[jvj+18]<=0)) goto l6;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+19,jvj+15,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[200])( );if(v[102]) goto l8;     /*NDD0(jvj+20,jvj+21)*/
if((x[jvj+21]!=x[jvj+2])) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+19,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+15; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+22,jvj+15,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+23,jvj+24)*/
if(x[jvj+24]!=96&&x[jvj+24]!=89&&x[jvj+24]!=41&&x[jvj+24]!=20&&x[jvj+24]!=128&&x[jvj+24]!=570&&x[jvj+24]!=1317) goto l8;
x[jvj+49]=x[jvj+50] ;z[jvj+49]=z[jvj+50];
goto l13;
l8:x[jvj+18]=t[x[jvj+18]];
goto l7;
l9:x[jvj+49]=(-99999998);
goto l12;
l11:x[jvj+4]=s[x[jvj+48]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+48];
x[jvj+49]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==25)) goto l3;
if((x[jvj+6]!=48)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+14)*/
x[jvj+47]=x[jvj+14] ;z[jvj+47]=z[jvj+14];
goto l5;
l15:x[jvj+27]=s[x[jvj+25]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+25];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+28)*/
x[jvj+25]=t[x[jvj+25]];
goto l14;
}
