#include "dx.h"
void NORMFP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V90=0,V370=0,V444=0,V413=0,V416=0,V415=0,V420=0,V562=0,V563=0,V566=0,V383=0,V387=0,V187=0,V191=0,V188=0,V193=0,V190=0,V189=0,V514=0,V519=0,V505=0,V461=0,V217=0,V219=0,V534=0,V536=0,V484=0,V486=0,V151=0,V153=0,V248=0,V253=0,V252=0,V250=0,V323=0,V327=0,V13=0,V18=0,V14=0,V20=0,V17=0,V285=0,V286=0,V289=0,V288=0,V291=0,V112=0,V113=0,V100=0,V116=0,V115=0,V57=0,V58=0,V61=0,V7=0,V280=0,V8=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=335;
x[jvj+1]=11916;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3918&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+137]=x[A] ;z[jvj+137]=z[A];
l115:pile[v[22]]=100; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(100,jvj+137,jvj+138)*/
if((x[jvj+138]==41)) goto l116;
if((x[jvj+138]!=22)) goto l125;
pile[v[22]]=107; pile[WZ2]=jvj+139; 
(*f[33])( );     /*FNDE0(107,jvj+137,jvj+139)*/
for(i=x[jvj+139],V90=0;i>0;i=t[i],V90++)  ;
if((V90!=1)) goto l120;
pile[v[22]]=111; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(111,jvj+137,jvj+140)*/
pile[v[22]]=101; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(101,jvj+140,jvj+141)*/
pile[v[22]]=1564; pile[WZ1]=1714; pile[WZ2]=jvj+142; 
(*f[33])( );     /*FNDE0(1564,1714,jvj+142)*/
for(a=x[jvj+142];a>0;a=t[a]) if(s[a]==x[jvj+141]) goto l118;
l120:pile[v[22]]=111; pile[WZ1]=jvj+137; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(111,jvj+137,jvj+145)*/
pile[v[22]]=101; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(101,jvj+145,jvj+146)*/
pile[v[22]]=1564; pile[WZ1]=1714; pile[WZ2]=jvj+147; 
(*f[33])( );     /*FNDE0(1564,1714,jvj+147)*/
for(a=x[jvj+147];a>0;a=t[a]) if(s[a]==x[jvj+146]) goto l122;
l125:pile[v[22]]=111; pile[WZ1]=jvj+137; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l213;     /*FNDO0(111,jvj+137,jvj+152)*/
pile[v[22]]=101; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l213;     /*FNDO0(101,jvj+152,jvj+153)*/
if((x[jvj+153]==486)) goto l126;
if((x[jvj+153]==596)) goto l154;
if((x[jvj+153]!=485)) goto l213;
pile[v[22]]=107; pile[WZ1]=jvj+137; pile[WZ2]=jvj+182; 
(*f[33])( );     /*FNDE0(107,jvj+137,jvj+182)*/
x[jvj+292]=x[jvj+182] ;z[jvj+292]=z[jvj+182];
l155:if((x[jvj+292]>0)) goto l156;
if((B!=2)) goto l160;
x[jvj+297]=x[jvj+182] ;z[jvj+297]=z[jvj+182];
l168:if((x[jvj+297]>0)) goto l169;
x[jvj+323]=x[jvj+182] ;z[jvj+323]=z[jvj+182];
l173:if((x[jvj+323]>0)) goto l174;
x[jvj+325]=x[jvj+182] ;z[jvj+325]=z[jvj+182];
l178:if((x[jvj+325]<=0)) goto l184;
x[jvj+301]=s[x[jvj+325]] ;z[jvj+301]=(x[jvj+301]<=sepcte) ? x[jvj+301] : z[jvj+325];
x[jvj+198]=x[jvj+301] ;z[jvj+198]=z[jvj+301];
pile[v[22]]=130; pile[WZ1]=jvj+198; 
(*f[26])( );if(v[102]) goto l179;     /*FNDC0(130,jvj+198,V248)*/
V248=pile[WZ2]; 
if((V248<=0)) goto l179;
if((V248==999)) goto l179;
V253=V248+1;
V252=(-V253);
x[jvj+326]=x[jvj+182] ;z[jvj+326]=z[jvj+182];
l180:if((x[jvj+326]<=0)) goto l179;
x[jvj+302]=s[x[jvj+326]] ;z[jvj+302]=(x[jvj+302]<=sepcte) ? x[jvj+302] : z[jvj+326];
if((x[jvj+301]==x[jvj+302])) goto l181;
x[jvj+199]=x[jvj+302] ;z[jvj+199]=z[jvj+302];
pile[v[22]]=130; pile[WZ1]=jvj+199; 
(*f[26])( );if(v[102]) goto l181;     /*FNDC0(130,jvj+199,V250)*/
V250=pile[WZ2]; 
if((V248!=V250)) goto l181;
x[jvj+44]=0 ;z[jvj+44]=0;
x[jvj+266]=x[jvj+182] ;z[jvj+266]=z[jvj+182];
l36:if((x[jvj+266]>0)) goto l37;
x[jvj+47]=0 ;z[jvj+47]=0;
l40:if((x[jvj+44]>0)) goto l41;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+248; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+248)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V252; pile[WZ4]=jvj+249; 
(*f[192])( );     /*QUADRI4(100,41,130,V252,jvj+249)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+248; pile[WZ4]=jvj+200; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+248,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=107; pile[WZ2]=jvj+249; 
(*f[36])( );     /*PLUSC0(jvj+200,107,jvj+249)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+200; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+47,jvj+200,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+201; 
(*f[3918])( );if(v[102]) goto l181;     /*NORMFP0(B,jvj+200,jvj+201)*/
x[R]=x[jvj+201] ;z[R]=z[jvj+201];
l214:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+261]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+261];
if((x[jvj+2]==x[jvj+305])) goto l3;
if((x[jvj+2]==x[jvj+306])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==649)) goto l3;
l4:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+2)*/
l3:x[jvj+261]=t[x[jvj+261]];
l1:if((x[jvj+261]>0)) goto l2;
x[jvj+8]=0 ;z[jvj+8]=0;
l5:if((x[jvj+5]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+252; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+252)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+253; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+253)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+252; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+252,jvj+208)*/
pile[v[22]]=jvj+208; pile[WZ1]=107; pile[WZ2]=jvj+253; 
(*f[36])( );     /*PLUSC0(jvj+208,107,jvj+253)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+208; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+8,jvj+208,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+209; 
(*f[3918])( );if(v[102]) goto l192;     /*NORMFP0(B,jvj+208,jvj+209)*/
x[R]=x[jvj+209] ;z[R]=z[jvj+209];
goto l214;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l5;
l7:if((V58!=0)) goto l212;
l211:x[jvj+335]=t[x[jvj+335]];
l210:if((x[jvj+335]<=0)) goto l209;
x[jvj+313]=s[x[jvj+335]] ;z[jvj+313]=(x[jvj+313]<=sepcte) ? x[jvj+313] : z[jvj+335];
if((x[jvj+312]==x[jvj+313])) goto l211;
x[jvj+225]=x[jvj+313] ;z[jvj+225]=z[jvj+313];
pile[v[22]]=130; pile[WZ1]=jvj+225; 
(*f[26])( );if(v[102]) goto l211;     /*FNDC0(130,jvj+225,V58)*/
V58=pile[WZ2]; 
if((V58==999)) goto l211;
if((V57==0)) goto l7;
if((V58!=0)) goto l211;
if((V57!=0)) goto l212;
goto l211;
l9:x[jvj+9]=s[x[jvj+262]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+262];
if((x[jvj+9]==x[jvj+312])) goto l10;
if((x[jvj+9]==x[jvj+313])) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==649)) goto l10;
l11:pile[v[22]]=jvj+12; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+9)*/
l10:x[jvj+262]=t[x[jvj+262]];
l8:if((x[jvj+262]>0)) goto l9;
x[jvj+15]=0 ;z[jvj+15]=0;
l12:if((x[jvj+12]>0)) goto l13;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+259; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+259)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V61; pile[WZ4]=jvj+260; 
(*f[192])( );     /*QUADRI4(100,41,130,V61,jvj+260)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+259; pile[WZ4]=jvj+226; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+259,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=107; pile[WZ2]=jvj+260; 
(*f[36])( );     /*PLUSC0(jvj+226,107,jvj+260)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+226; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+15,jvj+226,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+227; 
(*f[3918])( );if(v[102]) goto l211;     /*NORMFP0(B,jvj+226,jvj+227)*/
x[R]=x[jvj+227] ;z[R]=z[jvj+227];
goto l214;
l13:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+14)*/
x[jvj+12]=t[x[jvj+12]];
goto l12;
l14:x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+263]=x[jvj+182] ;z[jvj+263]=z[jvj+182];
l15:if((x[jvj+263]>0)) goto l16;
x[jvj+22]=0 ;z[jvj+22]=0;
l19:if((x[jvj+19]>0)) goto l20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+257; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+257)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V100; pile[WZ4]=jvj+258; 
(*f[192])( );     /*QUADRI4(100,41,130,V100,jvj+258)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+257; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+257,jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=107; pile[WZ2]=jvj+258; 
(*f[36])( );     /*PLUSC0(jvj+222,107,jvj+258)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+222; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+22,jvj+222,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+223; 
(*f[3918])( );if(v[102]) goto l207;     /*NORMFP0(B,jvj+222,jvj+223)*/
x[R]=x[jvj+223] ;z[R]=z[jvj+223];
goto l214;
l16:x[jvj+16]=s[x[jvj+263]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+263];
if((x[jvj+16]==x[jvj+310])) goto l17;
if((x[jvj+16]==x[jvj+311])) goto l17;
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]==649)) goto l17;
l18:pile[v[22]]=jvj+19; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+16)*/
l17:x[jvj+263]=t[x[jvj+263]];
goto l15;
l20:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+21)*/
x[jvj+19]=t[x[jvj+19]];
goto l19;
l22:x[jvj+23]=s[x[jvj+264]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+264];
if((x[jvj+23]==x[jvj+299])) goto l23;
if((x[jvj+23]==x[jvj+300])) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]==649)) goto l23;
l24:pile[v[22]]=jvj+26; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+23)*/
l23:x[jvj+264]=t[x[jvj+264]];
l21:if((x[jvj+264]>0)) goto l22;
x[jvj+29]=0 ;z[jvj+29]=0;
l25:if((x[jvj+26]>0)) goto l26;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+246; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+246)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V151; pile[WZ4]=jvj+247; 
(*f[192])( );     /*QUADRI4(100,41,130,V151,jvj+247)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+246; pile[WZ4]=jvj+195; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+246,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=107; pile[WZ2]=jvj+247; 
(*f[36])( );     /*PLUSC0(jvj+195,107,jvj+247)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+195; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+29,jvj+195,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+196; 
(*f[3918])( );if(v[102]) goto l177;     /*NORMFP0(B,jvj+195,jvj+196)*/
pile[v[22]]=130; pile[WZ1]=jvj+197; 
(*f[26])( );if(v[102]) goto l177;     /*FNDC0(130,jvj+197,V153)*/
V153=pile[WZ2]; 
if((V151!=V153)) goto l177;
x[R]=x[jvj+196] ;z[R]=z[jvj+196];
goto l214;
l26:x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+28)*/
x[jvj+26]=t[x[jvj+26]];
goto l25;
l28:x[jvj+30]=s[x[jvj+265]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+265];
if((x[jvj+30]==x[jvj+290])) goto l29;
if((x[jvj+30]==x[jvj+291])) goto l29;
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]==649)) goto l29;
l30:pile[v[22]]=jvj+33; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+30)*/
l29:x[jvj+265]=t[x[jvj+265]];
l27:if((x[jvj+265]>0)) goto l28;
x[jvj+36]=0 ;z[jvj+36]=0;
l31:if((x[jvj+33]>0)) goto l32;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+240)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V189; pile[WZ4]=jvj+241; 
(*f[192])( );     /*QUADRI4(100,41,130,V189,jvj+241)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+240; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+240,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=107; pile[WZ2]=jvj+241; 
(*f[36])( );     /*PLUSC0(jvj+178,107,jvj+241)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+178; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+36,jvj+178,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+179; 
(*f[3918])( );if(v[102]) goto l152;     /*NORMFP0(B,jvj+178,jvj+179)*/
x[R]=x[jvj+179] ;z[R]=z[jvj+179];
goto l214;
l32:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+35)*/
pile[v[22]]=jvj+36; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+35)*/
x[jvj+33]=t[x[jvj+33]];
goto l31;
l37:x[jvj+41]=s[x[jvj+266]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+266];
if((x[jvj+41]==x[jvj+301])) goto l38;
if((x[jvj+41]==x[jvj+302])) goto l38;
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]==649)) goto l38;
l39:pile[v[22]]=jvj+44; pile[WZ1]=jvj+41; 
(*f[68])( );     /*PLUE0(jvj+44,jvj+41)*/
l38:x[jvj+266]=t[x[jvj+266]];
goto l36;
l41:x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+45,jvj+46)*/
pile[v[22]]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+47,jvj+46)*/
x[jvj+44]=t[x[jvj+44]];
goto l40;
l43:x[jvj+48]=s[x[jvj+267]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+267];
if((x[jvj+48]==x[jvj+307])) goto l44;
if((x[jvj+48]==x[jvj+308])) goto l44;
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==649)) goto l44;
l45:pile[v[22]]=jvj+51; pile[WZ1]=jvj+48; 
(*f[68])( );     /*PLUE0(jvj+51,jvj+48)*/
l44:x[jvj+267]=t[x[jvj+267]];
l42:if((x[jvj+267]>0)) goto l43;
x[jvj+54]=0 ;z[jvj+54]=0;
l46:if((x[jvj+51]>0)) goto l47;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+254; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+254)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V291; pile[WZ4]=jvj+255; 
(*f[192])( );     /*QUADRI4(100,41,130,V291,jvj+255)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+254; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+254,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=107; pile[WZ2]=jvj+255; 
(*f[36])( );     /*PLUSC0(jvj+212,107,jvj+255)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+212; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+54,jvj+212,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+213; 
(*f[3918])( );if(v[102]) goto l198;     /*NORMFP0(B,jvj+212,jvj+213)*/
x[R]=x[jvj+213] ;z[R]=z[jvj+213];
goto l214;
l47:x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+52,jvj+53)*/
pile[v[22]]=jvj+54; 
(*f[68])( );     /*PLUE0(jvj+54,jvj+53)*/
x[jvj+51]=t[x[jvj+51]];
goto l46;
l49:x[jvj+55]=s[x[jvj+268]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+268];
if((x[jvj+55]==x[jvj+303])) goto l50;
if((x[jvj+55]==x[jvj+203])) goto l50;
pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+55,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]==649)) goto l50;
l51:pile[v[22]]=jvj+58; pile[WZ1]=jvj+55; 
(*f[68])( );     /*PLUE0(jvj+58,jvj+55)*/
l50:x[jvj+268]=t[x[jvj+268]];
l48:if((x[jvj+268]>0)) goto l49;
x[jvj+61]=0 ;z[jvj+61]=0;
l52:if((x[jvj+58]>0)) goto l53;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+250; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+250)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+251; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+251)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+250; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+250,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=107; pile[WZ2]=jvj+251; 
(*f[36])( );     /*PLUSC0(jvj+204,107,jvj+251)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+204; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+61,jvj+204,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+205; 
(*f[3918])( );if(v[102]) goto l187;     /*NORMFP0(B,jvj+204,jvj+205)*/
x[R]=x[jvj+205] ;z[R]=z[jvj+205];
goto l214;
l53:x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[255])( );     /*COPEXP0(jvj+59,jvj+60)*/
pile[v[22]]=jvj+61; 
(*f[68])( );     /*PLUE0(jvj+61,jvj+60)*/
x[jvj+58]=t[x[jvj+58]];
goto l52;
l55:x[jvj+64]=s[x[jvj+269]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+269];
if((x[jvj+64]==x[jvj+281])) goto l56;
pile[v[22]]=111; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+64,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]==649)) goto l56;
l57:pile[v[22]]=jvj+67; pile[WZ1]=jvj+64; 
(*f[68])( );     /*PLUE0(jvj+67,jvj+64)*/
l56:x[jvj+269]=t[x[jvj+269]];
l54:if((x[jvj+269]>0)) goto l55;
x[jvj+70]=0 ;z[jvj+70]=0;
l58:if((x[jvj+67]>0)) goto l59;
x[jvj+149]=x[jvj+148] ;z[jvj+149]=z[jvj+148];
pile[v[22]]=130; pile[WZ1]=jvj+149; 
(*f[26])( );if(v[102]) goto l123;     /*FNDC0(130,jvj+149,V370)*/
V370=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+146; pile[WZ4]=jvj+228; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+146,jvj+228)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V370; pile[WZ4]=jvj+229; 
(*f[192])( );     /*QUADRI4(100,41,130,V370,jvj+229)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+228; pile[WZ4]=jvj+150; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+228,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=107; pile[WZ2]=jvj+229; 
(*f[36])( );     /*PLUSC0(jvj+150,107,jvj+229)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+150; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+70,jvj+150,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+151; 
(*f[3918])( );if(v[102]) goto l123;     /*NORMFP0(B,jvj+150,jvj+151)*/
x[R]=x[jvj+151] ;z[R]=z[jvj+151];
goto l214;
l59:x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[255])( );     /*COPEXP0(jvj+68,jvj+69)*/
pile[v[22]]=jvj+70; 
(*f[68])( );     /*PLUE0(jvj+70,jvj+69)*/
x[jvj+67]=t[x[jvj+67]];
goto l58;
l61:x[jvj+71]=s[x[jvj+270]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+270];
if((x[jvj+71]==x[jvj+288])) goto l62;
if((x[jvj+71]==x[jvj+173])) goto l62;
pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(111,jvj+71,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]==649)) goto l62;
l63:pile[v[22]]=jvj+74; pile[WZ1]=jvj+71; 
(*f[68])( );     /*PLUE0(jvj+74,jvj+71)*/
l62:x[jvj+270]=t[x[jvj+270]];
l60:if((x[jvj+270]>0)) goto l61;
x[jvj+77]=0 ;z[jvj+77]=0;
l64:if((x[jvj+74]>0)) goto l65;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+238)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=999; pile[WZ4]=jvj+239; 
(*f[192])( );     /*QUADRI4(100,41,130,999,jvj+239)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+238; pile[WZ4]=jvj+174; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+238,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=107; pile[WZ2]=jvj+239; 
(*f[36])( );     /*PLUSC0(jvj+174,107,jvj+239)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+174; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+77,jvj+174,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+175; 
(*f[3918])( );if(v[102]) goto l148;     /*NORMFP0(B,jvj+174,jvj+175)*/
x[R]=x[jvj+175] ;z[R]=z[jvj+175];
goto l214;
l65:x[jvj+75]=s[x[jvj+74]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+74];
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; 
(*f[255])( );     /*COPEXP0(jvj+75,jvj+76)*/
pile[v[22]]=jvj+77; 
(*f[68])( );     /*PLUE0(jvj+77,jvj+76)*/
x[jvj+74]=t[x[jvj+74]];
goto l64;
l67:x[jvj+78]=s[x[jvj+271]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+271];
if((x[jvj+78]==x[jvj+283])) goto l68;
if((x[jvj+78]==x[jvj+159])) goto l68;
pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(111,jvj+78,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]==649)) goto l68;
l69:pile[v[22]]=jvj+81; pile[WZ1]=jvj+78; 
(*f[68])( );     /*PLUE0(jvj+81,jvj+78)*/
l68:x[jvj+271]=t[x[jvj+271]];
l66:if((x[jvj+271]>0)) goto l67;
x[jvj+84]=0 ;z[jvj+84]=0;
l70:if((x[jvj+81]>0)) goto l71;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+233)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V415; pile[WZ4]=jvj+234; 
(*f[192])( );     /*QUADRI4(100,41,130,V415,jvj+234)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+233; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+233,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=107; pile[WZ2]=jvj+234; 
(*f[36])( );     /*PLUSC0(jvj+160,107,jvj+234)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+160; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+84,jvj+160,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+161; 
(*f[3918])( );if(v[102]) goto l134;     /*NORMFP0(B,jvj+160,jvj+161)*/
x[R]=x[jvj+161] ;z[R]=z[jvj+161];
goto l214;
l71:x[jvj+82]=s[x[jvj+81]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+81];
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; 
(*f[255])( );     /*COPEXP0(jvj+82,jvj+83)*/
pile[v[22]]=jvj+84; 
(*f[68])( );     /*PLUE0(jvj+84,jvj+83)*/
x[jvj+81]=t[x[jvj+81]];
goto l70;
l73:x[jvj+85]=s[x[jvj+272]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+272];
if((x[jvj+85]==x[jvj+155])) goto l74;
pile[v[22]]=111; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+85,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+86,jvj+87)*/
if((x[jvj+87]==649)) goto l74;
l75:pile[v[22]]=jvj+88; pile[WZ1]=jvj+85; 
(*f[68])( );     /*PLUE0(jvj+88,jvj+85)*/
l74:x[jvj+272]=t[x[jvj+272]];
l72:if((x[jvj+272]>0)) goto l73;
x[jvj+91]=0 ;z[jvj+91]=0;
l76:if((x[jvj+88]>0)) goto l77;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+230)*/
pile[v[22]]=jvj+230; pile[WZ1]=111; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,111,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=jvj+91; pile[WZ2]=107; pile[WZ3]=jvj+232; 
(*f[301])( );     /*TRI11(jvj+231,jvj+91,107,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+156; 
(*f[58])( );     /*TRI3(jvj+232,22,100,jvj+156)*/
pile[v[22]]=B; pile[WZ1]=jvj+156; pile[WZ2]=jvj+157; 
(*f[3918])( );if(v[102]) goto l129;     /*NORMFP0(B,jvj+156,jvj+157)*/
x[R]=x[jvj+157] ;z[R]=z[jvj+157];
goto l214;
l77:x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=jvj+89; pile[WZ1]=jvj+90; 
(*f[255])( );     /*COPEXP0(jvj+89,jvj+90)*/
pile[v[22]]=jvj+91; 
(*f[68])( );     /*PLUE0(jvj+91,jvj+90)*/
x[jvj+88]=t[x[jvj+88]];
goto l76;
l82:x[jvj+96]=s[x[jvj+273]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+273];
if((x[jvj+96]==x[jvj+190])) goto l83;
if((x[jvj+96]==x[jvj+191])) goto l83;
pile[v[22]]=111; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(111,jvj+96,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(101,jvj+97,jvj+98)*/
if((x[jvj+98]==649)) goto l83;
l84:pile[v[22]]=jvj+99; pile[WZ1]=jvj+96; 
(*f[68])( );     /*PLUE0(jvj+99,jvj+96)*/
l83:x[jvj+273]=t[x[jvj+273]];
l81:if((x[jvj+273]>0)) goto l82;
x[jvj+102]=0 ;z[jvj+102]=0;
l85:if((x[jvj+99]>0)) goto l86;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+244; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+244)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+245; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+245)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+244; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+244,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=107; pile[WZ2]=jvj+245; 
(*f[36])( );     /*PLUSC0(jvj+192,107,jvj+245)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+192; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+102,jvj+192,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+193; 
(*f[3918])( );if(v[102]) goto l172;     /*NORMFP0(B,jvj+192,jvj+193)*/
x[R]=x[jvj+193] ;z[R]=z[jvj+193];
goto l214;
l86:x[jvj+100]=s[x[jvj+99]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+99];
pile[v[22]]=jvj+100; pile[WZ1]=jvj+101; 
(*f[255])( );     /*COPEXP0(jvj+100,jvj+101)*/
pile[v[22]]=jvj+102; 
(*f[68])( );     /*PLUE0(jvj+102,jvj+101)*/
x[jvj+99]=t[x[jvj+99]];
goto l85;
l88:x[jvj+103]=s[x[jvj+274]] ;z[jvj+103]=(x[jvj+103]<=sepcte) ? x[jvj+103] : z[jvj+274];
if((x[jvj+103]==x[jvj+186])) goto l89;
if((x[jvj+103]==x[jvj+187])) goto l89;
pile[v[22]]=111; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(111,jvj+103,jvj+104)*/
pile[v[22]]=101; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(101,jvj+104,jvj+105)*/
if((x[jvj+105]==649)) goto l89;
l90:pile[v[22]]=jvj+106; pile[WZ1]=jvj+103; 
(*f[68])( );     /*PLUE0(jvj+106,jvj+103)*/
l89:x[jvj+274]=t[x[jvj+274]];
l87:if((x[jvj+274]>0)) goto l88;
x[jvj+109]=0 ;z[jvj+109]=0;
l91:if((x[jvj+106]>0)) goto l92;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+242; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+242)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=999; pile[WZ4]=jvj+243; 
(*f[192])( );     /*QUADRI4(100,41,130,999,jvj+243)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+242; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+242,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=107; pile[WZ2]=jvj+243; 
(*f[36])( );     /*PLUSC0(jvj+188,107,jvj+243)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+188; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+109,jvj+188,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+189; 
(*f[3918])( );if(v[102]) goto l167;     /*NORMFP0(B,jvj+188,jvj+189)*/
x[R]=x[jvj+189] ;z[R]=z[jvj+189];
goto l214;
l92:x[jvj+107]=s[x[jvj+106]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+106];
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; 
(*f[255])( );     /*COPEXP0(jvj+107,jvj+108)*/
pile[v[22]]=jvj+109; 
(*f[68])( );     /*PLUE0(jvj+109,jvj+108)*/
x[jvj+106]=t[x[jvj+106]];
goto l91;
l94:x[jvj+110]=s[x[jvj+275]] ;z[jvj+110]=(x[jvj+110]<=sepcte) ? x[jvj+110] : z[jvj+275];
if((x[jvj+110]==x[jvj+285])) goto l95;
if((x[jvj+110]==x[jvj+286])) goto l95;
pile[v[22]]=111; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(111,jvj+110,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]==649)) goto l95;
l96:pile[v[22]]=jvj+113; pile[WZ1]=jvj+110; 
(*f[68])( );     /*PLUE0(jvj+113,jvj+110)*/
l95:x[jvj+275]=t[x[jvj+275]];
l93:if((x[jvj+275]>0)) goto l94;
x[jvj+116]=0 ;z[jvj+116]=0;
l97:if((x[jvj+113]>0)) goto l98;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+235)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V566; pile[WZ4]=jvj+236; 
(*f[192])( );     /*QUADRI4(100,41,130,V566,jvj+236)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+235; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+235,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=107; pile[WZ2]=jvj+236; 
(*f[36])( );     /*PLUSC0(jvj+164,107,jvj+236)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+164; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+116,jvj+164,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+165; 
(*f[3918])( );if(v[102]) goto l139;     /*NORMFP0(B,jvj+164,jvj+165)*/
x[R]=x[jvj+165] ;z[R]=z[jvj+165];
goto l214;
l98:x[jvj+114]=s[x[jvj+113]] ;z[jvj+114]=(x[jvj+114]<=sepcte) ? x[jvj+114] : z[jvj+113];
pile[v[22]]=jvj+114; pile[WZ1]=jvj+115; 
(*f[255])( );     /*COPEXP0(jvj+114,jvj+115)*/
pile[v[22]]=jvj+116; 
(*f[68])( );     /*PLUE0(jvj+116,jvj+115)*/
x[jvj+113]=t[x[jvj+113]];
goto l97;
l100:x[jvj+117]=s[x[jvj+276]] ;z[jvj+117]=(x[jvj+117]<=sepcte) ? x[jvj+117] : z[jvj+276];
if((x[jvj+117]==x[jvj+214])) goto l101;
pile[v[22]]=111; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(111,jvj+117,jvj+118)*/
pile[v[22]]=101; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(101,jvj+118,jvj+119)*/
if((x[jvj+119]==649)) goto l101;
l102:pile[v[22]]=jvj+120; pile[WZ1]=jvj+117; 
(*f[68])( );     /*PLUE0(jvj+120,jvj+117)*/
l101:x[jvj+276]=t[x[jvj+276]];
l99:if((x[jvj+276]>0)) goto l100;
x[jvj+126]=0 ;z[jvj+126]=0;
l105:if((x[jvj+120]>0)) goto l106;
pile[v[22]]=107; pile[WZ1]=jvj+214; pile[WZ2]=jvj+217; 
(*f[33])( );     /*FNDE0(107,jvj+214,jvj+217)*/
x[jvj+123]=0 ;z[jvj+123]=0;
x[jvj+277]=x[jvj+217] ;z[jvj+277]=z[jvj+217];
l103:if((x[jvj+277]>0)) goto l104;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+256; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+256)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+256; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+256,jvj+218)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+218; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+123,jvj+218,107)*/
pile[v[22]]=jvj+126; 
(*f[1118])( );     /*AJE3(jvj+126,jvj+218,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+219; 
(*f[3918])( );if(v[102]) goto l202;     /*NORMFP0(B,jvj+218,jvj+219)*/
x[R]=x[jvj+219] ;z[R]=z[jvj+219];
goto l214;
l104:x[jvj+121]=s[x[jvj+277]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+277];
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; 
(*f[255])( );     /*COPEXP0(jvj+121,jvj+122)*/
pile[v[22]]=jvj+123; 
(*f[68])( );     /*PLUE0(jvj+123,jvj+122)*/
x[jvj+277]=t[x[jvj+277]];
goto l103;
l106:x[jvj+124]=s[x[jvj+120]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+120];
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; 
(*f[255])( );     /*COPEXP0(jvj+124,jvj+125)*/
pile[v[22]]=jvj+126; 
(*f[68])( );     /*PLUE0(jvj+126,jvj+125)*/
x[jvj+120]=t[x[jvj+120]];
goto l105;
l108:x[jvj+127]=s[x[jvj+278]] ;z[jvj+127]=(x[jvj+127]<=sepcte) ? x[jvj+127] : z[jvj+278];
if((x[jvj+127]==x[jvj+166])) goto l109;
pile[v[22]]=111; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(111,jvj+127,jvj+128)*/
pile[v[22]]=101; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(101,jvj+128,jvj+129)*/
if((x[jvj+129]==649)) goto l109;
l110:pile[v[22]]=jvj+130; pile[WZ1]=jvj+127; 
(*f[68])( );     /*PLUE0(jvj+130,jvj+127)*/
l109:x[jvj+278]=t[x[jvj+278]];
l107:if((x[jvj+278]>0)) goto l108;
x[jvj+136]=0 ;z[jvj+136]=0;
l113:if((x[jvj+130]>0)) goto l114;
pile[v[22]]=107; pile[WZ1]=jvj+166; pile[WZ2]=jvj+169; 
(*f[33])( );     /*FNDE0(107,jvj+166,jvj+169)*/
x[jvj+133]=0 ;z[jvj+133]=0;
x[jvj+279]=x[jvj+169] ;z[jvj+279]=z[jvj+169];
l111:if((x[jvj+279]>0)) goto l112;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+237)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+237; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+237,jvj+170)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+170; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+133,jvj+170,107)*/
pile[v[22]]=jvj+136; 
(*f[1118])( );     /*AJE3(jvj+136,jvj+170,107)*/
pile[v[22]]=B; pile[WZ2]=jvj+171; 
(*f[3918])( );if(v[102]) goto l142;     /*NORMFP0(B,jvj+170,jvj+171)*/
x[R]=x[jvj+171] ;z[R]=z[jvj+171];
goto l214;
l112:x[jvj+131]=s[x[jvj+279]] ;z[jvj+131]=(x[jvj+131]<=sepcte) ? x[jvj+131] : z[jvj+279];
pile[v[22]]=jvj+131; pile[WZ1]=jvj+132; 
(*f[255])( );     /*COPEXP0(jvj+131,jvj+132)*/
pile[v[22]]=jvj+133; 
(*f[68])( );     /*PLUE0(jvj+133,jvj+132)*/
x[jvj+279]=t[x[jvj+279]];
goto l111;
l114:x[jvj+134]=s[x[jvj+130]] ;z[jvj+134]=(x[jvj+134]<=sepcte) ? x[jvj+134] : z[jvj+130];
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; 
(*f[255])( );     /*COPEXP0(jvj+134,jvj+135)*/
pile[v[22]]=jvj+136; 
(*f[68])( );     /*PLUE0(jvj+136,jvj+135)*/
x[jvj+130]=t[x[jvj+130]];
goto l113;
l116:x[R]=x[jvj+137] ;z[R]=z[jvj+137];
goto l214;
l118:x[jvj+280]=x[jvj+139] ;z[jvj+280]=z[jvj+139];
l117:if((x[jvj+280]<=0)) goto l120;
x[jvj+143]=s[x[jvj+280]] ;z[jvj+143]=(x[jvj+143]<=sepcte) ? x[jvj+143] : z[jvj+280];
pile[v[22]]=B; pile[WZ1]=jvj+143; pile[WZ2]=jvj+144; 
(*f[3918])( );if(v[102]) goto l119;     /*NORMFP0(B,jvj+143,jvj+144)*/
x[R]=x[jvj+144] ;z[R]=z[jvj+144];
goto l214;
l119:x[jvj+280]=t[x[jvj+280]];
goto l117;
l122:x[jvj+314]=x[jvj+139] ;z[jvj+314]=z[jvj+139];
l121:if((x[jvj+314]<=0)) goto l125;
x[jvj+281]=s[x[jvj+314]] ;z[jvj+281]=(x[jvj+281]<=sepcte) ? x[jvj+281] : z[jvj+314];
x[jvj+62]=x[jvj+281] ;z[jvj+62]=z[jvj+281];
pile[v[22]]=100; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(100,jvj+62,jvj+63)*/
if((x[jvj+63]==41)) goto l123;
l124:pile[v[22]]=B; pile[WZ1]=jvj+62; pile[WZ2]=jvj+148; 
(*f[3918])( );if(v[102]) goto l123;     /*NORMFP0(B,jvj+62,jvj+148)*/
x[jvj+67]=0 ;z[jvj+67]=0;
x[jvj+269]=x[jvj+139] ;z[jvj+269]=z[jvj+139];
goto l54;
l123:x[jvj+314]=t[x[jvj+314]];
goto l121;
l126:pile[v[22]]=107; pile[WZ1]=jvj+137; pile[WZ2]=jvj+154; 
(*f[33])( );     /*FNDE0(107,jvj+137,jvj+154)*/
if((x[jvj+154]==0)) goto l215;
x[jvj+282]=x[jvj+154] ;z[jvj+282]=z[jvj+154];
l127:if((x[jvj+282]>0)) goto l128;
x[jvj+315]=x[jvj+154] ;z[jvj+315]=z[jvj+154];
l130:if((x[jvj+315]>0)) goto l131;
x[jvj+316]=x[jvj+154] ;z[jvj+316]=z[jvj+154];
l135:if((x[jvj+316]>0)) goto l136;
x[jvj+287]=x[jvj+154] ;z[jvj+287]=z[jvj+154];
l140:if((x[jvj+287]>0)) goto l141;
x[jvj+318]=x[jvj+154] ;z[jvj+318]=z[jvj+154];
l143:if((x[jvj+318]>0)) goto l144;
x[jvj+319]=x[jvj+154] ;z[jvj+319]=z[jvj+154];
l149:if((x[jvj+319]<=0)) goto l213;
x[jvj+290]=s[x[jvj+319]] ;z[jvj+290]=(x[jvj+290]<=sepcte) ? x[jvj+290] : z[jvj+319];
x[jvj+176]=x[jvj+290] ;z[jvj+176]=z[jvj+290];
pile[v[22]]=130; pile[WZ1]=jvj+176; 
(*f[26])( );if(v[102]) goto l150;     /*FNDC0(130,jvj+176,V187)*/
V187=pile[WZ2]; 
if((V187==999)) goto l150;
V191=abs(V187);
x[jvj+320]=x[jvj+154] ;z[jvj+320]=z[jvj+154];
l151:if((x[jvj+320]<=0)) goto l150;
x[jvj+291]=s[x[jvj+320]] ;z[jvj+291]=(x[jvj+291]<=sepcte) ? x[jvj+291] : z[jvj+320];
if((x[jvj+290]==x[jvj+291])) goto l152;
x[jvj+177]=x[jvj+291] ;z[jvj+177]=z[jvj+291];
pile[v[22]]=130; pile[WZ1]=jvj+177; 
(*f[26])( );if(v[102]) goto l152;     /*FNDC0(130,jvj+177,V188)*/
V188=pile[WZ2]; 
if((V188==999)) goto l152;
if((V187<0)) goto l153;
if((V188<0)) goto l153;
l152:x[jvj+320]=t[x[jvj+320]];
goto l151;
l128:x[jvj+155]=s[x[jvj+282]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+282];
pile[v[22]]=130; pile[WZ1]=jvj+155; 
(*f[26])( );if(v[102]) goto l129;     /*FNDC0(130,jvj+155,V444)*/
V444=pile[WZ2]; 
if((V444!=0)) goto l129;
x[jvj+88]=0 ;z[jvj+88]=0;
x[jvj+272]=x[jvj+154] ;z[jvj+272]=z[jvj+154];
goto l72;
l129:x[jvj+282]=t[x[jvj+282]];
goto l127;
l131:x[jvj+283]=s[x[jvj+315]] ;z[jvj+283]=(x[jvj+283]<=sepcte) ? x[jvj+283] : z[jvj+315];
x[jvj+158]=x[jvj+283] ;z[jvj+158]=z[jvj+283];
pile[v[22]]=130; pile[WZ1]=jvj+158; 
(*f[26])( );if(v[102]) goto l132;     /*FNDC0(130,jvj+158,V413)*/
V413=pile[WZ2]; 
if((V413==0)) goto l132;
if((V413==999)) goto l132;
V416=abs(V413);
V415=(-V416);
x[jvj+284]=x[jvj+154] ;z[jvj+284]=z[jvj+154];
l133:if((x[jvj+284]<=0)) goto l132;
x[jvj+159]=s[x[jvj+284]] ;z[jvj+159]=(x[jvj+159]<=sepcte) ? x[jvj+159] : z[jvj+284];
if((x[jvj+283]==x[jvj+159])) goto l134;
pile[v[22]]=130; pile[WZ1]=jvj+159; 
(*f[26])( );if(v[102]) goto l134;     /*FNDC0(130,jvj+159,V420)*/
V420=pile[WZ2]; 
if((V420!=999)) goto l134;
x[jvj+81]=0 ;z[jvj+81]=0;
x[jvj+271]=x[jvj+154] ;z[jvj+271]=z[jvj+154];
goto l66;
l132:x[jvj+315]=t[x[jvj+315]];
goto l130;
l134:x[jvj+284]=t[x[jvj+284]];
goto l133;
l136:x[jvj+285]=s[x[jvj+316]] ;z[jvj+285]=(x[jvj+285]<=sepcte) ? x[jvj+285] : z[jvj+316];
x[jvj+162]=x[jvj+285] ;z[jvj+162]=z[jvj+285];
pile[v[22]]=130; pile[WZ1]=jvj+162; 
(*f[26])( );if(v[102]) goto l137;     /*FNDC0(130,jvj+162,V562)*/
V562=pile[WZ2]; 
if((V562<0)) goto l137;
if((V562==999)) goto l137;
x[jvj+317]=x[jvj+154] ;z[jvj+317]=z[jvj+154];
l138:if((x[jvj+317]<=0)) goto l137;
x[jvj+286]=s[x[jvj+317]] ;z[jvj+286]=(x[jvj+286]<=sepcte) ? x[jvj+286] : z[jvj+317];
if((x[jvj+285]==x[jvj+286])) goto l139;
x[jvj+163]=x[jvj+286] ;z[jvj+163]=z[jvj+286];
pile[v[22]]=130; pile[WZ1]=jvj+163; 
(*f[26])( );if(v[102]) goto l139;     /*FNDC0(130,jvj+163,V563)*/
V563=pile[WZ2]; 
if((V563<0)) goto l139;
if((V563==999)) goto l139;
V566=V562+V563;
x[jvj+113]=0 ;z[jvj+113]=0;
x[jvj+275]=x[jvj+154] ;z[jvj+275]=z[jvj+154];
goto l93;
l137:x[jvj+316]=t[x[jvj+316]];
goto l135;
l139:x[jvj+317]=t[x[jvj+317]];
goto l138;
l141:x[jvj+166]=s[x[jvj+287]] ;z[jvj+166]=(x[jvj+166]<=sepcte) ? x[jvj+166] : z[jvj+287];
pile[v[22]]=111; pile[WZ1]=jvj+166; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l142;     /*FNDO0(111,jvj+166,jvj+167)*/
pile[v[22]]=101; pile[WZ1]=jvj+167; pile[WZ2]=jvj+168; 
(*f[32])( );if(v[102]) goto l142;     /*FNDO0(101,jvj+167,jvj+168)*/
if((x[jvj+168]!=486)) goto l142;
x[jvj+130]=0 ;z[jvj+130]=0;
x[jvj+278]=x[jvj+154] ;z[jvj+278]=z[jvj+154];
goto l107;
l142:x[jvj+287]=t[x[jvj+287]];
goto l140;
l144:x[jvj+288]=s[x[jvj+318]] ;z[jvj+288]=(x[jvj+288]<=sepcte) ? x[jvj+288] : z[jvj+318];
x[jvj+172]=x[jvj+288] ;z[jvj+172]=z[jvj+288];
pile[v[22]]=130; pile[WZ1]=jvj+172; 
(*f[26])( );if(v[102]) goto l145;     /*FNDC0(130,jvj+172,V383)*/
V383=pile[WZ2]; 
if((V383==0)) goto l147;
if((V383==999)) goto l147;
l145:x[jvj+318]=t[x[jvj+318]];
goto l143;
l147:x[jvj+289]=x[jvj+154] ;z[jvj+289]=z[jvj+154];
l146:if((x[jvj+289]<=0)) goto l145;
x[jvj+173]=s[x[jvj+289]] ;z[jvj+173]=(x[jvj+173]<=sepcte) ? x[jvj+173] : z[jvj+289];
if((x[jvj+288]==x[jvj+173])) goto l148;
pile[v[22]]=130; pile[WZ1]=jvj+173; 
(*f[26])( );if(v[102]) goto l148;     /*FNDC0(130,jvj+173,V387)*/
V387=pile[WZ2]; 
if((V387!=999)) goto l148;
x[jvj+74]=0 ;z[jvj+74]=0;
x[jvj+270]=x[jvj+154] ;z[jvj+270]=z[jvj+154];
goto l60;
l148:x[jvj+289]=t[x[jvj+289]];
goto l146;
l150:x[jvj+319]=t[x[jvj+319]];
goto l149;
l153:V193=abs(V188);
V190=V191+V193;
V189=(-V190);
x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+265]=x[jvj+154] ;z[jvj+265]=z[jvj+154];
goto l27;
l154:pile[v[22]]=103; pile[WZ1]=jvj+137; pile[WZ2]=jvj+180; 
(*f[32])( );if(v[102]) goto l213;     /*FNDO0(103,jvj+137,jvj+180)*/
pile[v[22]]=130; pile[WZ1]=jvj+180; 
(*f[26])( );if(v[102]) goto l213;     /*FNDC0(130,jvj+180,V514)*/
V514=pile[WZ2]; 
if((V514<=0)) goto l213;
if((V514==999)) goto l213;
pile[v[22]]=102; pile[WZ1]=jvj+137; pile[WZ2]=jvj+181; 
(*f[32])( );if(v[102]) goto l213;     /*FNDO0(102,jvj+137,jvj+181)*/
pile[v[22]]=130; pile[WZ1]=jvj+181; 
(*f[26])( );if(v[102]) goto l213;     /*FNDC0(130,jvj+181,V519)*/
V519=pile[WZ2]; 
if((V519==999)) goto l216;
V505=V519*V514;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V505; pile[WZ4]=jvj+137; 
(*f[192])( );     /*QUADRI4(100,41,130,V505,jvj+137)*/
goto l115;
l156:x[jvj+183]=s[x[jvj+292]] ;z[jvj+183]=(x[jvj+183]<=sepcte) ? x[jvj+183] : z[jvj+292];
pile[v[22]]=130; pile[WZ1]=jvj+183; 
(*f[26])( );if(v[102]) goto l157;     /*FNDC0(130,jvj+183,V461)*/
V461=pile[WZ2]; 
if((V461!=999)) goto l157;
x[jvj+95]=0 ;z[jvj+95]=0;
l78:if((x[jvj+182]<=0)) goto l216;
x[jvj+92]=s[x[jvj+182]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+182];
if((x[jvj+92]==x[jvj+183])) goto l79;
pile[v[22]]=111; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(111,jvj+92,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(101,jvj+93,jvj+94)*/
if((x[jvj+94]==649)) goto l79;
l80:pile[v[22]]=jvj+95; pile[WZ1]=jvj+92; 
(*f[68])( );     /*PLUE0(jvj+95,jvj+92)*/
l79:x[jvj+182]=t[x[jvj+182]];
goto l78;
l157:x[jvj+292]=t[x[jvj+292]];
goto l155;
l159:x[jvj+293]=s[x[jvj+321]] ;z[jvj+293]=(x[jvj+293]<=sepcte) ? x[jvj+293] : z[jvj+321];
x[jvj+184]=x[jvj+293] ;z[jvj+184]=z[jvj+293];
pile[v[22]]=130; pile[WZ1]=jvj+184; 
(*f[26])( );if(v[102]) goto l161;     /*FNDC0(130,jvj+184,V217)*/
V217=pile[WZ2]; 
if((V217==999)) goto l161;
x[jvj+322]=x[jvj+182] ;z[jvj+322]=z[jvj+182];
l162:if((x[jvj+322]<=0)) goto l161;
x[jvj+294]=s[x[jvj+322]] ;z[jvj+294]=(x[jvj+294]<=sepcte) ? x[jvj+294] : z[jvj+322];
if((x[jvj+293]==x[jvj+294])) goto l163;
x[jvj+185]=x[jvj+294] ;z[jvj+185]=z[jvj+294];
pile[v[22]]=130; pile[WZ1]=jvj+185; 
(*f[26])( );if(v[102]) goto l163;     /*FNDC0(130,jvj+185,V219)*/
V219=pile[WZ2]; 
if((V217!=V219)) goto l163;
x[jvj+40]=0 ;z[jvj+40]=0;
l33:if((x[jvj+182]<=0)) goto l216;
x[jvj+37]=s[x[jvj+182]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+182];
if((x[jvj+37]==x[jvj+293])) goto l34;
if((x[jvj+37]==x[jvj+294])) goto l34;
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]==649)) goto l34;
l35:pile[v[22]]=jvj+40; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+37)*/
l34:x[jvj+182]=t[x[jvj+182]];
goto l33;
l160:x[jvj+321]=x[jvj+182] ;z[jvj+321]=z[jvj+182];
l158:if((x[jvj+321]>0)) goto l159;
x[jvj+295]=x[jvj+182] ;z[jvj+295]=z[jvj+182];
l164:if((x[jvj+295]<=0)) goto l184;
x[jvj+186]=s[x[jvj+295]] ;z[jvj+186]=(x[jvj+186]<=sepcte) ? x[jvj+186] : z[jvj+295];
pile[v[22]]=130; pile[WZ1]=jvj+186; 
(*f[26])( );if(v[102]) goto l165;     /*FNDC0(130,jvj+186,V534)*/
V534=pile[WZ2]; 
if((V534!=0)) goto l165;
x[jvj+296]=x[jvj+182] ;z[jvj+296]=z[jvj+182];
l166:if((x[jvj+296]<=0)) goto l165;
x[jvj+187]=s[x[jvj+296]] ;z[jvj+187]=(x[jvj+187]<=sepcte) ? x[jvj+187] : z[jvj+296];
if((x[jvj+186]==x[jvj+187])) goto l167;
pile[v[22]]=130; pile[WZ1]=jvj+187; 
(*f[26])( );if(v[102]) goto l167;     /*FNDC0(130,jvj+187,V536)*/
V536=pile[WZ2]; 
if((V536!=0)) goto l167;
x[jvj+106]=0 ;z[jvj+106]=0;
x[jvj+274]=x[jvj+182] ;z[jvj+274]=z[jvj+182];
goto l87;
l161:x[jvj+321]=t[x[jvj+321]];
goto l158;
l163:x[jvj+322]=t[x[jvj+322]];
goto l162;
l165:x[jvj+295]=t[x[jvj+295]];
goto l164;
l167:x[jvj+296]=t[x[jvj+296]];
goto l166;
l169:x[jvj+190]=s[x[jvj+297]] ;z[jvj+190]=(x[jvj+190]<=sepcte) ? x[jvj+190] : z[jvj+297];
pile[v[22]]=130; pile[WZ1]=jvj+190; 
(*f[26])( );if(v[102]) goto l170;     /*FNDC0(130,jvj+190,V484)*/
V484=pile[WZ2]; 
if((V484!=0)) goto l170;
x[jvj+298]=x[jvj+182] ;z[jvj+298]=z[jvj+182];
l171:if((x[jvj+298]<=0)) goto l170;
x[jvj+191]=s[x[jvj+298]] ;z[jvj+191]=(x[jvj+191]<=sepcte) ? x[jvj+191] : z[jvj+298];
if((x[jvj+190]==x[jvj+191])) goto l172;
pile[v[22]]=130; pile[WZ1]=jvj+191; 
(*f[26])( );if(v[102]) goto l172;     /*FNDC0(130,jvj+191,V486)*/
V486=pile[WZ2]; 
if((V486!=0)) goto l172;
x[jvj+99]=0 ;z[jvj+99]=0;
x[jvj+273]=x[jvj+182] ;z[jvj+273]=z[jvj+182];
goto l81;
l170:x[jvj+297]=t[x[jvj+297]];
goto l168;
l172:x[jvj+298]=t[x[jvj+298]];
goto l171;
l174:x[jvj+299]=s[x[jvj+323]] ;z[jvj+299]=(x[jvj+299]<=sepcte) ? x[jvj+299] : z[jvj+323];
x[jvj+194]=x[jvj+299] ;z[jvj+194]=z[jvj+299];
pile[v[22]]=130; pile[WZ1]=jvj+194; 
(*f[26])( );if(v[102]) goto l175;     /*FNDC0(130,jvj+194,V151)*/
V151=pile[WZ2]; 
if((V151>=0)) goto l175;
x[jvj+324]=x[jvj+182] ;z[jvj+324]=z[jvj+182];
l176:if((x[jvj+324]<=0)) goto l175;
x[jvj+300]=s[x[jvj+324]] ;z[jvj+300]=(x[jvj+300]<=sepcte) ? x[jvj+300] : z[jvj+324];
if((x[jvj+299]==x[jvj+300])) goto l177;
x[jvj+197]=x[jvj+300] ;z[jvj+197]=z[jvj+300];
x[jvj+26]=0 ;z[jvj+26]=0;
x[jvj+264]=x[jvj+182] ;z[jvj+264]=z[jvj+182];
goto l21;
l175:x[jvj+323]=t[x[jvj+323]];
goto l173;
l177:x[jvj+324]=t[x[jvj+324]];
goto l176;
l179:x[jvj+325]=t[x[jvj+325]];
goto l178;
l181:x[jvj+326]=t[x[jvj+326]];
goto l180;
l183:x[jvj+303]=s[x[jvj+327]] ;z[jvj+303]=(x[jvj+303]<=sepcte) ? x[jvj+303] : z[jvj+327];
x[jvj+202]=x[jvj+303] ;z[jvj+202]=z[jvj+303];
pile[v[22]]=130; pile[WZ1]=jvj+202; 
(*f[26])( );if(v[102]) goto l185;     /*FNDC0(130,jvj+202,V323)*/
V323=pile[WZ2]; 
if((V323==999)) goto l185;
if((V323==0)) goto l185;
x[jvj+304]=x[jvj+182] ;z[jvj+304]=z[jvj+182];
l186:if((x[jvj+304]<=0)) goto l185;
x[jvj+203]=s[x[jvj+304]] ;z[jvj+203]=(x[jvj+203]<=sepcte) ? x[jvj+203] : z[jvj+304];
if((x[jvj+303]==x[jvj+203])) goto l187;
pile[v[22]]=130; pile[WZ1]=jvj+203; 
(*f[26])( );if(v[102]) goto l187;     /*FNDC0(130,jvj+203,V327)*/
V327=pile[WZ2]; 
if((V327!=0)) goto l187;
x[jvj+58]=0 ;z[jvj+58]=0;
x[jvj+268]=x[jvj+182] ;z[jvj+268]=z[jvj+182];
goto l48;
l184:x[jvj+327]=x[jvj+182] ;z[jvj+327]=z[jvj+182];
l182:if((x[jvj+327]>0)) goto l183;
x[jvj+328]=x[jvj+182] ;z[jvj+328]=z[jvj+182];
l188:if((x[jvj+328]>0)) goto l189;
x[jvj+330]=x[jvj+182] ;z[jvj+330]=z[jvj+182];
l194:if((x[jvj+330]>0)) goto l195;
x[jvj+309]=x[jvj+182] ;z[jvj+309]=z[jvj+182];
l200:if((x[jvj+309]>0)) goto l201;
x[jvj+332]=x[jvj+182] ;z[jvj+332]=z[jvj+182];
l203:if((x[jvj+332]>0)) goto l204;
x[jvj+334]=x[jvj+182] ;z[jvj+334]=z[jvj+182];
l208:if((x[jvj+334]<=0)) goto l213;
x[jvj+312]=s[x[jvj+334]] ;z[jvj+312]=(x[jvj+312]<=sepcte) ? x[jvj+312] : z[jvj+334];
x[jvj+224]=x[jvj+312] ;z[jvj+224]=z[jvj+312];
pile[v[22]]=130; pile[WZ1]=jvj+224; 
(*f[26])( );if(v[102]) goto l209;     /*FNDC0(130,jvj+224,V57)*/
V57=pile[WZ2]; 
if((V57==999)) goto l209;
x[jvj+335]=x[jvj+182] ;z[jvj+335]=z[jvj+182];
goto l210;
l185:x[jvj+327]=t[x[jvj+327]];
goto l182;
l187:x[jvj+304]=t[x[jvj+304]];
goto l186;
l189:x[jvj+305]=s[x[jvj+328]] ;z[jvj+305]=(x[jvj+305]<=sepcte) ? x[jvj+305] : z[jvj+328];
x[jvj+206]=x[jvj+305] ;z[jvj+206]=z[jvj+305];
pile[v[22]]=130; pile[WZ1]=jvj+206; 
(*f[26])( );if(v[102]) goto l190;     /*FNDC0(130,jvj+206,V13)*/
V13=pile[WZ2]; 
if((V13==0)) goto l190;
if((V13==999)) goto l190;
V18=abs(V13);
x[jvj+329]=x[jvj+182] ;z[jvj+329]=z[jvj+182];
l191:if((x[jvj+329]<=0)) goto l190;
x[jvj+306]=s[x[jvj+329]] ;z[jvj+306]=(x[jvj+306]<=sepcte) ? x[jvj+306] : z[jvj+329];
if((x[jvj+305]==x[jvj+306])) goto l192;
x[jvj+207]=x[jvj+306] ;z[jvj+207]=z[jvj+306];
pile[v[22]]=130; pile[WZ1]=jvj+207; 
(*f[26])( );if(v[102]) goto l192;     /*FNDC0(130,jvj+207,V14)*/
V14=pile[WZ2]; 
if((V14==0)) goto l192;
if((V14==999)) goto l192;
V20=abs(V14);
if((V18==V20)) goto l192;
if((V13<0)) goto l217;
if((V14<0)) goto l217;
V7=1;
l219:if((V18<=V20)) goto l220;
V8=V20;
l193:V17=V7*V8;
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+261]=x[jvj+182] ;z[jvj+261]=z[jvj+182];
goto l1;
l190:x[jvj+328]=t[x[jvj+328]];
goto l188;
l192:x[jvj+329]=t[x[jvj+329]];
goto l191;
l195:x[jvj+307]=s[x[jvj+330]] ;z[jvj+307]=(x[jvj+307]<=sepcte) ? x[jvj+307] : z[jvj+330];
x[jvj+210]=x[jvj+307] ;z[jvj+210]=z[jvj+307];
pile[v[22]]=130; pile[WZ1]=jvj+210; 
(*f[26])( );if(v[102]) goto l196;     /*FNDC0(130,jvj+210,V285)*/
V285=pile[WZ2]; 
if((V285==999)) goto l196;
if((V285==0)) goto l196;
V286=abs(V285);
x[jvj+331]=x[jvj+182] ;z[jvj+331]=z[jvj+182];
l197:if((x[jvj+331]<=0)) goto l196;
x[jvj+308]=s[x[jvj+331]] ;z[jvj+308]=(x[jvj+308]<=sepcte) ? x[jvj+308] : z[jvj+331];
if((x[jvj+307]==x[jvj+308])) goto l198;
x[jvj+211]=x[jvj+308] ;z[jvj+211]=z[jvj+308];
pile[v[22]]=130; pile[WZ1]=jvj+211; 
(*f[26])( );if(v[102]) goto l198;     /*FNDC0(130,jvj+211,V289)*/
V289=pile[WZ2]; 
V288=abs(V289);
if((V286!=V288)) goto l198;
if((V285<0)) goto l218;
if((V289<0)) goto l218;
V280=1;
l199:V291=V280*V286;
x[jvj+51]=0 ;z[jvj+51]=0;
x[jvj+267]=x[jvj+182] ;z[jvj+267]=z[jvj+182];
goto l42;
l196:x[jvj+330]=t[x[jvj+330]];
goto l194;
l198:x[jvj+331]=t[x[jvj+331]];
goto l197;
l201:x[jvj+214]=s[x[jvj+309]] ;z[jvj+214]=(x[jvj+214]<=sepcte) ? x[jvj+214] : z[jvj+309];
pile[v[22]]=111; pile[WZ1]=jvj+214; pile[WZ2]=jvj+215; 
(*f[32])( );if(v[102]) goto l202;     /*FNDO0(111,jvj+214,jvj+215)*/
pile[v[22]]=101; pile[WZ1]=jvj+215; pile[WZ2]=jvj+216; 
(*f[32])( );if(v[102]) goto l202;     /*FNDO0(101,jvj+215,jvj+216)*/
if((x[jvj+216]!=485)) goto l202;
x[jvj+120]=0 ;z[jvj+120]=0;
x[jvj+276]=x[jvj+182] ;z[jvj+276]=z[jvj+182];
goto l99;
l202:x[jvj+309]=t[x[jvj+309]];
goto l200;
l204:x[jvj+310]=s[x[jvj+332]] ;z[jvj+310]=(x[jvj+310]<=sepcte) ? x[jvj+310] : z[jvj+332];
x[jvj+220]=x[jvj+310] ;z[jvj+220]=z[jvj+310];
pile[v[22]]=130; pile[WZ1]=jvj+220; 
(*f[26])( );if(v[102]) goto l205;     /*FNDC0(130,jvj+220,V112)*/
V112=pile[WZ2]; 
if((V112==999)) goto l205;
V113=abs(V112);
V100=V113;
x[jvj+333]=x[jvj+182] ;z[jvj+333]=z[jvj+182];
l206:if((x[jvj+333]<=0)) goto l205;
x[jvj+311]=s[x[jvj+333]] ;z[jvj+311]=(x[jvj+311]<=sepcte) ? x[jvj+311] : z[jvj+333];
if((x[jvj+310]==x[jvj+311])) goto l207;
x[jvj+221]=x[jvj+311] ;z[jvj+221]=z[jvj+311];
pile[v[22]]=130; pile[WZ1]=jvj+221; 
(*f[26])( );if(v[102]) goto l207;     /*FNDC0(130,jvj+221,V116)*/
V116=pile[WZ2]; 
V115=abs(V116);
if((V113!=V115)) goto l207;
if((V112==V116)) goto l207;
if((V112<0)) goto l14;
if((V116<0)) goto l14;
l207:x[jvj+333]=t[x[jvj+333]];
goto l206;
l205:x[jvj+332]=t[x[jvj+332]];
goto l203;
l209:x[jvj+334]=t[x[jvj+334]];
goto l208;
l212:V61=V57+V58;
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+262]=x[jvj+182] ;z[jvj+262]=z[jvj+182];
goto l8;
l213:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l215:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l214;
l216:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=999; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,999,R)*/
goto l214;
l217:V7=(-1);
goto l219;
l218:V280=(-1);
goto l199;
l220:V8=V18;
goto l193;
}
