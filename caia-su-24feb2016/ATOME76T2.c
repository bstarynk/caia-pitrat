#include "dx.h"
void ATOME76T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VA=0,V27=0,V10=0,V11=0,V25=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20076;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3714&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=869; pile[WZ1]=RR; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(869,RR,jvj+14)*/
if((x[jvj+14]!=769)) goto l13;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(870,RR,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=868; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(868,RR,jvj+15)*/
if((x[jvj+15]==408)) goto l13;
pile[v[22]]=1300; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1300,RR,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==636) goto l13;
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(RR,jvj+10)*/
l4:if((x[jvj+10]<=0)) goto l9;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=509; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(509,jvj+11,jvj+12)*/
x[jvj+32]=x[jvj+12] ;z[jvj+32]=z[jvj+12];
l5:if((x[jvj+32]>0)) goto l6;
x[jvj+10]=t[x[jvj+10]];
goto l4;
l2:VA=s[V27];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VA) goto l3;
l10:x[jvj+13]=t[x[jvj+13]];
l9:if((x[jvj+13]<=0)) goto l13;
x[jvj+4]=s[x[jvj+13]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+13];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+4,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=25)) goto l10;
pile[v[22]]=869; pile[WZ1]=jvj+4; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(869,jvj+4,jvj+19)*/
if((x[jvj+19]!=769)) goto l10;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,jvj+4,V11)*/
V11=pile[WZ2]; 
if((V10<V11)) goto l10;
pile[v[22]]=RR; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(RR,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V27=x[jvj+5];
l1:if((V27>0)) goto l2;
x[jvj+20]=d[20];z[jvj+20]=0;
l11:if((x[jvj+20]<=0)) goto l10;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+4; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+21,jvj+4,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+21,jvj+24)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+24; pile[WZ3]=jvj+25; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+4,jvj+24,V25,jvj+25)*/
V25=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,jvj+4,110,(-601),jvj+30)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+31)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(605,715,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3712; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3712,246,jvj+29)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20076; pile[WZ4]=jvj+29; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(158,289,218,20076,jvj+29,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=159; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+31)*/
(*f[481])( );     /*STOCKER0(jvj+26)*/
l12:x[jvj+20]=t[x[jvj+20]];
goto l11;
l3:V27=t[V27];
goto l1;
l6:x[jvj+6]=s[x[jvj+32]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+32];
if((x[jvj+6]==x[RR])) goto l7;
pile[v[22]]=1417; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1417,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==228) goto l8;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1545,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==228) goto l8;
l7:x[jvj+32]=t[x[jvj+32]];
goto l5;
l8:pile[v[22]]=jvj+13; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+6)*/
goto l7;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
