#include "dx.h"
void ATOME111T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V2=0,V16=0,V23=0,V22=0,V21=0,V1=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=20111;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3722&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,RR,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=25)) goto l19;
x[jvj+25]=vo[16];z[jvj+25]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[1948])( );if(v[102]) goto l19;     /*FNDOND0(498,jvj+25,jvj+26)*/
pile[v[22]]=1182; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1182,jvj+26,jvj+27)*/
if((68!=x[jvj+27])) goto l19;
pile[v[22]]=869; pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(869,RR,jvj+5)*/
if((x[jvj+5]==769)) goto l19;
l15:pile[v[22]]=929; pile[WZ1]=RR; 
(*f[1975])( );if(v[102]) goto l19;     /*FNDCND0(929,RR,V17)*/
V17=pile[WZ2]; 
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(RR,jvj+19)*/
l9:if((x[jvj+19]>0)) goto l10;
pile[v[22]]=RR; 
(*f[981])( );if(v[102]) goto l19;     /*CPTVAR0(RR,V2)*/
V2=pile[WZ1]; 
if((V2<=6)) goto l16;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+8]=s[x[jvj+36]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+36];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
x[jvj+36]=t[x[jvj+36]];
l1:if((x[jvj+36]>0)) goto l2;
pile[v[22]]=RR; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(RR,jvj+9)*/
x[jvj+37]=x[jvj+9] ;z[jvj+37]=z[jvj+9];
l3:if((x[jvj+37]>0)) goto l4;
for(i=x[jvj+7],V21=0;i>0;i=t[i],V21++)  ;
if((V21>V22)) goto l17;
pile[v[22]]=jvj+3; 
(*f[981])( );if(v[102]) goto l17;     /*CPTVAR0(jvj+3,V1)*/
V1=pile[WZ1]; 
if((V1>6)) goto l17;
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+34)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+35)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(605,715,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3718; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3718,246,jvj+33)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20111; pile[WZ4]=jvj+33; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(158,289,218,20111,jvj+33,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=159; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+34)*/
pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+35)*/
(*f[481])( );     /*STOCKER0(jvj+30)*/
l17:x[jvj+22]=t[x[jvj+22]];
l16:if((x[jvj+22]<=0)) goto l19;
x[jvj+3]=s[x[jvj+22]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+22];
if((x[jvj+3]==x[RR])) goto l17;
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+3,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l17;
pile[v[22]]=869; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(869,jvj+3,jvj+4)*/
if((x[jvj+4]==769)) goto l17;
l18:pile[v[22]]=929; pile[WZ1]=jvj+3; 
(*f[1975])( );if(v[102]) goto l17;     /*FNDCND0(929,jvj+3,V16)*/
V16=pile[WZ2]; 
if((V16>=V17)) goto l17;
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(jvj+3,jvj+11)*/
pile[v[22]]=RR; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(RR,jvj+12)*/
x[jvj+38]=x[jvj+11] ;z[jvj+38]=z[jvj+11];
l5:if((x[jvj+38]>0)) goto l6;
for(i=x[jvj+13],V23=0;i>0;i=t[i],V23++)  ;
V22=V23+2;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+3,jvj+6)*/
x[jvj+36]=x[jvj+6] ;z[jvj+36]=z[jvj+6];
goto l1;
l4:x[jvj+10]=s[x[jvj+37]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+37];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+10)*/
x[jvj+37]=t[x[jvj+37]];
goto l3;
l6:x[jvj+14]=s[x[jvj+38]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+38];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l8;
l7:x[jvj+38]=t[x[jvj+38]];
goto l5;
l8:pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
goto l7;
l10:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=509; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[1969])( );     /*FNDEND0(509,jvj+20,jvj+21)*/
x[jvj+39]=x[jvj+21] ;z[jvj+39]=z[jvj+21];
l11:if((x[jvj+39]>0)) goto l12;
x[jvj+19]=t[x[jvj+19]];
goto l9;
l12:x[jvj+15]=s[x[jvj+39]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+39];
if((x[jvj+15]==x[RR])) goto l13;
pile[v[22]]=1417; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1417,jvj+15,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==333) goto l14;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1545,jvj+17,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==333) goto l14;
l13:x[jvj+39]=t[x[jvj+39]];
goto l11;
l14:pile[v[22]]=jvj+22; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+15)*/
goto l13;
}
