#include "dx.h"
void EXAPBE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V9=0,V10=0,V18=0,V=0,V5=0,V4=0,V15=0,V21=0,V27=0,V14=0,V23=0,V19=0,V28=0,V30=0,V31=0,V32=0,V33=0,V34=0,V36=0,V37=0,V38=0,V39=0,V41=0,V42=0,V43=0,V44=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V53=0,V60=0,V59=0;
int E,EC,G,NX,NRR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=11226;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==504&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; G=pile[v[22]+2]; NX=pile[v[22]+3]; NRR=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+19]=x[E] ;z[jvj+19]=z[E];
l4:if((x[jvj+19]>0)) goto l5;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l3:V4=V5;
l12:pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,V14,V4,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V28,40,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=(-9543); pile[WZ1]=V30; 
(*f[64])( );     /*SRA2((-9543),V30,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V31,683,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V32,58,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V33,V23,41,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V34,41,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V36,32,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V37,60,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=V15; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V38,V15,41,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V39,(-9543),V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V41,683,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V42,58,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=V21; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V43,V21,41,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V44,44,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=860; 
(*f[42])( );     /*SRA1(135,V46,860,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V47,58,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=jvj+11; 
(*f[42])( );     /*SRA1(135,V48,jvj+11,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V49,40,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=V19; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V50,V19,41,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V51,41,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
pile[v[22]]=G; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(G,117,1)*/
l9:x[jvj+21]=t[x[jvj+21]];
l8:if((x[jvj+21]<=0)) goto l6;
x[jvj+10]=s[x[jvj+21]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+21];
pile[v[22]]=860; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,jvj+10,jvj+11)*/
if((x[jvj+11]!=530)) goto l9;
pile[v[22]]=935; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+10,jvj+12)*/
if((x[jvj+12]!=547)) goto l9;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(876,jvj+10,V14)*/
V14=pile[WZ2]; 
if((V14>=V15)) goto l9;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,jvj+10,V23)*/
V23=pile[WZ2]; 
if((V23==NRR)) goto l10;
if((NRR==0)) goto l10;
goto l9;
l5:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+7,jvj+14)*/
pile[v[22]]=983; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(983,jvj+14,jvj+15)*/
pile[v[22]]=878; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(878,jvj+15,jvj+16)*/
l14:if((x[jvj+16]<=0)) goto l6;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=163; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+17,V60)*/
V60=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+7,V59)*/
V59=pile[WZ2]; 
if((V60==V59)) goto l15;
x[jvj+16]=t[x[jvj+16]];
goto l14;
l6:x[jvj+19]=t[x[jvj+19]];
goto l4;
l7:pile[v[22]]=876; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(876,jvj+3,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,jvj+3,V21)*/
V21=pile[WZ2]; 
V27=x[jvj+8];
x[jvj+21]=x[jvj+9] ;z[jvj+21]=z[jvj+9];
goto l8;
l10:pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+10,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=EC; pile[WZ2]=683; pile[WZ3]=jvj+13; 
(*f[849])( );     /*EVCOND1(jvj+10,EC,683,jvj+13)*/
if((x[jvj+13]==135)) goto l11;
goto l9;
l11:pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V27,0,V5)*/
V5=pile[WZ3]; 
V4=incon;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+7,V18)*/
V18=pile[WZ2]; 
V=V18;
pile[v[22]]=V5; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V5,V,V4)*/
V4=pile[WZ2]; 
goto l12;
l15:x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+7,jvj+8)*/
x[jvj+2]=x[jvj+20] ;z[jvj+2]=z[jvj+20];
pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+9)*/
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(876,jvj+2,V11)*/
V11=pile[WZ2]; 
x[jvj+18]=x[jvj+9] ;z[jvj+18]=z[jvj+9];
l1:if((x[jvj+18]<=0)) goto l6;
x[jvj+3]=s[x[jvj+18]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+18];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+3,V9)*/
V9=pile[WZ2]; 
if((V9!=NX)) goto l2;
pile[v[22]]=935; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(935,jvj+3,jvj+4)*/
if((x[jvj+4]!=547)) goto l2;
pile[v[22]]=860; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,jvj+3,jvj+5)*/
if((x[jvj+5]!=530)) goto l2;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(876,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10<=V11)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=EC; pile[WZ2]=683; pile[WZ3]=jvj+6; 
(*f[849])( );     /*EVCOND1(jvj+3,EC,683,jvj+6)*/
if((x[jvj+6]==135)) goto l7;
l2:x[jvj+18]=t[x[jvj+18]];
goto l1;
}
