#include "dx.h"
void ATOME8T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V7=0,I=0,V17=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=20008;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3244&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l11;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(869,R,jvj+8)*/
if((x[jvj+8]!=769)) goto l11;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1274,R,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l11;
l4:pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(R,jvj+9)*/
l5:if((x[jvj+9]<=0)) goto l11;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=509; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1969])( );     /*FNDEND0(509,jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[R]) goto l8;
l6:x[jvj+9]=t[x[jvj+9]];
goto l5;
l1:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,R,jvj+4)*/
pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+3,jvj+5)*/
V17=x[jvj+4];
l2:if((V17>0)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+10; pile[WZ2]=67; pile[WZ3]=jvj+16; 
(*f[1931])( );if(v[102]) goto l9;     /*ISOLONS0(jvj+3,jvj+10,67,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[WZ1]=jvj+3; pile[WZ3]=(-631); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-631),jvj+22)*/
pile[WZ1]=jvj+10; pile[WZ3]=(-656); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,jvj+10,110,(-656),jvj+23)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(206,715,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3161; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3161,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20008; pile[WZ4]=jvj+20; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,289,218,20008,jvj+20,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+23)*/
(*f[481])( );     /*STOCKER0(jvj+17)*/
l9:x[jvj+24]=t[x[jvj+24]];
l7:if((x[jvj+24]<=0)) goto l6;
x[jvj+3]=s[x[jvj+24]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+24];
if((x[R]==x[jvj+3])) goto l9;
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+3,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l9;
pile[v[22]]=869; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(869,jvj+3,jvj+14)*/
if((x[jvj+14]!=769)) goto l9;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1274,jvj+3,V7)*/
V7=pile[WZ2]; 
if((V7!=0)) goto l9;
l10:pile[v[22]]=jvj+3; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(jvj+3,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l1;
goto l9;
l3:I=s[V17];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==I) goto l9;
V17=t[V17];
goto l2;
l8:x[jvj+24]=x[jvj+11] ;z[jvj+24]=z[jvj+11];
goto l7;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
