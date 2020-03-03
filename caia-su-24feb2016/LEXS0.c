#include "dx.h"
void LEXS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V74=0,V75=0,V44=0,V76=0,V77=0,V2=0,V72=0,V71=0,V70=0,V69=0,DY=0,V5=0,V3=0,V56=0,V87=0,V55=0,V54=0,V19=0,NR=0,V32=0,V29=0,V65=0,V61=0,V67=0,RR=0,V42=0,V41=0,V40=0,V48=0,V22=0,V53=0,V31=0,V89=0,V11=0;
int DP,EX;
int DX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V87=DP;
l17:DX=DY=incon;
V2=bh[v[1]][V87];
if(V2!=93&&V2!=32) goto l2;
DX=V87;
l2:V72=V87+1;
V71=bh[v[1]][V72];
if((V71==58)) goto l3;
if((V71==64)) goto l4;
if((V71==96)) goto l5;
if((V71!=35)) goto l6;
V19=V72+1;
x[jvj+7]=d[29];z[jvj+7]=0;
pile[v[22]]=V19; pile[WZ1]=16; 
(*f[254])( );     /*LND4(V19,16,NR,DY)*/
NR=pile[WZ2]; DY=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NR; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,NR,jvj+8)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+8; pile[WZ3]=jvj+7; 
(*f[663])( );     /*PLUG0(128,EX,jvj+8,jvj+7)*/
l1:V1=bh[v[1]][V87];
if(V1==44||V1==91||V1==93||V1==32) goto l13;
pile[v[22]]=20; pile[WZ1]=10330; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10330,0,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(41,1,V74,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; 
(*f[40])( );     /*SLG0(V75)*/
l13:if(DX==incon) goto l14;
v[0]=jvj; v[22]-=3; pile[v[22]+2]=DX; v[102]=0;return;
l3:V70=bh[v[1]][V87];
if((V70==93)) goto l6;
pile[v[22]]=V72; 
(*f[131])( );     /*SMV0(V72,V69,DY)*/
V69=pile[WZ1]; DY=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V69; pile[WZ4]=jvj+1; 
(*f[270])( );     /*QUADRI7(100,21,140,V69,jvj+1)*/
pile[v[22]]=EX; pile[WZ1]=128; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(EX,128,jvj+1)*/
goto l1;
l4:V5=bh[v[1]][V87];
if((V5==93)) goto l6;
pile[v[22]]=V72; 
(*f[107])( );     /*CRC0(V72,V3)*/
V3=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l6;     /*SMA0(V72,64,67,jvj+2)*/
x[jvj+3]=d[27];z[jvj+3]=0;
DY=V3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+4)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+4; pile[WZ3]=jvj+3; 
(*f[663])( );     /*PLUG0(128,EX,jvj+4,jvj+3)*/
goto l1;
l5:V56=bh[v[1]][V87];
if((V56==93)) goto l6;
pile[v[22]]=V87; 
(*f[257])( );if(v[102]) goto l6;     /*SRS0(V87,V55)*/
V55=pile[WZ1]; 
(*f[256])( );if(v[102]) goto l6;     /*SY0(V87,V54)*/
V54=pile[WZ1]; 
x[jvj+5]=d[28];z[jvj+5]=0;
DY=V55;
pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V54; pile[WZ4]=jvj+6; 
(*f[270])( );     /*QUADRI7(100,96,163,V54,jvj+6)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+6; pile[WZ3]=jvj+5; 
(*f[663])( );     /*PLUG0(128,EX,jvj+6,jvj+5)*/
goto l1;
l6:V32=bh[v[1]][V87];
if((V32==93)) goto l1;
if((V71<48)) goto l19;
if((V71>57)) goto l19;
V31=135;
l7:if((V31==135)) goto l8;
if((V71==45)) goto l9;
V89=V71;
if((V89>=97)) goto l22;
if((V89<65)) goto l20;
if((V89<=90)) goto l21;
l20:V11=134;
l10:if((V11==135)) goto l11;
if((V71==39)) goto l12;
if(V71!=36&&V71!=38&&V71!=124) goto l1;
pile[v[22]]=V72; 
(*f[107])( );     /*CRC0(V72,V22)*/
V22=pile[WZ1]; 
pile[v[22]]=V87; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+17; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(V87,64,67,jvj+17)*/
x[jvj+18]=d[27];z[jvj+18]=0;
DY=V22;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+19)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+19; pile[WZ3]=jvj+18; 
(*f[663])( );     /*PLUG0(128,EX,jvj+19,jvj+18)*/
goto l1;
l8:x[jvj+9]=d[29];z[jvj+9]=0;
pile[v[22]]=V72; 
(*f[126])( );     /*LND2(V72,V29,DY)*/
V29=pile[WZ1]; DY=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V29; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V29,jvj+10)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+10; pile[WZ3]=jvj+9; 
(*f[663])( );     /*PLUG0(128,EX,jvj+10,jvj+9)*/
goto l1;
l9:V65=V72+1;
pile[v[22]]=V65; 
(*f[126])( );     /*LND2(V65,V61,DY)*/
V61=pile[WZ1]; DY=pile[WZ2]; 
V67=(-V61);
x[jvj+11]=d[29];z[jvj+11]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V67; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V67,jvj+12)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+12; pile[WZ3]=jvj+11; 
(*f[663])( );     /*PLUG0(128,EX,jvj+12,jvj+11)*/
goto l1;
l11:pile[v[22]]=V87; 
(*f[131])( );     /*SMV0(V87,RR,DY)*/
RR=pile[WZ1]; DY=pile[WZ2]; 
x[jvj+13]=d[30];z[jvj+13]=0;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=RR; pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,RR,jvj+14)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+14; pile[WZ3]=jvj+13; 
(*f[663])( );     /*PLUG0(128,EX,jvj+14,jvj+13)*/
goto l1;
l12:V42=V72+1;
V41=V42+1;
V40=V41+1;
V48=bh[v[1]][V42];
x[jvj+15]=d[31];z[jvj+15]=0;
DY=V40;
V44=bh[v[1]][V41];
if(V44==39) goto l18;
pile[v[22]]=20; pile[WZ1]=10330; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10330,0,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,2,V76,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; 
(*f[40])( );     /*SLG0(V77)*/
l18:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V48; pile[WZ4]=jvj+16; 
(*f[272])( );     /*QUADRI9(100,89,162,V48,jvj+16)*/
pile[v[22]]=128; pile[WZ1]=EX; pile[WZ2]=jvj+16; pile[WZ3]=jvj+15; 
(*f[663])( );     /*PLUG0(128,EX,jvj+16,jvj+15)*/
goto l1;
l14:if(DY!=incon) goto l15;
l16:v[0]=jvj; v[22]-=3; v[102]=1;return;
l15:V53=bh[v[1]][V87];
if((V53==93)) goto l16;
V87=DY;
goto l17;
l19:V31=134;
goto l7;
l21:V11=135;
goto l10;
l22:if((V89<=122)) goto l21;
goto l20;
}
