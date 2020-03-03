#include "dx.h"
void SORINU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V12=0,V46=0,V44=0,V45=0,V16=0,V26=0,V27=0,W=0,V23=0,V22=0,V49=0,V48=0,V32=0,V31=0,V41=0,V35=0,V38=0,V37=0,V42=0,V52=0,V51=0,V53=0,V40=0,V75=0,V77=0,V72=0,V74=0,V103=0,V105=0,V100=0,V102=0,V131=0,V133=0,V128=0,V130=0,V152=0,V153=0,V169=0,V170=0,V208=0,V207=0,V206=0,V181=0,V182=0,V179=0,V180=0,V204=0,V175=0,V178=0,V177=0,V173=0,V174=0,V201=0,V176=0,V172=0,V171=0,V217=0,V218=0,V215=0,V214=0,V212=0,V198=0,V197=0,V196=0,V194=0,V165=0,V193=0,V192=0,V164=0,V162=0,V163=0,V189=0,V158=0,V161=0,V160=0,V156=0,V157=0,V186=0,V159=0,V155=0,V154=0,V191=0,V190=0,V225=0,V226=0,V223=0,V222=0,V220=0,V229=0,V230=0,V246=0,V247=0,V285=0,V284=0,V283=0,V258=0,V259=0,V256=0,V257=0,V281=0,V252=0,V255=0,V254=0,V250=0,V251=0,V278=0,V253=0,V249=0,V248=0,V294=0,V295=0,V292=0,V291=0,V289=0,V275=0,V274=0,V273=0,V271=0,V242=0,V270=0,V269=0,V241=0,V239=0,V240=0,V266=0,V235=0,V238=0,V237=0,V233=0,V234=0,V263=0,V236=0,V232=0,V231=0,V268=0,V267=0,V302=0,V303=0,V300=0,V299=0,V297=0,V306=0,V307=0,V323=0,V324=0,V362=0,V361=0,V360=0,V335=0,V336=0,V333=0,V334=0,V358=0,V329=0,V332=0,V331=0,V327=0,V328=0,V355=0,V330=0,V326=0,V325=0,V371=0,V372=0,V369=0,V368=0,V366=0,V352=0,V351=0,V350=0,V348=0,V319=0,V347=0,V346=0,V318=0,V316=0,V317=0,V343=0,V312=0,V315=0,V314=0,V310=0,V311=0,V340=0,V313=0,V309=0,V308=0,V345=0,V344=0,V379=0,V380=0,V377=0,V376=0,V374=0,V383=0,V384=0,V400=0,V401=0,V439=0,V438=0,V437=0,V412=0,V413=0,V410=0,V411=0,V435=0,V406=0,V409=0,V408=0,V404=0,V405=0,V432=0,V407=0,V403=0,V402=0,V448=0,V449=0,V446=0,V445=0,V443=0,V429=0,V428=0,V427=0,V425=0,V396=0,V424=0,V423=0,V395=0,V393=0,V394=0,V420=0,V389=0,V392=0,V391=0,V387=0,V388=0,V417=0,V390=0,V386=0,V385=0,V422=0,V421=0,V456=0,V457=0,V454=0,V453=0,V451=0;
int N,K,UR,S,E,NR;
int L;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=126;
x[jvj+1]=10980;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==448&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; K=pile[v[22]+1]; UR=pile[v[22]+2]; S=pile[v[22]+3]; E=pile[v[22]+4]; NR=pile[v[22]+5]; L=pile[v[22]+6]; v[22]+=7; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=L; 
(*f[54])( );     /*TRI1(250,158,L)*/
if((K==65)) goto l42;
if((K==68)) goto l34;
if((K==67)) goto l36;
if((K!=66)) goto l40;
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+113]=x[E] ;z[jvj+113]=z[E];
l9:if((x[jvj+113]<=0)) goto l38;
x[jvj+10]=s[x[jvj+113]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+113];
pile[v[22]]=109; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+10,jvj+11)*/
pile[v[22]]=1001; pile[WZ1]=N; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1001,N,jvj+7)*/
x[jvj+112]=x[jvj+7] ;z[jvj+112]=z[jvj+7];
l7:if((x[jvj+112]<=0)) goto l10;
x[jvj+8]=s[x[jvj+112]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+112];
pile[v[22]]=683; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+8,V12)*/
V12=pile[WZ2]; 
if((V12!=NR)) goto l8;
pile[v[22]]=109; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+8,jvj+9)*/
if((x[jvj+9]!=x[jvj+11])) goto l8;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+11)*/
l10:x[jvj+113]=t[x[jvj+113]];
goto l9;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+4,V3)*/
V3=pile[WZ2]; 
if((V3!=NR)) goto l4;
x[jvj+111]=x[E] ;z[jvj+111]=z[E];
l5:if((x[jvj+111]<=0)) goto l4;
x[jvj+5]=s[x[jvj+111]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+111];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[806])( );     /*EQVALSYM0(jvj+5,jvj+4,jvj+6)*/
if((x[jvj+6]==135)) goto l43;
l6:x[jvj+111]=t[x[jvj+111]];
goto l5;
l4:x[jvj+3]=t[x[jvj+3]];
l2:if((x[jvj+3]>0)) goto l3;
if((x[S]!=68)) goto l40;
pile[v[22]]=159; pile[WZ1]=jvj+2; pile[WZ2]=jvj+87; 
(*f[33])( );     /*FNDE0(159,jvj+2,jvj+87)*/
l93:if((x[jvj+87]>0)) goto l94;
l40:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l8:x[jvj+112]=t[x[jvj+112]];
goto l7;
l13:x[jvj+15]=s[x[jvj+114]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+114];
pile[v[22]]=683; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(683,jvj+15,V16)*/
V16=pile[WZ2]; 
if((V16!=NR)) goto l14;
pile[v[22]]=109; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(109,jvj+15,jvj+16)*/
if((x[jvj+16]!=x[jvj+32])) goto l14;
pile[v[22]]=159; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(159,jvj+15,jvj+51)*/
l60:if((x[jvj+51]>0)) goto l61;
l14:x[jvj+114]=t[x[jvj+114]];
l12:if((x[jvj+114]>0)) goto l13;
if((x[S]!=68)) goto l39;
pile[v[22]]=159; pile[WZ1]=jvj+13; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(159,jvj+13,jvj+93)*/
l128:if((x[jvj+93]>0)) goto l129;
l39:x[jvj+12]=t[x[jvj+12]];
l38:if((x[jvj+12]<=0)) goto l40;
x[jvj+32]=s[x[jvj+12]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+12];
if((x[S]!=68)) goto l41;
V46=x[jvj+32];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V46; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V46,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
l41:pile[v[22]]=jvj+32; pile[WZ1]=158; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+32,158,jvj+13)*/
if((UR!=86)) goto l11;
pile[v[22]]=L; pile[WZ1]=1001; 
(*f[36])( );     /*PLUSC0(L,1001,jvj+13)*/
l11:pile[v[22]]=1001; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1001,N,jvj+14)*/
x[jvj+114]=x[jvj+14] ;z[jvj+114]=z[jvj+14];
goto l12;
l17:V22=V23;
l19:pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
l25:pile[v[22]]=109; pile[WZ1]=jvj+19; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(109,jvj+19,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=158; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+26,158,jvj+22)*/
if((UR!=86)) goto l20;
pile[v[22]]=L; pile[WZ1]=1001; 
(*f[36])( );     /*PLUSC0(L,1001,jvj+22)*/
l20:pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+19,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=163; pile[WZ2]=V32; 
(*f[177])( );     /*CHGC4(jvj+22,163,V32)*/
l21:pile[v[22]]=1001; pile[WZ1]=N; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1001,N,jvj+23)*/
x[jvj+116]=x[jvj+23] ;z[jvj+116]=z[jvj+23];
l22:if((x[jvj+116]>0)) goto l23;
if((x[S]!=68)) goto l37;
pile[v[22]]=159; pile[WZ1]=jvj+22; pile[WZ2]=jvj+99; 
(*f[33])( );     /*FNDE0(159,jvj+22,jvj+99)*/
l163:if((x[jvj+99]>0)) goto l164;
l37:x[jvj+119]=t[x[jvj+119]];
l35:if((x[jvj+119]<=0)) goto l40;
x[jvj+19]=s[x[jvj+119]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+119];
pile[v[22]]=1001; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1001,N,jvj+17)*/
x[jvj+115]=x[jvj+17] ;z[jvj+115]=z[jvj+17];
l15:if((x[jvj+115]<=0)) goto l37;
x[jvj+18]=s[x[jvj+115]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+115];
pile[v[22]]=683; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(683,jvj+18,V26)*/
V26=pile[WZ2]; 
if((V26!=NR)) goto l16;
pile[v[22]]=jvj+19; pile[WZ2]=jvj+20; 
(*f[806])( );     /*EQVALSYM0(jvj+19,jvj+18,jvj+20)*/
if((x[jvj+20]==135)) goto l18;
l16:x[jvj+115]=t[x[jvj+115]];
goto l15;
l18:if((UR!=86)) goto l25;
if((x[S]!=68)) goto l25;
pile[v[22]]=109; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(109,jvj+19,jvj+21)*/
V49=x[jvj+21];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V49,V48,V23)*/
V23=pile[WZ3]; 
V22=incon;
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+19,V27)*/
V27=pile[WZ2]; 
W=V27;
pile[v[22]]=V23; pile[WZ1]=W; 
(*f[37])( );     /*SRA0(V23,W,V22)*/
V22=pile[WZ2]; 
goto l19;
l23:x[jvj+24]=s[x[jvj+116]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+116];
pile[v[22]]=683; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(683,jvj+24,V31)*/
V31=pile[WZ2]; 
if((V31!=NR)) goto l24;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+19; pile[WZ2]=jvj+25; 
(*f[806])( );     /*EQVALSYM0(jvj+24,jvj+19,jvj+25)*/
if((x[jvj+25]==135)) goto l76;
l24:x[jvj+116]=t[x[jvj+116]];
goto l22;
l26:V37=V38;
l29:pile[v[22]]=41; pile[WZ1]=V42; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,V42,V37,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
pile[v[22]]=159; pile[WZ1]=jvj+27; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(159,jvj+27,jvj+105)*/
l198:if((x[jvj+105]>0)) goto l199;
l32:x[jvj+117]=t[x[jvj+117]];
l30:if((x[jvj+117]>0)) goto l31;
x[jvj+118]=t[x[jvj+118]];
l33:if((x[jvj+118]<=0)) goto l40;
x[jvj+30]=s[x[jvj+118]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+118];
pile[v[22]]=1001; pile[WZ1]=N; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1001,N,jvj+29)*/
x[jvj+117]=x[jvj+29] ;z[jvj+117]=z[jvj+29];
goto l30;
l27:if((UR==86)) goto l28;
if((UR!=85)) goto l32;
if((x[S]!=68)) goto l32;
pile[v[22]]=117; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(117,jvj+27,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(109,jvj+27,jvj+28)*/
V52=x[jvj+28];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V52,V51,V38)*/
V38=pile[WZ3]; 
V37=incon;
pile[v[22]]=163; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(163,jvj+27,V41)*/
V41=pile[WZ2]; 
V35=V41;
pile[v[22]]=V38; pile[WZ1]=V35; 
(*f[37])( );     /*SRA0(V38,V35,V37)*/
V37=pile[WZ2]; 
goto l29;
l28:pile[v[22]]=L; pile[WZ1]=1001; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(L,1001,jvj+27)*/
goto l32;
l31:x[jvj+27]=s[x[jvj+117]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+117];
pile[v[22]]=683; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(683,jvj+27,V40)*/
V40=pile[WZ2]; 
if((V40!=NR)) goto l32;
pile[v[22]]=jvj+30; pile[WZ2]=jvj+31; 
(*f[806])( );     /*EQVALSYM0(jvj+30,jvj+27,jvj+31)*/
if((x[jvj+31]==135)) goto l27;
goto l32;
l34:x[jvj+118]=x[E] ;z[jvj+118]=z[E];
goto l33;
l36:x[jvj+119]=x[E] ;z[jvj+119]=z[E];
goto l35;
l42:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(250,158,jvj+2)*/
if((UR!=86)) goto l1;
pile[v[22]]=L; pile[WZ1]=1001; 
(*f[36])( );     /*PLUSC0(L,1001,jvj+2)*/
l1:pile[v[22]]=1001; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1001,N,jvj+3)*/
goto l2;
l43:pile[v[22]]=159; pile[WZ1]=jvj+4; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(159,jvj+4,jvj+33)*/
l44:if((x[jvj+33]>0)) goto l45;
goto l6;
l45:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=158; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(158,jvj+34,jvj+35)*/
x[jvj+36]=159 ;z[jvj+36]=159;
x[jvj+38]=158 ;z[jvj+38]=158;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+2; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(jvj+36,jvj+2,jvj+37)*/
l46:if((x[jvj+37]>0)) goto l59;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+35,jvj+38,jvj+39)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+2,jvj+36,jvj+39)*/
l47:pile[v[22]]=737; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(737,jvj+34,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=jvj+39; pile[WZ1]=737; pile[WZ2]=V75; 
(*f[186])( );     /*BTC0(jvj+39,737,V75)*/
l48:pile[v[22]]=846; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(846,jvj+34,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=jvj+39; pile[WZ1]=846; pile[WZ2]=V77; 
(*f[186])( );     /*BTC0(jvj+39,846,V77)*/
l49:if((UR!=86)) goto l57;
pile[v[22]]=258; pile[WZ1]=jvj+34; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(258,jvj+34,jvj+40)*/
x[jvj+120]=x[jvj+40] ;z[jvj+120]=z[jvj+40];
l50:if((x[jvj+120]<=0)) goto l57;
x[jvj+41]=s[x[jvj+120]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+120];
pile[v[22]]=715; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(715,jvj+41,jvj+42)*/
x[jvj+43]=258 ;z[jvj+43]=258;
x[jvj+45]=715 ;z[jvj+45]=715;
pile[v[22]]=jvj+43; pile[WZ1]=jvj+39; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(jvj+43,jvj+39,jvj+44)*/
l51:if((x[jvj+44]>0)) goto l56;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+42,jvj+45,jvj+46)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+39,jvj+43,jvj+46)*/
l52:pile[v[22]]=737; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(737,jvj+41,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=jvj+46; pile[WZ1]=737; pile[WZ2]=V72; 
(*f[186])( );     /*BTC0(jvj+46,737,V72)*/
l53:pile[v[22]]=846; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(846,jvj+41,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=jvj+46; pile[WZ1]=846; pile[WZ2]=V74; 
(*f[186])( );     /*BTC0(jvj+46,846,V74)*/
l54:x[jvj+120]=t[x[jvj+120]];
goto l50;
l55:x[jvj+44]=t[x[jvj+44]];
goto l51;
l56:x[jvj+47]=s[x[jvj+44]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+44];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(jvj+45,jvj+47,jvj+48)*/
if((x[jvj+48]!=x[jvj+42])) goto l55;
x[jvj+46]=x[jvj+47] ;z[jvj+46]=z[jvj+47];
goto l52;
l57:x[jvj+33]=t[x[jvj+33]];
goto l44;
l58:x[jvj+37]=t[x[jvj+37]];
goto l46;
l59:x[jvj+49]=s[x[jvj+37]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+37];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(jvj+38,jvj+49,jvj+50)*/
if((x[jvj+50]!=x[jvj+35])) goto l58;
x[jvj+39]=x[jvj+49] ;z[jvj+39]=z[jvj+49];
goto l47;
l61:x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=158; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(158,jvj+52,jvj+53)*/
x[jvj+54]=159 ;z[jvj+54]=159;
x[jvj+56]=158 ;z[jvj+56]=158;
pile[v[22]]=jvj+54; pile[WZ1]=jvj+13; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(jvj+54,jvj+13,jvj+55)*/
l62:if((x[jvj+55]>0)) goto l75;
pile[v[22]]=jvj+53; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+53,jvj+56,jvj+57)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+13,jvj+54,jvj+57)*/
l63:pile[v[22]]=737; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(737,jvj+52,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=jvj+57; pile[WZ1]=737; pile[WZ2]=V103; 
(*f[186])( );     /*BTC0(jvj+57,737,V103)*/
l64:pile[v[22]]=846; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(846,jvj+52,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=jvj+57; pile[WZ1]=846; pile[WZ2]=V105; 
(*f[186])( );     /*BTC0(jvj+57,846,V105)*/
l65:if((UR!=86)) goto l73;
pile[v[22]]=258; pile[WZ1]=jvj+52; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(258,jvj+52,jvj+58)*/
x[jvj+121]=x[jvj+58] ;z[jvj+121]=z[jvj+58];
l66:if((x[jvj+121]<=0)) goto l73;
x[jvj+59]=s[x[jvj+121]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+121];
pile[v[22]]=715; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(715,jvj+59,jvj+60)*/
x[jvj+61]=258 ;z[jvj+61]=258;
x[jvj+63]=715 ;z[jvj+63]=715;
pile[v[22]]=jvj+61; pile[WZ1]=jvj+57; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(jvj+61,jvj+57,jvj+62)*/
l67:if((x[jvj+62]>0)) goto l72;
pile[v[22]]=jvj+60; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+60,jvj+63,jvj+64)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+57,jvj+61,jvj+64)*/
l68:pile[v[22]]=737; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(737,jvj+59,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=jvj+64; pile[WZ1]=737; pile[WZ2]=V100; 
(*f[186])( );     /*BTC0(jvj+64,737,V100)*/
l69:pile[v[22]]=846; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(846,jvj+59,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=jvj+64; pile[WZ1]=846; pile[WZ2]=V102; 
(*f[186])( );     /*BTC0(jvj+64,846,V102)*/
l70:x[jvj+121]=t[x[jvj+121]];
goto l66;
l71:x[jvj+62]=t[x[jvj+62]];
goto l67;
l72:x[jvj+65]=s[x[jvj+62]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+62];
pile[v[22]]=jvj+63; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(jvj+63,jvj+65,jvj+66)*/
if((x[jvj+66]!=x[jvj+60])) goto l71;
x[jvj+64]=x[jvj+65] ;z[jvj+64]=z[jvj+65];
goto l68;
l73:x[jvj+51]=t[x[jvj+51]];
goto l60;
l74:x[jvj+55]=t[x[jvj+55]];
goto l62;
l75:x[jvj+67]=s[x[jvj+55]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+55];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(jvj+56,jvj+67,jvj+68)*/
if((x[jvj+68]!=x[jvj+53])) goto l74;
x[jvj+57]=x[jvj+67] ;z[jvj+57]=z[jvj+67];
goto l63;
l76:pile[v[22]]=159; pile[WZ1]=jvj+24; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(159,jvj+24,jvj+69)*/
l77:if((x[jvj+69]>0)) goto l78;
goto l24;
l78:x[jvj+70]=s[x[jvj+69]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+69];
pile[v[22]]=158; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(158,jvj+70,jvj+71)*/
x[jvj+72]=159 ;z[jvj+72]=159;
x[jvj+74]=158 ;z[jvj+74]=158;
pile[v[22]]=jvj+72; pile[WZ1]=jvj+22; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(jvj+72,jvj+22,jvj+73)*/
l79:if((x[jvj+73]>0)) goto l92;
pile[v[22]]=jvj+71; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+71,jvj+74,jvj+75)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+72; 
(*f[36])( );     /*PLUSC0(jvj+22,jvj+72,jvj+75)*/
l80:pile[v[22]]=737; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(737,jvj+70,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=jvj+75; pile[WZ1]=737; pile[WZ2]=V131; 
(*f[186])( );     /*BTC0(jvj+75,737,V131)*/
l81:pile[v[22]]=846; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(846,jvj+70,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=jvj+75; pile[WZ1]=846; pile[WZ2]=V133; 
(*f[186])( );     /*BTC0(jvj+75,846,V133)*/
l82:if((UR!=86)) goto l90;
pile[v[22]]=258; pile[WZ1]=jvj+70; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(258,jvj+70,jvj+76)*/
x[jvj+122]=x[jvj+76] ;z[jvj+122]=z[jvj+76];
l83:if((x[jvj+122]<=0)) goto l90;
x[jvj+77]=s[x[jvj+122]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+122];
pile[v[22]]=715; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(715,jvj+77,jvj+78)*/
x[jvj+79]=258 ;z[jvj+79]=258;
x[jvj+81]=715 ;z[jvj+81]=715;
pile[v[22]]=jvj+79; pile[WZ1]=jvj+75; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(jvj+79,jvj+75,jvj+80)*/
l84:if((x[jvj+80]>0)) goto l89;
pile[v[22]]=jvj+78; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+78,jvj+81,jvj+82)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+75,jvj+79,jvj+82)*/
l85:pile[v[22]]=737; pile[WZ1]=jvj+77; 
(*f[26])( );if(v[102]) goto l86;     /*FNDC0(737,jvj+77,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=jvj+82; pile[WZ1]=737; pile[WZ2]=V128; 
(*f[186])( );     /*BTC0(jvj+82,737,V128)*/
l86:pile[v[22]]=846; pile[WZ1]=jvj+77; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(846,jvj+77,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=jvj+82; pile[WZ1]=846; pile[WZ2]=V130; 
(*f[186])( );     /*BTC0(jvj+82,846,V130)*/
l87:x[jvj+122]=t[x[jvj+122]];
goto l83;
l88:x[jvj+80]=t[x[jvj+80]];
goto l84;
l89:x[jvj+83]=s[x[jvj+80]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+80];
pile[v[22]]=jvj+81; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(jvj+81,jvj+83,jvj+84)*/
if((x[jvj+84]!=x[jvj+78])) goto l88;
x[jvj+82]=x[jvj+83] ;z[jvj+82]=z[jvj+83];
goto l85;
l90:x[jvj+69]=t[x[jvj+69]];
goto l77;
l91:x[jvj+73]=t[x[jvj+73]];
goto l79;
l92:x[jvj+85]=s[x[jvj+73]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+73];
pile[v[22]]=jvj+74; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(jvj+74,jvj+85,jvj+86)*/
if((x[jvj+86]!=x[jvj+71])) goto l91;
x[jvj+75]=x[jvj+85] ;z[jvj+75]=z[jvj+85];
goto l80;
l94:x[jvj+88]=s[x[jvj+87]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+87];
pile[v[22]]=158; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(158,jvj+88,jvj+89)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(737,jvj+88,V152)*/
V152=pile[WZ2]; 
if((V152>0)) goto l127;
l95:pile[v[22]]=846; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l96;     /*FNDC0(846,jvj+88,V153)*/
V153=pile[WZ2]; 
if((V153>0)) goto l127;
l96:x[jvj+87]=t[x[jvj+87]];
goto l93;
l102:pile[v[22]]=V180; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V180,83,V179)*/
V179=pile[WZ2]; 
l101:V181=V179;
l100:pile[v[22]]=41; pile[WZ1]=V182; pile[WZ2]=V181; 
(*f[39])( );     /*SDX0(41,V182,V181,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=V206; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V206,(-9543),V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V207,(-7127),V208)*/
V208=pile[WZ2]; 
pile[v[22]]=V208; 
(*f[40])( );     /*SLG0(V208)*/
l99:x[jvj+123]=t[x[jvj+123]];
l97:if((x[jvj+123]<=0)) goto l96;
x[jvj+91]=s[x[jvj+123]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+123];
pile[v[22]]=715; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(715,jvj+91,jvj+92)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l98;     /*FNDC0(737,jvj+91,V169)*/
V169=pile[WZ2]; 
if((V169>0)) goto l113;
l98:pile[v[22]]=846; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l99;     /*FNDC0(846,jvj+91,V170)*/
V170=pile[WZ2]; 
if((V170>0)) goto l113;
goto l99;
l103:V181=V175;
goto l100;
l106:pile[v[22]]=V174; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V174,83,V173)*/
V173=pile[WZ2]; 
l105:V175=V173;
l104:V181=incon;
pile[v[22]]=846; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l103;     /*FNDC0(846,jvj+91,V177)*/
V177=pile[WZ2]; 
V178=V177;
if((V178<=0)) goto l103;
pile[v[22]]=41; pile[WZ1]=V178; pile[WZ2]=V175; 
(*f[39])( );     /*SDX0(41,V178,V175,V204)*/
V204=pile[WZ3]; 
pile[v[22]]=V204; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V204,(-7111),V180)*/
V180=pile[WZ2]; 
V179=incon;
if((V178>1)) goto l102;
V179=V180;
goto l101;
l107:V175=V176;
goto l104;
l108:V218=V212*1000;
V217=V218/V215;
V182=V217;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+92; 
(*f[42])( );     /*SRA1(135,0,jvj+92,V176)*/
V176=pile[WZ3]; 
V175=incon;
pile[v[22]]=737; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l107;     /*FNDC0(737,jvj+91,V171)*/
V171=pile[WZ2]; 
V172=V171;
if((V172<=0)) goto l107;
pile[v[22]]=41; pile[WZ1]=V172; pile[WZ2]=V176; 
(*f[39])( );     /*SDX0(41,V172,V176,V201)*/
V201=pile[WZ3]; 
pile[v[22]]=V201; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V201,(-7110),V174)*/
V174=pile[WZ2]; 
V173=incon;
if((V172>1)) goto l106;
V173=V174;
goto l105;
l110:V214=0;
l109:V215=V212+V214;
if((V215>0)) goto l108;
goto l99;
l112:V212=0;
l111:pile[v[22]]=846; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l110;     /*FNDC0(846,jvj+91,V214)*/
V214=pile[WZ2]; 
goto l109;
l113:pile[v[22]]=737; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l112;     /*FNDC0(737,jvj+91,V212)*/
V212=pile[WZ2]; 
goto l111;
l116:pile[v[22]]=V163; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V163,83,V162)*/
V162=pile[WZ2]; 
l115:V164=V162;
l114:pile[v[22]]=V164; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V164,46,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V192; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,V192,986,V193)*/
V193=pile[WZ3]; 
pile[v[22]]=V193; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V193,61,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V165; pile[WZ2]=V194; 
(*f[39])( );     /*SDX0(41,V165,V194,V196)*/
V196=pile[WZ3]; 
pile[v[22]]=V196; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V196,(-9543),V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V197,(-7127),V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V198; 
(*f[40])( );     /*SLG0(V198)*/
if((UR!=86)) goto l96;
pile[v[22]]=258; pile[WZ1]=jvj+88; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(258,jvj+88,jvj+90)*/
x[jvj+123]=x[jvj+90] ;z[jvj+123]=z[jvj+90];
goto l97;
l117:V164=V158;
goto l114;
l120:pile[v[22]]=V157; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V157,83,V156)*/
V156=pile[WZ2]; 
l119:V158=V156;
l118:V164=incon;
pile[v[22]]=846; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l117;     /*FNDC0(846,jvj+88,V160)*/
V160=pile[WZ2]; 
V161=V160;
if((V161<=0)) goto l117;
pile[v[22]]=41; pile[WZ1]=V161; pile[WZ2]=V158; 
(*f[39])( );     /*SDX0(41,V161,V158,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V189,(-7111),V163)*/
V163=pile[WZ2]; 
V162=incon;
if((V161>1)) goto l116;
V162=V163;
goto l115;
l121:V158=V159;
goto l118;
l122:V226=V220*1000;
V225=V226/V223;
V165=V225;
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V190)*/
V190=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V190; pile[WZ2]=jvj+89; 
(*f[42])( );     /*SRA1(135,V190,jvj+89,V191)*/
V191=pile[WZ3]; 
pile[v[22]]=V191; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V191,58,V159)*/
V159=pile[WZ2]; 
V158=incon;
pile[v[22]]=737; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l121;     /*FNDC0(737,jvj+88,V154)*/
V154=pile[WZ2]; 
V155=V154;
if((V155<=0)) goto l121;
pile[v[22]]=41; pile[WZ1]=V155; pile[WZ2]=V159; 
(*f[39])( );     /*SDX0(41,V155,V159,V186)*/
V186=pile[WZ3]; 
pile[v[22]]=V186; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V186,(-7110),V157)*/
V157=pile[WZ2]; 
V156=incon;
if((V155>1)) goto l120;
V156=V157;
goto l119;
l124:V222=0;
l123:V223=V220+V222;
if((V223>0)) goto l122;
goto l96;
l126:V220=0;
l125:pile[v[22]]=846; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l124;     /*FNDC0(846,jvj+88,V222)*/
V222=pile[WZ2]; 
goto l123;
l127:pile[v[22]]=737; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l126;     /*FNDC0(737,jvj+88,V220)*/
V220=pile[WZ2]; 
goto l125;
l129:x[jvj+94]=s[x[jvj+93]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+93];
pile[v[22]]=158; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l131;     /*FNDO0(158,jvj+94,jvj+95)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l130;     /*FNDC0(737,jvj+94,V229)*/
V229=pile[WZ2]; 
if((V229>0)) goto l162;
l130:pile[v[22]]=846; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l131;     /*FNDC0(846,jvj+94,V230)*/
V230=pile[WZ2]; 
if((V230>0)) goto l162;
l131:x[jvj+93]=t[x[jvj+93]];
goto l128;
l137:pile[v[22]]=V257; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V257,83,V256)*/
V256=pile[WZ2]; 
l136:V258=V256;
l135:pile[v[22]]=41; pile[WZ1]=V259; pile[WZ2]=V258; 
(*f[39])( );     /*SDX0(41,V259,V258,V283)*/
V283=pile[WZ3]; 
pile[v[22]]=V283; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V283,(-9543),V284)*/
V284=pile[WZ2]; 
pile[v[22]]=V284; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V284,(-7127),V285)*/
V285=pile[WZ2]; 
pile[v[22]]=V285; 
(*f[40])( );     /*SLG0(V285)*/
l134:x[jvj+124]=t[x[jvj+124]];
l132:if((x[jvj+124]<=0)) goto l131;
x[jvj+97]=s[x[jvj+124]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+124];
pile[v[22]]=715; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l134;     /*FNDO0(715,jvj+97,jvj+98)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(737,jvj+97,V246)*/
V246=pile[WZ2]; 
if((V246>0)) goto l148;
l133:pile[v[22]]=846; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l134;     /*FNDC0(846,jvj+97,V247)*/
V247=pile[WZ2]; 
if((V247>0)) goto l148;
goto l134;
l138:V258=V252;
goto l135;
l141:pile[v[22]]=V251; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V251,83,V250)*/
V250=pile[WZ2]; 
l140:V252=V250;
l139:V258=incon;
pile[v[22]]=846; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l138;     /*FNDC0(846,jvj+97,V254)*/
V254=pile[WZ2]; 
V255=V254;
if((V255<=0)) goto l138;
pile[v[22]]=41; pile[WZ1]=V255; pile[WZ2]=V252; 
(*f[39])( );     /*SDX0(41,V255,V252,V281)*/
V281=pile[WZ3]; 
pile[v[22]]=V281; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V281,(-7111),V257)*/
V257=pile[WZ2]; 
V256=incon;
if((V255>1)) goto l137;
V256=V257;
goto l136;
l142:V252=V253;
goto l139;
l143:V295=V289*1000;
V294=V295/V292;
V259=V294;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+98; 
(*f[42])( );     /*SRA1(135,0,jvj+98,V253)*/
V253=pile[WZ3]; 
V252=incon;
pile[v[22]]=737; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l142;     /*FNDC0(737,jvj+97,V248)*/
V248=pile[WZ2]; 
V249=V248;
if((V249<=0)) goto l142;
pile[v[22]]=41; pile[WZ1]=V249; pile[WZ2]=V253; 
(*f[39])( );     /*SDX0(41,V249,V253,V278)*/
V278=pile[WZ3]; 
pile[v[22]]=V278; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V278,(-7110),V251)*/
V251=pile[WZ2]; 
V250=incon;
if((V249>1)) goto l141;
V250=V251;
goto l140;
l145:V291=0;
l144:V292=V289+V291;
if((V292>0)) goto l143;
goto l134;
l147:V289=0;
l146:pile[v[22]]=846; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l145;     /*FNDC0(846,jvj+97,V291)*/
V291=pile[WZ2]; 
goto l144;
l148:pile[v[22]]=737; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(737,jvj+97,V289)*/
V289=pile[WZ2]; 
goto l146;
l151:pile[v[22]]=V240; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V240,83,V239)*/
V239=pile[WZ2]; 
l150:V241=V239;
l149:pile[v[22]]=V241; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V241,46,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V269; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,V269,986,V270)*/
V270=pile[WZ3]; 
pile[v[22]]=V270; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V270,61,V271)*/
V271=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V242; pile[WZ2]=V271; 
(*f[39])( );     /*SDX0(41,V242,V271,V273)*/
V273=pile[WZ3]; 
pile[v[22]]=V273; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V273,(-9543),V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V274; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V274,(-7127),V275)*/
V275=pile[WZ2]; 
pile[v[22]]=V275; 
(*f[40])( );     /*SLG0(V275)*/
if((UR!=86)) goto l131;
pile[v[22]]=258; pile[WZ1]=jvj+94; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(258,jvj+94,jvj+96)*/
x[jvj+124]=x[jvj+96] ;z[jvj+124]=z[jvj+96];
goto l132;
l152:V241=V235;
goto l149;
l155:pile[v[22]]=V234; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V234,83,V233)*/
V233=pile[WZ2]; 
l154:V235=V233;
l153:V241=incon;
pile[v[22]]=846; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l152;     /*FNDC0(846,jvj+94,V237)*/
V237=pile[WZ2]; 
V238=V237;
if((V238<=0)) goto l152;
pile[v[22]]=41; pile[WZ1]=V238; pile[WZ2]=V235; 
(*f[39])( );     /*SDX0(41,V238,V235,V266)*/
V266=pile[WZ3]; 
pile[v[22]]=V266; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V266,(-7111),V240)*/
V240=pile[WZ2]; 
V239=incon;
if((V238>1)) goto l151;
V239=V240;
goto l150;
l156:V235=V236;
goto l153;
l157:V303=V297*1000;
V302=V303/V300;
V242=V302;
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V267)*/
V267=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V267; pile[WZ2]=jvj+95; 
(*f[42])( );     /*SRA1(135,V267,jvj+95,V268)*/
V268=pile[WZ3]; 
pile[v[22]]=V268; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V268,58,V236)*/
V236=pile[WZ2]; 
V235=incon;
pile[v[22]]=737; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l156;     /*FNDC0(737,jvj+94,V231)*/
V231=pile[WZ2]; 
V232=V231;
if((V232<=0)) goto l156;
pile[v[22]]=41; pile[WZ1]=V232; pile[WZ2]=V236; 
(*f[39])( );     /*SDX0(41,V232,V236,V263)*/
V263=pile[WZ3]; 
pile[v[22]]=V263; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V263,(-7110),V234)*/
V234=pile[WZ2]; 
V233=incon;
if((V232>1)) goto l155;
V233=V234;
goto l154;
l159:V299=0;
l158:V300=V297+V299;
if((V300>0)) goto l157;
goto l131;
l161:V297=0;
l160:pile[v[22]]=846; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l159;     /*FNDC0(846,jvj+94,V299)*/
V299=pile[WZ2]; 
goto l158;
l162:pile[v[22]]=737; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l161;     /*FNDC0(737,jvj+94,V297)*/
V297=pile[WZ2]; 
goto l160;
l164:x[jvj+100]=s[x[jvj+99]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+99];
pile[v[22]]=158; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l166;     /*FNDO0(158,jvj+100,jvj+101)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l165;     /*FNDC0(737,jvj+100,V306)*/
V306=pile[WZ2]; 
if((V306>0)) goto l197;
l165:pile[v[22]]=846; pile[WZ1]=jvj+100; 
(*f[26])( );if(v[102]) goto l166;     /*FNDC0(846,jvj+100,V307)*/
V307=pile[WZ2]; 
if((V307>0)) goto l197;
l166:x[jvj+99]=t[x[jvj+99]];
goto l163;
l172:pile[v[22]]=V334; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V334,83,V333)*/
V333=pile[WZ2]; 
l171:V335=V333;
l170:pile[v[22]]=41; pile[WZ1]=V336; pile[WZ2]=V335; 
(*f[39])( );     /*SDX0(41,V336,V335,V360)*/
V360=pile[WZ3]; 
pile[v[22]]=V360; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V360,(-9543),V361)*/
V361=pile[WZ2]; 
pile[v[22]]=V361; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V361,(-7127),V362)*/
V362=pile[WZ2]; 
pile[v[22]]=V362; 
(*f[40])( );     /*SLG0(V362)*/
l169:x[jvj+125]=t[x[jvj+125]];
l167:if((x[jvj+125]<=0)) goto l166;
x[jvj+103]=s[x[jvj+125]] ;z[jvj+103]=(x[jvj+103]<=sepcte) ? x[jvj+103] : z[jvj+125];
pile[v[22]]=715; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l169;     /*FNDO0(715,jvj+103,jvj+104)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l168;     /*FNDC0(737,jvj+103,V323)*/
V323=pile[WZ2]; 
if((V323>0)) goto l183;
l168:pile[v[22]]=846; pile[WZ1]=jvj+103; 
(*f[26])( );if(v[102]) goto l169;     /*FNDC0(846,jvj+103,V324)*/
V324=pile[WZ2]; 
if((V324>0)) goto l183;
goto l169;
l173:V335=V329;
goto l170;
l176:pile[v[22]]=V328; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V328,83,V327)*/
V327=pile[WZ2]; 
l175:V329=V327;
l174:V335=incon;
pile[v[22]]=846; pile[WZ1]=jvj+103; 
(*f[26])( );if(v[102]) goto l173;     /*FNDC0(846,jvj+103,V331)*/
V331=pile[WZ2]; 
V332=V331;
if((V332<=0)) goto l173;
pile[v[22]]=41; pile[WZ1]=V332; pile[WZ2]=V329; 
(*f[39])( );     /*SDX0(41,V332,V329,V358)*/
V358=pile[WZ3]; 
pile[v[22]]=V358; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V358,(-7111),V334)*/
V334=pile[WZ2]; 
V333=incon;
if((V332>1)) goto l172;
V333=V334;
goto l171;
l177:V329=V330;
goto l174;
l178:V372=V366*1000;
V371=V372/V369;
V336=V371;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+104; 
(*f[42])( );     /*SRA1(135,0,jvj+104,V330)*/
V330=pile[WZ3]; 
V329=incon;
pile[v[22]]=737; pile[WZ1]=jvj+103; 
(*f[26])( );if(v[102]) goto l177;     /*FNDC0(737,jvj+103,V325)*/
V325=pile[WZ2]; 
V326=V325;
if((V326<=0)) goto l177;
pile[v[22]]=41; pile[WZ1]=V326; pile[WZ2]=V330; 
(*f[39])( );     /*SDX0(41,V326,V330,V355)*/
V355=pile[WZ3]; 
pile[v[22]]=V355; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V355,(-7110),V328)*/
V328=pile[WZ2]; 
V327=incon;
if((V326>1)) goto l176;
V327=V328;
goto l175;
l180:V368=0;
l179:V369=V366+V368;
if((V369>0)) goto l178;
goto l169;
l182:V366=0;
l181:pile[v[22]]=846; pile[WZ1]=jvj+103; 
(*f[26])( );if(v[102]) goto l180;     /*FNDC0(846,jvj+103,V368)*/
V368=pile[WZ2]; 
goto l179;
l183:pile[v[22]]=737; pile[WZ1]=jvj+103; 
(*f[26])( );if(v[102]) goto l182;     /*FNDC0(737,jvj+103,V366)*/
V366=pile[WZ2]; 
goto l181;
l186:pile[v[22]]=V317; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V317,83,V316)*/
V316=pile[WZ2]; 
l185:V318=V316;
l184:pile[v[22]]=V318; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V318,46,V346)*/
V346=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V346; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,V346,986,V347)*/
V347=pile[WZ3]; 
pile[v[22]]=V347; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V347,61,V348)*/
V348=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V319; pile[WZ2]=V348; 
(*f[39])( );     /*SDX0(41,V319,V348,V350)*/
V350=pile[WZ3]; 
pile[v[22]]=V350; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V350,(-9543),V351)*/
V351=pile[WZ2]; 
pile[v[22]]=V351; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V351,(-7127),V352)*/
V352=pile[WZ2]; 
pile[v[22]]=V352; 
(*f[40])( );     /*SLG0(V352)*/
if((UR!=86)) goto l166;
pile[v[22]]=258; pile[WZ1]=jvj+100; pile[WZ2]=jvj+102; 
(*f[33])( );     /*FNDE0(258,jvj+100,jvj+102)*/
x[jvj+125]=x[jvj+102] ;z[jvj+125]=z[jvj+102];
goto l167;
l187:V318=V312;
goto l184;
l190:pile[v[22]]=V311; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V311,83,V310)*/
V310=pile[WZ2]; 
l189:V312=V310;
l188:V318=incon;
pile[v[22]]=846; pile[WZ1]=jvj+100; 
(*f[26])( );if(v[102]) goto l187;     /*FNDC0(846,jvj+100,V314)*/
V314=pile[WZ2]; 
V315=V314;
if((V315<=0)) goto l187;
pile[v[22]]=41; pile[WZ1]=V315; pile[WZ2]=V312; 
(*f[39])( );     /*SDX0(41,V315,V312,V343)*/
V343=pile[WZ3]; 
pile[v[22]]=V343; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V343,(-7111),V317)*/
V317=pile[WZ2]; 
V316=incon;
if((V315>1)) goto l186;
V316=V317;
goto l185;
l191:V312=V313;
goto l188;
l192:V380=V374*1000;
V379=V380/V377;
V319=V379;
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V344)*/
V344=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V344; pile[WZ2]=jvj+101; 
(*f[42])( );     /*SRA1(135,V344,jvj+101,V345)*/
V345=pile[WZ3]; 
pile[v[22]]=V345; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V345,58,V313)*/
V313=pile[WZ2]; 
V312=incon;
pile[v[22]]=737; pile[WZ1]=jvj+100; 
(*f[26])( );if(v[102]) goto l191;     /*FNDC0(737,jvj+100,V308)*/
V308=pile[WZ2]; 
V309=V308;
if((V309<=0)) goto l191;
pile[v[22]]=41; pile[WZ1]=V309; pile[WZ2]=V313; 
(*f[39])( );     /*SDX0(41,V309,V313,V340)*/
V340=pile[WZ3]; 
pile[v[22]]=V340; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V340,(-7110),V311)*/
V311=pile[WZ2]; 
V310=incon;
if((V309>1)) goto l190;
V310=V311;
goto l189;
l194:V376=0;
l193:V377=V374+V376;
if((V377>0)) goto l192;
goto l166;
l196:V374=0;
l195:pile[v[22]]=846; pile[WZ1]=jvj+100; 
(*f[26])( );if(v[102]) goto l194;     /*FNDC0(846,jvj+100,V376)*/
V376=pile[WZ2]; 
goto l193;
l197:pile[v[22]]=737; pile[WZ1]=jvj+100; 
(*f[26])( );if(v[102]) goto l196;     /*FNDC0(737,jvj+100,V374)*/
V374=pile[WZ2]; 
goto l195;
l199:x[jvj+106]=s[x[jvj+105]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+105];
pile[v[22]]=158; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l201;     /*FNDO0(158,jvj+106,jvj+107)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l200;     /*FNDC0(737,jvj+106,V383)*/
V383=pile[WZ2]; 
if((V383>0)) goto l232;
l200:pile[v[22]]=846; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l201;     /*FNDC0(846,jvj+106,V384)*/
V384=pile[WZ2]; 
if((V384>0)) goto l232;
l201:x[jvj+105]=t[x[jvj+105]];
goto l198;
l207:pile[v[22]]=V411; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V411,83,V410)*/
V410=pile[WZ2]; 
l206:V412=V410;
l205:pile[v[22]]=41; pile[WZ1]=V413; pile[WZ2]=V412; 
(*f[39])( );     /*SDX0(41,V413,V412,V437)*/
V437=pile[WZ3]; 
pile[v[22]]=V437; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V437,(-9543),V438)*/
V438=pile[WZ2]; 
pile[v[22]]=V438; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V438,(-7127),V439)*/
V439=pile[WZ2]; 
pile[v[22]]=V439; 
(*f[40])( );     /*SLG0(V439)*/
l204:x[jvj+126]=t[x[jvj+126]];
l202:if((x[jvj+126]<=0)) goto l201;
x[jvj+109]=s[x[jvj+126]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+126];
pile[v[22]]=715; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l204;     /*FNDO0(715,jvj+109,jvj+110)*/
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l203;     /*FNDC0(737,jvj+109,V400)*/
V400=pile[WZ2]; 
if((V400>0)) goto l218;
l203:pile[v[22]]=846; pile[WZ1]=jvj+109; 
(*f[26])( );if(v[102]) goto l204;     /*FNDC0(846,jvj+109,V401)*/
V401=pile[WZ2]; 
if((V401>0)) goto l218;
goto l204;
l208:V412=V406;
goto l205;
l211:pile[v[22]]=V405; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V405,83,V404)*/
V404=pile[WZ2]; 
l210:V406=V404;
l209:V412=incon;
pile[v[22]]=846; pile[WZ1]=jvj+109; 
(*f[26])( );if(v[102]) goto l208;     /*FNDC0(846,jvj+109,V408)*/
V408=pile[WZ2]; 
V409=V408;
if((V409<=0)) goto l208;
pile[v[22]]=41; pile[WZ1]=V409; pile[WZ2]=V406; 
(*f[39])( );     /*SDX0(41,V409,V406,V435)*/
V435=pile[WZ3]; 
pile[v[22]]=V435; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V435,(-7111),V411)*/
V411=pile[WZ2]; 
V410=incon;
if((V409>1)) goto l207;
V410=V411;
goto l206;
l212:V406=V407;
goto l209;
l213:V449=V443*1000;
V448=V449/V446;
V413=V448;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+110; 
(*f[42])( );     /*SRA1(135,0,jvj+110,V407)*/
V407=pile[WZ3]; 
V406=incon;
pile[v[22]]=737; pile[WZ1]=jvj+109; 
(*f[26])( );if(v[102]) goto l212;     /*FNDC0(737,jvj+109,V402)*/
V402=pile[WZ2]; 
V403=V402;
if((V403<=0)) goto l212;
pile[v[22]]=41; pile[WZ1]=V403; pile[WZ2]=V407; 
(*f[39])( );     /*SDX0(41,V403,V407,V432)*/
V432=pile[WZ3]; 
pile[v[22]]=V432; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V432,(-7110),V405)*/
V405=pile[WZ2]; 
V404=incon;
if((V403>1)) goto l211;
V404=V405;
goto l210;
l215:V445=0;
l214:V446=V443+V445;
if((V446>0)) goto l213;
goto l204;
l217:V443=0;
l216:pile[v[22]]=846; pile[WZ1]=jvj+109; 
(*f[26])( );if(v[102]) goto l215;     /*FNDC0(846,jvj+109,V445)*/
V445=pile[WZ2]; 
goto l214;
l218:pile[v[22]]=737; pile[WZ1]=jvj+109; 
(*f[26])( );if(v[102]) goto l217;     /*FNDC0(737,jvj+109,V443)*/
V443=pile[WZ2]; 
goto l216;
l221:pile[v[22]]=V394; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V394,83,V393)*/
V393=pile[WZ2]; 
l220:V395=V393;
l219:pile[v[22]]=V395; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V395,46,V423)*/
V423=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V423; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,V423,986,V424)*/
V424=pile[WZ3]; 
pile[v[22]]=V424; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V424,61,V425)*/
V425=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V396; pile[WZ2]=V425; 
(*f[39])( );     /*SDX0(41,V396,V425,V427)*/
V427=pile[WZ3]; 
pile[v[22]]=V427; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V427,(-9543),V428)*/
V428=pile[WZ2]; 
pile[v[22]]=V428; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V428,(-7127),V429)*/
V429=pile[WZ2]; 
pile[v[22]]=V429; 
(*f[40])( );     /*SLG0(V429)*/
if((UR!=86)) goto l201;
pile[v[22]]=258; pile[WZ1]=jvj+106; pile[WZ2]=jvj+108; 
(*f[33])( );     /*FNDE0(258,jvj+106,jvj+108)*/
x[jvj+126]=x[jvj+108] ;z[jvj+126]=z[jvj+108];
goto l202;
l222:V395=V389;
goto l219;
l225:pile[v[22]]=V388; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V388,83,V387)*/
V387=pile[WZ2]; 
l224:V389=V387;
l223:V395=incon;
pile[v[22]]=846; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l222;     /*FNDC0(846,jvj+106,V391)*/
V391=pile[WZ2]; 
V392=V391;
if((V392<=0)) goto l222;
pile[v[22]]=41; pile[WZ1]=V392; pile[WZ2]=V389; 
(*f[39])( );     /*SDX0(41,V392,V389,V420)*/
V420=pile[WZ3]; 
pile[v[22]]=V420; pile[WZ1]=(-7111); 
(*f[37])( );     /*SRA0(V420,(-7111),V394)*/
V394=pile[WZ2]; 
V393=incon;
if((V392>1)) goto l221;
V393=V394;
goto l220;
l226:V389=V390;
goto l223;
l227:V457=V451*1000;
V456=V457/V454;
V396=V456;
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V421)*/
V421=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V421; pile[WZ2]=jvj+107; 
(*f[42])( );     /*SRA1(135,V421,jvj+107,V422)*/
V422=pile[WZ3]; 
pile[v[22]]=V422; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V422,58,V390)*/
V390=pile[WZ2]; 
V389=incon;
pile[v[22]]=737; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l226;     /*FNDC0(737,jvj+106,V385)*/
V385=pile[WZ2]; 
V386=V385;
if((V386<=0)) goto l226;
pile[v[22]]=41; pile[WZ1]=V386; pile[WZ2]=V390; 
(*f[39])( );     /*SDX0(41,V386,V390,V417)*/
V417=pile[WZ3]; 
pile[v[22]]=V417; pile[WZ1]=(-7110); 
(*f[37])( );     /*SRA0(V417,(-7110),V388)*/
V388=pile[WZ2]; 
V387=incon;
if((V386>1)) goto l225;
V387=V388;
goto l224;
l229:V453=0;
l228:V454=V451+V453;
if((V454>0)) goto l227;
goto l201;
l231:V451=0;
l230:pile[v[22]]=846; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l229;     /*FNDC0(846,jvj+106,V453)*/
V453=pile[WZ2]; 
goto l228;
l232:pile[v[22]]=737; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l231;     /*FNDC0(737,jvj+106,V451)*/
V451=pile[WZ2]; 
goto l230;
}
