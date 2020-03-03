#include "dx.h"
void QKBB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V50=0,V2=0,V26=0,M=0,V27=0,V28=0,V30=0,V29=0,V25=0,V57=0,V23=0,V54=0,V53=0,V33=0,V35=0,V39=0,V40=0,V41=0,V42=0,V37=0,V56=0,V38=0,V36=0,V34=0,V43=0,V31=0,V46=0,V47=0,TT=0,V3=0,V5=0,V8=0,V9=0,V7=0,V11=0,V12=0,V13=0,V10=0,V14=0,V15=0,V6=0,V4=0,V16=0,V19=0,V20=0,V21=0,V22=0,V17=0,V18=0,V1=0,V100=0,V101=0,V102=0,V103=0,V104=0,V105=0,V106=0,V107=0,V60=0,V62=0,V68=0,V66=0,V67=0,V69=0,V70=0,V71=0,V64=0,V65=0,V72=0,V78=0,V79=0,V80=0,V76=0,V77=0,V74=0,V75=0,V83=0,V84=0,V85=0,V86=0,V87=0,V81=0,V82=0,V73=0,V63=0,V61=0,V88=0,V89=0,V59=0,V90=0,V92=0,V93=0,V97=0,V99=0,V98=0,V94=0,V95=0,V96=0,V91=0,V58=0,V110=0,V178=0,V177=0,V111=0,V175=0,V179=0,V159=0,V129=0,V131=0,V132=0,V130=0,V133=0,V134=0,V127=0,V128=0,NT=0,V126=0,V125=0,V182=0,V152=0,V154=0,V155=0,V153=0,V156=0,V157=0,V150=0,V151=0,V149=0,V148=0,V184=0,V138=0,V139=0,V143=0,V145=0,V146=0,V109=0,V144=0,V140=0,V141=0,V142=0,V137=0,V136=0,V115=0,V116=0,V120=0,V122=0,V123=0,V121=0,V117=0,V118=0,V119=0,V114=0,V113=0,V466=0,K=0,V225=0,YY=0,V224=0,V468=0,V185=0,V228=0,V229=0,V237=0,V238=0,V230=0,V231=0,V233=0,V234=0,V236=0,V235=0,V232=0,V226=0,V241=0,V242=0,V250=0,V251=0,V243=0,V244=0,V246=0,V247=0,V249=0,V248=0,V245=0,V239=0,V254=0,V255=0,V263=0,V264=0,V256=0,V257=0,V259=0,V260=0,V262=0,V261=0,V258=0,V252=0,V471=0,V267=0,V268=0,V276=0,V277=0,V269=0,V270=0,V272=0,V273=0,V275=0,V274=0,V271=0,V265=0,V280=0,V281=0,V289=0,V290=0,V282=0,V283=0,V285=0,V286=0,V288=0,V287=0,V284=0,V278=0,V293=0,V294=0,V302=0,V303=0,V295=0,V296=0,V298=0,V299=0,V301=0,V300=0,V297=0,V291=0,V474=0,V478=0,V332=0,V333=0,V335=0,V336=0,V334=0,V330=0,V476=0,V339=0,V340=0,V342=0,V343=0,V341=0,V337=0,V306=0,V307=0,V315=0,V316=0,V308=0,V309=0,V311=0,V312=0,V314=0,V313=0,V310=0,V304=0,V319=0,V320=0,V328=0,V329=0,V321=0,V322=0,V324=0,V325=0,V327=0,V326=0,V323=0,V317=0,V480=0,V380=0,V381=0,V382=0,V346=0,V347=0,V354=0,V355=0,V348=0,V349=0,V351=0,V352=0,V353=0,V350=0,V344=0,V358=0,V359=0,V366=0,V367=0,V360=0,V361=0,V363=0,V364=0,V365=0,V362=0,V356=0,V370=0,V371=0,V378=0,V379=0,V372=0,V373=0,V375=0,V376=0,V377=0,V374=0,V368=0,V483=0,V419=0,V420=0,V421=0,V385=0,V386=0,V393=0,V394=0,V387=0,V388=0,V390=0,V391=0,V392=0,V389=0,V383=0,V397=0,V398=0,V405=0,V406=0,V399=0,V400=0,V402=0,V403=0,V404=0,V401=0,V395=0,V409=0,V410=0,V417=0,V418=0,V411=0,V412=0,V414=0,V415=0,V416=0,V413=0,V407=0,V486=0,V490=0,V448=0,V449=0,V451=0,V452=0,V450=0,V446=0,V488=0,V455=0,V456=0,V458=0,V459=0,V457=0,V453=0,V460=0,V461=0,V424=0,V425=0,V432=0,V433=0,V426=0,V427=0,V429=0,V430=0,V431=0,V428=0,V422=0,V436=0,V437=0,V444=0,V445=0,V438=0,V439=0,V441=0,V442=0,V443=0,V440=0,V434=0,N=0,Y=0,V586=0,V588=0,V496=0,V497=0,V498=0,V503=0,V504=0,V499=0,V500=0,V502=0,V494=0,V501=0,V495=0,V507=0,V508=0,V513=0,V514=0,V509=0,V510=0,V512=0,V511=0,V505=0,V517=0,V518=0,V523=0,V524=0,V519=0,V520=0,V522=0,V521=0,V515=0,V591=0,V526=0,V527=0,V528=0,V533=0,V534=0,V529=0,V530=0,V532=0,V531=0,V525=0,V537=0,V538=0,V543=0,V544=0,V539=0,V540=0,V542=0,V541=0,V535=0,V547=0,V548=0,V553=0,V554=0,V549=0,V550=0,V552=0,V551=0,V545=0,V594=0,V556=0,V557=0,V558=0,V563=0,V564=0,V559=0,V560=0,V562=0,V561=0,V555=0,V567=0,V568=0,V573=0,V574=0,V569=0,V570=0,V572=0,V571=0,V565=0,V577=0,V578=0,V580=0,V581=0,V579=0,V575=0,V493=0,V167=0,V160=0,V161=0,V163=0,V164=0,V162=0,V158=0,V188=0,V193=0,V194=0,V195=0,V191=0,V192=0,V196=0,V197=0,V190=0,V199=0,V202=0,V203=0,V204=0,V200=0,V201=0,V205=0,V206=0,V198=0,V208=0,V211=0,V212=0,V213=0,V209=0,V210=0,V214=0,V215=0,V207=0,V216=0,V219=0,V220=0,V221=0,V217=0,V218=0,V222=0,V223=0,V189=0,V187=0,V186=0,V631=0,V630=0,V633=0,V597=0,V634=0,V599=0,V601=0,V603=0,V605=0,V606=0,V607=0,V608=0,V609=0,V604=0,V602=0,V610=0,V611=0,V616=0,V617=0,V618=0,V614=0,V615=0,V613=0,V620=0,V623=0,V624=0,V625=0,V621=0,V622=0,V619=0,V627=0,V628=0,V626=0,V629=0,V612=0,V600=0;
int I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=11196;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2131&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,29,V56)*/
V56=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(241,87,V57)*/
V57=pile[WZ2]; 
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(454,jvj+7,jvj+8)*/
V2=0;
l6:if((x[jvj+8]<=0)) goto l8;
x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=1198; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1198,jvj+2,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=436; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(436,jvj+2,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+9,V47)*/
V47=pile[WZ2]; 
TT=V46;
M=V47;
pile[v[22]]=(-2580); pile[WZ1]=V2; 
(*f[64])( );     /*SRA2((-2580),V2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V3,40,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=(-7482); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-7482),V5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V8,61,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(0,V9,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V7,59,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=(-7482); pile[WZ1]=V11; 
(*f[64])( );     /*SRA2((-7482),V11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V12; 
(*f[64])( );     /*SRA2(V56,V12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=TT; pile[WZ1]=V13; 
(*f[99])( );     /*SPM0(TT,V13,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V10,59,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=(-7482); pile[WZ1]=V14; 
(*f[64])( );     /*SRA2((-7482),V14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V15; 
(*f[64])( );     /*SRA2(V57,V15,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V6,41,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V4,32,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(V16,108,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=M; pile[WZ1]=V19; 
(*f[64])( );     /*SRA2(M,V19,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V20,91,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=(-7482); pile[WZ1]=V21; 
(*f[64])( );     /*SRA2((-7482),V21,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V22,93,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V17,61,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V18; 
(*f[99])( );     /*SPM0(0,V18,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V1; 
(*f[289])( );     /*SPLN1(V1)*/
pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+3)*/
x[jvj+30]=x[jvj+3] ;z[jvj+30]=z[jvj+3];
l1:if((x[jvj+30]>0)) goto l2;
pile[v[22]]=750; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(750,jvj+2,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=481; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(481,jvj+2,jvj+5)*/
x[jvj+31]=x[jvj+5] ;z[jvj+31]=z[jvj+5];
l4:if((x[jvj+31]<=0)) goto l7;
x[jvj+6]=s[x[jvj+31]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+31];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V2; 
(*f[64])( );     /*SRA2((-2577),V2,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V33,40,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(V35,108,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=M; pile[WZ1]=V39; 
(*f[64])( );     /*SRA2(M,V39,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V40,91,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=V41; 
(*f[99])( );     /*SPM0(V53,V41,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V42,93,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V37; 
(*f[64])( );     /*SRA2(V56,V37,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=V38; 
(*f[99])( );     /*SPM0(V54,V38,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V36,41,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V34,32,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=250; 
(*f[2140])( );if(v[102]) goto l5;     /*QU0(V43,250,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; 
(*f[289])( );     /*SPLN1(V31)*/
l5:x[jvj+31]=t[x[jvj+31]];
goto l4;
l2:x[jvj+4]=s[x[jvj+30]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+30];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(V2,108,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=M; pile[WZ1]=V26; 
(*f[64])( );     /*SRA2(M,V26,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V27,91,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=M; pile[WZ1]=V28; 
(*f[64])( );     /*SRA2(M,V28,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=V30; 
(*f[99])( );     /*SPM0(V50,V30,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V29,93,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V25; 
(*f[64])( );     /*SRA2(V57,V25,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; 
(*f[289])( );     /*SPLN1(V23)*/
l3:x[jvj+30]=t[x[jvj+30]];
goto l1;
l7:x[jvj+8]=t[x[jvj+8]];
goto l6;
l8:pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,87,V100)*/
V100=pile[WZ2]; 
pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,27,V101)*/
V101=pile[WZ2]; 
pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,25,V102)*/
V102=pile[WZ2]; 
pile[WZ1]=326; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,326,V103)*/
V103=pile[WZ2]; 
pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,26,V104)*/
V104=pile[WZ2]; 
pile[WZ1]=394; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,394,V105)*/
V105=pile[WZ2]; 
pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,143,V106)*/
V106=pile[WZ2]; 
pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(241,693,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V60,40,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=V62; 
(*f[64])( );     /*SRA2(V100,V62,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=(-4983); pile[WZ1]=V68; 
(*f[64])( );     /*SRA2((-4983),V68,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=V66; 
(*f[64])( );     /*SRA2(V101,V66,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V67; 
(*f[64])( );     /*SRA2((-2491),V67,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V69,91,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=76; pile[WZ1]=V70; 
(*f[99])( );     /*SPM0(76,V70,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V71,93,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V106; pile[WZ1]=V64; 
(*f[64])( );     /*SRA2(V106,V64,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V65,40,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V72; 
(*f[64])( );     /*SRA2((-2491),V72,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V78,91,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=84; pile[WZ1]=V79; 
(*f[99])( );     /*SPM0(84,V79,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V80,93,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=V76; 
(*f[64])( );     /*SRA2(V102,V76,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V77; 
(*f[99])( );     /*SPM0(0,V77,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=V74; 
(*f[64])( );     /*SRA2(V105,V74,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=(-4983); pile[WZ1]=V75; 
(*f[64])( );     /*SRA2((-4983),V75,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V103; pile[WZ1]=V83; 
(*f[64])( );     /*SRA2(V103,V83,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V84; 
(*f[64])( );     /*SRA2((-2491),V84,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V85,91,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=84; pile[WZ1]=V86; 
(*f[99])( );     /*SPM0(84,V86,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V87,93,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V104; pile[WZ1]=V81; 
(*f[64])( );     /*SRA2(V104,V81,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V82; 
(*f[99])( );     /*SPM0(0,V82,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V73,41,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; 
(*f[38])( );     /*SPC0(V63,41,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V61,32,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V88; 
(*f[64])( );     /*SRA2((-843),V88,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=3997; pile[WZ1]=V89; 
(*f[64])( );     /*SRA2(3997,V89,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; 
(*f[1803])( );     /*SPLL0(V59,V90)*/
V90=pile[WZ1]; 
pile[v[22]]=V107; pile[WZ1]=V90; 
(*f[64])( );     /*SRA2(V107,V90,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V92,40,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V93,34,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=(-4994); pile[WZ1]=V97; 
(*f[64])( );     /*SRA2((-4994),V97,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=(-8963); pile[WZ1]=V99; 
(*f[64])( );     /*SRA2((-8963),V99,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V98,34,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V94,44,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=(-4983); pile[WZ1]=V95; 
(*f[64])( );     /*SRA2((-4983),V95,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=V96; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V96,41,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; 
(*f[1803])( );     /*SPLL0(V91,V58)*/
V58=pile[WZ1]; 
x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+20; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(498,jvj+20,jvj+25)*/
if(x[jvj+25]==26147||x[jvj+25]==26169) goto l44;
pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,693,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=454; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(454,jvj+20,jvj+26)*/
V159=0;
l42:if((x[jvj+26]<=0)) goto l44;
x[jvj+18]=s[x[jvj+26]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+26];
pile[v[22]]=436; pile[WZ1]=jvj+18; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(436,jvj+18,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(140,jvj+27,V167)*/
V167=pile[WZ2]; 
if((V167==(-8106))) goto l43;
pile[v[22]]=480; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(480,jvj+18,jvj+19)*/
x[jvj+32]=x[jvj+19] ;z[jvj+32]=z[jvj+19];
l15:if((x[jvj+32]>0)) goto l16;
pile[v[22]]=V184; pile[WZ1]=V159; 
(*f[64])( );     /*SRA2(V184,V159,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V160,40,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=V161; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V161,34,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=(-4993); pile[WZ1]=V163; 
(*f[64])( );     /*SRA2((-4993),V163,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V164,34,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=V162; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V162,41,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=V158; 
(*f[289])( );     /*SPLN1(V158)*/
l43:x[jvj+26]=t[x[jvj+26]];
goto l42;
l9:V110=((-4992));
l18:V109=V110;
pile[v[22]]=489; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(489,jvj+10,jvj+17)*/
if((x[jvj+17]!=0)) goto l10;
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+10,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=(-8092); pile[WZ1]=V159; 
(*f[64])( );     /*SRA2((-8092),V159,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V152,91,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=(-4983); pile[WZ1]=V154; 
(*f[64])( );     /*SRA2((-4983),V154,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V155,93,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=V153; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V153,91,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=V156; 
(*f[99])( );     /*SPM0(V182,V156,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=V157; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V157,93,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=V150; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V150,61,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=jvj+10; 
(*f[1981])( );if(v[102]) goto l12;     /*SPSS0(V151,jvj+10,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V149; 
(*f[1803])( );     /*SPLL0(V149,V148)*/
V148=pile[WZ1]; 
l12:pile[v[22]]=V184; pile[WZ1]=V159; 
(*f[64])( );     /*SRA2(V184,V159,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=V138; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V138,40,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=V139; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V139,34,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=V143; pile[WZ1]=jvj+10; 
(*f[2185])( );if(v[102]) goto l10;     /*SPSK0(V143,jvj+10,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V145,61,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=V146; 
(*f[64])( );     /*SRA2(V109,V146,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=V144; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V144,34,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V140,44,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=V141; pile[WZ1]=jvj+10; 
(*f[1981])( );if(v[102]) goto l10;     /*SPSS0(V141,jvj+10,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=V142; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V142,41,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=V137; 
(*f[1803])( );     /*SPLL0(V137,V136)*/
V136=pile[WZ1]; 
l10:pile[v[22]]=489; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(489,jvj+10,jvj+14)*/
if((x[jvj+14]<=0)) goto l17;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
V111=incon;
pile[v[22]]=158; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,jvj+15,jvj+16)*/
if((x[jvj+16]!=89)) goto l11;
pile[v[22]]=162; 
(*f[219])( );if(v[102]) goto l11;     /*FNDC2(162,jvj+15,V178)*/
V178=pile[WZ2]; 
V177=V178;
V111=V177;
l13:NT=V111;
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+10,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=(-8092); pile[WZ1]=V159; 
(*f[64])( );     /*SRA2((-8092),V159,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=V129; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V129,91,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=(-4983); pile[WZ1]=V131; 
(*f[64])( );     /*SRA2((-4983),V131,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V132,93,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V130; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V130,91,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V179; pile[WZ1]=V133; 
(*f[99])( );     /*SPM0(V179,V133,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V134,93,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=V127; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V127,61,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=NT; pile[WZ1]=V128; 
(*f[99])( );     /*SPM0(NT,V128,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=V126; 
(*f[1803])( );     /*SPLL0(V126,V125)*/
V125=pile[WZ1]; 
l14:pile[v[22]]=V184; pile[WZ1]=V159; 
(*f[64])( );     /*SRA2(V184,V159,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V115,40,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V116,34,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=V120; pile[WZ1]=jvj+10; 
(*f[2185])( );if(v[102]) goto l17;     /*SPSK0(V120,jvj+10,V122)*/
V122=pile[WZ2]; 
pile[v[22]]=V122; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V122,61,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=V123; 
(*f[64])( );     /*SRA2(V109,V123,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=V121; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V121,34,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V117,44,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=NT; pile[WZ1]=V118; 
(*f[99])( );     /*SPM0(NT,V118,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V119,41,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V114; 
(*f[1803])( );     /*SPLL0(V114,V113)*/
V113=pile[WZ1]; 
l17:x[jvj+32]=t[x[jvj+32]];
goto l15;
l11:pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+15,V175)*/
V175=pile[WZ2]; 
V111=V175;
goto l13;
l16:x[jvj+10]=s[x[jvj+32]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+32];
V110=incon;
pile[v[22]]=365; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(365,jvj+10,jvj+11)*/
if((x[jvj+11]<=0)) goto l9;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=158; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+12,jvj+13)*/
if((x[jvj+13]!=89)) goto l9;
V110=((-6857));
goto l18;
l20:x[jvj+21]=t[x[jvj+21]];
l19:if((x[jvj+21]<=0)) goto l47;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+22,V466)*/
V466=pile[WZ2]; 
if((V466!=(-625))) goto l20;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+22,N)*/
N=pile[WZ2]; 
K=1;
l33:if((K>N)) goto l47;
V224=incon;
pile[v[22]]=K; pile[WZ1]=(-598); 
(*f[1022])( );if(v[102]) goto l21;     /*VVL0(K,(-598),V225)*/
V225=pile[WZ2]; 
YY=V225;
V224=YY;
l35:Y=V224;
if((Y>=0)) goto l27;
pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(241,693,V468)*/
V468=pile[WZ2]; 
pile[v[22]]=V468; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V468,V185,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V228,40,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V229,34,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V237; 
(*f[64])( );     /*SRA2((-8976),V237,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=V238; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V238,34,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=V230; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V230,44,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V231; 
(*f[64])( );     /*SRA2((-8968),V231,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=V233; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V233,91,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=65; 
(*f[38])( );     /*SPC0(V234,65,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V236; 
(*f[99])( );     /*SPM0(K,V236,V235)*/
V235=pile[WZ2]; 
pile[v[22]]=V235; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V235,93,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V232,41,V226)*/
V226=pile[WZ2]; 
pile[v[22]]=V226; 
(*f[289])( );     /*SPLN1(V226)*/
pile[v[22]]=V468; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V468,V185,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V241,40,V242)*/
V242=pile[WZ2]; 
pile[v[22]]=V242; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V242,34,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V250; 
(*f[64])( );     /*SRA2((-8976),V250,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V251,34,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=V243; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V243,44,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V244; 
(*f[64])( );     /*SRA2((-8968),V244,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=V246; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V246,91,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=V247; pile[WZ1]=66; 
(*f[38])( );     /*SPC0(V247,66,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V249; 
(*f[99])( );     /*SPM0(K,V249,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=V248; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V248,93,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=V245; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V245,41,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=V239; 
(*f[289])( );     /*SPLN1(V239)*/
pile[v[22]]=V468; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V468,V185,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=V254; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V254,40,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=V255; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V255,34,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V263; 
(*f[64])( );     /*SRA2((-8976),V263,V264)*/
V264=pile[WZ2]; 
pile[v[22]]=V264; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V264,34,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V256,44,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V257; 
(*f[64])( );     /*SRA2((-8968),V257,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=V259; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V259,91,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=V260; pile[WZ1]=67; 
(*f[38])( );     /*SPC0(V260,67,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V262; 
(*f[99])( );     /*SPM0(K,V262,V261)*/
V261=pile[WZ2]; 
pile[v[22]]=V261; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V261,93,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=V258; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V258,41,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; 
(*f[289])( );     /*SPLN1(V252)*/
l22:pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(241,693,V471)*/
V471=pile[WZ2]; 
pile[v[22]]=V471; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V471,V185,V267)*/
V267=pile[WZ2]; 
pile[v[22]]=V267; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V267,40,V268)*/
V268=pile[WZ2]; 
pile[v[22]]=V268; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V268,34,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V276; 
(*f[64])( );     /*SRA2((-8976),V276,V277)*/
V277=pile[WZ2]; 
pile[v[22]]=V277; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V277,34,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=V269; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V269,44,V270)*/
V270=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V270; 
(*f[64])( );     /*SRA2((-8968),V270,V272)*/
V272=pile[WZ2]; 
pile[v[22]]=V272; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V272,91,V273)*/
V273=pile[WZ2]; 
pile[v[22]]=V273; pile[WZ1]=68; 
(*f[38])( );     /*SPC0(V273,68,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V275; 
(*f[99])( );     /*SPM0(K,V275,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V274; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V274,93,V271)*/
V271=pile[WZ2]; 
pile[v[22]]=V271; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V271,41,V265)*/
V265=pile[WZ2]; 
pile[v[22]]=V265; 
(*f[289])( );     /*SPLN1(V265)*/
pile[v[22]]=V471; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V471,V185,V280)*/
V280=pile[WZ2]; 
pile[v[22]]=V280; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V280,40,V281)*/
V281=pile[WZ2]; 
pile[v[22]]=V281; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V281,34,V289)*/
V289=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V289; 
(*f[64])( );     /*SRA2((-8976),V289,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=V290; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V290,34,V282)*/
V282=pile[WZ2]; 
pile[v[22]]=V282; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V282,44,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V283; 
(*f[64])( );     /*SRA2((-8968),V283,V285)*/
V285=pile[WZ2]; 
pile[v[22]]=V285; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V285,91,V286)*/
V286=pile[WZ2]; 
pile[v[22]]=V286; pile[WZ1]=69; 
(*f[38])( );     /*SPC0(V286,69,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V288; 
(*f[99])( );     /*SPM0(K,V288,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=V287; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V287,93,V284)*/
V284=pile[WZ2]; 
pile[v[22]]=V284; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V284,41,V278)*/
V278=pile[WZ2]; 
pile[v[22]]=V278; 
(*f[289])( );     /*SPLN1(V278)*/
pile[v[22]]=V471; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V471,V185,V293)*/
V293=pile[WZ2]; 
pile[v[22]]=V293; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V293,40,V294)*/
V294=pile[WZ2]; 
pile[v[22]]=V294; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V294,34,V302)*/
V302=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V302; 
(*f[64])( );     /*SRA2((-8976),V302,V303)*/
V303=pile[WZ2]; 
pile[v[22]]=V303; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V303,34,V295)*/
V295=pile[WZ2]; 
pile[v[22]]=V295; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V295,44,V296)*/
V296=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V296; 
(*f[64])( );     /*SRA2((-8968),V296,V298)*/
V298=pile[WZ2]; 
pile[v[22]]=V298; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V298,91,V299)*/
V299=pile[WZ2]; 
pile[v[22]]=V299; pile[WZ1]=70; 
(*f[38])( );     /*SPC0(V299,70,V301)*/
V301=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V301; 
(*f[99])( );     /*SPM0(K,V301,V300)*/
V300=pile[WZ2]; 
pile[v[22]]=V300; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V300,93,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=V297; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V297,41,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=V291; 
(*f[289])( );     /*SPLN1(V291)*/
l26:pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(241,693,V478)*/
V478=pile[WZ2]; 
pile[v[22]]=V478; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V478,V185,V306)*/
V306=pile[WZ2]; 
pile[v[22]]=V306; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V306,40,V307)*/
V307=pile[WZ2]; 
pile[v[22]]=V307; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V307,34,V315)*/
V315=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V315; 
(*f[64])( );     /*SRA2((-8976),V315,V316)*/
V316=pile[WZ2]; 
pile[v[22]]=V316; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V316,34,V308)*/
V308=pile[WZ2]; 
pile[v[22]]=V308; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V308,44,V309)*/
V309=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V309; 
(*f[64])( );     /*SRA2((-8968),V309,V311)*/
V311=pile[WZ2]; 
pile[v[22]]=V311; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V311,91,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=V312; pile[WZ1]=71; 
(*f[38])( );     /*SPC0(V312,71,V314)*/
V314=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V314; 
(*f[99])( );     /*SPM0(K,V314,V313)*/
V313=pile[WZ2]; 
pile[v[22]]=V313; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V313,93,V310)*/
V310=pile[WZ2]; 
pile[v[22]]=V310; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V310,41,V304)*/
V304=pile[WZ2]; 
pile[v[22]]=V304; 
(*f[289])( );     /*SPLN1(V304)*/
pile[v[22]]=V478; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V478,V185,V319)*/
V319=pile[WZ2]; 
pile[v[22]]=V319; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V319,40,V320)*/
V320=pile[WZ2]; 
pile[v[22]]=V320; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V320,34,V328)*/
V328=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V328; 
(*f[64])( );     /*SRA2((-8976),V328,V329)*/
V329=pile[WZ2]; 
pile[v[22]]=V329; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V329,34,V321)*/
V321=pile[WZ2]; 
pile[v[22]]=V321; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V321,44,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V322; 
(*f[64])( );     /*SRA2((-8968),V322,V324)*/
V324=pile[WZ2]; 
pile[v[22]]=V324; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V324,91,V325)*/
V325=pile[WZ2]; 
pile[v[22]]=V325; pile[WZ1]=72; 
(*f[38])( );     /*SPC0(V325,72,V327)*/
V327=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V327; 
(*f[99])( );     /*SPM0(K,V327,V326)*/
V326=pile[WZ2]; 
pile[v[22]]=V326; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V326,93,V323)*/
V323=pile[WZ2]; 
pile[v[22]]=V323; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V323,41,V317)*/
V317=pile[WZ2]; 
pile[v[22]]=V317; 
(*f[289])( );     /*SPLN1(V317)*/
if((K<N)) goto l23;
if((K==N)) goto l25;
l24:V476=K%4;
if((V476==0)) goto l25;
l34:K++;
goto l33;
l21:V224=(-1);
goto l35;
l23:V474=K%4;
if((V474==0)) goto l24;
pile[v[22]]=V478; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V478,V185,V332)*/
V332=pile[WZ2]; 
pile[v[22]]=V332; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V332,40,V333)*/
V333=pile[WZ2]; 
pile[v[22]]=V333; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V333,34,V335)*/
V335=pile[WZ2]; 
pile[v[22]]=V335; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V335,32,V336)*/
V336=pile[WZ2]; 
pile[v[22]]=V336; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V336,34,V334)*/
V334=pile[WZ2]; 
pile[v[22]]=V334; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V334,41,V330)*/
V330=pile[WZ2]; 
pile[v[22]]=V330; 
(*f[289])( );     /*SPLN1(V330)*/
goto l24;
l25:pile[v[22]]=V478; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V478,V185,V339)*/
V339=pile[WZ2]; 
pile[v[22]]=V339; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V339,40,V340)*/
V340=pile[WZ2]; 
pile[v[22]]=V340; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V340,34,V342)*/
V342=pile[WZ2]; 
pile[v[22]]=(-4993); pile[WZ1]=V342; 
(*f[64])( );     /*SRA2((-4993),V342,V343)*/
V343=pile[WZ2]; 
pile[v[22]]=V343; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V343,34,V341)*/
V341=pile[WZ2]; 
pile[v[22]]=V341; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V341,41,V337)*/
V337=pile[WZ2]; 
pile[v[22]]=V337; 
(*f[289])( );     /*SPLN1(V337)*/
goto l34;
l27:pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(241,693,V480)*/
V480=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=(-598); 
(*f[1022])( );if(v[102]) goto l28;     /*VVL0(K,(-598),V380)*/
V380=pile[WZ2]; 
pile[WZ1]=(-591); 
(*f[1022])( );if(v[102]) goto l28;     /*VVL0(K,(-591),V381)*/
V381=pile[WZ2]; 
pile[WZ1]=(-632); 
(*f[1022])( );if(v[102]) goto l28;     /*VVL0(K,(-632),V382)*/
V382=pile[WZ2]; 
pile[v[22]]=V480; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V480,V185,V346)*/
V346=pile[WZ2]; 
pile[v[22]]=V346; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V346,40,V347)*/
V347=pile[WZ2]; 
pile[v[22]]=V347; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V347,34,V354)*/
V354=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V354; 
(*f[64])( );     /*SRA2((-8976),V354,V355)*/
V355=pile[WZ2]; 
pile[v[22]]=V355; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V355,34,V348)*/
V348=pile[WZ2]; 
pile[v[22]]=V348; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V348,44,V349)*/
V349=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V349; 
(*f[64])( );     /*SRA2((-8968),V349,V351)*/
V351=pile[WZ2]; 
pile[v[22]]=V351; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V351,91,V352)*/
V352=pile[WZ2]; 
pile[v[22]]=V380; pile[WZ1]=V352; 
(*f[99])( );     /*SPM0(V380,V352,V353)*/
V353=pile[WZ2]; 
pile[v[22]]=V353; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V353,93,V350)*/
V350=pile[WZ2]; 
pile[v[22]]=V350; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V350,41,V344)*/
V344=pile[WZ2]; 
pile[v[22]]=V344; 
(*f[289])( );     /*SPLN1(V344)*/
pile[v[22]]=V480; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V480,V185,V358)*/
V358=pile[WZ2]; 
pile[v[22]]=V358; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V358,40,V359)*/
V359=pile[WZ2]; 
pile[v[22]]=V359; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V359,34,V366)*/
V366=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V366; 
(*f[64])( );     /*SRA2((-8976),V366,V367)*/
V367=pile[WZ2]; 
pile[v[22]]=V367; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V367,34,V360)*/
V360=pile[WZ2]; 
pile[v[22]]=V360; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V360,44,V361)*/
V361=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V361; 
(*f[64])( );     /*SRA2((-8968),V361,V363)*/
V363=pile[WZ2]; 
pile[v[22]]=V363; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V363,91,V364)*/
V364=pile[WZ2]; 
pile[v[22]]=V381; pile[WZ1]=V364; 
(*f[99])( );     /*SPM0(V381,V364,V365)*/
V365=pile[WZ2]; 
pile[v[22]]=V365; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V365,93,V362)*/
V362=pile[WZ2]; 
pile[v[22]]=V362; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V362,41,V356)*/
V356=pile[WZ2]; 
pile[v[22]]=V356; 
(*f[289])( );     /*SPLN1(V356)*/
pile[v[22]]=V480; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V480,V185,V370)*/
V370=pile[WZ2]; 
pile[v[22]]=V370; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V370,40,V371)*/
V371=pile[WZ2]; 
pile[v[22]]=V371; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V371,34,V378)*/
V378=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V378; 
(*f[64])( );     /*SRA2((-8976),V378,V379)*/
V379=pile[WZ2]; 
pile[v[22]]=V379; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V379,34,V372)*/
V372=pile[WZ2]; 
pile[v[22]]=V372; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V372,44,V373)*/
V373=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V373; 
(*f[64])( );     /*SRA2((-8968),V373,V375)*/
V375=pile[WZ2]; 
pile[v[22]]=V375; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V375,91,V376)*/
V376=pile[WZ2]; 
pile[v[22]]=V382; pile[WZ1]=V376; 
(*f[99])( );     /*SPM0(V382,V376,V377)*/
V377=pile[WZ2]; 
pile[v[22]]=V377; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V377,93,V374)*/
V374=pile[WZ2]; 
pile[v[22]]=V374; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V374,41,V368)*/
V368=pile[WZ2]; 
pile[v[22]]=V368; 
(*f[289])( );     /*SPLN1(V368)*/
l28:pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(241,693,V483)*/
V483=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=(-656); 
(*f[1022])( );if(v[102]) goto l32;     /*VVL0(K,(-656),V419)*/
V419=pile[WZ2]; 
pile[WZ1]=(-697); 
(*f[1022])( );if(v[102]) goto l32;     /*VVL0(K,(-697),V420)*/
V420=pile[WZ2]; 
pile[WZ1]=(-1544); 
(*f[1022])( );if(v[102]) goto l32;     /*VVL0(K,(-1544),V421)*/
V421=pile[WZ2]; 
pile[v[22]]=V483; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V483,V185,V385)*/
V385=pile[WZ2]; 
pile[v[22]]=V385; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V385,40,V386)*/
V386=pile[WZ2]; 
pile[v[22]]=V386; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V386,34,V393)*/
V393=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V393; 
(*f[64])( );     /*SRA2((-8976),V393,V394)*/
V394=pile[WZ2]; 
pile[v[22]]=V394; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V394,34,V387)*/
V387=pile[WZ2]; 
pile[v[22]]=V387; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V387,44,V388)*/
V388=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V388; 
(*f[64])( );     /*SRA2((-8968),V388,V390)*/
V390=pile[WZ2]; 
pile[v[22]]=V390; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V390,91,V391)*/
V391=pile[WZ2]; 
pile[v[22]]=V419; pile[WZ1]=V391; 
(*f[99])( );     /*SPM0(V419,V391,V392)*/
V392=pile[WZ2]; 
pile[v[22]]=V392; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V392,93,V389)*/
V389=pile[WZ2]; 
pile[v[22]]=V389; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V389,41,V383)*/
V383=pile[WZ2]; 
pile[v[22]]=V383; 
(*f[289])( );     /*SPLN1(V383)*/
pile[v[22]]=V483; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V483,V185,V397)*/
V397=pile[WZ2]; 
pile[v[22]]=V397; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V397,40,V398)*/
V398=pile[WZ2]; 
pile[v[22]]=V398; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V398,34,V405)*/
V405=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V405; 
(*f[64])( );     /*SRA2((-8976),V405,V406)*/
V406=pile[WZ2]; 
pile[v[22]]=V406; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V406,34,V399)*/
V399=pile[WZ2]; 
pile[v[22]]=V399; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V399,44,V400)*/
V400=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V400; 
(*f[64])( );     /*SRA2((-8968),V400,V402)*/
V402=pile[WZ2]; 
pile[v[22]]=V402; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V402,91,V403)*/
V403=pile[WZ2]; 
pile[v[22]]=V420; pile[WZ1]=V403; 
(*f[99])( );     /*SPM0(V420,V403,V404)*/
V404=pile[WZ2]; 
pile[v[22]]=V404; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V404,93,V401)*/
V401=pile[WZ2]; 
pile[v[22]]=V401; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V401,41,V395)*/
V395=pile[WZ2]; 
pile[v[22]]=V395; 
(*f[289])( );     /*SPLN1(V395)*/
pile[v[22]]=V483; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V483,V185,V409)*/
V409=pile[WZ2]; 
pile[v[22]]=V409; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V409,40,V410)*/
V410=pile[WZ2]; 
pile[v[22]]=V410; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V410,34,V417)*/
V417=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V417; 
(*f[64])( );     /*SRA2((-8976),V417,V418)*/
V418=pile[WZ2]; 
pile[v[22]]=V418; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V418,34,V411)*/
V411=pile[WZ2]; 
pile[v[22]]=V411; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V411,44,V412)*/
V412=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V412; 
(*f[64])( );     /*SRA2((-8968),V412,V414)*/
V414=pile[WZ2]; 
pile[v[22]]=V414; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V414,91,V415)*/
V415=pile[WZ2]; 
pile[v[22]]=V421; pile[WZ1]=V415; 
(*f[99])( );     /*SPM0(V421,V415,V416)*/
V416=pile[WZ2]; 
pile[v[22]]=V416; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V416,93,V413)*/
V413=pile[WZ2]; 
pile[v[22]]=V413; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V413,41,V407)*/
V407=pile[WZ2]; 
pile[v[22]]=V407; 
(*f[289])( );     /*SPLN1(V407)*/
l32:pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(241,693,V490)*/
V490=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=(-2041); 
(*f[1022])( );if(v[102]) goto l34;     /*VVL0(K,(-2041),V460)*/
V460=pile[WZ2]; 
pile[WZ1]=(-630); 
(*f[1022])( );if(v[102]) goto l34;     /*VVL0(K,(-630),V461)*/
V461=pile[WZ2]; 
pile[v[22]]=V490; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V490,V185,V424)*/
V424=pile[WZ2]; 
pile[v[22]]=V424; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V424,40,V425)*/
V425=pile[WZ2]; 
pile[v[22]]=V425; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V425,34,V432)*/
V432=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V432; 
(*f[64])( );     /*SRA2((-8976),V432,V433)*/
V433=pile[WZ2]; 
pile[v[22]]=V433; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V433,34,V426)*/
V426=pile[WZ2]; 
pile[v[22]]=V426; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V426,44,V427)*/
V427=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V427; 
(*f[64])( );     /*SRA2((-8968),V427,V429)*/
V429=pile[WZ2]; 
pile[v[22]]=V429; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V429,91,V430)*/
V430=pile[WZ2]; 
pile[v[22]]=V460; pile[WZ1]=V430; 
(*f[99])( );     /*SPM0(V460,V430,V431)*/
V431=pile[WZ2]; 
pile[v[22]]=V431; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V431,93,V428)*/
V428=pile[WZ2]; 
pile[v[22]]=V428; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V428,41,V422)*/
V422=pile[WZ2]; 
pile[v[22]]=V422; 
(*f[289])( );     /*SPLN1(V422)*/
pile[v[22]]=V490; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V490,V185,V436)*/
V436=pile[WZ2]; 
pile[v[22]]=V436; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V436,40,V437)*/
V437=pile[WZ2]; 
pile[v[22]]=V437; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V437,34,V444)*/
V444=pile[WZ2]; 
pile[v[22]]=(-8976); pile[WZ1]=V444; 
(*f[64])( );     /*SRA2((-8976),V444,V445)*/
V445=pile[WZ2]; 
pile[v[22]]=V445; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V445,34,V438)*/
V438=pile[WZ2]; 
pile[v[22]]=V438; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V438,44,V439)*/
V439=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V439; 
(*f[64])( );     /*SRA2((-8968),V439,V441)*/
V441=pile[WZ2]; 
pile[v[22]]=V441; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V441,91,V442)*/
V442=pile[WZ2]; 
pile[v[22]]=V461; pile[WZ1]=V442; 
(*f[99])( );     /*SPM0(V461,V442,V443)*/
V443=pile[WZ2]; 
pile[v[22]]=V443; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V443,93,V440)*/
V440=pile[WZ2]; 
pile[v[22]]=V440; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V440,41,V434)*/
V434=pile[WZ2]; 
pile[v[22]]=V434; 
(*f[289])( );     /*SPLN1(V434)*/
if((K<N)) goto l29;
if((K==N)) goto l31;
l30:V488=K%4;
if((V488==0)) goto l31;
goto l34;
l29:V486=K%4;
if((V486==0)) goto l30;
pile[v[22]]=V490; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V490,V185,V448)*/
V448=pile[WZ2]; 
pile[v[22]]=V448; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V448,40,V449)*/
V449=pile[WZ2]; 
pile[v[22]]=V449; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V449,34,V451)*/
V451=pile[WZ2]; 
pile[v[22]]=V451; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V451,32,V452)*/
V452=pile[WZ2]; 
pile[v[22]]=V452; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V452,34,V450)*/
V450=pile[WZ2]; 
pile[v[22]]=V450; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V450,41,V446)*/
V446=pile[WZ2]; 
pile[v[22]]=V446; 
(*f[289])( );     /*SPLN1(V446)*/
goto l30;
l31:pile[v[22]]=V490; pile[WZ1]=V185; 
(*f[64])( );     /*SRA2(V490,V185,V455)*/
V455=pile[WZ2]; 
pile[v[22]]=V455; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V455,40,V456)*/
V456=pile[WZ2]; 
pile[v[22]]=V456; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V456,34,V458)*/
V458=pile[WZ2]; 
pile[v[22]]=(-4993); pile[WZ1]=V458; 
(*f[64])( );     /*SRA2((-4993),V458,V459)*/
V459=pile[WZ2]; 
pile[v[22]]=V459; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V459,34,V457)*/
V457=pile[WZ2]; 
pile[v[22]]=V457; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V457,41,V453)*/
V453=pile[WZ2]; 
pile[v[22]]=V453; 
(*f[289])( );     /*SPLN1(V453)*/
goto l34;
l37:x[jvj+23]=t[x[jvj+23]];
l36:if((x[jvj+23]<=0)) goto l45;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+24,V586)*/
V586=pile[WZ2]; 
if((V586!=(-625))) goto l37;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(130,jvj+24,V493)*/
V493=pile[WZ2]; 
V494=1;
l40:if((V494>V493)) goto l45;
pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(241,693,V588)*/
V588=pile[WZ2]; 
V496=0;
pile[v[22]]=V588; pile[WZ1]=V496; 
(*f[64])( );     /*SRA2(V588,V496,V497)*/
V497=pile[WZ2]; 
pile[v[22]]=V497; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V497,40,V498)*/
V498=pile[WZ2]; 
pile[v[22]]=V498; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V498,34,V503)*/
V503=pile[WZ2]; 
pile[v[22]]=(-8986); pile[WZ1]=V503; 
(*f[64])( );     /*SRA2((-8986),V503,V504)*/
V504=pile[WZ2]; 
pile[v[22]]=V504; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V504,34,V499)*/
V499=pile[WZ2]; 
pile[v[22]]=V499; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V499,44,V500)*/
V500=pile[WZ2]; 
pile[v[22]]=V500; pile[WZ1]=65; 
(*f[38])( );     /*SPC0(V500,65,V502)*/
V502=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V502; 
(*f[99])( );     /*SPM0(V494,V502,V501)*/
V501=pile[WZ2]; 
pile[v[22]]=V501; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V501,41,V495)*/
V495=pile[WZ2]; 
pile[v[22]]=V495; 
(*f[289])( );     /*SPLN1(V495)*/
pile[v[22]]=V588; pile[WZ1]=V496; 
(*f[64])( );     /*SRA2(V588,V496,V507)*/
V507=pile[WZ2]; 
pile[v[22]]=V507; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V507,40,V508)*/
V508=pile[WZ2]; 
pile[v[22]]=V508; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V508,34,V513)*/
V513=pile[WZ2]; 
pile[v[22]]=(-8987); pile[WZ1]=V513; 
(*f[64])( );     /*SRA2((-8987),V513,V514)*/
V514=pile[WZ2]; 
pile[v[22]]=V514; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V514,34,V509)*/
V509=pile[WZ2]; 
pile[v[22]]=V509; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V509,44,V510)*/
V510=pile[WZ2]; 
pile[v[22]]=V510; pile[WZ1]=66; 
(*f[38])( );     /*SPC0(V510,66,V512)*/
V512=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V512; 
(*f[99])( );     /*SPM0(V494,V512,V511)*/
V511=pile[WZ2]; 
pile[v[22]]=V511; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V511,41,V505)*/
V505=pile[WZ2]; 
pile[v[22]]=V505; 
(*f[289])( );     /*SPLN1(V505)*/
pile[v[22]]=V588; pile[WZ1]=V496; 
(*f[64])( );     /*SRA2(V588,V496,V517)*/
V517=pile[WZ2]; 
pile[v[22]]=V517; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V517,40,V518)*/
V518=pile[WZ2]; 
pile[v[22]]=V518; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V518,34,V523)*/
V523=pile[WZ2]; 
pile[v[22]]=(-8987); pile[WZ1]=V523; 
(*f[64])( );     /*SRA2((-8987),V523,V524)*/
V524=pile[WZ2]; 
pile[v[22]]=V524; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V524,34,V519)*/
V519=pile[WZ2]; 
pile[v[22]]=V519; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V519,44,V520)*/
V520=pile[WZ2]; 
pile[v[22]]=V520; pile[WZ1]=67; 
(*f[38])( );     /*SPC0(V520,67,V522)*/
V522=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V522; 
(*f[99])( );     /*SPM0(V494,V522,V521)*/
V521=pile[WZ2]; 
pile[v[22]]=V521; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V521,41,V515)*/
V515=pile[WZ2]; 
pile[v[22]]=V515; 
(*f[289])( );     /*SPLN1(V515)*/
l38:pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(241,693,V591)*/
V591=pile[WZ2]; 
V526=0;
pile[v[22]]=V591; pile[WZ1]=V526; 
(*f[64])( );     /*SRA2(V591,V526,V527)*/
V527=pile[WZ2]; 
pile[v[22]]=V527; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V527,40,V528)*/
V528=pile[WZ2]; 
pile[v[22]]=V528; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V528,34,V533)*/
V533=pile[WZ2]; 
pile[v[22]]=(-8987); pile[WZ1]=V533; 
(*f[64])( );     /*SRA2((-8987),V533,V534)*/
V534=pile[WZ2]; 
pile[v[22]]=V534; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V534,34,V529)*/
V529=pile[WZ2]; 
pile[v[22]]=V529; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V529,44,V530)*/
V530=pile[WZ2]; 
pile[v[22]]=V530; pile[WZ1]=68; 
(*f[38])( );     /*SPC0(V530,68,V532)*/
V532=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V532; 
(*f[99])( );     /*SPM0(V494,V532,V531)*/
V531=pile[WZ2]; 
pile[v[22]]=V531; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V531,41,V525)*/
V525=pile[WZ2]; 
pile[v[22]]=V525; 
(*f[289])( );     /*SPLN1(V525)*/
pile[v[22]]=V591; pile[WZ1]=V526; 
(*f[64])( );     /*SRA2(V591,V526,V537)*/
V537=pile[WZ2]; 
pile[v[22]]=V537; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V537,40,V538)*/
V538=pile[WZ2]; 
pile[v[22]]=V538; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V538,34,V543)*/
V543=pile[WZ2]; 
pile[v[22]]=(-8987); pile[WZ1]=V543; 
(*f[64])( );     /*SRA2((-8987),V543,V544)*/
V544=pile[WZ2]; 
pile[v[22]]=V544; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V544,34,V539)*/
V539=pile[WZ2]; 
pile[v[22]]=V539; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V539,44,V540)*/
V540=pile[WZ2]; 
pile[v[22]]=V540; pile[WZ1]=69; 
(*f[38])( );     /*SPC0(V540,69,V542)*/
V542=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V542; 
(*f[99])( );     /*SPM0(V494,V542,V541)*/
V541=pile[WZ2]; 
pile[v[22]]=V541; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V541,41,V535)*/
V535=pile[WZ2]; 
pile[v[22]]=V535; 
(*f[289])( );     /*SPLN1(V535)*/
pile[v[22]]=V591; pile[WZ1]=V526; 
(*f[64])( );     /*SRA2(V591,V526,V547)*/
V547=pile[WZ2]; 
pile[v[22]]=V547; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V547,40,V548)*/
V548=pile[WZ2]; 
pile[v[22]]=V548; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V548,34,V553)*/
V553=pile[WZ2]; 
pile[v[22]]=(-8987); pile[WZ1]=V553; 
(*f[64])( );     /*SRA2((-8987),V553,V554)*/
V554=pile[WZ2]; 
pile[v[22]]=V554; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V554,34,V549)*/
V549=pile[WZ2]; 
pile[v[22]]=V549; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V549,44,V550)*/
V550=pile[WZ2]; 
pile[v[22]]=V550; pile[WZ1]=70; 
(*f[38])( );     /*SPC0(V550,70,V552)*/
V552=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V552; 
(*f[99])( );     /*SPM0(V494,V552,V551)*/
V551=pile[WZ2]; 
pile[v[22]]=V551; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V551,41,V545)*/
V545=pile[WZ2]; 
pile[v[22]]=V545; 
(*f[289])( );     /*SPLN1(V545)*/
l39:pile[v[22]]=241; pile[WZ1]=693; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(241,693,V594)*/
V594=pile[WZ2]; 
V556=0;
pile[v[22]]=V594; pile[WZ1]=V556; 
(*f[64])( );     /*SRA2(V594,V556,V557)*/
V557=pile[WZ2]; 
pile[v[22]]=V557; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V557,40,V558)*/
V558=pile[WZ2]; 
pile[v[22]]=V558; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V558,34,V563)*/
V563=pile[WZ2]; 
pile[v[22]]=(-8987); pile[WZ1]=V563; 
(*f[64])( );     /*SRA2((-8987),V563,V564)*/
V564=pile[WZ2]; 
pile[v[22]]=V564; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V564,34,V559)*/
V559=pile[WZ2]; 
pile[v[22]]=V559; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V559,44,V560)*/
V560=pile[WZ2]; 
pile[v[22]]=V560; pile[WZ1]=71; 
(*f[38])( );     /*SPC0(V560,71,V562)*/
V562=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V562; 
(*f[99])( );     /*SPM0(V494,V562,V561)*/
V561=pile[WZ2]; 
pile[v[22]]=V561; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V561,41,V555)*/
V555=pile[WZ2]; 
pile[v[22]]=V555; 
(*f[289])( );     /*SPLN1(V555)*/
pile[v[22]]=V594; pile[WZ1]=V556; 
(*f[64])( );     /*SRA2(V594,V556,V567)*/
V567=pile[WZ2]; 
pile[v[22]]=V567; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V567,40,V568)*/
V568=pile[WZ2]; 
pile[v[22]]=V568; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V568,34,V573)*/
V573=pile[WZ2]; 
pile[v[22]]=(-8988); pile[WZ1]=V573; 
(*f[64])( );     /*SRA2((-8988),V573,V574)*/
V574=pile[WZ2]; 
pile[v[22]]=V574; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V574,34,V569)*/
V569=pile[WZ2]; 
pile[v[22]]=V569; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V569,44,V570)*/
V570=pile[WZ2]; 
pile[v[22]]=V570; pile[WZ1]=72; 
(*f[38])( );     /*SPC0(V570,72,V572)*/
V572=pile[WZ2]; 
pile[v[22]]=V494; pile[WZ1]=V572; 
(*f[99])( );     /*SPM0(V494,V572,V571)*/
V571=pile[WZ2]; 
pile[v[22]]=V571; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V571,41,V565)*/
V565=pile[WZ2]; 
pile[v[22]]=V565; 
(*f[289])( );     /*SPLN1(V565)*/
pile[v[22]]=V594; pile[WZ1]=V556; 
(*f[64])( );     /*SRA2(V594,V556,V577)*/
V577=pile[WZ2]; 
pile[v[22]]=V577; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V577,40,V578)*/
V578=pile[WZ2]; 
pile[v[22]]=V578; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V578,34,V580)*/
V580=pile[WZ2]; 
pile[v[22]]=(-4993); pile[WZ1]=V580; 
(*f[64])( );     /*SRA2((-4993),V580,V581)*/
V581=pile[WZ2]; 
pile[v[22]]=V581; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V581,34,V579)*/
V579=pile[WZ2]; 
pile[v[22]]=V579; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V579,41,V575)*/
V575=pile[WZ2]; 
pile[v[22]]=V575; 
(*f[289])( );     /*SPLN1(V575)*/
l41:V494++;
goto l40;
l44:if((v[192]<=0)) goto l45;
if(x[jvj+25]!=26147&&x[jvj+25]!=26169) goto l45;
pile[v[22]]=128; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(128,jvj+20,jvj+23)*/
goto l36;
l45:if((v[192]!=0)) goto l47;
if(x[jvj+25]!=26147&&x[jvj+25]!=26169) goto l47;
V185=0;
pile[v[22]]=(-2593); pile[WZ1]=V185; 
(*f[64])( );     /*SRA2((-2593),V185,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V188; 
(*f[64])( );     /*SRA2((-8968),V188,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V193,91,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V194; 
(*f[99])( );     /*SPM0(0,V194,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=V195; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V195,93,V191)*/
V191=pile[WZ2]; 
pile[v[22]]=V191; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V191,61,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V192,39,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=V196; pile[WZ1]=65; 
(*f[38])( );     /*SPC0(V196,65,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V197,39,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V190,59,V199)*/
V199=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V199; 
(*f[64])( );     /*SRA2((-8968),V199,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V202,91,V203)*/
V203=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V203; 
(*f[99])( );     /*SPM0(1,V203,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=V204; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V204,93,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=V200; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V200,61,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=V201; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V201,39,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=V205; pile[WZ1]=67; 
(*f[38])( );     /*SPC0(V205,67,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V206,39,V198)*/
V198=pile[WZ2]; 
pile[v[22]]=V198; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V198,59,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V208; 
(*f[64])( );     /*SRA2((-8968),V208,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V211,91,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V212; 
(*f[99])( );     /*SPM0(2,V212,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V213,93,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=V209; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V209,61,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=V210; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V210,39,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=71; 
(*f[38])( );     /*SPC0(V214,71,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=V215; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V215,39,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V207,59,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V216; 
(*f[64])( );     /*SRA2((-8968),V216,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V219,91,V220)*/
V220=pile[WZ2]; 
pile[v[22]]=3; pile[WZ1]=V220; 
(*f[99])( );     /*SPM0(3,V220,V221)*/
V221=pile[WZ2]; 
pile[v[22]]=V221; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V221,93,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V217,61,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=V218; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V218,39,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=V222; pile[WZ1]=84; 
(*f[38])( );     /*SPC0(V222,84,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=V223; pile[WZ1]=39; 
(*f[38])( );     /*SPC0(V223,39,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=(-2554); pile[WZ1]=V189; 
(*f[64])( );     /*SRA2((-2554),V189,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; 
(*f[656])( );     /*SPLN2(V187,V186)*/
V186=pile[WZ1]; 
pile[v[22]]=128; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(128,jvj+20,jvj+21)*/
goto l19;
l46:V630=3999;
l48:V597=0;
V634=V630;
pile[v[22]]=3997; pile[WZ1]=193; pile[WZ2]=jvj+29; 
(*f[329])( );     /*TRI13(3997,193,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=V597; 
(*f[1962])( );     /*SPB0(jvj+29,V597,V599)*/
V599=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V599; 
(*f[64])( );     /*SRA2((-2577),V599,V601)*/
V601=pile[WZ2]; 
pile[v[22]]=V601; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V601,40,V603)*/
V603=pile[WZ2]; 
pile[v[22]]=(-4983); pile[WZ1]=V603; 
(*f[64])( );     /*SRA2((-4983),V603,V605)*/
V605=pile[WZ2]; 
pile[v[22]]=V633; pile[WZ1]=V605; 
(*f[64])( );     /*SRA2(V633,V605,V606)*/
V606=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V606; 
(*f[64])( );     /*SRA2((-2491),V606,V607)*/
V607=pile[WZ2]; 
pile[v[22]]=V607; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V607,91,V608)*/
V608=pile[WZ2]; 
pile[v[22]]=70; pile[WZ1]=V608; 
(*f[99])( );     /*SPM0(70,V608,V609)*/
V609=pile[WZ2]; 
pile[v[22]]=V609; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V609,93,V604)*/
V604=pile[WZ2]; 
pile[v[22]]=V604; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V604,41,V602)*/
V602=pile[WZ2]; 
pile[v[22]]=V602; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V602,32,V610)*/
V610=pile[WZ2]; 
pile[v[22]]=V610; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V610,123,V611)*/
V611=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V611; 
(*f[64])( );     /*SRA2((-2491),V611,V616)*/
V616=pile[WZ2]; 
pile[v[22]]=V616; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V616,91,V617)*/
V617=pile[WZ2]; 
pile[v[22]]=71; pile[WZ1]=V617; 
(*f[99])( );     /*SPM0(71,V617,V618)*/
V618=pile[WZ2]; 
pile[v[22]]=V618; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V618,93,V614)*/
V614=pile[WZ2]; 
pile[v[22]]=V614; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V614,61,V615)*/
V615=pile[WZ2]; 
pile[v[22]]=(-1); pile[WZ1]=V615; 
(*f[99])( );     /*SPM0((-1),V615,V613)*/
V613=pile[WZ2]; 
pile[v[22]]=V613; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V613,59,V620)*/
V620=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V620; 
(*f[64])( );     /*SRA2((-2491),V620,V623)*/
V623=pile[WZ2]; 
pile[v[22]]=V623; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V623,91,V624)*/
V624=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=V624; 
(*f[99])( );     /*SPM0(145,V624,V625)*/
V625=pile[WZ2]; 
pile[v[22]]=V625; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V625,93,V621)*/
V621=pile[WZ2]; 
pile[v[22]]=V621; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V621,61,V622)*/
V622=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V622; 
(*f[99])( );     /*SPM0(1,V622,V619)*/
V619=pile[WZ2]; 
pile[v[22]]=V619; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V619,59,V627)*/
V627=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V627; 
(*f[64])( );     /*SRA2((-843),V627,V628)*/
V628=pile[WZ2]; 
pile[v[22]]=V634; pile[WZ1]=V628; 
(*f[64])( );     /*SRA2(V634,V628,V626)*/
V626=pile[WZ2]; 
pile[v[22]]=V626; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V626,59,V629)*/
V629=pile[WZ2]; 
pile[v[22]]=V629; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V629,32,V612)*/
V612=pile[WZ2]; 
pile[v[22]]=V612; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V612,125,V600)*/
V600=pile[WZ2]; 
pile[v[22]]=V600; 
(*f[656])( );     /*SPLN2(V600,J)*/
J=pile[WZ1]; 
l50:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; v[102]=0;return;
l47:pile[v[22]]=241; pile[WZ1]=28; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(241,28,V633)*/
V633=pile[WZ2]; 
V630=incon;
x[jvj+28]=vo[14];z[jvj+28]=vz[14];
pile[v[22]]=405; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(405,jvj+28,V631)*/
V631=pile[WZ2]; 
if((V631!=0)) goto l46;
V630=3996;
goto l48;
l49:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
