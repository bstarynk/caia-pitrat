#include "dx.h"
void Z117Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V39=0,V38=0,V50=0,V53=0,V48=0,V52=0,V49=0,V51=0,V35=0,V36=0,V37=0,V21=0,V40=0,V44=0,V27=0,V41=0,V43=0,V45=0,V42=0,V106=0,V105=0,V117=0,V120=0,V115=0,V119=0,V116=0,V118=0,V102=0,V103=0,V104=0,V88=0,V107=0,V111=0,V94=0,V108=0,V110=0,V112=0,V109=0,V163=0,V164=0,V175=0,V203=0,V176=0,V204=0,V167=0,V178=0,IL=0,V177=0,V208=0,V214=0,V209=0,V241=0,V239=0,V247=0,V242=0,V391=0,V410=0,V390=0,P=0,V295=0,V273=0,V316=0,V338=0,V315=0,V359=0,V358=0,V364=0,V365=0,V168=0,V173=0,V174=0,V180=0,V124=0,V257=0,V272=0,V314=0,V389=0,V527=0,V528=0,V529=0,V530=0,V533=0,V532=0,V531=0,V534=0,V535=0,V536=0,V537=0,V540=0,V539=0,V538=0,V541=0,V542=0,V543=0,V544=0,V547=0,V546=0,V545=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=243;
if(v[0]>99700) (*f[6])( );

NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(543,NNNY,jvj+28)*/
pile[v[22]]=538; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(538,jvj+28,jvj+29)*/
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=625)) goto l47;
pile[v[22]]=160; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(160,jvj+29,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+32,V391)*/
V391=pile[WZ2]; 
x[jvj+33]=d[20];z[jvj+33]=0;
l41:if((x[jvj+33]<=0)) goto l47;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+29; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+34,jvj+29,jvj+35)*/
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=486)) goto l42;
pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+38)*/
x[jvj+239]=x[jvj+38] ;z[jvj+239]=z[jvj+38];
l43:if((x[jvj+239]<=0)) goto l42;
x[jvj+39]=s[x[jvj+239]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+239];
if((x[NNNY]!=x[jvj+39])) goto l44;
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=596)) goto l44;
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+39,jvj+42)*/
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+42,V410)*/
V410=pile[WZ2]; 
V390=V410;
V527=V390%V391;
V528=V527;
if((V528<=0)) goto l89;
V529=V391/2;
if((V528<=V529)) goto l89;
V530=V528-V391;
V389=V530;
l45:if((V389==V390)) goto l44;
pile[v[22]]=103; pile[WZ1]=jvj+39; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+39,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
x[jvj+45]=incon;
if((V389==0)) goto l87;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+208)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V389; pile[WZ4]=jvj+211; 
(*f[192])( );     /*QUADRI4(100,41,130,V389,jvj+211)*/
pile[v[22]]=jvj+208; pile[WZ1]=111; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,111,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+210; 
(*f[58])( );     /*TRI3(jvj+209,jvj+44,103,jvj+210)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+211; pile[WZ4]=jvj+210; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+211,jvj+210,jvj+45)*/
l46:NNNT=199;
pile[v[22]]=NNNY; pile[WZ1]=jvj+45; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+45,NNNX)*/
l82:v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[jvj+235]=t[x[jvj+235]];
l1:if((x[jvj+235]<=0)) goto l12;
x[jvj+2]=s[x[jvj+235]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+235];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V38)*/
V38=pile[WZ2]; 
if((V38!=V39)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+2,V43)*/
V43=pile[WZ2]; 
V45=V43%V44;
if((V45!=0)) goto l12;
V42=V43/V44;
l3:if((x[jvj+9]>0)) goto l4;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+171; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+171)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V42; pile[WZ4]=jvj+173; 
(*f[192])( );     /*QUADRI4(100,41,130,V42,jvj+173)*/
pile[v[22]]=jvj+171; pile[WZ1]=111; pile[WZ2]=jvj+172; 
(*f[54])( );     /*TRI1(jvj+171,111,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=jvj+173; pile[WZ2]=103; pile[WZ3]=jvj+174; 
(*f[58])( );     /*TRI3(jvj+172,jvj+173,103,jvj+174)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+174; pile[WZ5]=jvj+154; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+174,jvj+154)*/
l80:NNNT=235;
pile[v[22]]=jvj+112; pile[WZ1]=jvj+154; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+112,jvj+154,NNNX)*/
goto l82;
l4:x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+3,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(515,jvj+3,V52)*/
V52=pile[WZ2]; 
x[jvj+236]=x[jvj+10] ;z[jvj+236]=z[jvj+10];
l6:if((x[jvj+236]<=0)) goto l5;
x[jvj+4]=s[x[jvj+236]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+236];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(510,jvj+4,V49)*/
V49=pile[WZ2]; 
if((V48!=V49)) goto l7;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(515,jvj+4,V51)*/
V51=pile[WZ2]; 
V50=V51%V52;
if((V50!=0)) goto l12;
V53=V51/V52;
if((V53!=V42)) goto l12;
l7:x[jvj+236]=t[x[jvj+236]];
goto l6;
l5:x[jvj+9]=t[x[jvj+9]];
goto l3;
l8:if((V27==1)) goto l9;
if((V21!=(-1))) goto l11;
if((V27!=(-1))) goto l11;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+167)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+169; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+169)*/
pile[WZ3]=2; pile[WZ4]=jvj+165; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=160; pile[WZ2]=jvj+166; 
(*f[54])( );     /*TRI1(jvj+165,160,jvj+166)*/
pile[v[22]]=jvj+166; pile[WZ1]=jvj+167; pile[WZ2]=111; pile[WZ3]=jvj+168; 
(*f[58])( );     /*TRI3(jvj+166,jvj+167,111,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=jvj+169; pile[WZ2]=103; pile[WZ3]=jvj+170; 
(*f[58])( );     /*TRI3(jvj+168,jvj+169,103,jvj+170)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+170; pile[WZ5]=jvj+154; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+170,jvj+154)*/
l11:V36=abs(V21);
if((V36<=1)) goto l12;
V37=abs(V27);
if((V37<=1)) goto l12;
pile[v[22]]=V21; pile[WZ1]=jvj+9; 
(*f[1007])( );if(v[102]) goto l12;     /*DECFACTPREM0(V21,jvj+9)*/
for(i=x[jvj+9],V40=0;i>0;i=t[i],V40++)  ;
if((x[jvj+9]<=0)) goto l12;
x[jvj+1]=s[x[jvj+9]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+9];
pile[v[22]]=515; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+1,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=jvj+10; 
(*f[1007])( );if(v[102]) goto l12;     /*DECFACTPREM0(V27,jvj+10)*/
for(i=x[jvj+10],V41=0;i>0;i=t[i],V41++)  ;
if((V40!=V41)) goto l12;
pile[v[22]]=510; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+1,V39)*/
V39=pile[WZ2]; 
x[jvj+235]=x[jvj+10] ;z[jvj+235]=z[jvj+10];
goto l1;
l9:V35=abs(V21);
if((V35<=1)) goto l10;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+155)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+157; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+157)*/
pile[v[22]]=jvj+155; pile[WZ1]=111; pile[WZ2]=jvj+156; 
(*f[54])( );     /*TRI1(jvj+155,111,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=jvj+157; pile[WZ2]=103; pile[WZ3]=jvj+158; 
(*f[58])( );     /*TRI3(jvj+156,jvj+157,103,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+158; pile[WZ5]=jvj+154; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+158,jvj+154)*/
l10:if((V21!=(-1))) goto l11;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+161; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+161)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+163; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+163)*/
pile[WZ3]=2; pile[WZ4]=jvj+159; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=160; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+159,160,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=jvj+161; pile[WZ2]=111; pile[WZ3]=jvj+162; 
(*f[58])( );     /*TRI3(jvj+160,jvj+161,111,jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=jvj+163; pile[WZ2]=103; pile[WZ3]=jvj+164; 
(*f[58])( );     /*TRI3(jvj+162,jvj+163,103,jvj+164)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+164; pile[WZ5]=jvj+154; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+164,jvj+154)*/
goto l11;
l12:if(x[jvj+154]==incon) goto l83;
goto l80;
l14:x[jvj+237]=t[x[jvj+237]];
l13:if((x[jvj+237]<=0)) goto l24;
x[jvj+13]=s[x[jvj+237]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+237];
pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+13,V105)*/
V105=pile[WZ2]; 
if((V105!=V106)) goto l14;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(515,jvj+13,V110)*/
V110=pile[WZ2]; 
V112=V110%V111;
if((V112!=0)) goto l24;
V109=V110/V111;
l15:if((x[jvj+20]>0)) goto l16;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+191; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+191)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V109; pile[WZ4]=jvj+193; 
(*f[192])( );     /*QUADRI4(100,41,130,V109,jvj+193)*/
pile[v[22]]=jvj+191; pile[WZ1]=111; pile[WZ2]=jvj+192; 
(*f[54])( );     /*TRI1(jvj+191,111,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=jvj+193; pile[WZ2]=103; pile[WZ3]=jvj+194; 
(*f[58])( );     /*TRI3(jvj+192,jvj+193,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+194; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+194,jvj+111)*/
l69:NNNT=235;
pile[v[22]]=jvj+89; pile[WZ1]=jvj+111; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+89,jvj+111,NNNX)*/
goto l82;
l16:x[jvj+14]=s[x[jvj+20]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+20];
pile[v[22]]=510; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+14,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(515,jvj+14,V119)*/
V119=pile[WZ2]; 
x[jvj+238]=x[jvj+21] ;z[jvj+238]=z[jvj+21];
l18:if((x[jvj+238]<=0)) goto l17;
x[jvj+15]=s[x[jvj+238]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+238];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(510,jvj+15,V116)*/
V116=pile[WZ2]; 
if((V115!=V116)) goto l19;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(515,jvj+15,V118)*/
V118=pile[WZ2]; 
V117=V118%V119;
if((V117!=0)) goto l24;
V120=V118/V119;
if((V120!=V109)) goto l24;
l19:x[jvj+238]=t[x[jvj+238]];
goto l18;
l17:x[jvj+20]=t[x[jvj+20]];
goto l15;
l20:if((V94==1)) goto l21;
if((V88!=(-1))) goto l23;
if((V94!=(-1))) goto l23;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+187)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+189; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+189)*/
pile[WZ3]=2; pile[WZ4]=jvj+185; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=160; pile[WZ2]=jvj+186; 
(*f[54])( );     /*TRI1(jvj+185,160,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=jvj+187; pile[WZ2]=111; pile[WZ3]=jvj+188; 
(*f[58])( );     /*TRI3(jvj+186,jvj+187,111,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=jvj+189; pile[WZ2]=103; pile[WZ3]=jvj+190; 
(*f[58])( );     /*TRI3(jvj+188,jvj+189,103,jvj+190)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+190; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+190,jvj+111)*/
l23:V103=abs(V88);
if((V103<=1)) goto l24;
V104=abs(V94);
if((V104<=1)) goto l24;
pile[v[22]]=V88; pile[WZ1]=jvj+20; 
(*f[1007])( );if(v[102]) goto l24;     /*DECFACTPREM0(V88,jvj+20)*/
for(i=x[jvj+20],V107=0;i>0;i=t[i],V107++)  ;
if((x[jvj+20]<=0)) goto l24;
x[jvj+12]=s[x[jvj+20]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+20];
pile[v[22]]=515; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(515,jvj+12,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=jvj+21; 
(*f[1007])( );if(v[102]) goto l24;     /*DECFACTPREM0(V94,jvj+21)*/
for(i=x[jvj+21],V108=0;i>0;i=t[i],V108++)  ;
if((V107!=V108)) goto l24;
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+12,V106)*/
V106=pile[WZ2]; 
x[jvj+237]=x[jvj+21] ;z[jvj+237]=z[jvj+21];
goto l13;
l21:V102=abs(V88);
if((V102<=1)) goto l22;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+175)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+177; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+177)*/
pile[v[22]]=jvj+175; pile[WZ1]=111; pile[WZ2]=jvj+176; 
(*f[54])( );     /*TRI1(jvj+175,111,jvj+176)*/
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; pile[WZ2]=103; pile[WZ3]=jvj+178; 
(*f[58])( );     /*TRI3(jvj+176,jvj+177,103,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+178; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+178,jvj+111)*/
l22:if((V88!=(-1))) goto l23;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+181)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+183; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+183)*/
pile[WZ3]=2; pile[WZ4]=jvj+179; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=160; pile[WZ2]=jvj+180; 
(*f[54])( );     /*TRI1(jvj+179,160,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=jvj+181; pile[WZ2]=111; pile[WZ3]=jvj+182; 
(*f[58])( );     /*TRI3(jvj+180,jvj+181,111,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=jvj+183; pile[WZ2]=103; pile[WZ3]=jvj+184; 
(*f[58])( );     /*TRI3(jvj+182,jvj+183,103,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+184; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+184,jvj+111)*/
goto l23;
l24:if(x[jvj+111]==incon) goto l84;
goto l69;
l25:if((x[jvj+23]!=134)) goto l26;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+134)*/
l26:pile[v[22]]=510; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(510,jvj+23,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(515,jvj+23,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+133; pile[WZ4]=jvj+195; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+133,jvj+195)*/
pile[WZ3]=486; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+212)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V164; pile[WZ4]=jvj+213; 
(*f[192])( );     /*QUADRI4(100,41,130,V164,jvj+213)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+212; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+212,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+199,107,jvj+25)*/
pile[WZ2]=jvj+213; 
(*f[36])( );     /*PLUSC0(jvj+199,107,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+214)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V163; pile[WZ4]=jvj+215; 
(*f[192])( );     /*QUADRI4(100,41,130,V163,jvj+215)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+214; pile[WZ4]=jvj+197; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+214,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+197,107,jvj+27)*/
pile[WZ2]=jvj+215; 
(*f[36])( );     /*PLUSC0(jvj+197,107,jvj+215)*/
pile[v[22]]=jvj+195; pile[WZ1]=111; pile[WZ2]=jvj+196; 
(*f[54])( );     /*TRI1(jvj+195,111,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=jvj+197; pile[WZ2]=103; pile[WZ3]=jvj+198; 
(*f[58])( );     /*TRI3(jvj+196,jvj+197,103,jvj+198)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+199; pile[WZ4]=jvj+198; pile[WZ5]=jvj+134; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+199,jvj+198,jvj+134)*/
l74:if((x[jvj+134]==(-99999998))) goto l75;
NNNT=236;
pile[v[22]]=jvj+112; pile[WZ1]=jvj+134; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+112,jvj+134,NNNX)*/
goto l82;
l27:if(x[jvj+134]==incon) goto l75;
goto l74;
l28:V175=0;
l29:V176=999999;
V204=V175+2;
l31:if((V175<=V204)) goto l33;
if((V176==999999)) goto l71;
pile[v[22]]=103; pile[WZ1]=jvj+114; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(103,jvj+114,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; 
(*f[255])( );     /*COPEXP0(jvj+121,jvj+122)*/
NNNT=164;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+223; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+223)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V176; pile[WZ4]=jvj+225; 
(*f[192])( );     /*QUADRI4(100,41,130,V176,jvj+225)*/
pile[v[22]]=jvj+223; pile[WZ1]=111; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+223,111,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=jvj+225; pile[WZ2]=103; pile[WZ3]=jvj+226; 
(*f[58])( );     /*TRI3(jvj+224,jvj+225,103,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+122; pile[WZ4]=jvj+226; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+122,jvj+226,jvj+123)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+123; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+112,jvj+123,NNNX)*/
goto l82;
l30:if((IL>V168)) goto l34;
l32:V175++;
goto l31;
l33:pile[v[22]]=V175; pile[WZ1]=V167; 
(*f[1006])( );if(v[102]) goto l32;     /*POWER0(V175,V167,V178)*/
V178=pile[WZ2]; 
IL=V178;
if((x[jvj+120]==30)) goto l30;
if((x[jvj+120]!=29)) goto l32;
if((IL>=V168)) goto l34;
goto l32;
l34:V177=V175;
if(V177<V176) V176=V177;
goto l32;
l35:if((V209>=V168)) goto l72;
l36:V208++;
if((V208<=29)) goto l37;
l73:pile[v[22]]=111; pile[WZ1]=jvj+118; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+118,jvj+129)*/
pile[v[22]]=101; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+129,jvj+130)*/
if((x[jvj+130]!=596)) goto l75;
pile[v[22]]=102; pile[WZ1]=jvj+118; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(102,jvj+118,jvj+131)*/
pile[v[22]]=130; pile[WZ1]=jvj+131; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(130,jvj+131,V124)*/
V124=pile[WZ2]; 
if((V124<=0)) goto l75;
pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+112,jvj+132)*/
pile[v[22]]=101; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+132,jvj+133)*/
if(x[jvj+133]!=25&&x[jvj+133]!=29&&x[jvj+133]!=30&&x[jvj+133]!=27&&x[jvj+133]!=28&&x[jvj+133]!=26) goto l75;
pile[v[22]]=V167; pile[WZ1]=V124; pile[WZ2]=jvj+23; 
(*f[2113])( );     /*ACCPREM0(V167,V124,jvj+23)*/
pile[v[22]]=103; pile[WZ1]=jvj+118; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(103,jvj+118,jvj+26)*/
pile[WZ1]=jvj+114; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(103,jvj+114,jvj+24)*/
x[jvj+134]=incon;
if((x[jvj+133]==25)) goto l25;
if((x[jvj+133]!=26)) goto l26;
if((x[jvj+23]!=134)) goto l26;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+134)*/
goto l26;
l38:if((V242<V257)) goto l76;
l39:V241++;
if((V241<=29)) goto l40;
l77:pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(111,jvj+112,jvj+144)*/
pile[v[22]]=101; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(101,jvj+144,jvj+145)*/
if((x[jvj+145]!=25)) goto l81;
x[jvj+146]=d[20];z[jvj+146]=0;
l78:if((x[jvj+146]<=0)) goto l81;
x[jvj+147]=s[x[jvj+146]] ;z[jvj+147]=(x[jvj+147]<=sepcte) ? x[jvj+147] : z[jvj+146];
pile[v[22]]=jvj+147; pile[WZ1]=jvj+112; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+147,jvj+112,jvj+148)*/
pile[v[22]]=111; pile[WZ1]=jvj+148; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(111,jvj+148,jvj+149)*/
pile[v[22]]=101; pile[WZ1]=jvj+149; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(101,jvj+149,jvj+150)*/
if((x[jvj+150]!=596)) goto l79;
pile[v[22]]=102; pile[WZ1]=jvj+148; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(102,jvj+148,jvj+151)*/
pile[v[22]]=130; pile[WZ1]=jvj+151; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(130,jvj+151,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+147; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(268,jvj+147,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=jvj+112; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+152,jvj+112,jvj+153)*/
pile[v[22]]=130; pile[WZ1]=jvj+153; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(130,jvj+153,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+148; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(103,jvj+148,jvj+5)*/
x[jvj+154]=incon;
if((V21!=0)) goto l8;
if((V27!=0)) goto l8;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+154)*/
goto l11;
l42:x[jvj+33]=t[x[jvj+33]];
goto l41;
l44:x[jvj+239]=t[x[jvj+239]];
goto l43;
l47:pile[v[22]]=543; pile[WZ1]=jvj+28; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(543,jvj+28,jvj+46)*/
pile[v[22]]=538; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(538,jvj+46,jvj+47)*/
pile[v[22]]=111; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+47,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=625)) goto l56;
pile[v[22]]=160; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(160,jvj+47,jvj+50)*/
pile[v[22]]=130; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+50,P)*/
P=pile[WZ2]; 
x[jvj+51]=d[20];z[jvj+51]=0;
l48:if((x[jvj+51]<=0)) goto l56;
x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+47; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(jvj+52,jvj+47,jvj+53)*/
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=485)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(107,jvj+53,jvj+56)*/
x[jvj+240]=x[jvj+56] ;z[jvj+240]=z[jvj+56];
l50:if((x[jvj+240]<=0)) goto l49;
x[jvj+57]=s[x[jvj+240]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+240];
pile[v[22]]=111; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+57,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=486)) goto l51;
pile[v[22]]=107; pile[WZ1]=jvj+57; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(107,jvj+57,jvj+60)*/
x[jvj+241]=x[jvj+60] ;z[jvj+241]=z[jvj+60];
l52:if((x[jvj+241]<=0)) goto l51;
x[jvj+61]=s[x[jvj+241]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+241];
if((x[NNNY]!=x[jvj+61])) goto l53;
pile[v[22]]=111; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(111,jvj+61,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+62,jvj+63)*/
if((x[jvj+63]!=596)) goto l53;
pile[v[22]]=102; pile[WZ1]=jvj+61; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,jvj+61,jvj+64)*/
pile[v[22]]=130; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+64,V295)*/
V295=pile[WZ2]; 
V273=V295;
V534=V273%P;
V535=V534;
if((V535<=0)) goto l91;
V536=P/2;
if((V535<=V536)) goto l91;
V537=V535-P;
V272=V537;
l54:if((V272==V273)) goto l53;
pile[v[22]]=103; pile[WZ1]=jvj+61; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,jvj+61,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(jvj+65,jvj+66)*/
x[jvj+67]=incon;
if((V272==0)) goto l85;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+200; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+200)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V272; pile[WZ4]=jvj+203; 
(*f[192])( );     /*QUADRI4(100,41,130,V272,jvj+203)*/
pile[v[22]]=jvj+200; pile[WZ1]=111; pile[WZ2]=jvj+201; 
(*f[54])( );     /*TRI1(jvj+200,111,jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+202; 
(*f[58])( );     /*TRI3(jvj+201,jvj+66,103,jvj+202)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+203; pile[WZ4]=jvj+202; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+203,jvj+202,jvj+67)*/
l55:NNNT=201;
pile[v[22]]=NNNY; pile[WZ1]=jvj+67; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+67,NNNX)*/
goto l82;
l49:x[jvj+51]=t[x[jvj+51]];
goto l48;
l51:x[jvj+240]=t[x[jvj+240]];
goto l50;
l53:x[jvj+241]=t[x[jvj+241]];
goto l52;
l56:pile[v[22]]=539; pile[WZ1]=jvj+46; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(539,jvj+46,jvj+68)*/
pile[v[22]]=111; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+68,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=625)) goto l65;
pile[v[22]]=160; pile[WZ1]=jvj+68; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(160,jvj+68,jvj+71)*/
pile[v[22]]=130; pile[WZ1]=jvj+71; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+71,V316)*/
V316=pile[WZ2]; 
x[jvj+72]=d[20];z[jvj+72]=0;
l57:if((x[jvj+72]<=0)) goto l65;
x[jvj+73]=s[x[jvj+72]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+72];
pile[v[22]]=jvj+73; pile[WZ1]=jvj+68; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(jvj+73,jvj+68,jvj+74)*/
pile[v[22]]=111; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+74,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+76]!=485)) goto l58;
pile[v[22]]=107; pile[WZ1]=jvj+74; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,jvj+74,jvj+77)*/
x[jvj+242]=x[jvj+77] ;z[jvj+242]=z[jvj+77];
l59:if((x[jvj+242]<=0)) goto l58;
x[jvj+78]=s[x[jvj+242]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+242];
pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+78,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]!=486)) goto l60;
pile[v[22]]=107; pile[WZ1]=jvj+78; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(107,jvj+78,jvj+81)*/
x[jvj+243]=x[jvj+81] ;z[jvj+243]=z[jvj+81];
l61:if((x[jvj+243]<=0)) goto l60;
x[jvj+82]=s[x[jvj+243]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+243];
if((x[NNNY]!=x[jvj+82])) goto l62;
pile[v[22]]=111; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,jvj+82,jvj+83)*/
pile[v[22]]=101; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+83,jvj+84)*/
if((x[jvj+84]!=596)) goto l62;
pile[v[22]]=102; pile[WZ1]=jvj+82; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(102,jvj+82,jvj+85)*/
pile[v[22]]=130; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(130,jvj+85,V338)*/
V338=pile[WZ2]; 
V315=V338;
V541=V315%V316;
V542=V541;
if((V542<=0)) goto l93;
V543=V316/2;
if((V542<=V543)) goto l93;
V544=V542-V316;
V314=V544;
l63:if((V314==V315)) goto l62;
pile[v[22]]=103; pile[WZ1]=jvj+82; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(103,jvj+82,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; 
(*f[255])( );     /*COPEXP0(jvj+86,jvj+87)*/
x[jvj+88]=incon;
if((V314==0)) goto l86;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+204)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V314; pile[WZ4]=jvj+207; 
(*f[192])( );     /*QUADRI4(100,41,130,V314,jvj+207)*/
pile[v[22]]=jvj+204; pile[WZ1]=111; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,111,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+87; pile[WZ2]=103; pile[WZ3]=jvj+206; 
(*f[58])( );     /*TRI3(jvj+205,jvj+87,103,jvj+206)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+207; pile[WZ4]=jvj+206; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+207,jvj+206,jvj+88)*/
l64:NNNT=201;
pile[v[22]]=NNNY; pile[WZ1]=jvj+88; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+88,NNNX)*/
goto l82;
l58:x[jvj+72]=t[x[jvj+72]];
goto l57;
l60:x[jvj+242]=t[x[jvj+242]];
goto l59;
l62:x[jvj+243]=t[x[jvj+243]];
goto l61;
l65:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(539,NNNY,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,jvj+89,jvj+90)*/
if((x[jvj+90]!=22)) goto l66;
pile[v[22]]=103; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(103,jvj+89,jvj+91)*/
pile[v[22]]=111; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,jvj+91,jvj+92)*/
pile[v[22]]=101; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(101,jvj+92,jvj+93)*/
if((x[jvj+93]!=596)) goto l66;
pile[v[22]]=102; pile[WZ1]=jvj+89; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,jvj+89,jvj+94)*/
pile[v[22]]=130; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+94,V359)*/
V359=pile[WZ2]; 
if((V359<=0)) goto l66;
pile[v[22]]=102; pile[WZ1]=jvj+91; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,jvj+91,jvj+95)*/
pile[v[22]]=130; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+95,V358)*/
V358=pile[WZ2]; 
if((V358<=0)) goto l66;
pile[v[22]]=111; pile[WZ1]=jvj+89; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,jvj+89,jvj+96)*/
pile[v[22]]=101; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(101,jvj+96,jvj+97)*/
if(x[jvj+97]!=29&&x[jvj+97]!=30) goto l66;
pile[v[22]]=V359; 
(*f[850])( );if(v[102]) goto l66;     /*LOG0(V359,V364)*/
V364=pile[WZ1]; 
pile[v[22]]=V358; 
(*f[850])( );if(v[102]) goto l66;     /*LOG0(V358,V365)*/
V365=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=jvj+91; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(103,jvj+91,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; 
(*f[255])( );     /*COPEXP0(jvj+98,jvj+99)*/
NNNT=165;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+97; pile[WZ4]=jvj+216; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+97,jvj+216)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V364; pile[WZ4]=jvj+220; 
(*f[192])( );     /*QUADRI4(100,41,130,V364,jvj+220)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+221; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+221)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V365; pile[WZ4]=jvj+222; 
(*f[192])( );     /*QUADRI4(100,41,130,V365,jvj+222)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+221; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+221,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=107; pile[WZ2]=jvj+222; 
(*f[36])( );     /*PLUSC0(jvj+218,107,jvj+222)*/
pile[WZ2]=jvj+99; 
(*f[36])( );     /*PLUSC0(jvj+218,107,jvj+99)*/
pile[v[22]]=jvj+216; pile[WZ1]=111; pile[WZ2]=jvj+217; 
(*f[54])( );     /*TRI1(jvj+216,111,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=jvj+218; pile[WZ2]=103; pile[WZ3]=jvj+219; 
(*f[58])( );     /*TRI3(jvj+217,jvj+218,103,jvj+219)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+220; pile[WZ4]=jvj+219; pile[WZ5]=jvj+100; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+220,jvj+219,jvj+100)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+100; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+89,jvj+100,NNNX)*/
goto l82;
l66:pile[v[22]]=111; pile[WZ1]=jvj+89; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,jvj+89,jvj+101)*/
pile[v[22]]=101; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+101,jvj+102)*/
if((x[jvj+102]!=25)) goto l70;
x[jvj+103]=d[20];z[jvj+103]=0;
l67:if((x[jvj+103]<=0)) goto l70;
x[jvj+104]=s[x[jvj+103]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+103];
pile[v[22]]=jvj+104; pile[WZ1]=jvj+89; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(jvj+104,jvj+89,jvj+105)*/
pile[v[22]]=111; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,jvj+105,jvj+106)*/
pile[v[22]]=101; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(101,jvj+106,jvj+107)*/
if((x[jvj+107]!=596)) goto l68;
pile[v[22]]=102; pile[WZ1]=jvj+105; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(102,jvj+105,jvj+108)*/
pile[v[22]]=130; pile[WZ1]=jvj+108; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(130,jvj+108,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+104; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(268,jvj+104,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+89; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(jvj+109,jvj+89,jvj+110)*/
pile[v[22]]=130; pile[WZ1]=jvj+110; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(130,jvj+110,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+105; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(103,jvj+105,jvj+16)*/
x[jvj+111]=incon;
if((V88!=0)) goto l20;
if((V94!=0)) goto l20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+111)*/
goto l23;
l68:x[jvj+103]=t[x[jvj+103]];
goto l67;
l70:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(538,NNNY,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(100,jvj+112,jvj+113)*/
if((x[jvj+113]!=22)) goto l77;
pile[v[22]]=102; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(102,jvj+112,jvj+114)*/
pile[v[22]]=111; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+114,jvj+115)*/
pile[v[22]]=101; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+115,jvj+116)*/
if((x[jvj+116]!=596)) goto l75;
pile[v[22]]=102; pile[WZ1]=jvj+114; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(102,jvj+114,jvj+117)*/
pile[v[22]]=130; pile[WZ1]=jvj+117; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(130,jvj+117,V167)*/
V167=pile[WZ2]; 
if((V167<=0)) goto l75;
pile[v[22]]=103; pile[WZ1]=jvj+112; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(103,jvj+112,jvj+118)*/
pile[v[22]]=130; pile[WZ1]=jvj+118; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(130,jvj+118,V168)*/
V168=pile[WZ2]; 
if((V168<=0)) goto l71;
pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(111,jvj+112,jvj+119)*/
pile[v[22]]=101; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(101,jvj+119,jvj+120)*/
if(x[jvj+120]!=29&&x[jvj+120]!=30) goto l71;
pile[v[22]]=V167; 
(*f[850])( );if(v[102]) goto l71;     /*LOG0(V167,V173)*/
V173=pile[WZ1]; 
pile[v[22]]=V168; 
(*f[850])( );if(v[102]) goto l71;     /*LOG0(V168,V174)*/
V174=pile[WZ1]; 
V180=V173/V174;
V175=incon;
if((V180<=0)) goto l28;
V203=V180-1;
V175=V203;
goto l29;
l71:pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(111,jvj+112,jvj+124)*/
pile[v[22]]=101; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(101,jvj+124,jvj+125)*/
if(x[jvj+125]!=29&&x[jvj+125]!=30) goto l73;
V208=0;
l37:pile[v[22]]=V208; pile[WZ1]=V167; 
(*f[1006])( );if(v[102]) goto l36;     /*POWER0(V208,V167,V214)*/
V214=pile[WZ2]; 
V209=V214;
if((x[jvj+125]==29)) goto l35;
if((x[jvj+125]!=30)) goto l36;
if((V209>V168)) goto l72;
goto l36;
l72:pile[v[22]]=103; pile[WZ1]=jvj+114; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(103,jvj+114,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; 
(*f[255])( );     /*COPEXP0(jvj+126,jvj+127)*/
NNNT=238;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+227)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V208; pile[WZ4]=jvj+229; 
(*f[192])( );     /*QUADRI4(100,41,130,V208,jvj+229)*/
pile[v[22]]=jvj+227; pile[WZ1]=111; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+227,111,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=jvj+229; pile[WZ2]=103; pile[WZ3]=jvj+230; 
(*f[58])( );     /*TRI3(jvj+228,jvj+229,103,jvj+230)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+127; pile[WZ4]=jvj+230; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+127,jvj+230,jvj+128)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+128; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+112,jvj+128,NNNX)*/
goto l82;
l75:pile[v[22]]=130; pile[WZ1]=jvj+114; 
(*f[26])( );if(v[102]) goto l77;     /*FNDC0(130,jvj+114,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+112; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(103,jvj+112,jvj+135)*/
pile[v[22]]=111; pile[WZ1]=jvj+135; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(111,jvj+135,jvj+136)*/
pile[v[22]]=101; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(101,jvj+136,jvj+137)*/
if((x[jvj+137]!=596)) goto l77;
pile[v[22]]=102; pile[WZ1]=jvj+135; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(102,jvj+135,jvj+138)*/
pile[v[22]]=130; pile[WZ1]=jvj+138; 
(*f[26])( );if(v[102]) goto l77;     /*FNDC0(130,jvj+138,V239)*/
V239=pile[WZ2]; 
if((V239<=0)) goto l77;
pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(111,jvj+112,jvj+139)*/
pile[v[22]]=101; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(101,jvj+139,jvj+140)*/
if(x[jvj+140]!=29&&x[jvj+140]!=30) goto l77;
V241=0;
l40:pile[v[22]]=V241; pile[WZ1]=V239; 
(*f[1006])( );if(v[102]) goto l39;     /*POWER0(V241,V239,V247)*/
V247=pile[WZ2]; 
V242=V247;
if((x[jvj+140]==29)) goto l38;
if((x[jvj+140]!=30)) goto l39;
if((V242<=V257)) goto l76;
goto l39;
l76:pile[v[22]]=103; pile[WZ1]=jvj+135; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(103,jvj+135,jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=jvj+142; 
(*f[255])( );     /*COPEXP0(jvj+141,jvj+142)*/
NNNT=239;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+231; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+231)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V241; pile[WZ4]=jvj+233; 
(*f[192])( );     /*QUADRI4(100,41,130,V241,jvj+233)*/
pile[v[22]]=jvj+231; pile[WZ1]=111; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(jvj+231,111,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=jvj+233; pile[WZ2]=103; pile[WZ3]=jvj+234; 
(*f[58])( );     /*TRI3(jvj+232,jvj+233,103,jvj+234)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+142; pile[WZ4]=jvj+234; pile[WZ5]=jvj+143; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+142,jvj+234,jvj+143)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+143; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+112,jvj+143,NNNX)*/
goto l82;
l79:x[jvj+146]=t[x[jvj+146]];
goto l78;
l81:x[NNNX]=NNNT=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l83:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+154)*/
goto l80;
l84:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+111)*/
goto l69;
l85:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+67; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+67)*/
goto l55;
l86:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+88; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+88)*/
goto l64;
l87:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+45)*/
goto l46;
l88:V389=V528;
goto l45;
l89:if((V528>=0)) goto l88;
V532=abs(V528);
V531=2*V532;
if((V531<V391)) goto l88;
V533=V528+V391;
V389=V533;
goto l45;
l90:V272=V535;
goto l54;
l91:if((V535>=0)) goto l90;
V539=abs(V535);
V538=2*V539;
if((V538<P)) goto l90;
V540=V535+P;
V272=V540;
goto l54;
l92:V314=V542;
goto l63;
l93:if((V542>=0)) goto l92;
V546=abs(V542);
V545=2*V546;
if((V545<V316)) goto l92;
V547=V542+V316;
V314=V547;
goto l63;
}
