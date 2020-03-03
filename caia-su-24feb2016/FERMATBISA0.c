#include "dx.h"
void FERMATBISA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V18=0,V36=0,V38=0,V47=0,V46=0,V49=0,V48=0,V41=0,I=0,V3=0;
int A,P,EX;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=35;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; P=pile[v[22]+1]; EX=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,A,jvj+14)*/
if((x[jvj+14]!=484)) goto l19;
pile[v[22]]=A; pile[WZ1]=jvj+15; 
(*f[200])( );if(v[102]) goto l19;     /*NDD0(A,jvj+15)*/
for(a=x[EX];a>0;a=t[a]) if(s[a]==x[jvj+15]) goto l26;
pile[v[22]]=1474; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1474,jvj+15,jvj+16)*/
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+16,V47)*/
V47=pile[WZ2]; 
V46=V47%P;
if((V46!=0)) goto l16;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(510,jvj+16,V49)*/
V49=pile[WZ2]; 
V48=V49%P;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V48; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V48,R)*/
l25:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+1]=s[x[jvj+22]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+22];
pile[v[22]]=jvj+1; pile[WZ1]=P; pile[WZ2]=EX; pile[WZ3]=jvj+2; 
(*f[4030])( );     /*FERMATBISA0(jvj+1,P,EX,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
x[jvj+22]=t[x[jvj+22]];
l1:if((x[jvj+22]>0)) goto l2;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+32]=x[jvj+3] ;z[jvj+32]=z[jvj+3];
l3:if((x[jvj+32]>0)) goto l4;
x[jvj+24]=incon;
for(i=x[jvj+3],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=1)) goto l5;
if((x[jvj+3]<=0)) goto l5;
x[jvj+33]=s[x[jvj+3]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+3];
x[jvj+24]=x[jvj+33] ;z[jvj+24]=z[jvj+33];
l5:if((x[jvj+3]>0)) goto l6;
if(x[jvj+24]==incon) goto l27;
l22:x[R]=x[jvj+24] ;z[R]=z[jvj+24];
goto l25;
l4:x[jvj+4]=s[x[jvj+32]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+32];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
x[jvj+32]=t[x[jvj+32]];
goto l3;
l6:x[jvj+7]=s[x[jvj+3]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V19)*/
V19=pile[WZ2]; 
if((V19!=0)) goto l7;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+24)*/
goto l22;
l7:x[jvj+3]=t[x[jvj+3]];
goto l5;
l9:x[jvj+9]=s[x[jvj+23]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+23];
pile[v[22]]=jvj+9; pile[WZ1]=P; pile[WZ2]=EX; pile[WZ3]=jvj+8; 
(*f[4030])( );     /*FERMATBISA0(jvj+9,P,EX,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+8,V36)*/
V36=pile[WZ2]; 
if((V36==0)) goto l10;
l11:pile[v[22]]=jvj+10; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+8)*/
l10:x[jvj+23]=t[x[jvj+23]];
l8:if((x[jvj+23]>0)) goto l9;
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+34]=x[jvj+10] ;z[jvj+34]=z[jvj+10];
l12:if((x[jvj+34]>0)) goto l13;
x[jvj+28]=incon;
if((x[jvj+10]!=0)) goto l14;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+28)*/
l14:for(i=x[jvj+10],V38=0;i>0;i=t[i],V38++)  ;
if((V38!=1)) goto l15;
if((x[jvj+10]<=0)) goto l15;
x[jvj+35]=s[x[jvj+10]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+10];
x[jvj+28]=x[jvj+35] ;z[jvj+28]=z[jvj+35];
l23:x[R]=x[jvj+28] ;z[R]=z[jvj+28];
goto l25;
l13:x[jvj+11]=s[x[jvj+34]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+34];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
x[jvj+34]=t[x[jvj+34]];
goto l12;
l15:if(x[jvj+28]==incon) goto l28;
goto l23;
l16:pile[v[22]]=1310; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1310,jvj+15,jvj+17)*/
l17:if((x[jvj+17]<=0)) goto l19;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+18,V41)*/
V41=pile[WZ2]; 
if((V41!=P)) goto l18;
pile[v[22]]=195; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(195,jvj+18,jvj+19)*/
if((x[jvj+19]==0)) goto l18;
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==0) goto l18;
l26:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l25;
l18:x[jvj+17]=t[x[jvj+17]];
goto l17;
l19:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
V3=I%P;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,R)*/
goto l25;
l20:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,A,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==486)) goto l21;
if((x[jvj+21]!=485)) goto l24;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,A,jvj+23)*/
x[jvj+10]=0 ;z[jvj+10]=0;
goto l8;
l21:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,A,jvj+22)*/
x[jvj+3]=0 ;z[jvj+3]=0;
goto l1;
l24:x[R]=x[A] ;z[R]=z[A];
goto l25;
l27:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+27; 
(*f[301])( );     /*TRI11(jvj+26,jvj+6,107,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+27,22,100,jvj+24)*/
goto l22;
l28:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+31; 
(*f[301])( );     /*TRI11(jvj+30,jvj+13,107,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+31,22,100,jvj+28)*/
goto l23;
}
