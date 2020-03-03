#include "dx.h"
void SPG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V95=0,V88=0,V89=0,V90=0,V91=0,V365=0,V367=0,V368=0,V98=0,V99=0,V100=0,V101=0,V102=0,V382=0,V377=0,V378=0,V343=0,V344=0,V331=0,V332=0,V333=0,V337=0,V338=0,V339=0,V335=0,V336=0,V334=0,V263=0,V264=0,V265=0,V266=0,V267=0,V23=0,V15=0,V16=0,V17=0,V19=0,V18=0,V174=0,V166=0,V167=0,V168=0,V169=0,V170=0,V85=0,V75=0,V76=0,V77=0,V78=0,V79=0,V280=0,V273=0,V274=0,V275=0,V276=0,V156=0,V157=0,V155=0,V158=0,V159=0,V160=0,V7=0,V12=0,V2=0,V3=0,V4=0,V5=0,V188=0,V178=0,V179=0,V180=0,V181=0,V182=0,V68=0,V59=0,V60=0,V61=0,V62=0,V208=0,V192=0,V193=0,V194=0,V196=0,V198=0,V199=0,V200=0,V197=0,V195=0,V201=0,V202=0,V223=0,V212=0,V213=0,V214=0,V216=0,V217=0,V215=0,V218=0,V219=0,V240=0,V227=0,V228=0,V229=0,V231=0,V232=0,V230=0,V233=0,V234=0,V109=0,V110=0,V111=0,V112=0,V113=0,V108=0,V114=0,V115=0,V116=0,V117=0,V118=0,V119=0,V259=0,V260=0,V245=0,V246=0,V247=0,V248=0,V249=0,V244=0,V250=0,V251=0,V252=0,V253=0,V254=0,V255=0,V361=0,V363=0,V349=0,V350=0,V351=0,V352=0,V354=0,V355=0,V353=0,V148=0,V149=0,V150=0,V151=0,V125=0,V126=0,V129=0,V133=0,V134=0,V135=0,V131=0,V132=0,V130=0,V127=0,V128=0,V136=0,V140=0,V141=0,V143=0,V144=0,V142=0,V138=0,V139=0,V137=0,V54=0,V55=0,V26=0,V28=0,V32=0,V33=0,V31=0,V34=0,V35=0,V36=0,V30=0,V38=0,V39=0,V40=0,V37=0,V41=0,V43=0,V44=0,V45=0,V46=0,V47=0,V42=0,V48=0,V49=0,V29=0,V27=0,V50=0,V327=0,V328=0,V284=0,V286=0,V287=0,V288=0,V289=0,V285=0,V283=0,V291=0,V292=0,V290=0,V293=0,V296=0,V298=0,V302=0,V303=0,V304=0,V300=0,V301=0,V305=0,V306=0,V307=0,V299=0,V297=0,V308=0,V310=0,V311=0,V314=0,V315=0,V316=0,V312=0,V313=0,V309=0,V295=0,V294=0,V317=0,V318=0,V321=0,V322=0,V323=0,V319=0,V320=0,V383=0,V384=0,V386=0,V387=0,V391=0,V389=0,V390=0,V395=0,V393=0,V394=0,V399=0,V397=0,V398=0;
int I,X,V;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=10451;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2191&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; V=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==172)) goto l1;
if((x[jvj+3]==65)) goto l2;
if((x[jvj+3]==1326)) goto l3;
if((x[jvj+3]==306)) goto l4;
if((x[jvj+3]==1487)) goto l5;
if((x[jvj+3]==1008)) goto l6;
if((x[jvj+3]==744)) goto l7;
if((x[jvj+3]==52)) goto l8;
if((x[jvj+3]==233)) goto l9;
if((x[jvj+3]==285)) goto l10;
if((x[jvj+3]==186)) goto l11;
if((x[jvj+3]!=354)) goto l12;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+13)*/
pile[v[22]]=103; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,X,jvj+14)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V156; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V156,61,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=V157; 
(*f[2077])( );     /*SPR0(jvj+13,V157,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V155,59,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V158; 
(*f[64])( );     /*SRA2((-1729),V158,V391)*/
V391=pile[WZ2]; 
pile[v[22]]=V391; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V391,91,V389)*/
V389=pile[WZ2]; 
pile[v[22]]=V389; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V389,3,V,V390)*/
V390=pile[WZ3]; 
pile[v[22]]=V390; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V390,93,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=V159; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V159,61,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=V160; 
(*f[2077])( );     /*SPR0(jvj+14,V160,J)*/
J=pile[WZ2]; 
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:pile[v[22]]=X; pile[WZ1]=I; pile[WZ2]=V; 
(*f[2220])( );if(v[102]) goto l12;     /*SPCV0(X,I,V,J)*/
J=pile[WZ3]; 
goto l25;
l2:pile[v[22]]=241; pile[WZ1]=65; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,65,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V88,61,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V95; pile[WZ1]=V89; 
(*f[64])( );     /*SRA2(V95,V89,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V90,40,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V91,41,J)*/
J=pile[WZ2]; 
goto l25;
l3:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+4)*/
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+4,V365)*/
V365=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V367)*/
V367=pile[WZ2]; 
pile[v[22]]=V367; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V367,61,V368)*/
V368=pile[WZ2]; 
pile[v[22]]=V365; pile[WZ1]=V368; 
(*f[64])( );     /*SRA2(V365,V368,J)*/
J=pile[WZ2]; 
goto l25;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+5)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V98,61,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V99; 
(*f[64])( );     /*SRA2((-1729),V99,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V100,91,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=3; pile[WZ2]=jvj+5; 
(*f[2147])( );     /*SPP0(V101,3,jvj+5,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V102,93,J)*/
J=pile[WZ2]; 
goto l25;
l5:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,X,jvj+6)*/
for(i=x[jvj+6],V382=0;i>0;i=t[i],V382++)  ;
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V377)*/
V377=pile[WZ2]; 
pile[v[22]]=V377; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V377,61,V378)*/
V378=pile[WZ2]; 
pile[v[22]]=V382; pile[WZ1]=V378; 
(*f[99])( );     /*SPM0(V382,V378,J)*/
J=pile[WZ2]; 
goto l25;
l6:pile[v[22]]=241; pile[WZ1]=1008; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,1008,V343)*/
V343=pile[WZ2]; 
pile[WZ1]=64; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,64,V344)*/
V344=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V331)*/
V331=pile[WZ2]; 
pile[v[22]]=V331; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V331,61,V332)*/
V332=pile[WZ2]; 
pile[v[22]]=V332; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V332,40,V333)*/
V333=pile[WZ2]; 
pile[v[22]]=V343; pile[WZ1]=V333; 
(*f[64])( );     /*SRA2(V343,V333,V337)*/
V337=pile[WZ2]; 
pile[v[22]]=V337; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V337,40,V338)*/
V338=pile[WZ2]; 
pile[v[22]]=(-6771); pile[WZ1]=V338; 
(*f[64])( );     /*SRA2((-6771),V338,V339)*/
V339=pile[WZ2]; 
pile[v[22]]=V339; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V339,41,V335)*/
V335=pile[WZ2]; 
pile[v[22]]=V344; pile[WZ1]=V335; 
(*f[64])( );     /*SRA2(V344,V335,V336)*/
V336=pile[WZ2]; 
pile[v[22]]=(-8073); pile[WZ1]=V336; 
(*f[64])( );     /*SRA2((-8073),V336,V334)*/
V334=pile[WZ2]; 
pile[v[22]]=V334; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V334,41,J)*/
J=pile[WZ2]; 
goto l25;
l7:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+7)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=V263; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V263,61,V264)*/
V264=pile[WZ2]; 
pile[v[22]]=(-1727); pile[WZ1]=V264; 
(*f[64])( );     /*SRA2((-1727),V264,V265)*/
V265=pile[WZ2]; 
pile[v[22]]=V265; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V265,91,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V266; 
(*f[2077])( );     /*SPR0(jvj+7,V266,V267)*/
V267=pile[WZ2]; 
pile[v[22]]=V267; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V267,93,J)*/
J=pile[WZ2]; 
goto l25;
l8:pile[v[22]]=241; pile[WZ1]=52; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,52,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+8)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V15,61,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V16,40,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=V17; 
(*f[64])( );     /*SRA2(V23,V17,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V19; 
(*f[2077])( );     /*SPR0(jvj+8,V19,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V18,41,J)*/
J=pile[WZ2]; 
goto l25;
l9:pile[v[22]]=241; pile[WZ1]=233; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,233,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+9)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V166,61,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V174; pile[WZ1]=V167; 
(*f[64])( );     /*SRA2(V174,V167,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=V168; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V168,40,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=V169; 
(*f[2077])( );     /*SPR0(jvj+9,V169,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=V170; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V170,41,J)*/
J=pile[WZ2]; 
goto l25;
l10:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+10)*/
pile[v[22]]=163; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+10,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,X,jvj+11)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V75,61,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=V76; 
(*f[64])( );     /*SRA2(V85,V76,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V77,91,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=V78; 
(*f[2077])( );     /*SPR0(jvj+11,V78,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V79,93,J)*/
J=pile[WZ2]; 
goto l25;
l11:pile[v[22]]=241; pile[WZ1]=64; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,64,V280)*/
V280=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+12)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V273)*/
V273=pile[WZ2]; 
pile[v[22]]=V273; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V273,61,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V274; 
(*f[99])( );     /*SPM0(1,V274,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=V280; pile[WZ1]=V275; 
(*f[64])( );     /*SRA2(V280,V275,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=V276; 
(*f[2077])( );     /*SPR0(jvj+12,V276,J)*/
J=pile[WZ2]; 
goto l25;
l12:if(x[jvj+3]==172||x[jvj+3]==285||x[jvj+3]==354||x[jvj+3]==465) goto l13;
pile[v[22]]=118; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(118,jvj+3,V7)*/
V7=pile[WZ2]; 
if((V7!=2)) goto l13;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,X,jvj+15)*/
if((x[jvj+15]!=22)) goto l13;
pile[v[22]]=241; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(241,jvj+3,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,X,jvj+16)*/
pile[v[22]]=103; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,X,jvj+17)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V2,61,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V3; 
(*f[2077])( );     /*SPR0(jvj+16,V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=V4; 
(*f[64])( );     /*SRA2(V12,V4,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=V5; 
(*f[2077])( );     /*SPR0(jvj+17,V5,J)*/
J=pile[WZ2]; 
goto l25;
l13:if(x[jvj+3]!=181&&x[jvj+3]!=182&&x[jvj+3]!=183&&x[jvj+3]!=24&&x[jvj+3]!=1154) goto l14;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,X,jvj+18)*/
if((x[jvj+18]!=22)) goto l14;
pile[v[22]]=241; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,jvj+3,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,X,jvj+19)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V178,61,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=V179; 
(*f[64])( );     /*SRA2(V188,V179,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V180,91,V181)*/
V181=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=V181; 
(*f[2077])( );     /*SPR0(jvj+19,V181,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V182,93,J)*/
J=pile[WZ2]; 
goto l25;
l14:if(x[jvj+3]!=87&&x[jvj+3]!=88) goto l15;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,X,jvj+20)*/
if((x[jvj+20]!=22)) goto l15;
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(145,jvj+3,jvj+21)*/
pile[v[22]]=241; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,jvj+21,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,X,jvj+22)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V59,61,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=V60; 
(*f[2077])( );     /*SPR0(jvj+22,V60,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=V61; 
(*f[64])( );     /*SRA2(V68,V61,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V62; 
(*f[99])( );     /*SPM0(1,V62,J)*/
J=pile[WZ2]; 
goto l25;
l15:if(x[jvj+3]!=70&&x[jvj+3]!=198) goto l16;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,X,jvj+23)*/
if((x[jvj+23]!=22)) goto l16;
pile[v[22]]=241; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,jvj+3,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+24)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V192,61,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V208; pile[WZ1]=V193; 
(*f[64])( );     /*SRA2(V208,V193,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V194,91,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V196; 
(*f[64])( );     /*SRA2((-2491),V196,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V198; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V198,91,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V199; 
(*f[99])( );     /*SPM0(1,V199,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=V200; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V200,93,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; 
(*f[38])( );     /*SPC0(V197,93,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=V195; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V195,91,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=V201; 
(*f[2077])( );     /*SPR0(jvj+24,V201,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V202,93,J)*/
J=pile[WZ2]; 
goto l25;
l16:if((x[jvj+3]==465)) goto l17;
if((x[jvj+3]==469)) goto l18;
if((x[jvj+3]==398)) goto l19;
if((x[jvj+3]!=639)) goto l20;
pile[v[22]]=241; pile[WZ1]=639; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(241,639,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(391,639,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,X,jvj+31)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=V245; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V245,61,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=V259; pile[WZ1]=V246; 
(*f[64])( );     /*SRA2(V259,V246,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=V247; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V247,91,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=jvj+31; pile[WZ1]=V248; 
(*f[2077])( );     /*SPR0(jvj+31,V248,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=V249; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V249,93,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=V244; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V244,59,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V250; 
(*f[64])( );     /*SRA2((-1729),V250,V399)*/
V399=pile[WZ2]; 
pile[v[22]]=V399; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V399,91,V397)*/
V397=pile[WZ2]; 
pile[v[22]]=V397; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V397,3,V,V398)*/
V398=pile[WZ3]; 
pile[v[22]]=V398; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V398,93,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V251,61,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V260; pile[WZ1]=V252; 
(*f[64])( );     /*SRA2(V260,V252,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=V253; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V253,91,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=jvj+31; pile[WZ1]=V254; 
(*f[2077])( );     /*SPR0(jvj+31,V254,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=V255; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V255,93,J)*/
J=pile[WZ2]; 
goto l25;
l17:pile[v[22]]=241; pile[WZ1]=465; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(241,465,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,X,jvj+25)*/
pile[v[22]]=103; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,X,jvj+26)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=V212; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V212,61,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V223; pile[WZ1]=V213; 
(*f[64])( );     /*SRA2(V223,V213,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V214,91,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=V216; 
(*f[2077])( );     /*SPR0(jvj+25,V216,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V217,93,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=V215; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V215,91,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=jvj+26; pile[WZ1]=V218; 
(*f[2077])( );     /*SPR0(jvj+26,V218,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V219,93,J)*/
J=pile[WZ2]; 
goto l25;
l18:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,X,jvj+27)*/
pile[v[22]]=163; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,jvj+27,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(160,X,jvj+28)*/
pile[v[22]]=103; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,X,jvj+29)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V227,61,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V240; pile[WZ1]=V228; 
(*f[64])( );     /*SRA2(V240,V228,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V229,91,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=V231; 
(*f[2077])( );     /*SPR0(jvj+29,V231,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V232,93,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=V230; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V230,91,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=V233; 
(*f[2077])( );     /*SPR0(jvj+28,V233,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V234,93,J)*/
J=pile[WZ2]; 
goto l25;
l19:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,X,jvj+30)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V109,61,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=(-1719); pile[WZ1]=V110; 
(*f[64])( );     /*SRA2((-1719),V110,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V111,91,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=jvj+30; pile[WZ1]=V112; 
(*f[2077])( );     /*SPR0(jvj+30,V112,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V113,93,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=V108; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V108,59,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V114; 
(*f[64])( );     /*SRA2((-1729),V114,V395)*/
V395=pile[WZ2]; 
pile[v[22]]=V395; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V395,91,V393)*/
V393=pile[WZ2]; 
pile[v[22]]=V393; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V393,3,V,V394)*/
V394=pile[WZ3]; 
pile[v[22]]=V394; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V394,93,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V115,61,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V116; 
(*f[64])( );     /*SRA2((-1729),V116,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V117,91,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=jvj+30; pile[WZ1]=V118; 
(*f[2077])( );     /*SPR0(jvj+30,V118,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V119,93,J)*/
J=pile[WZ2]; 
goto l25;
l20:x[jvj+33]=1307 ;z[jvj+33]=1307;
if((x[jvj+33]!=x[jvj+3])) goto l21;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,X,jvj+32)*/
if((x[jvj+32]!=22)) goto l21;
pile[v[22]]=459; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(459,jvj+33,jvj+34)*/
pile[v[22]]=241; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(241,jvj+34,V361)*/
V361=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=jvj+33; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(447,jvj+33,jvj+35)*/
pile[v[22]]=241; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(241,jvj+35,V363)*/
V363=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,X,jvj+36)*/
pile[v[22]]=103; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,X,jvj+37)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V349)*/
V349=pile[WZ2]; 
pile[v[22]]=V349; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V349,61,V350)*/
V350=pile[WZ2]; 
pile[v[22]]=V363; pile[WZ1]=V350; 
(*f[64])( );     /*SRA2(V363,V350,V351)*/
V351=pile[WZ2]; 
pile[v[22]]=V351; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V351,40,V352)*/
V352=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=V352; 
(*f[2077])( );     /*SPR0(jvj+36,V352,V354)*/
V354=pile[WZ2]; 
pile[v[22]]=V361; pile[WZ1]=V354; 
(*f[64])( );     /*SRA2(V361,V354,V355)*/
V355=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=V355; 
(*f[2077])( );     /*SPR0(jvj+37,V355,V353)*/
V353=pile[WZ2]; 
pile[v[22]]=V353; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V353,41,J)*/
J=pile[WZ2]; 
goto l25;
l21:if((x[jvj+3]==348)) goto l22;
if((x[jvj+3]==74)) goto l23;
if((x[jvj+3]!=551)) goto l24;
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l24;     /*FNDC2(331,390,V327)*/
V327=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,143,V328)*/
V328=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,X,jvj+40)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V284)*/
V284=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V284; 
(*f[64])( );     /*SRA2((-2532),V284,V286)*/
V286=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V286; 
(*f[64])( );     /*SRA2((-3571),V286,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=V287; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V287,91,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=jvj+40; pile[WZ1]=V288; 
(*f[2077])( );     /*SPR0(jvj+40,V288,V289)*/
V289=pile[WZ2]; 
pile[v[22]]=V289; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V289,93,V285)*/
V285=pile[WZ2]; 
pile[v[22]]=V285; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V285,41,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=V283; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V283,40,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=V291; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V291,32,V292)*/
V292=pile[WZ2]; 
pile[v[22]]=V292; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V292,41,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=V290; pile[WZ1]=V327; 
(*f[38])( );     /*SPC0(V290,V327,V293)*/
V293=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V293; 
(*f[64])( );     /*SRA2((-2577),V293,V296)*/
V296=pile[WZ2]; 
pile[v[22]]=V296; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V296,40,V298)*/
V298=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V298; 
(*f[64])( );     /*SRA2((-2491),V298,V302)*/
V302=pile[WZ2]; 
pile[v[22]]=V302; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V302,91,V303)*/
V303=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=V303; 
(*f[99])( );     /*SPM0(102,V303,V304)*/
V304=pile[WZ2]; 
pile[v[22]]=V304; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V304,93,V300)*/
V300=pile[WZ2]; 
pile[v[22]]=V328; pile[WZ1]=V300; 
(*f[64])( );     /*SRA2(V328,V300,V301)*/
V301=pile[WZ2]; 
pile[v[22]]=(-6104); pile[WZ1]=V301; 
(*f[64])( );     /*SRA2((-6104),V301,V305)*/
V305=pile[WZ2]; 
pile[v[22]]=V305; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V305,91,V306)*/
V306=pile[WZ2]; 
pile[v[22]]=jvj+40; pile[WZ1]=V306; 
(*f[2077])( );     /*SPR0(jvj+40,V306,V307)*/
V307=pile[WZ2]; 
pile[v[22]]=V307; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V307,93,V299)*/
V299=pile[WZ2]; 
pile[v[22]]=V299; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V299,41,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=V297; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V297,32,V308)*/
V308=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V308; 
(*f[2077])( );     /*SPR0(V,V308,V310)*/
V310=pile[WZ2]; 
pile[v[22]]=V310; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V310,61,V311)*/
V311=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V311; 
(*f[64])( );     /*SRA2((-1729),V311,V314)*/
V314=pile[WZ2]; 
pile[v[22]]=V314; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V314,91,V315)*/
V315=pile[WZ2]; 
pile[v[22]]=V315; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V315,3,V,V316)*/
V316=pile[WZ3]; 
pile[v[22]]=V316; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V316,93,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=V312; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V312,61,V313)*/
V313=pile[WZ2]; 
V383=135;
V384=V383;
pile[v[22]]=V384; pile[WZ1]=V313; 
(*f[221])( );     /*SRN0(V384,V313,V309)*/
V309=pile[WZ2]; 
pile[v[22]]=V309; pile[WZ1]=V327; 
(*f[38])( );     /*SPC0(V309,V327,V295)*/
V295=pile[WZ2]; 
pile[v[22]]=(-2578); pile[WZ1]=V295; 
(*f[64])( );     /*SRA2((-2578),V295,V294)*/
V294=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V294; 
(*f[2077])( );     /*SPR0(V,V294,V317)*/
V317=pile[WZ2]; 
pile[v[22]]=V317; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V317,61,V318)*/
V318=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V318; 
(*f[64])( );     /*SRA2((-1729),V318,V321)*/
V321=pile[WZ2]; 
pile[v[22]]=V321; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V321,91,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=V322; pile[WZ1]=3; pile[WZ2]=V; 
(*f[2147])( );     /*SPP0(V322,3,V,V323)*/
V323=pile[WZ3]; 
pile[v[22]]=V323; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V323,93,V319)*/
V319=pile[WZ2]; 
pile[v[22]]=V319; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V319,61,V320)*/
V320=pile[WZ2]; 
V386=134;
V387=V386;
pile[v[22]]=V387; pile[WZ1]=V320; 
(*f[221])( );     /*SRN0(V387,V320,J)*/
J=pile[WZ2]; 
goto l25;
l22:pile[v[22]]=241; pile[WZ1]=329; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,329,V148)*/
V148=pile[WZ2]; 
pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,51,V149)*/
V149=pile[WZ2]; 
pile[WZ1]=338; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,338,V150)*/
V150=pile[WZ2]; 
pile[WZ1]=339; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,339,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,X,jvj+38)*/
pile[v[22]]=V; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(V,I,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=V125; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V125,61,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=V126; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V126,40,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=(-2309); pile[WZ1]=V129; 
(*f[64])( );     /*SRA2((-2309),V129,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V133,91,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=jvj+38; pile[WZ1]=V134; 
(*f[2077])( );     /*SPR0(jvj+38,V134,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=V135; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V135,93,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=V131; 
(*f[64])( );     /*SRA2(V148,V131,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=8; pile[WZ1]=V132; 
(*f[99])( );     /*SPM0(8,V132,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V130; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V130,41,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=V127; 
(*f[64])( );     /*SRA2(V151,V127,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=V128; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V128,40,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=(-2309); pile[WZ1]=V136; 
(*f[64])( );     /*SRA2((-2309),V136,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V140,91,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=jvj+38; pile[WZ1]=V141; 
(*f[2077])( );     /*SPR0(jvj+38,V141,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=V149; pile[WZ1]=V143; 
(*f[64])( );     /*SRA2(V149,V143,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V144; 
(*f[99])( );     /*SPM0(1,V144,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=V142; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V142,93,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=V150; pile[WZ1]=V138; 
(*f[64])( );     /*SRA2(V150,V138,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=(-2536); pile[WZ1]=V139; 
(*f[64])( );     /*SRA2((-2536),V139,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=V137; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V137,41,J)*/
J=pile[WZ2]; 
goto l25;
l23:pile[v[22]]=241; pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,27,V54)*/
V54=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,87,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,X,jvj+39)*/
pile[v[22]]=(-2580); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2580),I,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V26,40,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V28; 
(*f[64])( );     /*SRA2((-2581),V28,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V32,61,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=jvj+39; pile[WZ1]=V33; 
(*f[2077])( );     /*SPR0(jvj+39,V33,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V31,44,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V34; 
(*f[2077])( );     /*SPR0(V,V34,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V35,61,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V36; 
(*f[99])( );     /*SPM0(0,V36,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V30,59,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-2581),V38,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=V39; 
(*f[64])( );     /*SRA2(V54,V39,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V40; 
(*f[99])( );     /*SPM0(0,V40,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V37,59,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V41; 
(*f[64])( );     /*SRA2((-2581),V41,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V43,61,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=(-1728); pile[WZ1]=V44; 
(*f[64])( );     /*SRA2((-1728),V44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V45,91,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V46; 
(*f[64])( );     /*SRA2((-2581),V46,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V47,93,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V42,44,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V48; 
(*f[2077])( );     /*SPR0(V,V48,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V49; 
(*f[64])( );     /*SRA2(V55,V49,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V29,41,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V27,32,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; 
(*f[38])( );     /*SPC0(V50,32,J)*/
J=pile[WZ2]; 
goto l25;
l24:pile[v[22]]=10451; pile[WZ1]=(-3412); pile[WZ2]=X; 
(*f[2016])( );     /*FAUTE10(10451,(-3412),X)*/
J=I;
goto l25;
}
