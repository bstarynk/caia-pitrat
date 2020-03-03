#include "dx.h"
void ATOME231T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20231;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3695&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=55)) goto l12;
pile[v[22]]=1232; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1232,R,jvj+17)*/
for(i=x[jvj+17],V5=0;i>0;i=t[i],V5++)  ;
if((V5<=1)) goto l12;
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=R; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(R,jvj+11)*/
l4:if((x[jvj+11]>0)) goto l5;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,R,jvj+18)*/
l10:if((x[jvj+14]<=0)) goto l12;
x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+3,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=25)) goto l11;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
x[jvj+27]=x[jvj+4] ;z[jvj+27]=z[jvj+4];
l1:if((x[jvj+27]>0)) goto l2;
for(i=x[jvj+5],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=1)) goto l11;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+25)*/
pile[WZ1]=jvj+3; pile[WZ3]=(-631); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-631),jvj+26)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(206,715,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3692; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3692,246,jvj+24)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20231; pile[WZ4]=jvj+24; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,289,218,20231,jvj+24,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=159; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+26)*/
(*f[481])( );     /*STOCKER0(jvj+21)*/
l11:x[jvj+14]=t[x[jvj+14]];
goto l10;
l2:x[jvj+6]=s[x[jvj+27]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+27];
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
l3:x[jvj+27]=t[x[jvj+27]];
goto l1;
l5:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=509; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1969])( );     /*FNDEND0(509,jvj+12,jvj+13)*/
x[jvj+28]=x[jvj+13] ;z[jvj+28]=z[jvj+13];
l6:if((x[jvj+28]>0)) goto l7;
x[jvj+11]=t[x[jvj+11]];
goto l4;
l7:x[jvj+7]=s[x[jvj+28]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+28];
if((x[jvj+7]==x[R])) goto l8;
pile[v[22]]=1417; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1417,jvj+7,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==694) goto l9;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1545,jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==694) goto l9;
l8:x[jvj+28]=t[x[jvj+28]];
goto l6;
l9:pile[v[22]]=jvj+14; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+7)*/
goto l8;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
