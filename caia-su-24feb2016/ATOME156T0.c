#include "dx.h"
void ATOME156T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DD=0,V29=0,V22=0,K=0,V26=0,V8=0,V13=0,V27=0,D=0,P=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=20156;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3759&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l15;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(870,R,V13)*/
V13=pile[WZ2]; 
if((V13<2)) goto l15;
if((V13>3)) goto l15;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+13,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(R,jvj+14)*/
pile[WZ1]=jvj+15; 
(*f[888])( );     /*LINEAIRE0(R,jvj+15)*/
if((x[jvj+15]==134)) goto l12;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+2]=s[x[jvj+34]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+34];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(jvj+2,jvj+3)*/
V29=x[jvj+3];
l1:if((V29<=0)) goto l4;
DD=s[V29];
if((DD!=D)) goto l5;
V29=t[V29];
goto l1;
l5:pile[v[22]]=jvj+4; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+2)*/
l4:x[jvj+34]=t[x[jvj+34]];
l2:if((x[jvj+34]>0)) goto l3;
x[jvj+10]=0 ;z[jvj+10]=0;
l9:if((x[jvj+4]>0)) goto l10;
pile[v[22]]=jvj+10; 
(*f[1000])( );     /*PGCDEN0(jvj+10,P)*/
P=pile[WZ1]; 
if((P==1)) goto l14;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V27,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3759; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3759,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20156; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20156,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=160; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,160,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=111; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,jvj+20,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+33; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+33,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+21)*/
l14:x[jvj+14]=t[x[jvj+14]];
l13:if((x[jvj+14]<=0)) goto l15;
D=s[x[jvj+14]];
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+34]=x[jvj+16] ;z[jvj+34]=z[jvj+16];
goto l2;
l7:x[jvj+35]=t[x[jvj+35]];
l6:if((x[jvj+35]<=0)) goto l8;
x[jvj+9]=s[x[jvj+35]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+35];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+9,V22)*/
V22=pile[WZ2]; 
K=V22;
V26=abs(K);
V8=V26;
l11:pile[v[22]]=jvj+10; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+10,V8)*/
x[jvj+4]=t[x[jvj+4]];
goto l9;
l8:V8=1;
goto l11;
l10:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
V8=incon;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+8)*/
x[jvj+35]=x[jvj+8] ;z[jvj+35]=z[jvj+8];
goto l6;
l12:pile[v[22]]=R; pile[WZ1]=jvj+16; 
(*f[1930])( );if(v[102]) goto l15;     /*DECTERMES0(R,jvj+16)*/
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,R,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,R,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
goto l13;
}
