#include "dx.h"
void ATOME89T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V27=0,V4=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20089;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3316&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l6;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+6,jvj+7)*/
pile[v[22]]=1182; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+7,jvj+8)*/
if((68!=x[jvj+8])) goto l6;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+9,V27)*/
V27=pile[WZ2]; 
x[jvj+10]=d[20];z[jvj+10]=0;
l2:if((x[jvj+10]<=0)) goto l6;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1214)) goto l3;
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+11,R,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l3;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+16,jvj+18)*/
x[jvj+19]=x[jvj+18] ;z[jvj+19]=z[jvj+18];
pile[v[22]]=365; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1969])( );     /*FNDEND0(365,jvj+19,jvj+20)*/
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+3; 
(*f[2031])( );if(v[102]) goto l3;     /*POSCARD0(jvj+21,jvj+3)*/
x[jvj+29]=x[jvj+20] ;z[jvj+29]=z[jvj+20];
l4:if((x[jvj+29]<=0)) goto l3;
x[jvj+22]=s[x[jvj+29]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+29];
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+22,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=280; pile[WZ1]=jvj+3; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V4<V5)) goto l7;
l1:pile[v[22]]=164; pile[WZ1]=jvj+3; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(164,jvj+3,V7)*/
V7=pile[WZ2]; 
if((V4>V7)) goto l7;
l5:x[jvj+29]=t[x[jvj+29]];
goto l4;
l3:x[jvj+10]=t[x[jvj+10]];
goto l2;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l7:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+28)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V27,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3316; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3316,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20089; pile[WZ4]=jvj+26; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(158,1,218,20089,jvj+26,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+28)*/
pile[v[22]]=365; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; pile[WZ3]=jvj+23; 
(*f[1569])( );     /*DELIER0(365,jvj+19,jvj+22,jvj+23)*/
goto l5;
}
