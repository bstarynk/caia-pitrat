#include "dx.h"
void ATOME232T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20232;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3699&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=55)) goto l9;
pile[v[22]]=1232; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1232,R,jvj+13)*/
for(i=x[jvj+13],V3=0;i>0;i=t[i],V3++)  ;
if((V3<=1)) goto l9;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,R,jvj+14)*/
l7:if((x[jvj+10]<=0)) goto l9;
x[jvj+15]=s[x[jvj+10]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+10];
pile[v[22]]=870; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(870,jvj+15,V5)*/
V5=pile[WZ2]; 
if((V5>V3)) goto l8;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[WZ1]=jvj+15; pile[WZ3]=(-631); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,jvj+15,110,(-631),jvj+21)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(206,715,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3697; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3697,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20232; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,289,218,20232,jvj+19,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
(*f[481])( );     /*STOCKER0(jvj+16)*/
l8:x[jvj+10]=t[x[jvj+10]];
goto l7;
l2:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+22]=x[jvj+9] ;z[jvj+22]=z[jvj+9];
l3:if((x[jvj+22]>0)) goto l4;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+3]=s[x[jvj+22]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+22];
if((x[jvj+3]==x[R])) goto l5;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==697) goto l6;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==697) goto l6;
l5:x[jvj+22]=t[x[jvj+22]];
goto l3;
l6:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l5;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
