#include "dx.h"
void PREPBILAN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V2=0,V1=0,V3=0,V8=0,V33=0,V31=0,V32=0,V35=0,V34=0,V22=0,MM=0,J=0,A=0,V15=0,V19=0,V13=0,V14=0,V17=0,V27=0,V40=0,V39=0;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11062;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==951&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=incon;
pile[v[22]]=117; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,M,V8)*/
V8=pile[WZ2]; 
vv[30]=V8;
vv[31]=966;
l4:pile[v[22]]=109; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(109,M,jvj+3)*/
V33=x[jvj+3];
pile[v[22]]=22; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(22,0,42,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=966; 
(*f[42])( );     /*SRA1(135,V31,966,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V33,V32,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=163; pile[WZ1]=M; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,M,L)*/
L=pile[WZ2]; 
if((L==(-1278))) goto l1;
pile[v[22]]=V2; pile[WZ1]=L; 
(*f[37])( );     /*SRA0(V2,L,V1)*/
V1=pile[WZ2]; 
l2:V3=incon;
pile[v[22]]=860; pile[WZ1]=M; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(860,M,jvj+2)*/
pile[v[22]]=135; pile[WZ1]=V1; 
(*f[42])( );     /*SRA1(135,V1,jvj+2,V3)*/
V3=pile[WZ3]; 
l5:V35=75-V3;
pile[v[22]]=V35; pile[WZ1]=V3; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V35,V3,42,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l18:pile[v[22]]=109; pile[WZ1]=M; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,M,jvj+17)*/
pile[v[22]]=983; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(983,jvj+17,jvj+18)*/
pile[v[22]]=878; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(878,jvj+18,jvj+19)*/
l19:if((x[jvj+19]<=0)) goto l17;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=163; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,jvj+20,V40)*/
V40=pile[WZ2]; 
pile[WZ1]=M; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,M,V39)*/
V39=pile[WZ2]; 
if((V40==V39)) goto l20;
x[jvj+19]=t[x[jvj+19]];
goto l19;
l1:V1=V2;
goto l2;
l3:V3=V1;
goto l5;
l6:pile[v[22]]=860; pile[WZ1]=M; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,M,jvj+5)*/
if((x[jvj+5]==1085)) goto l7;
if((x[jvj+5]!=493)) goto l8;
pile[v[22]]=M; pile[WZ1]=jvj+6; 
(*f[1268])( );     /*BILSOL0(M,jvj+6)*/
l8:if(x[jvj+5]!=1082&&x[jvj+5]!=336&&x[jvj+5]!=301&&x[jvj+5]!=1085) goto l9;
pile[v[22]]=M; pile[WZ1]=jvj+6; 
(*f[1266])( );     /*ANEXPER0(M,jvj+6)*/
l9:
(*f[275])( );     /*DATE2(MM,A,J)*/
MM=pile[v[22]]; A=pile[WZ1]; J=pile[WZ2]; 
pile[v[22]]=M; pile[WZ1]=941; pile[WZ2]=A; 
(*f[43])( );     /*CHGC2(M,941,A)*/
pile[WZ1]=942; pile[WZ2]=MM; 
(*f[43])( );     /*CHGC2(M,942,MM)*/
pile[WZ1]=943; pile[WZ2]=J; 
(*f[43])( );     /*CHGC2(M,943,J)*/
pile[v[22]]=860; pile[WZ1]=M; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(860,M,jvj+7)*/
if((x[jvj+7]!=208)) goto l13;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1484,854,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=M; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,M,jvj+8)*/
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(683,M,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+8; pile[WZ2]=683; pile[WZ3]=V19; pile[WZ4]=jvj+4; 
(*f[192])( );     /*QUADRI4(109,jvj+8,683,V19,jvj+4)*/
V13=sepfacts+1;
V14=sepfacts+V15;
pile[v[22]]=20; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[409])( );     /*TRI14(20,jvj+4,jvj+9)*/
l10:if((V13>V14)) goto l13;
V17=r[V13];
if((V17!=1)) goto l11;
x[jvj+10]=V13 ;z[jvj+10]=(V13<=sepcte) ? V13 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=1001; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1001,jvj+12,jvj+13)*/
if((x[jvj+13]==0)) goto l11;
pile[v[22]]=163; pile[WZ1]=M; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,M,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=163; pile[WZ2]=V22; 
(*f[177])( );     /*CHGC4(jvj+4,163,V22)*/
l12:pile[v[22]]=jvj+12; pile[WZ1]=67; pile[WZ2]=jvj+9; pile[WZ3]=67; pile[WZ4]=jvj+14; pile[WZ5]=V19; 
(*f[1265])( );     /*ANAREG1(jvj+12,67,jvj+9,67,jvj+14,V19)*/
l11:V13++;
goto l10;
l7:pile[v[22]]=M; pile[WZ1]=jvj+6; 
(*f[1267])( );     /*BILEXPLORE0(M,jvj+6)*/
goto l8;
l13:V27=x[M];
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=V27; 
(*f[134])( );     /*OTA0(1109,924,V27)*/
pile[v[22]]=159; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(159,jvj+14,jvj+15)*/
l14:if((x[jvj+15]>0)) goto l15;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l15:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; 
(*f[450])( );     /*SOREGBILAN0(jvj+16)*/
x[jvj+15]=t[x[jvj+15]];
goto l14;
l20:x[jvj+6]=x[jvj+20] ;z[jvj+6]=z[jvj+20];
l17:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(250,158,jvj+14)*/
if(x[jvj+6]!=incon) goto l6;
goto l9;
}
