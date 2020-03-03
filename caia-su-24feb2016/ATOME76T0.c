#include "dx.h"
void ATOME76T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VA=0,V10=0,V11=0,V20=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20076;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3712&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l6;
pile[v[22]]=869; pile[WZ1]=RR; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(869,RR,jvj+7)*/
if((x[jvj+7]!=769)) goto l6;
pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(869,R,jvj+8)*/
if((x[jvj+8]!=769)) goto l6;
pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,RR,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,R,V11)*/
V11=pile[WZ2]; 
if((V10<V11)) goto l6;
pile[v[22]]=868; pile[WZ1]=RR; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(868,RR,jvj+9)*/
if((x[jvj+9]==408)) goto l6;
pile[v[22]]=1300; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1300,RR,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==636) goto l6;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+11,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(RR,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(R,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
x[jvj+12]=d[20];z[jvj+12]=0;
l4:if((x[jvj+12]<=0)) goto l6;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l5;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+14,jvj+16)*/
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+13,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+17,R,jvj+18)*/
pile[v[22]]=RR; pile[WZ1]=jvj+14; pile[WZ3]=jvj+19; pile[WZ4]=jvj+20; 
(*f[3130])( );if(v[102]) goto l5;     /*SUBSTITUVAR1(RR,jvj+14,jvj+18,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l7;
l5:x[jvj+12]=t[x[jvj+12]];
goto l4;
l2:VA=s[x[jvj+4]];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VA) goto l3;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l7:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+25)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+26)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V20,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3712; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3712,246,jvj+24)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20076; pile[WZ4]=jvj+24; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,1,218,20076,jvj+24,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=159; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+26)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+19,jvj+21)*/
goto l5;
}
