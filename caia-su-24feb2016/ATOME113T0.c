#include "dx.h"
void ATOME113T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DA=0,V8=0,V23=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20113;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3723&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=408)) goto l6;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,RR,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l6;
pile[v[22]]=869; pile[WZ1]=RR; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(869,RR,jvj+9)*/
if((x[jvj+9]!=769)) goto l6;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=485)) goto l6;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l6;
pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,RR,V8)*/
V8=pile[WZ2]; 
if((V8>3)) goto l6;
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+15,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+13,jvj+16)*/
pile[v[22]]=RR; pile[WZ1]=jvj+17; 
(*f[887])( );     /*VARND0(RR,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l1;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
pile[v[22]]=RR; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(RR,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l4;
DA=s[x[jvj+4]];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==DA) goto l3;
goto l6;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l7:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+28)*/
pile[v[22]]=V23; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V23,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3723; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3723,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20113; pile[WZ4]=jvj+26; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(158,1,218,20113,jvj+26,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+28)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+23; 
(*f[1296])( );     /*NOUVCONTR0(jvj+21,jvj+23)*/
l5:x[jvj+17]=t[x[jvj+17]];
l4:if((x[jvj+17]<=0)) goto l6;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
if((x[jvj+18]==x[jvj+16])) goto l5;
pile[v[22]]=RR; pile[WZ1]=jvj+18; pile[WZ2]=67; pile[WZ3]=jvj+19; 
(*f[1931])( );if(v[102]) goto l5;     /*ISOLONS0(RR,jvj+18,67,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(jvj+18,jvj+20)*/
pile[v[22]]=R; pile[WZ2]=jvj+19; pile[WZ3]=jvj+21; pile[WZ4]=jvj+22; 
(*f[3130])( );if(v[102]) goto l5;     /*SUBSTITUVAR1(R,jvj+20,jvj+19,jvj+21,jvj+22)*/
if((x[jvj+22]==135)) goto l7;
goto l5;
}
