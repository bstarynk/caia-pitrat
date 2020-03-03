#include "dx.h"
void ATOME176T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V11=0,V8=0,V9=0,V12=0,V13=0,V17=0,V15=0,V35=0,V37=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=20176;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3653&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,R,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=25)) goto l13;
pile[v[22]]=1358; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1358,R,jvj+18)*/
if((x[jvj+18]!=68)) goto l13;
pile[v[22]]=1006; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1006,R,jvj+19)*/
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,R,jvj+20)*/
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,R,jvj+21)*/
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(929,R,V17)*/
V17=pile[WZ2]; 
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=R; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(R,jvj+12)*/
l2:if((x[jvj+12]>0)) goto l3;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1294,R,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==1327) goto l8;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=509; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(509,jvj+13,jvj+14)*/
x[jvj+38]=x[jvj+14] ;z[jvj+38]=z[jvj+14];
l4:if((x[jvj+38]>0)) goto l5;
x[jvj+12]=t[x[jvj+12]];
goto l2;
l5:x[jvj+8]=s[x[jvj+38]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+38];
if((x[jvj+8]==x[R])) goto l6;
pile[v[22]]=1417; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1417,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==529) goto l7;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1545,jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==529) goto l7;
l6:x[jvj+38]=t[x[jvj+38]];
goto l4;
l7:pile[v[22]]=jvj+15; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+8)*/
goto l6;
l11:x[jvj+27]=d[20];z[jvj+27]=0;
l10:if((x[jvj+27]<=0)) goto l9;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+28; pile[WZ3]=jvj+29; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+3,jvj+28,V35,jvj+29)*/
V35=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+28,jvj+30)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+30; pile[WZ3]=jvj+31; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+3,jvj+30,V37,jvj+31)*/
V37=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+36)*/
pile[WZ1]=jvj+3; pile[WZ3]=(-631); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-631),jvj+37)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(206,715,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3652; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3652,246,jvj+35)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20176; pile[WZ4]=jvj+35; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(158,289,218,20176,jvj+35,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=159; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+32,159,jvj+36)*/
pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+32,159,jvj+37)*/
(*f[481])( );     /*STOCKER0(jvj+32)*/
l12:x[jvj+27]=t[x[jvj+27]];
goto l10;
l1:pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(R,jvj+6)*/
for(i=x[jvj+6],V12=0;i>0;i=t[i],V12++)  ;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(jvj+3,jvj+7)*/
for(i=x[jvj+7],V13=0;i>0;i=t[i],V13++)  ;
if((V12<V13)) goto l11;
l9:x[jvj+15]=t[x[jvj+15]];
l8:if((x[jvj+15]<=0)) goto l13;
x[jvj+3]=s[x[jvj+15]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+15];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+3,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=25)) goto l9;
pile[v[22]]=1358; pile[WZ1]=jvj+3; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1358,jvj+3,jvj+25)*/
if((x[jvj+25]!=68)) goto l9;
pile[v[22]]=1006; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1006,jvj+3,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==V17) goto l9;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(929,jvj+3,V15)*/
V15=pile[WZ2]; 
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==V15) goto l9;
pile[v[22]]=1370; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1370,R,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1370,jvj+3,V11)*/
V11=pile[WZ2]; 
if((V10>V11)) goto l1;
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(R,jvj+4)*/
for(i=x[jvj+4],V8=0;i>0;i=t[i],V8++)  ;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+3,jvj+5)*/
for(i=x[jvj+5],V9=0;i>0;i=t[i],V9++)  ;
if((V8==V9)) goto l11;
goto l1;
}
