#include "dx.h"
void LECTPART0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V1=0,V=0,DXX=0,DX=0,V58=0,V59=0,N=0,DY=0,V35=0,V33=0,V5=0,DZ=0,V7=0,NR=0,K=0,V8=0,P=0,V14=0,V16=0,V9=0,V26=0,V31=0,V30=0,DYY=0,V24=0,V44=0,V49=0,V48=0,V38=0,NA=0,DZZ=0,V52=0,NB=0,V37=0,V41=0,V42=0,V22=0,V21=0,V19=0,V15=0,V60=0,V12=0,V40=0,V69=0,V39=0,V75=0,V72=0,V80=0,V77=0;
int DD;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
if(v[0]>99700) (*f[6])( );

DD=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l35:DY=N=DZ=P=incon;
pile[v[22]]=58; 
(*f[346])( );     /*LK1(58)*/
V1=bh[v[1]][0];
if((V1==32)) goto l34;
pile[v[22]]=(-1); 
(*f[131])( );     /*SMV0((-1),V,DXX)*/
V=pile[WZ1]; DXX=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=DD; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,DD,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l34;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V3)*/
V3=pile[WZ2]; 
if((V3!=V)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(158,jvj+2,jvj+3)*/
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
DX=DXX;
V58=bh[v[1]][DX];
if((V58!=32)) goto l3;
V59=DX+1;
pile[v[22]]=V59; 
(*f[126])( );     /*LND2(V59,N,DY)*/
N=pile[WZ1]; DY=pile[WZ2]; 
l3:if((x[jvj+3]!=531)) goto l4;
if((V58!=58)) goto l4;
V35=DX+1;
pile[v[22]]=V35; pile[WZ1]=jvj+4; pile[WZ2]=120; pile[WZ3]=101; pile[WZ4]=jvj+4; 
(*f[662])( );     /*LEXT1(V35,jvj+4,120,101,jvj+4,V33)*/
V33=pile[WZ5]; 
l4:if(DY!=incon) goto l5;
l34:V60=bh[v[1]][0];
if((V60!=32)) goto l35;
v[0]=jvj; v[22]-=1; return;
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l5:V5=bh[v[1]][DY];
if((V5==58)) goto l6;
if((V5!=32)) goto l25;
V7=DY+1;
pile[v[22]]=V7; 
(*f[126])( );     /*LND2(V7,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
V8=bh[v[1]][K];
if((V8!=58)) goto l25;
DZ=K;
P=NR;
l25:if(N!=incon) goto l26;
l27:if(DZ!=incon) goto l28;
goto l34;
l6:DZ=DY;
goto l25;
l8:x[jvj+5]=t[x[jvj+5]];
l7:if((x[jvj+5]<=0)) goto l34;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+6,V14)*/
V14=pile[WZ2]; 
if((V14!=N)) goto l8;
pile[v[22]]=355; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(355,jvj+6,jvj+16)*/
V80=P;
x[jvj+21]=x[jvj+16] ;z[jvj+21]=z[jvj+16];
l44:if((V80==1)) goto l45;
pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(120,jvj+21,jvj+22)*/
V77=V80-1;
x[jvj+21]=x[jvj+22] ;z[jvj+21]=z[jvj+22];
V80=V77;
goto l44;
l10:pile[v[22]]=V16; 
(*f[135])( );     /*LND3(V16,V9)*/
V9=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+18)*/
l31:pile[v[22]]=jvj+17; pile[WZ1]=102; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(jvj+17,102,jvj+18)*/
goto l34;
l12:x[jvj+7]=t[x[jvj+7]];
l11:if((x[jvj+7]<=0)) goto l33;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+8,V26)*/
V26=pile[WZ2]; 
if((V26!=N)) goto l12;
V31=DZ+1;
V30=bh[v[1]][V31];
if(V30==40||V30==37) goto l13;
pile[v[22]]=355; pile[WZ2]=V31; pile[WZ3]=jvj+8; 
(*f[757])( );     /*LEXU0(355,jvj+8,V31,jvj+8,DYY)*/
DYY=pile[WZ4]; 
l13:if((V30!=40)) goto l33;
pile[v[22]]=V31; pile[WZ1]=jvj+8; pile[WZ2]=120; pile[WZ3]=355; pile[WZ4]=jvj+8; 
(*f[662])( );     /*LEXT1(V31,jvj+8,120,355,jvj+8,V24)*/
V24=pile[WZ5]; 
l33:if(x[jvj+3]!=979&&x[jvj+3]!=1027) goto l34;
pile[v[22]]=128; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(128,jvj+4,jvj+9)*/
l14:if((x[jvj+9]<=0)) goto l34;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(117,jvj+10,V44)*/
V44=pile[WZ2]; 
if((V44!=N)) goto l15;
V49=DZ+1;
V48=bh[v[1]][V49];
V69=V48;
if((V69>=97)) goto l41;
if((V69<65)) goto l39;
if((V69<=90)) goto l40;
l39:V39=134;
l16:if((V39==135)) goto l17;
l37:if((V48<48)) goto l38;
if((V48>57)) goto l38;
V40=135;
l18:if((V40==135)) goto l19;
l20:if((V48!=40)) goto l21;
pile[v[22]]=V49; pile[WZ1]=jvj+10; pile[WZ2]=120; pile[WZ3]=355; pile[WZ4]=jvj+10; 
(*f[662])( );     /*LEXT1(V49,jvj+10,120,355,jvj+10,V37)*/
V37=pile[WZ5]; 
l21:V41=(-999999);
pile[v[22]]=128; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(128,jvj+4,jvj+11)*/
l22:if((x[jvj+11]>0)) goto l23;
if((V41==(-999999))) goto l34;
pile[v[22]]=jvj+4; pile[WZ1]=515; pile[WZ2]=V41; 
(*f[43])( );     /*CHGC2(jvj+4,515,V41)*/
goto l34;
l15:x[jvj+9]=t[x[jvj+9]];
goto l14;
l17:pile[v[22]]=355; pile[WZ1]=jvj+10; pile[WZ2]=V49; pile[WZ3]=jvj+10; 
(*f[757])( );     /*LEXU0(355,jvj+10,V49,jvj+10,V38)*/
V38=pile[WZ4]; 
goto l37;
l19:pile[v[22]]=V49; 
(*f[126])( );     /*LND2(V49,NA,DZZ)*/
NA=pile[WZ1]; DZZ=pile[WZ2]; 
V52=DZZ+1;
pile[v[22]]=V52; 
(*f[135])( );     /*LND3(V52,NB)*/
NB=pile[WZ1]; 
pile[v[22]]=355; pile[WZ1]=jvj+10; pile[WZ2]=jvj+10; pile[WZ3]=NA; pile[WZ4]=NB; 
(*f[758])( );     /*LEXW0(355,jvj+10,jvj+10,NA,NB)*/
goto l20;
l23:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=667; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(667,jvj+12,V42)*/
V42=pile[WZ2]; 
if(V42>V41) V41=V42;
l24:x[jvj+11]=t[x[jvj+11]];
goto l22;
l26:if((x[jvj+3]!=531)) goto l27;
V22=bh[v[1]][DY];
if((V22!=58)) goto l27;
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+4,jvj+13)*/
V75=N;
x[jvj+19]=x[jvj+13] ;z[jvj+19]=z[jvj+13];
l42:if((V75==1)) goto l43;
pile[v[22]]=120; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(120,jvj+19,jvj+20)*/
V72=V75-1;
x[jvj+19]=x[jvj+20] ;z[jvj+19]=z[jvj+20];
V75=V72;
goto l42;
l28:if(P!=incon) goto l29;
if(N!=incon) goto l32;
goto l34;
l29:if(N!=incon) goto l30;
goto l34;
l30:if(x[jvj+3]!=453&&x[jvj+3]!=979&&x[jvj+3]!=1027) goto l34;
V16=DZ+1;
V15=bh[v[1]][V16];
pile[v[22]]=128; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,jvj+4,jvj+5)*/
goto l7;
l32:if((x[jvj+3]!=453)) goto l33;
pile[v[22]]=128; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(128,jvj+4,jvj+7)*/
goto l11;
l36:V12=134;
l9:if((V12==135)) goto l10;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V15; pile[WZ4]=jvj+18; 
(*f[272])( );     /*QUADRI9(100,89,162,V15,jvj+18)*/
goto l31;
l38:V40=134;
goto l18;
l40:V39=135;
goto l16;
l41:if((V69<=122)) goto l40;
goto l39;
l43:x[jvj+14]=x[jvj+19] ;z[jvj+14]=z[jvj+19];
V21=DY+1;
pile[v[22]]=V21; 
(*f[135])( );     /*LND3(V21,V19)*/
V19=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=102; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(jvj+14,102,jvj+15)*/
goto l27;
l45:x[jvj+17]=x[jvj+21] ;z[jvj+17]=z[jvj+21];
x[jvj+18]=incon;
if((V15<48)) goto l36;
if((V15>57)) goto l36;
V12=135;
goto l9;
}
