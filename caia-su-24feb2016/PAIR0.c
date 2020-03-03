#include "dx.h"
void PAIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V6=0,V29=0,V32=0,V55=0,I=0,V1=0,V47=0,V46=0,V49=0,V48=0,V36=0,V35=0,V37=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=27;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
V1=I%2;
if((V1==0)) goto l17;
l18:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,A,jvj+14)*/
if((x[jvj+14]!=484)) goto l19;
pile[v[22]]=A; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l19;     /*NDD0(A,jvj+10)*/
pile[v[22]]=1474; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1474,jvj+10,jvj+15)*/
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+15,V47)*/
V47=pile[WZ2]; 
V46=V47%2;
if((V46!=0)) goto l13;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,jvj+15,V49)*/
V49=pile[WZ2]; 
V48=V49%2;
if((V48==0)) goto l17;
l13:pile[v[22]]=1310; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1310,jvj+10,jvj+11)*/
l14:if((x[jvj+11]>0)) goto l15;
pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(365,jvj+10,jvj+16)*/
if((x[jvj+16]!=0)) goto l1;
l19:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,A,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]==485)) goto l20;
if((x[jvj+18]==486)) goto l21;
if((x[jvj+18]==52)) goto l22;
if((x[jvj+18]!=596)) goto l24;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,A,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[1352])( );     /*POSITIF0(jvj+23,jvj+24)*/
if((x[jvj+24]==135)) goto l23;
l24:v[0]=jvj; v[22]-=2; v[102]=1;return;
l6:x[jvj+4]=s[x[jvj+27]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+27];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[996])( );if(v[102]) goto l7;     /*PAIR0(jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l8;
l7:x[jvj+27]=t[x[jvj+27]];
l5:if((x[jvj+27]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+6,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(0,117,jvj+9)*/
l9:if((x[jvj+19]>0)) goto l10;
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+9,V32)*/
V32=pile[WZ2]; 
V35=V29+V32;
if((V35!=V36)) goto l24;
V37=V32%2;
if((V37==0)) goto l17;
goto l24;
l8:pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,117,1)*/
goto l7;
l10:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[997])( );if(v[102]) goto l11;     /*IMPAIR0(jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l12;
l11:x[jvj+19]=t[x[jvj+19]];
goto l9;
l12:pile[v[22]]=jvj+9; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+9,117,1)*/
goto l11;
l15:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+12,V55)*/
V55=pile[WZ2]; 
if((V55!=2)) goto l16;
pile[v[22]]=195; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(195,jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==0) goto l16;
l17:x[R]=135 ;z[R]=135;
v[0]=jvj; v[22]-=2; v[102]=0;return;
l16:x[jvj+11]=t[x[jvj+11]];
goto l14;
l20:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,A,jvj+19)*/
for(i=x[jvj+19],V36=0;i>0;i=t[i],V36++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
x[jvj+27]=x[jvj+19] ;z[jvj+27]=z[jvj+19];
goto l5;
l21:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,A,jvj+20)*/
l3:if((x[jvj+20]<=0)) goto l24;
x[jvj+2]=s[x[jvj+20]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+20];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[996])( );if(v[102]) goto l4;     /*PAIR0(jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l17;
l4:x[jvj+20]=t[x[jvj+20]];
goto l3;
l22:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,A,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[996])( );if(v[102]) goto l24;     /*PAIR0(jvj+21,jvj+22)*/
if((x[jvj+22]==135)) goto l17;
goto l24;
l23:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,A,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[996])( );if(v[102]) goto l24;     /*PAIR0(jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l17;
goto l24;
l1:if((x[jvj+16]<=0)) goto l17;
x[jvj+1]=s[x[jvj+16]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+16];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+1,V7)*/
V7=pile[WZ2]; 
V6=V7%2;
if((V6!=0)) goto l19;
l2:x[jvj+16]=t[x[jvj+16]];
goto l1;
}
