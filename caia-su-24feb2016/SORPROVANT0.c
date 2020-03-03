#include "dx.h"
void SORPROVANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V12=0,V13=0,L=0,V17=0,V16=0,V15=0,V6=0,V24=0,V38=0,V31=0,V32=0,V33=0,V35=0,V36=0,V37=0,V39=0,V27=0,V40=0,V41=0,V42=0,V45=0,V30=0,V43=0,V44=0,V63=0,V76=0,V77=0,V78=0,V79=0,V71=0,V70=0,V80=0,V81=0,V82=0,V83=0,V84=0,V85=0,V87=0,V90=0,V94=0,V74=0,V88=0,V89=0,V55=0,V56=0,V60=0;
int N,ND;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=34;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; ND=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V14=x[N];
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,N,jvj+1)*/
if((x[jvj+1]==0)) goto l2;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=107; 
(*f[42])( );     /*SRA1(135,0,107,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l1:if((x[jvj+1]<=0)) goto l2;
L=s[x[jvj+1]];
V17=L;
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V17,0,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
x[jvj+1]=t[x[jvj+1]];
goto l1;
l2:pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1538,N,jvj+2)*/
for(i=x[jvj+2],V6=0;i>0;i=t[i],V6++)  ;
if((V6>1)) goto l9;
if((V6!=1)) goto l3;
if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+3,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=934; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(934,jvj+3,jvj+4)*/
V38=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V31,683,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V32,58,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V24; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V33,V24,41,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=934; 
(*f[42])( );     /*SRA1(135,V35,934,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V36,58,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V38; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V38,V37,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l4:pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+5)*/
l5:if((x[jvj+5]>0)) goto l6;
l3:v[0]=jvj; v[22]-=2; return;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=110; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(110,jvj+6,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(288,jvj+6,jvj+7)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=jvj+7; 
(*f[42])( );     /*SRA1(135,V40,jvj+7,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=V27; 
(*f[37])( );     /*SRA0(V41,V27,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
pile[v[22]]=1489; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1489,jvj+6,jvj+8)*/
V45=x[jvj+8];
l7:if((V45<=0)) goto l8;
V30=s[V45];
V43=V30;
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V43,0,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
V45=t[V45];
goto l7;
l8:x[jvj+5]=t[x[jvj+5]];
goto l5;
l9:x[jvj+29]=0 ;z[jvj+29]=0;
x[jvj+25]=x[jvj+29] ;z[jvj+25]=z[jvj+29];
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1538,N,jvj+9)*/
l10:if((x[jvj+9]>0)) goto l20;
x[jvj+30]=x[jvj+25] ;z[jvj+30]=z[jvj+25];
l11:if((x[jvj+30]>0)) goto l12;
goto l3;
l12:x[jvj+10]=s[x[jvj+30]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+30];
pile[v[22]]=110; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(110,jvj+10,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(288,jvj+10,jvj+11)*/
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=5; pile[WZ1]=V76; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(5,V76,38,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V77; pile[WZ2]=jvj+11; 
(*f[42])( );     /*SRA1(135,V77,jvj+11,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=V63; 
(*f[37])( );     /*SRA0(V78,V63,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; 
(*f[40])( );     /*SLG0(V79)*/
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1538,N,jvj+12)*/
x[jvj+31]=x[jvj+12] ;z[jvj+31]=z[jvj+12];
l13:if((x[jvj+31]<=0)) goto l19;
x[jvj+13]=s[x[jvj+31]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+31];
pile[v[22]]=683; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(683,jvj+13,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=159; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,jvj+13,jvj+14)*/
pile[v[22]]=934; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(934,jvj+13,jvj+15)*/
x[jvj+32]=x[jvj+14] ;z[jvj+32]=z[jvj+14];
l14:if((x[jvj+32]<=0)) goto l18;
x[jvj+16]=s[x[jvj+32]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+32];
pile[v[22]]=110; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(110,jvj+16,V70)*/
V70=pile[WZ2]; 
if((V70!=V63)) goto l17;
pile[v[22]]=288; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(288,jvj+16,jvj+17)*/
if((x[jvj+17]!=x[jvj+11])) goto l17;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=934; 
(*f[42])( );     /*SRA1(135,V80,934,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V81,58,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V82; pile[WZ2]=jvj+15; 
(*f[42])( );     /*SRA1(135,V82,jvj+15,V83)*/
V83=pile[WZ3]; 
pile[WZ1]=V83; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V83,683,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V84,58,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=V71; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V85,V71,41,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; 
(*f[40])( );     /*SLG0(V87)*/
pile[v[22]]=1489; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1489,jvj+16,jvj+18)*/
if((x[jvj+18]!=0)) goto l15;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=66; 
(*f[42])( );     /*SRA1(135,0,66,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; 
(*f[40])( );     /*SLG0(V90)*/
l15:V94=x[jvj+18];
l16:if((V94<=0)) goto l17;
V74=s[V94];
V88=V74;
pile[v[22]]=20; pile[WZ1]=V88; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V88,0,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
V94=t[V94];
goto l16;
l17:x[jvj+32]=t[x[jvj+32]];
goto l14;
l18:x[jvj+31]=t[x[jvj+31]];
goto l13;
l19:x[jvj+30]=t[x[jvj+30]];
goto l11;
l20:x[jvj+19]=s[x[jvj+9]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+9];
pile[v[22]]=159; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(159,jvj+19,jvj+20)*/
x[jvj+33]=x[jvj+20] ;z[jvj+33]=z[jvj+20];
l21:if((x[jvj+33]>0)) goto l22;
x[jvj+9]=t[x[jvj+9]];
goto l10;
l22:x[jvj+21]=s[x[jvj+33]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+33];
pile[v[22]]=110; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(110,jvj+21,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(288,jvj+21,jvj+22)*/
V56=V55;
x[jvj+23]=x[jvj+22] ;z[jvj+23]=z[jvj+22];
x[jvj+24]=incon;
x[jvj+34]=x[jvj+25] ;z[jvj+34]=z[jvj+25];
l23:if((x[jvj+34]>0)) goto l27;
pile[v[22]]=110; pile[WZ1]=V56; pile[WZ2]=288; pile[WZ3]=jvj+23; pile[WZ4]=jvj+24; 
(*f[692])( );     /*QUADRI13(110,V56,288,jvj+23,jvj+24)*/
l24:x[jvj+26]=x[jvj+24] ;z[jvj+26]=z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
l25:x[jvj+33]=t[x[jvj+33]];
goto l21;
l26:x[jvj+34]=t[x[jvj+34]];
goto l23;
l27:x[jvj+27]=s[x[jvj+34]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+34];
pile[v[22]]=110; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(110,jvj+27,V60)*/
V60=pile[WZ2]; 
if((V60!=V56)) goto l26;
pile[v[22]]=288; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(288,jvj+27,jvj+28)*/
if((x[jvj+28]!=x[jvj+23])) goto l26;
x[jvj+24]=x[jvj+27] ;z[jvj+24]=z[jvj+27];
goto l24;
}
