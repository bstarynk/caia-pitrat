#include "dx.h"
void SPOR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V483=0,V589=0,V628=0,V629=0,V630=0,V631=0,V591=0,V595=0,V596=0,V597=0,V593=0,V594=0,V598=0,V599=0,V603=0,V604=0,V605=0,V600=0,V601=0,V602=0,V592=0,V606=0,V607=0,V609=0,V613=0,V615=0,V616=0,V617=0,V618=0,V614=0,V611=0,V612=0,V610=0,V608=0,V619=0,V620=0,V621=0,V622=0,V623=0,V624=0,V590=0,V542=0,V674=0,V668=0,V669=0,V670=0,V540=0,V534=0,V532=0,V533=0,V535=0,V536=0,V747=0,V739=0,V740=0,V741=0,V742=0,V743=0,V513=0,V507=0,V508=0,V509=0,V706=0,V710=0,V711=0,V712=0,V713=0,V681=0,V683=0,V687=0,V689=0,V690=0,V691=0,V692=0,V698=0,V699=0,V693=0,V694=0,V696=0,V697=0,V695=0,V688=0,V685=0,V686=0,V684=0,V682=0,V700=0,V701=0,V702=0,V854=0,V828=0,V829=0,V830=0,V831=0,V833=0,V834=0,V836=0,V837=0,V838=0,V835=0,V832=0,V827=0,V839=0,V840=0,V841=0,V842=0,V843=0,V845=0,V846=0,V848=0,V849=0,V850=0,V847=0,V844=0,V390=0,V389=0,V388=0,V372=0,V373=0,V374=0,V375=0,V377=0,V376=0,V159=0,V153=0,V154=0,V155=0,V447=0,V438=0,V439=0,V440=0,V210=0,V202=0,V203=0,V204=0,V200=0,V201=0,V915=0,V916=0,V898=0,V899=0,V900=0,V901=0,V902=0,V903=0,V904=0,V905=0,V907=0,V908=0,V909=0,V906=0,V18=0,V4=0,V6=0,V8=0,V9=0,V10=0,V7=0,V5=0,V11=0,V12=0,V2=0,V3=0,V420=0,V409=0,V411=0,V412=0,V410=0,V413=0,V414=0,V407=0,V408=0,V893=0,V882=0,V884=0,V885=0,V883=0,V886=0,V887=0,V880=0,V881=0,V359=0,V360=0,V362=0,V363=0,V364=0,V365=0,V366=0,V367=0,V368=0,V270=0,V272=0,V274=0,V275=0,V273=0,V271=0,V276=0,V279=0,V280=0,V281=0,V277=0,V278=0,V269=0,V283=0,V284=0,V286=0,V290=0,V291=0,V288=0,V289=0,V292=0,V296=0,V297=0,V294=0,V295=0,V300=0,V301=0,V302=0,V298=0,V299=0,V293=0,V287=0,V285=0,V303=0,V304=0,V309=0,V310=0,V312=0,V313=0,V314=0,V315=0,V311=0,V307=0,V308=0,V306=0,V317=0,V320=0,V321=0,V323=0,V324=0,V325=0,V322=0,V318=0,V319=0,V316=0,V327=0,V330=0,V331=0,V333=0,V334=0,V335=0,V332=0,V328=0,V329=0,V336=0,V337=0,V338=0,V326=0,V339=0,V342=0,V343=0,V345=0,V346=0,V347=0,V344=0,V340=0,V341=0,V305=0,V282=0,V348=0,V351=0,V352=0,V353=0,V349=0,V350=0,V505=0,V496=0,V497=0,V499=0,V500=0,V501=0,V498=0,V666=0,V657=0,V658=0,V660=0,V661=0,V662=0,V659=0,V725=0,V719=0,V720=0,V721=0,V717=0,V718=0,V216=0,V217=0,V218=0,V214=0,V215=0,V650=0,V654=0,V635=0,V636=0,V644=0,V645=0,V646=0,V637=0,V638=0,V642=0,V643=0,V639=0,V640=0,V641=0,V530=0,V518=0,V519=0,V520=0,V516=0,V517=0,V521=0,V522=0,V524=0,V525=0,V526=0,V523=0,V583=0,V584=0,V585=0,V586=0,V587=0,V551=0,V552=0,V553=0,V549=0,V550=0,V554=0,V555=0,V556=0,V557=0,V559=0,V560=0,V558=0,V548=0,V561=0,V562=0,V564=0,V568=0,V570=0,V571=0,V572=0,V573=0,V569=0,V566=0,V567=0,V565=0,V563=0,V574=0,V575=0,V576=0,V577=0,V578=0,V579=0,V732=0,V733=0,V734=0,V130=0,V131=0,V132=0,V128=0,V129=0,V147=0,V141=0,V142=0,V143=0,V139=0,V140=0,V426=0,V428=0,V429=0,V427=0,V430=0,V431=0,V424=0,V425=0,V395=0,V396=0,V394=0,V397=0,V398=0,V399=0,V766=0,V767=0,V750=0,V751=0,V757=0,V759=0,V760=0,V758=0,V753=0,V754=0,V755=0,V756=0,V752=0,V818=0,V819=0,V820=0,V823=0,V824=0,V825=0,V771=0,V772=0,V777=0,V778=0,V779=0,V775=0,V776=0,V773=0,V774=0,V780=0,V784=0,V785=0,V786=0,V782=0,V783=0,V781=0,V770=0,V788=0,V789=0,V790=0,V791=0,V792=0,V787=0,V793=0,V794=0,V795=0,V801=0,V803=0,V804=0,V802=0,V797=0,V798=0,V799=0,V800=0,V809=0,V811=0,V812=0,V810=0,V805=0,V806=0,V807=0,V808=0,V796=0,KK=0,V491=0,V492=0,V493=0,V451=0,V453=0,V457=0,V461=0,V462=0,V463=0,V459=0,V460=0,V464=0,V465=0,V471=0,V472=0,V473=0,V466=0,V467=0,V469=0,V470=0,V468=0,V458=0,V455=0,V456=0,V454=0,V452=0,V474=0,V475=0,V476=0,V450=0,V477=0,V480=0,V481=0,V482=0,V478=0,V479=0,V871=0,V862=0,V864=0,V865=0,V863=0,V866=0,V867=0,V860=0,V861=0,V113=0,V114=0,V115=0,V111=0,V112=0,V110=0,V116=0,V119=0,V120=0,V121=0,V117=0,V118=0,V241=0,V225=0,V227=0,V229=0,V230=0,V228=0,V226=0,V231=0,V232=0,V233=0,V262=0,V263=0,V250=0,V251=0,V252=0,V248=0,V249=0,V247=0,V253=0,V256=0,V257=0,V258=0,V254=0,V255=0,V942=0,V943=0,V944=0,V921=0,V922=0,V935=0,V936=0,V937=0,V938=0,V923=0,V924=0,V925=0,V926=0,V933=0,V934=0,V927=0,V928=0,V930=0,V931=0,V932=0,V929=0,V192=0,V193=0,V194=0,V166=0,V167=0,V168=0,V164=0,V165=0,V169=0,V173=0,V175=0,V176=0,V174=0,V171=0,V172=0,V170=0,V163=0,V177=0,V180=0,V181=0,V183=0,V184=0,V182=0,V178=0,V179=0,V185=0,V187=0,V188=0,V186=0,V99=0,V100=0,V101=0,V102=0,V23=0,V25=0,V28=0,V29=0,V27=0,V31=0,V32=0,V33=0,V30=0,V34=0,V35=0,V26=0,V24=0,V36=0,V37=0,V38=0,V39=0,V40=0,V42=0,V43=0,V45=0,V46=0,V47=0,V44=0,V41=0,V22=0,V49=0,V50=0,V52=0,V55=0,V56=0,V54=0,V58=0,V59=0,V60=0,V57=0,V61=0,V62=0,V53=0,V51=0,V63=0,V64=0,V65=0,V75=0,V77=0,V79=0,V80=0,V81=0,V78=0,V76=0,V82=0,V83=0,V66=0,V67=0,V69=0,V70=0,V72=0,V73=0,V74=0,V71=0,V68=0,V48=0,V84=0,V85=0,V86=0,V87=0,V88=0,V90=0,V91=0,V93=0,V94=0,V95=0,V92=0,V89=0,V947=0,V948=0,V952=0,V950=0,V951=0;
int I,X;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=87;
x[jvj+1]=10116;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2148&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,X,jvj+5)*/
if((x[jvj+5]!=73)) goto l44;
pile[v[22]]=128; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(128,X,jvj+6)*/
if((x[jvj+6]==0)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,X,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=255)) goto l4;
pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[2198])( );     /*SPV0(I,jvj+6,V542)*/
V542=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V542; 
(*f[64])( );     /*SRA2((-1936),V542,J)*/
J=pile[WZ2]; 
l45:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:V483=17;
l37:pile[v[22]]=241; pile[WZ1]=126; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,126,V491)*/
V491=pile[WZ2]; 
pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,25,V492)*/
V492=pile[WZ2]; 
pile[WZ1]=125; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,125,V493)*/
V493=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+63)*/
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V451)*/
V451=pile[WZ2]; 
pile[v[22]]=V451; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V451,40,V453)*/
V453=pile[WZ2]; 
pile[v[22]]=V453; 
(*f[38])( );     /*SPC0(V453,40,V457)*/
V457=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V457; 
(*f[64])( );     /*SRA2((-8074),V457,V461)*/
V461=pile[WZ2]; 
pile[v[22]]=V461; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V461,91,V462)*/
V462=pile[WZ2]; 
pile[v[22]]=jvj+63; pile[WZ1]=V462; 
(*f[2077])( );     /*SPR0(jvj+63,V462,V463)*/
V463=pile[WZ2]; 
pile[v[22]]=V463; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V463,93,V459)*/
V459=pile[WZ2]; 
pile[v[22]]=V459; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V459,61,V460)*/
V460=pile[WZ2]; 
pile[v[22]]=V491; pile[WZ1]=V460; 
(*f[64])( );     /*SRA2(V491,V460,V464)*/
V464=pile[WZ2]; 
pile[v[22]]=V464; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V464,40,V465)*/
V465=pile[WZ2]; 
pile[v[22]]=(-2500); pile[WZ1]=V465; 
(*f[64])( );     /*SRA2((-2500),V465,V471)*/
V471=pile[WZ2]; 
pile[v[22]]=V471; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V471,91,V472)*/
V472=pile[WZ2]; 
pile[v[22]]=4; pile[WZ1]=V472; 
(*f[99])( );     /*SPM0(4,V472,V473)*/
V473=pile[WZ2]; 
pile[v[22]]=V473; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V473,93,V466)*/
V466=pile[WZ2]; 
pile[v[22]]=V466; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V466,44,V467)*/
V467=pile[WZ2]; 
pile[v[22]]=V467; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V467,34,V469)*/
V469=pile[WZ2]; 
pile[v[22]]=V469; pile[WZ1]=KK; 
(*f[38])( );     /*SPC0(V469,KK,V470)*/
V470=pile[WZ2]; 
pile[v[22]]=V470; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V470,34,V468)*/
V468=pile[WZ2]; 
pile[v[22]]=V468; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V468,41,V458)*/
V458=pile[WZ2]; 
pile[v[22]]=V458; 
(*f[38])( );     /*SPC0(V458,41,V455)*/
V455=pile[WZ2]; 
pile[v[22]]=V492; pile[WZ1]=V455; 
(*f[64])( );     /*SRA2(V492,V455,V456)*/
V456=pile[WZ2]; 
pile[v[22]]=(-2591); pile[WZ1]=V456; 
(*f[64])( );     /*SRA2((-2591),V456,V454)*/
V454=pile[WZ2]; 
pile[v[22]]=V454; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V454,41,V452)*/
V452=pile[WZ2]; 
pile[v[22]]=V452; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V452,32,V474)*/
V474=pile[WZ2]; 
pile[v[22]]=V493; pile[WZ1]=V474; 
(*f[64])( );     /*SRA2(V493,V474,V475)*/
V475=pile[WZ2]; 
pile[v[22]]=V475; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V475,40,V476)*/
V476=pile[WZ2]; 
pile[v[22]]=V476; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V476,41,V450)*/
V450=pile[WZ2]; 
pile[v[22]]=V450; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V450,59,V477)*/
V477=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V477; 
(*f[64])( );     /*SRA2((-2491),V477,V480)*/
V480=pile[WZ2]; 
pile[v[22]]=V480; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V480,91,V481)*/
V481=pile[WZ2]; 
pile[v[22]]=V483; pile[WZ1]=V481; 
(*f[99])( );     /*SPM0(V483,V481,V482)*/
V482=pile[WZ2]; 
pile[v[22]]=V482; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V482,93,V478)*/
V478=pile[WZ2]; 
pile[v[22]]=V478; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V478,61,V479)*/
V479=pile[WZ2]; 
pile[v[22]]=jvj+63; pile[WZ1]=V479; 
(*f[2077])( );     /*SPR0(jvj+63,V479,J)*/
J=pile[WZ2]; 
goto l45;
l2:x[jvj+3]=vo[15];z[jvj+3]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(583,jvj+3,jvj+4)*/
if((x[jvj+4]==10900)) goto l44;
l33:pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,51,V818)*/
V818=pile[WZ2]; 
pile[WZ1]=1008; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,1008,V819)*/
V819=pile[WZ2]; 
pile[WZ1]=64; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,64,V820)*/
V820=pile[WZ2]; 
pile[WZ1]=28; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,28,V823)*/
V823=pile[WZ2]; 
pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,27,V824)*/
V824=pile[WZ2]; 
pile[WZ1]=227; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,227,V825)*/
V825=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+61)*/
pile[v[22]]=(-7770); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-7770),I,V771)*/
V771=pile[WZ2]; 
pile[v[22]]=V771; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V771,61,V772)*/
V772=pile[WZ2]; 
pile[v[22]]=(-7268); pile[WZ1]=V772; 
(*f[64])( );     /*SRA2((-7268),V772,V777)*/
V777=pile[WZ2]; 
pile[v[22]]=V777; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V777,91,V778)*/
V778=pile[WZ2]; 
pile[v[22]]=52; pile[WZ1]=V778; 
(*f[99])( );     /*SPM0(52,V778,V779)*/
V779=pile[WZ2]; 
pile[v[22]]=V779; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V779,93,V775)*/
V775=pile[WZ2]; 
pile[v[22]]=V818; pile[WZ1]=V775; 
(*f[64])( );     /*SRA2(V818,V775,V776)*/
V776=pile[WZ2]; 
pile[v[22]]=600; pile[WZ1]=V776; 
(*f[99])( );     /*SPM0(600,V776,V773)*/
V773=pile[WZ2]; 
pile[v[22]]=V820; pile[WZ1]=V773; 
(*f[64])( );     /*SRA2(V820,V773,V774)*/
V774=pile[WZ2]; 
pile[v[22]]=V774; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V774,40,V780)*/
V780=pile[WZ2]; 
pile[v[22]]=V819; pile[WZ1]=V780; 
(*f[64])( );     /*SRA2(V819,V780,V784)*/
V784=pile[WZ2]; 
pile[v[22]]=V784; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V784,40,V785)*/
V785=pile[WZ2]; 
pile[v[22]]=(-6771); pile[WZ1]=V785; 
(*f[64])( );     /*SRA2((-6771),V785,V786)*/
V786=pile[WZ2]; 
pile[v[22]]=V786; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V786,41,V782)*/
V782=pile[WZ2]; 
pile[v[22]]=V820; pile[WZ1]=V782; 
(*f[64])( );     /*SRA2(V820,V782,V783)*/
V783=pile[WZ2]; 
pile[v[22]]=(-8073); pile[WZ1]=V783; 
(*f[64])( );     /*SRA2((-8073),V783,V781)*/
V781=pile[WZ2]; 
pile[v[22]]=V781; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V781,41,V770)*/
V770=pile[WZ2]; 
pile[v[22]]=V770; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V770,59,V788)*/
V788=pile[WZ2]; 
pile[v[22]]=(-7771); pile[WZ1]=V788; 
(*f[64])( );     /*SRA2((-7771),V788,V789)*/
V789=pile[WZ2]; 
pile[v[22]]=V789; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V789,61,V790)*/
V790=pile[WZ2]; 
pile[v[22]]=(-7770); pile[WZ1]=V790; 
(*f[64])( );     /*SRA2((-7770),V790,V791)*/
V791=pile[WZ2]; 
pile[v[22]]=V818; pile[WZ1]=V791; 
(*f[64])( );     /*SRA2(V818,V791,V792)*/
V792=pile[WZ2]; 
pile[v[22]]=jvj+61; pile[WZ1]=V792; 
(*f[2077])( );     /*SPR0(jvj+61,V792,V787)*/
V787=pile[WZ2]; 
pile[v[22]]=V787; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V787,59,V793)*/
V793=pile[WZ2]; 
pile[v[22]]=V825; pile[WZ1]=V793; 
(*f[64])( );     /*SRA2(V825,V793,V794)*/
V794=pile[WZ2]; 
pile[v[22]]=V794; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V794,40,V795)*/
V795=pile[WZ2]; 
pile[v[22]]=V795; 
(*f[38])( );     /*SPC0(V795,40,V801)*/
V801=pile[WZ2]; 
pile[v[22]]=(-7770); pile[WZ1]=V801; 
(*f[64])( );     /*SRA2((-7770),V801,V803)*/
V803=pile[WZ2]; 
pile[v[22]]=V823; pile[WZ1]=V803; 
(*f[64])( );     /*SRA2(V823,V803,V804)*/
V804=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V804; 
(*f[99])( );     /*SPM0(0,V804,V802)*/
V802=pile[WZ2]; 
pile[v[22]]=V802; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V802,41,V797)*/
V797=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V797; 
(*f[64])( );     /*SRA2((-2601),V797,V798)*/
V798=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V798; 
(*f[99])( );     /*SPM0(1,V798,V799)*/
V799=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V799; 
(*f[64])( );     /*SRA2((-2602),V799,V800)*/
V800=pile[WZ2]; 
pile[v[22]]=V800; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V800,40,V809)*/
V809=pile[WZ2]; 
pile[v[22]]=(-7771); pile[WZ1]=V809; 
(*f[64])( );     /*SRA2((-7771),V809,V811)*/
V811=pile[WZ2]; 
pile[v[22]]=V824; pile[WZ1]=V811; 
(*f[64])( );     /*SRA2(V824,V811,V812)*/
V812=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V812; 
(*f[99])( );     /*SPM0(0,V812,V810)*/
V810=pile[WZ2]; 
pile[v[22]]=V810; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V810,41,V805)*/
V805=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V805; 
(*f[64])( );     /*SRA2((-2601),V805,V806)*/
V806=pile[WZ2]; 
pile[v[22]]=(-7771); pile[WZ1]=V806; 
(*f[64])( );     /*SRA2((-7771),V806,V807)*/
V807=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V807; 
(*f[64])( );     /*SRA2((-2602),V807,V808)*/
V808=pile[WZ2]; 
pile[v[22]]=jvj+61; pile[WZ1]=V808; 
(*f[2077])( );     /*SPR0(jvj+61,V808,V796)*/
V796=pile[WZ2]; 
pile[v[22]]=V796; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V796,41,J)*/
J=pile[WZ2]; 
goto l45;
l3:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=255)) goto l4;
J=I;
goto l45;
l4:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,X,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==709)) goto l5;
if((x[jvj+12]==643)) goto l6;
if((x[jvj+12]==1144)) goto l7;
if((x[jvj+12]==12)) goto l8;
if((x[jvj+12]==627)) goto l9;
if((x[jvj+12]==352)) goto l10;
if((x[jvj+12]==316)) goto l11;
if((x[jvj+12]!=62)) goto l12;
pile[v[22]]=241; pile[WZ1]=62; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,62,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+19)*/
pile[v[22]]=V159; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V159,I,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=V153; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V153,40,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=V154; 
(*f[2077])( );     /*SPR0(jvj+19,V154,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V155,41,J)*/
J=pile[WZ2]; 
goto l45;
l5:pile[v[22]]=241; pile[WZ1]=709; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,709,V674)*/
V674=pile[WZ2]; 
pile[v[22]]=V674; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V674,I,V668)*/
V668=pile[WZ2]; 
pile[v[22]]=V668; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V668,40,V669)*/
V669=pile[WZ2]; 
pile[v[22]]=(-2563); pile[WZ1]=V669; 
(*f[64])( );     /*SRA2((-2563),V669,V670)*/
V670=pile[WZ2]; 
pile[v[22]]=V670; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V670,41,J)*/
J=pile[WZ2]; 
goto l45;
l6:pile[v[22]]=241; pile[WZ1]=643; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,643,V540)*/
V540=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2532),I,V534)*/
V534=pile[WZ2]; 
pile[v[22]]=(-3936); pile[WZ1]=V534; 
(*f[64])( );     /*SRA2((-3936),V534,V532)*/
V532=pile[WZ2]; 
pile[v[22]]=V532; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V532,61,V533)*/
V533=pile[WZ2]; 
pile[v[22]]=V540; pile[WZ1]=V533; 
(*f[64])( );     /*SRA2(V540,V533,V535)*/
V535=pile[WZ2]; 
pile[v[22]]=V535; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V535,40,V536)*/
V536=pile[WZ2]; 
pile[v[22]]=V536; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V536,41,J)*/
J=pile[WZ2]; 
goto l45;
l7:pile[v[22]]=241; pile[WZ1]=1144; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,1144,V747)*/
V747=pile[WZ2]; 
pile[v[22]]=(-7228); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-7228),I,V739)*/
V739=pile[WZ2]; 
pile[v[22]]=V739; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V739,61,V740)*/
V740=pile[WZ2]; 
pile[v[22]]=V747; pile[WZ1]=V740; 
(*f[64])( );     /*SRA2(V747,V740,V741)*/
V741=pile[WZ2]; 
pile[v[22]]=V741; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V741,40,V742)*/
V742=pile[WZ2]; 
pile[v[22]]=(-7232); pile[WZ1]=V742; 
(*f[64])( );     /*SRA2((-7232),V742,V743)*/
V743=pile[WZ2]; 
pile[v[22]]=V743; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V743,41,J)*/
J=pile[WZ2]; 
goto l45;
l8:pile[v[22]]=241; pile[WZ1]=12; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,12,V513)*/
V513=pile[WZ2]; 
pile[v[22]]=V513; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V513,I,V507)*/
V507=pile[WZ2]; 
pile[v[22]]=V507; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V507,40,V508)*/
V508=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V508; 
(*f[99])( );     /*SPM0(0,V508,V509)*/
V509=pile[WZ2]; 
pile[v[22]]=V509; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V509,41,J)*/
J=pile[WZ2]; 
goto l45;
l9:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+13)*/
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+13,V706)*/
V706=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=627; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,627,V710)*/
V710=pile[WZ2]; 
pile[WZ1]=126; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,126,V711)*/
V711=pile[WZ2]; 
pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,25,V712)*/
V712=pile[WZ2]; 
pile[WZ1]=125; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,125,V713)*/
V713=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V681)*/
V681=pile[WZ2]; 
pile[v[22]]=V681; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V681,40,V683)*/
V683=pile[WZ2]; 
pile[v[22]]=V683; 
(*f[38])( );     /*SPC0(V683,40,V687)*/
V687=pile[WZ2]; 
pile[v[22]]=V710; pile[WZ1]=V687; 
(*f[64])( );     /*SRA2(V710,V687,V689)*/
V689=pile[WZ2]; 
pile[v[22]]=V689; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V689,61,V690)*/
V690=pile[WZ2]; 
pile[v[22]]=V711; pile[WZ1]=V690; 
(*f[64])( );     /*SRA2(V711,V690,V691)*/
V691=pile[WZ2]; 
pile[v[22]]=V691; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V691,40,V692)*/
V692=pile[WZ2]; 
pile[v[22]]=V692; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V692,34,V698)*/
V698=pile[WZ2]; 
pile[v[22]]=V706; pile[WZ1]=V698; 
(*f[64])( );     /*SRA2(V706,V698,V699)*/
V699=pile[WZ2]; 
pile[v[22]]=V699; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V699,34,V693)*/
V693=pile[WZ2]; 
pile[v[22]]=V693; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V693,44,V694)*/
V694=pile[WZ2]; 
pile[v[22]]=V694; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V694,34,V696)*/
V696=pile[WZ2]; 
pile[v[22]]=V696; pile[WZ1]=119; 
(*f[38])( );     /*SPC0(V696,119,V697)*/
V697=pile[WZ2]; 
pile[v[22]]=V697; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V697,34,V695)*/
V695=pile[WZ2]; 
pile[v[22]]=V695; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V695,41,V688)*/
V688=pile[WZ2]; 
pile[v[22]]=V688; 
(*f[38])( );     /*SPC0(V688,41,V685)*/
V685=pile[WZ2]; 
pile[v[22]]=V712; pile[WZ1]=V685; 
(*f[64])( );     /*SRA2(V712,V685,V686)*/
V686=pile[WZ2]; 
pile[v[22]]=(-2591); pile[WZ1]=V686; 
(*f[64])( );     /*SRA2((-2591),V686,V684)*/
V684=pile[WZ2]; 
pile[v[22]]=V684; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V684,41,V682)*/
V682=pile[WZ2]; 
pile[v[22]]=V682; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V682,32,V700)*/
V700=pile[WZ2]; 
pile[v[22]]=V713; pile[WZ1]=V700; 
(*f[64])( );     /*SRA2(V713,V700,V701)*/
V701=pile[WZ2]; 
pile[v[22]]=V701; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V701,40,V702)*/
V702=pile[WZ2]; 
pile[v[22]]=V702; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V702,41,J)*/
J=pile[WZ2]; 
goto l45;
l10:pile[v[22]]=241; pile[WZ1]=383; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,383,V854)*/
V854=pile[WZ2]; 
pile[v[22]]=V854; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V854,I,V828)*/
V828=pile[WZ2]; 
pile[v[22]]=V828; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V828,40,V829)*/
V829=pile[WZ2]; 
pile[v[22]]=(-2585); pile[WZ1]=V829; 
(*f[64])( );     /*SRA2((-2585),V829,V830)*/
V830=pile[WZ2]; 
pile[v[22]]=V830; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V830,44,V831)*/
V831=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V831; 
(*f[64])( );     /*SRA2((-8074),V831,V833)*/
V833=pile[WZ2]; 
pile[v[22]]=V833; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V833,91,V834)*/
V834=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V834; 
(*f[64])( );     /*SRA2((-2491),V834,V836)*/
V836=pile[WZ2]; 
pile[v[22]]=V836; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V836,91,V837)*/
V837=pile[WZ2]; 
pile[v[22]]=27; pile[WZ1]=V837; 
(*f[99])( );     /*SPM0(27,V837,V838)*/
V838=pile[WZ2]; 
pile[v[22]]=V838; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V838,93,V835)*/
V835=pile[WZ2]; 
pile[v[22]]=V835; 
(*f[38])( );     /*SPC0(V835,93,V832)*/
V832=pile[WZ2]; 
pile[v[22]]=V832; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V832,41,V827)*/
V827=pile[WZ2]; 
pile[v[22]]=V827; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V827,59,V839)*/
V839=pile[WZ2]; 
pile[v[22]]=V854; pile[WZ1]=V839; 
(*f[64])( );     /*SRA2(V854,V839,V840)*/
V840=pile[WZ2]; 
pile[v[22]]=V840; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V840,40,V841)*/
V841=pile[WZ2]; 
pile[v[22]]=(-2582); pile[WZ1]=V841; 
(*f[64])( );     /*SRA2((-2582),V841,V842)*/
V842=pile[WZ2]; 
pile[v[22]]=V842; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V842,44,V843)*/
V843=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V843; 
(*f[64])( );     /*SRA2((-8074),V843,V845)*/
V845=pile[WZ2]; 
pile[v[22]]=V845; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V845,91,V846)*/
V846=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V846; 
(*f[64])( );     /*SRA2((-2491),V846,V848)*/
V848=pile[WZ2]; 
pile[v[22]]=V848; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V848,91,V849)*/
V849=pile[WZ2]; 
pile[v[22]]=27; pile[WZ1]=V849; 
(*f[99])( );     /*SPM0(27,V849,V850)*/
V850=pile[WZ2]; 
pile[v[22]]=V850; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V850,93,V847)*/
V847=pile[WZ2]; 
pile[v[22]]=V847; 
(*f[38])( );     /*SPC0(V847,93,V844)*/
V844=pile[WZ2]; 
pile[v[22]]=V844; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V844,41,J)*/
J=pile[WZ2]; 
goto l45;
l11:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+14,jvj+15)*/
pile[v[22]]=241; pile[WZ1]=316; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,316,V390)*/
V390=pile[WZ2]; 
pile[v[22]]=391; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(391,jvj+15,V389)*/
V389=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+15,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+16; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+16,jvj+87)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+87; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+87,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=68; pile[WZ2]=jvj+18; 
(*f[1641])( );if(v[102]) goto l12;     /*VC0(jvj+17,68,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+18,V388)*/
V388=pile[WZ2]; 
pile[v[22]]=V390; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V390,I,V372)*/
V372=pile[WZ2]; 
pile[v[22]]=V372; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V372,40,V373)*/
V373=pile[WZ2]; 
pile[v[22]]=V389; pile[WZ1]=V373; 
(*f[64])( );     /*SRA2(V389,V373,V374)*/
V374=pile[WZ2]; 
pile[v[22]]=V374; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V374,44,V375)*/
V375=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V375; pile[WZ2]=jvj+16; 
(*f[98])( );     /*SRA3(135,V375,jvj+16,V377)*/
V377=pile[WZ3]; 
pile[v[22]]=V388; pile[WZ1]=V377; 
(*f[99])( );     /*SPM0(V388,V377,V376)*/
V376=pile[WZ2]; 
pile[v[22]]=V376; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V376,41,J)*/
J=pile[WZ2]; 
pile[v[22]]=324; pile[WZ1]=133; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(324,133,jvj+16)*/
goto l45;
l12:pile[v[22]]=132; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(132,jvj+12,jvj+20)*/
if((x[jvj+20]!=68)) goto l13;
pile[v[22]]=241; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(241,jvj+12,V447)*/
V447=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=V447; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V447,I,V438)*/
V438=pile[WZ2]; 
pile[v[22]]=V438; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V438,40,V439)*/
V439=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=V439; 
(*f[2077])( );     /*SPR0(jvj+21,V439,V440)*/
V440=pile[WZ2]; 
pile[v[22]]=V440; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V440,41,J)*/
J=pile[WZ2]; 
goto l45;
l13:if(x[jvj+12]!=173&&x[jvj+12]!=174&&x[jvj+12]!=175&&x[jvj+12]!=31&&x[jvj+12]!=1155) goto l14;
pile[v[22]]=241; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,jvj+12,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,X,jvj+22)*/
pile[v[22]]=103; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,X,jvj+23)*/
pile[v[22]]=V210; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V210,I,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V202,91,V203)*/
V203=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=V203; 
(*f[2077])( );     /*SPR0(jvj+22,V203,V204)*/
V204=pile[WZ2]; 
pile[v[22]]=V204; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V204,93,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=V200; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V200,61,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=V201; 
(*f[2077])( );     /*SPR0(jvj+23,V201,J)*/
J=pile[WZ2]; 
goto l45;
l14:if(x[jvj+12]!=975&&x[jvj+12]!=1148&&x[jvj+12]!=1309&&x[jvj+12]!=1315) goto l15;
pile[v[22]]=391; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(391,jvj+12,V915)*/
V915=pile[WZ2]; 
pile[v[22]]=241; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,jvj+12,V916)*/
V916=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,X,jvj+24)*/
pile[v[22]]=103; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,X,jvj+25)*/
pile[v[22]]=V916; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V916,I,V898)*/
V898=pile[WZ2]; 
pile[v[22]]=V898; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V898,40,V899)*/
V899=pile[WZ2]; 
pile[v[22]]=V915; pile[WZ1]=V899; 
(*f[64])( );     /*SRA2(V915,V899,V900)*/
V900=pile[WZ2]; 
pile[v[22]]=V900; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V900,44,V901)*/
V901=pile[WZ2]; 
pile[v[22]]=(-10651); pile[WZ1]=V901; 
(*f[64])( );     /*SRA2((-10651),V901,V902)*/
V902=pile[WZ2]; 
pile[v[22]]=V902; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V902,44,V903)*/
V903=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=V903; 
(*f[2077])( );     /*SPR0(jvj+24,V903,V904)*/
V904=pile[WZ2]; 
pile[v[22]]=V904; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V904,44,V905)*/
V905=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V905; 
(*f[64])( );     /*SRA2((-8074),V905,V907)*/
V907=pile[WZ2]; 
pile[v[22]]=V907; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V907,91,V908)*/
V908=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=V908; 
(*f[2077])( );     /*SPR0(jvj+25,V908,V909)*/
V909=pile[WZ2]; 
pile[v[22]]=V909; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V909,93,V906)*/
V906=pile[WZ2]; 
pile[v[22]]=V906; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V906,41,J)*/
J=pile[WZ2]; 
goto l45;
l15:if(x[jvj+12]!=34&&x[jvj+12]!=75) goto l16;
pile[v[22]]=241; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,jvj+12,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+26)*/
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+27)*/
pile[v[22]]=V18; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V18,I,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V4,91,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V6; 
(*f[64])( );     /*SRA2((-2491),V6,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V8,91,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(1,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V10,93,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; 
(*f[38])( );     /*SPC0(V7,93,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V5,91,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V11; 
(*f[2077])( );     /*SPR0(jvj+27,V11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V12,93,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V2,61,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=jvj+26; pile[WZ1]=V3; 
(*f[2077])( );     /*SPR0(jvj+26,V3,J)*/
J=pile[WZ2]; 
goto l45;
l16:if(x[jvj+12]!=456&&x[jvj+12]!=422&&x[jvj+12]!=471&&x[jvj+12]!=1434&&x[jvj+12]!=1199) goto l17;
pile[v[22]]=241; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(241,jvj+12,V420)*/
V420=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,X,jvj+28)*/
pile[v[22]]=103; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,X,jvj+29)*/
pile[v[22]]=160; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(160,X,jvj+30)*/
pile[v[22]]=V420; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V420,I,V409)*/
V409=pile[WZ2]; 
pile[v[22]]=V409; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V409,91,V411)*/
V411=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=V411; 
(*f[2077])( );     /*SPR0(jvj+28,V411,V412)*/
V412=pile[WZ2]; 
pile[v[22]]=V412; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V412,93,V410)*/
V410=pile[WZ2]; 
pile[v[22]]=V410; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V410,91,V413)*/
V413=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=V413; 
(*f[2077])( );     /*SPR0(jvj+29,V413,V414)*/
V414=pile[WZ2]; 
pile[v[22]]=V414; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V414,93,V407)*/
V407=pile[WZ2]; 
pile[v[22]]=V407; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V407,61,V408)*/
V408=pile[WZ2]; 
pile[v[22]]=jvj+30; pile[WZ1]=V408; 
(*f[2077])( );     /*SPR0(jvj+30,V408,J)*/
J=pile[WZ2]; 
goto l45;
l17:if(x[jvj+12]!=1431) goto l18;
pile[v[22]]=241; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(241,jvj+12,V893)*/
V893=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,X,jvj+31)*/
pile[v[22]]=103; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,X,jvj+32)*/
pile[v[22]]=160; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(160,X,jvj+33)*/
pile[v[22]]=V893; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V893,I,V882)*/
V882=pile[WZ2]; 
pile[v[22]]=V882; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V882,91,V884)*/
V884=pile[WZ2]; 
pile[v[22]]=jvj+31; pile[WZ1]=V884; 
(*f[2077])( );     /*SPR0(jvj+31,V884,V885)*/
V885=pile[WZ2]; 
pile[v[22]]=V885; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V885,93,V883)*/
V883=pile[WZ2]; 
pile[v[22]]=V883; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V883,91,V886)*/
V886=pile[WZ2]; 
pile[v[22]]=jvj+32; pile[WZ1]=V886; 
(*f[2077])( );     /*SPR0(jvj+32,V886,V887)*/
V887=pile[WZ2]; 
pile[v[22]]=V887; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V887,93,V880)*/
V880=pile[WZ2]; 
pile[v[22]]=V880; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V880,61,V881)*/
V881=pile[WZ2]; 
pile[v[22]]=jvj+33; pile[WZ1]=V881; 
(*f[2077])( );     /*SPR0(jvj+33,V881,J)*/
J=pile[WZ2]; 
goto l45;
l18:if(x[jvj+12]!=503&&x[jvj+12]!=504&&x[jvj+12]!=505) goto l19;
pile[v[22]]=241; pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,27,V359)*/
V359=pile[WZ2]; 
pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,25,V360)*/
V360=pile[WZ2]; 
pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,26,V362)*/
V362=pile[WZ2]; 
pile[WZ1]=143; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,143,V363)*/
V363=pile[WZ2]; 
pile[WZ1]=394; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,394,V364)*/
V364=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,87,V365)*/
V365=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+12,V366)*/
V366=pile[WZ2]; 
pile[v[22]]=190; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(190,jvj+12,V367)*/
V367=pile[WZ2]; 
pile[v[22]]=321; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(321,jvj+12,V368)*/
V368=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,X,jvj+34)*/
pile[v[22]]=103; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,X,jvj+35)*/
pile[v[22]]=160; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(160,X,jvj+36)*/
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V270)*/
V270=pile[WZ2]; 
pile[v[22]]=V270; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V270,40,V272)*/
V272=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=V272; 
(*f[2077])( );     /*SPR0(jvj+36,V272,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V359; pile[WZ1]=V274; 
(*f[64])( );     /*SRA2(V359,V274,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V275; 
(*f[99])( );     /*SPM0(0,V275,V273)*/
V273=pile[WZ2]; 
pile[v[22]]=V273; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V273,41,V271)*/
V271=pile[WZ2]; 
pile[v[22]]=V271; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V271,32,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=(-1727); pile[WZ1]=V276; 
(*f[64])( );     /*SRA2((-1727),V276,V279)*/
V279=pile[WZ2]; 
pile[v[22]]=V279; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V279,91,V280)*/
V280=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=V280; 
(*f[2077])( );     /*SPR0(jvj+36,V280,V281)*/
V281=pile[WZ2]; 
pile[v[22]]=V281; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V281,93,V277)*/
V277=pile[WZ2]; 
pile[v[22]]=V277; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V277,61,V278)*/
V278=pile[WZ2]; 
V947=68;
V948=V947;
pile[v[22]]=V948; pile[WZ1]=V278; 
(*f[221])( );     /*SRN0(V948,V278,V269)*/
V269=pile[WZ2]; 
pile[v[22]]=V269; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V269,59,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V283; 
(*f[64])( );     /*SRA2((-2577),V283,V284)*/
V284=pile[WZ2]; 
pile[v[22]]=V284; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V284,40,V286)*/
V286=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=V286; 
(*f[2077])( );     /*SPR0(jvj+36,V286,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=V360; pile[WZ1]=V290; 
(*f[64])( );     /*SRA2(V360,V290,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=(-1); pile[WZ1]=V291; 
(*f[99])( );     /*SPM0((-1),V291,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=V364; pile[WZ1]=V288; 
(*f[64])( );     /*SRA2(V364,V288,V289)*/
V289=pile[WZ2]; 
pile[v[22]]=V289; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V289,40,V292)*/
V292=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=V292; 
(*f[2077])( );     /*SPR0(jvj+36,V292,V296)*/
V296=pile[WZ2]; 
pile[v[22]]=V359; pile[WZ1]=V296; 
(*f[64])( );     /*SRA2(V359,V296,V297)*/
V297=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V297; 
(*f[99])( );     /*SPM0(0,V297,V294)*/
V294=pile[WZ2]; 
pile[v[22]]=V363; pile[WZ1]=V294; 
(*f[64])( );     /*SRA2(V363,V294,V295)*/
V295=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V295; 
(*f[64])( );     /*SRA2((-2491),V295,V300)*/
V300=pile[WZ2]; 
pile[v[22]]=V300; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V300,91,V301)*/
V301=pile[WZ2]; 
pile[v[22]]=122; pile[WZ1]=V301; 
(*f[99])( );     /*SPM0(122,V301,V302)*/
V302=pile[WZ2]; 
pile[v[22]]=V302; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V302,93,V298)*/
V298=pile[WZ2]; 
pile[v[22]]=V362; pile[WZ1]=V298; 
(*f[64])( );     /*SRA2(V362,V298,V299)*/
V299=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V299; 
(*f[99])( );     /*SPM0(0,V299,V293)*/
V293=pile[WZ2]; 
pile[v[22]]=V293; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V293,41,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=V287; 
(*f[38])( );     /*SPC0(V287,41,V285)*/
V285=pile[WZ2]; 
pile[v[22]]=V285; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V285,32,V303)*/
V303=pile[WZ2]; 
pile[v[22]]=(-2593); pile[WZ1]=V303; 
(*f[64])( );     /*SRA2((-2593),V303,V304)*/
V304=pile[WZ2]; 
pile[v[22]]=(-3110); pile[WZ1]=V304; 
(*f[64])( );     /*SRA2((-3110),V304,V309)*/
V309=pile[WZ2]; 
pile[v[22]]=V309; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V309,91,V310)*/
V310=pile[WZ2]; 
pile[v[22]]=V365; pile[WZ1]=V310; 
(*f[64])( );     /*SRA2(V365,V310,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V312; 
(*f[64])( );     /*SRA2((-2491),V312,V313)*/
V313=pile[WZ2]; 
pile[v[22]]=V313; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V313,91,V314)*/
V314=pile[WZ2]; 
pile[v[22]]=14; pile[WZ1]=V314; 
(*f[99])( );     /*SPM0(14,V314,V315)*/
V315=pile[WZ2]; 
pile[v[22]]=V315; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V315,93,V311)*/
V311=pile[WZ2]; 
pile[v[22]]=V311; 
(*f[38])( );     /*SPC0(V311,93,V307)*/
V307=pile[WZ2]; 
pile[v[22]]=V307; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V307,61,V308)*/
V308=pile[WZ2]; 
pile[v[22]]=jvj+34; pile[WZ1]=V308; 
(*f[2077])( );     /*SPR0(jvj+34,V308,V306)*/
V306=pile[WZ2]; 
pile[v[22]]=V306; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V306,59,V317)*/
V317=pile[WZ2]; 
pile[v[22]]=(-3112); pile[WZ1]=V317; 
(*f[64])( );     /*SRA2((-3112),V317,V320)*/
V320=pile[WZ2]; 
pile[v[22]]=V320; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V320,91,V321)*/
V321=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V321; 
(*f[64])( );     /*SRA2((-2491),V321,V323)*/
V323=pile[WZ2]; 
pile[v[22]]=V323; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V323,91,V324)*/
V324=pile[WZ2]; 
pile[v[22]]=14; pile[WZ1]=V324; 
(*f[99])( );     /*SPM0(14,V324,V325)*/
V325=pile[WZ2]; 
pile[v[22]]=V325; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V325,93,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=V322; 
(*f[38])( );     /*SPC0(V322,93,V318)*/
V318=pile[WZ2]; 
pile[v[22]]=V318; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V318,61,V319)*/
V319=pile[WZ2]; 
pile[v[22]]=V366; pile[WZ1]=V319; 
(*f[99])( );     /*SPM0(V366,V319,V316)*/
V316=pile[WZ2]; 
pile[v[22]]=V316; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V316,59,V327)*/
V327=pile[WZ2]; 
pile[v[22]]=(-3111); pile[WZ1]=V327; 
(*f[64])( );     /*SRA2((-3111),V327,V330)*/
V330=pile[WZ2]; 
pile[v[22]]=V330; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V330,91,V331)*/
V331=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V331; 
(*f[64])( );     /*SRA2((-2491),V331,V333)*/
V333=pile[WZ2]; 
pile[v[22]]=V333; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V333,91,V334)*/
V334=pile[WZ2]; 
pile[v[22]]=14; pile[WZ1]=V334; 
(*f[99])( );     /*SPM0(14,V334,V335)*/
V335=pile[WZ2]; 
pile[v[22]]=V335; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V335,93,V332)*/
V332=pile[WZ2]; 
pile[v[22]]=V332; 
(*f[38])( );     /*SPC0(V332,93,V328)*/
V328=pile[WZ2]; 
pile[v[22]]=V328; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V328,61,V329)*/
V329=pile[WZ2]; 
pile[v[22]]=V367; pile[WZ1]=V329; 
(*f[64])( );     /*SRA2(V367,V329,V336)*/
V336=pile[WZ2]; 
pile[v[22]]=V336; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V336,91,V337)*/
V337=pile[WZ2]; 
pile[v[22]]=jvj+34; pile[WZ1]=V337; 
(*f[2077])( );     /*SPR0(jvj+34,V337,V338)*/
V338=pile[WZ2]; 
pile[v[22]]=V338; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V338,93,V326)*/
V326=pile[WZ2]; 
pile[v[22]]=V326; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V326,59,V339)*/
V339=pile[WZ2]; 
pile[v[22]]=(-3113); pile[WZ1]=V339; 
(*f[64])( );     /*SRA2((-3113),V339,V342)*/
V342=pile[WZ2]; 
pile[v[22]]=V342; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V342,91,V343)*/
V343=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V343; 
(*f[64])( );     /*SRA2((-2491),V343,V345)*/
V345=pile[WZ2]; 
pile[v[22]]=V345; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V345,91,V346)*/
V346=pile[WZ2]; 
pile[v[22]]=14; pile[WZ1]=V346; 
(*f[99])( );     /*SPM0(14,V346,V347)*/
V347=pile[WZ2]; 
pile[v[22]]=V347; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V347,93,V344)*/
V344=pile[WZ2]; 
pile[v[22]]=V344; 
(*f[38])( );     /*SPC0(V344,93,V340)*/
V340=pile[WZ2]; 
pile[v[22]]=V340; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V340,61,V341)*/
V341=pile[WZ2]; 
pile[v[22]]=V368; pile[WZ1]=V341; 
(*f[64])( );     /*SRA2(V368,V341,V305)*/
V305=pile[WZ2]; 
pile[v[22]]=(-2554); pile[WZ1]=V305; 
(*f[64])( );     /*SRA2((-2554),V305,V282)*/
V282=pile[WZ2]; 
pile[v[22]]=V282; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V282,59,V348)*/
V348=pile[WZ2]; 
pile[v[22]]=V367; pile[WZ1]=V348; 
(*f[64])( );     /*SRA2(V367,V348,V351)*/
V351=pile[WZ2]; 
pile[v[22]]=V351; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V351,91,V352)*/
V352=pile[WZ2]; 
pile[v[22]]=jvj+34; pile[WZ1]=V352; 
(*f[2077])( );     /*SPR0(jvj+34,V352,V353)*/
V353=pile[WZ2]; 
pile[v[22]]=V353; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V353,93,V349)*/
V349=pile[WZ2]; 
pile[v[22]]=V349; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V349,61,V350)*/
V350=pile[WZ2]; 
pile[v[22]]=jvj+35; pile[WZ1]=V350; 
(*f[2077])( );     /*SPR0(jvj+35,V350,J)*/
J=pile[WZ2]; 
goto l45;
l19:if((x[jvj+12]==10)) goto l20;
if((x[jvj+12]==165)) goto l21;
if((x[jvj+12]==657)) goto l22;
if((x[jvj+12]==507)) goto l23;
if((x[jvj+12]==705)) goto l24;
if((x[jvj+12]==249)) goto l25;
if((x[jvj+12]==691)) goto l26;
if((x[jvj+12]==1011)) goto l27;
if((x[jvj+12]==266)) goto l28;
if((x[jvj+12]==16)) goto l29;
if((x[jvj+12]==467)) goto l30;
if((x[jvj+12]==431)) goto l31;
if((x[jvj+12]==227)) goto l32;
if((x[jvj+12]==692)) goto l34;
if((x[jvj+12]==9)) goto l36;
if((x[jvj+12]==1323)) goto l38;
if((x[jvj+12]==200)) goto l39;
if((x[jvj+12]==534)) goto l40;
if((x[jvj+12]==640)) goto l41;
if((x[jvj+12]==1150)) goto l42;
if((x[jvj+12]==344)) goto l43;
if((x[jvj+12]!=71)) goto l44;
pile[v[22]]=241; pile[WZ1]=30; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,30,V99)*/
V99=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,87,V100)*/
V100=pile[WZ2]; 
pile[WZ1]=383; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,383,V101)*/
V101=pile[WZ2]; 
pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,29,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+84)*/
pile[v[22]]=102; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+85)*/
pile[v[22]]=103; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+86)*/
pile[v[22]]=(-2580); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2580),I,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V23,40,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V25; 
(*f[64])( );     /*SRA2((-2581),V25,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V28,61,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V29; 
(*f[99])( );     /*SPM0(1,V29,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V27,59,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V31; 
(*f[64])( );     /*SRA2((-2581),V31,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V99; pile[WZ1]=V32; 
(*f[64])( );     /*SRA2(V99,V32,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=jvj+84; pile[WZ1]=V33; 
(*f[2077])( );     /*SPR0(jvj+84,V33,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V30,59,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V34; 
(*f[64])( );     /*SRA2((-2581),V34,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=V35; 
(*f[64])( );     /*SRA2(V100,V35,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V26,41,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V24,32,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=V36; 
(*f[64])( );     /*SRA2(V101,V36,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V37,40,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=(-2584); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-2584),V38,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V39,44,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V40; 
(*f[64])( );     /*SRA2((-8074),V40,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V42,91,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V43; 
(*f[64])( );     /*SRA2((-2491),V43,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V45,91,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=27; pile[WZ1]=V46; 
(*f[99])( );     /*SPM0(27,V46,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V47,93,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; 
(*f[38])( );     /*SPC0(V44,93,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V41,41,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V22,59,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=(-2580); pile[WZ1]=V49; 
(*f[64])( );     /*SRA2((-2580),V49,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V50,40,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V52; 
(*f[64])( );     /*SRA2((-2581),V52,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V55,61,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=jvj+85; pile[WZ1]=V56; 
(*f[2077])( );     /*SPR0(jvj+85,V56,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V54,59,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V58; 
(*f[64])( );     /*SRA2((-2581),V58,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=V59; 
(*f[64])( );     /*SRA2(V102,V59,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=jvj+86; pile[WZ1]=V60; 
(*f[2077])( );     /*SPR0(jvj+86,V60,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V57,59,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V61; 
(*f[64])( );     /*SRA2((-2581),V61,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=V62; 
(*f[64])( );     /*SRA2(V100,V62,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V53,41,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V51,32,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=V63; 
(*f[64])( );     /*SRA2(V101,V63,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V64,40,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=(-2500); pile[WZ1]=V65; 
(*f[64])( );     /*SRA2((-2500),V65,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V75,91,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V77; 
(*f[64])( );     /*SRA2((-2491),V77,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V79,91,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V80; 
(*f[99])( );     /*SPM0(1,V80,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V81,93,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; 
(*f[38])( );     /*SPC0(V78,93,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V76,91,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V82; 
(*f[64])( );     /*SRA2((-2581),V82,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V83,93,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V66,44,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V67; 
(*f[64])( );     /*SRA2((-8074),V67,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V69,91,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V70; 
(*f[64])( );     /*SRA2((-2491),V70,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V72,91,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=27; pile[WZ1]=V73; 
(*f[99])( );     /*SPM0(27,V73,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V74,93,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; 
(*f[38])( );     /*SPC0(V71,93,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V68,41,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V48,59,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=V84; 
(*f[64])( );     /*SRA2(V101,V84,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V85,40,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=(-2582); pile[WZ1]=V86; 
(*f[64])( );     /*SRA2((-2582),V86,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V87,44,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V88; 
(*f[64])( );     /*SRA2((-8074),V88,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V90,91,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V91; 
(*f[64])( );     /*SRA2((-2491),V91,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V93,91,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=27; pile[WZ1]=V94; 
(*f[99])( );     /*SPM0(27,V94,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V95; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V95,93,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; 
(*f[38])( );     /*SPC0(V92,93,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V89,41,J)*/
J=pile[WZ2]; 
goto l45;
l20:pile[v[22]]=241; pile[WZ1]=10; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,10,V505)*/
V505=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+37)*/
pile[v[22]]=V505; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V505,I,V496)*/
V496=pile[WZ2]; 
pile[v[22]]=V496; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V496,40,V497)*/
V497=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V497; 
(*f[64])( );     /*SRA2((-8074),V497,V499)*/
V499=pile[WZ2]; 
pile[v[22]]=V499; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V499,91,V500)*/
V500=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=V500; 
(*f[2077])( );     /*SPR0(jvj+37,V500,V501)*/
V501=pile[WZ2]; 
pile[v[22]]=V501; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V501,93,V498)*/
V498=pile[WZ2]; 
pile[v[22]]=V498; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V498,41,J)*/
J=pile[WZ2]; 
goto l45;
l21:pile[v[22]]=241; pile[WZ1]=165; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,165,V666)*/
V666=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+38)*/
pile[v[22]]=V666; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V666,I,V657)*/
V657=pile[WZ2]; 
pile[v[22]]=V657; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V657,40,V658)*/
V658=pile[WZ2]; 
pile[v[22]]=(-4504); pile[WZ1]=V658; 
(*f[64])( );     /*SRA2((-4504),V658,V660)*/
V660=pile[WZ2]; 
pile[v[22]]=V660; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V660,91,V661)*/
V661=pile[WZ2]; 
pile[v[22]]=jvj+38; pile[WZ1]=V661; 
(*f[2077])( );     /*SPR0(jvj+38,V661,V662)*/
V662=pile[WZ2]; 
pile[v[22]]=V662; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V662,93,V659)*/
V659=pile[WZ2]; 
pile[v[22]]=V659; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V659,41,J)*/
J=pile[WZ2]; 
goto l45;
l22:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+39)*/
pile[v[22]]=163; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+39,V725)*/
V725=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+40)*/
pile[v[22]]=(-8074); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-8074),I,V719)*/
V719=pile[WZ2]; 
pile[v[22]]=V719; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V719,91,V720)*/
V720=pile[WZ2]; 
pile[v[22]]=jvj+40; pile[WZ1]=V720; 
(*f[2077])( );     /*SPR0(jvj+40,V720,V721)*/
V721=pile[WZ2]; 
pile[v[22]]=V721; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V721,93,V717)*/
V717=pile[WZ2]; 
pile[v[22]]=V717; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V717,61,V718)*/
V718=pile[WZ2]; 
pile[v[22]]=V725; pile[WZ1]=V718; 
(*f[64])( );     /*SRA2(V725,V718,J)*/
J=pile[WZ2]; 
goto l45;
l23:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+41)*/
pile[v[22]]=103; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+42)*/
pile[v[22]]=(-1729); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1729),I,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=V216; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V216,91,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=3; pile[WZ2]=jvj+41; 
(*f[2147])( );     /*SPP0(V217,3,jvj+41,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V218,93,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V214,61,V215)*/
V215=pile[WZ2]; 
pile[v[22]]=jvj+42; pile[WZ1]=V215; 
(*f[2077])( );     /*SPR0(jvj+42,V215,J)*/
J=pile[WZ2]; 
goto l45;
l24:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+43)*/
pile[v[22]]=163; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+43,V650)*/
V650=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=705; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,705,V654)*/
V654=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+44)*/
pile[v[22]]=V654; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V654,I,V635)*/
V635=pile[WZ2]; 
pile[v[22]]=V635; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V635,40,V636)*/
V636=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V636; 
(*f[64])( );     /*SRA2((-8074),V636,V644)*/
V644=pile[WZ2]; 
pile[v[22]]=V644; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V644,91,V645)*/
V645=pile[WZ2]; 
pile[v[22]]=jvj+44; pile[WZ1]=V645; 
(*f[2077])( );     /*SPR0(jvj+44,V645,V646)*/
V646=pile[WZ2]; 
pile[v[22]]=V646; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V646,93,V637)*/
V637=pile[WZ2]; 
pile[v[22]]=V637; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V637,44,V638)*/
V638=pile[WZ2]; 
pile[v[22]]=V638; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V638,34,V642)*/
V642=pile[WZ2]; 
pile[v[22]]=(-4544); pile[WZ1]=V642; 
(*f[64])( );     /*SRA2((-4544),V642,V643)*/
V643=pile[WZ2]; 
pile[v[22]]=V643; pile[WZ1]=34; 
(*f[38])( );     /*SPC0(V643,34,V639)*/
V639=pile[WZ2]; 
pile[v[22]]=V639; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V639,44,V640)*/
V640=pile[WZ2]; 
pile[v[22]]=V650; pile[WZ1]=V640; 
(*f[64])( );     /*SRA2(V650,V640,V641)*/
V641=pile[WZ2]; 
pile[v[22]]=V641; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V641,41,J)*/
J=pile[WZ2]; 
goto l45;
l25:pile[v[22]]=241; pile[WZ1]=249; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,249,V530)*/
V530=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+45)*/
pile[v[22]]=(-2491); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2491),I,V518)*/
V518=pile[WZ2]; 
pile[v[22]]=V518; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V518,91,V519)*/
V519=pile[WZ2]; 
pile[v[22]]=jvj+45; pile[WZ1]=V519; 
(*f[2077])( );     /*SPR0(jvj+45,V519,V520)*/
V520=pile[WZ2]; 
pile[v[22]]=V520; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V520,93,V516)*/
V516=pile[WZ2]; 
pile[v[22]]=V516; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V516,61,V517)*/
V517=pile[WZ2]; 
pile[v[22]]=V530; pile[WZ1]=V517; 
(*f[64])( );     /*SRA2(V530,V517,V521)*/
V521=pile[WZ2]; 
pile[v[22]]=V521; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V521,40,V522)*/
V522=pile[WZ2]; 
pile[v[22]]=(-2500); pile[WZ1]=V522; 
(*f[64])( );     /*SRA2((-2500),V522,V524)*/
V524=pile[WZ2]; 
pile[v[22]]=V524; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V524,91,V525)*/
V525=pile[WZ2]; 
pile[v[22]]=4; pile[WZ1]=V525; 
(*f[99])( );     /*SPM0(4,V525,V526)*/
V526=pile[WZ2]; 
pile[v[22]]=V526; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V526,93,V523)*/
V523=pile[WZ2]; 
pile[v[22]]=V523; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V523,41,J)*/
J=pile[WZ2]; 
goto l45;
l26:pile[v[22]]=241; pile[WZ1]=339; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,339,V583)*/
V583=pile[WZ2]; 
pile[WZ1]=691; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,691,V584)*/
V584=pile[WZ2]; 
pile[WZ1]=694; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,694,V585)*/
V585=pile[WZ2]; 
pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,26,V586)*/
V586=pile[WZ2]; 
pile[WZ1]=912; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,912,V587)*/
V587=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+46)*/
pile[v[22]]=(-4504); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-4504),I,V551)*/
V551=pile[WZ2]; 
pile[v[22]]=V551; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V551,91,V552)*/
V552=pile[WZ2]; 
pile[v[22]]=jvj+46; pile[WZ1]=V552; 
(*f[2077])( );     /*SPR0(jvj+46,V552,V553)*/
V553=pile[WZ2]; 
pile[v[22]]=V553; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V553,93,V549)*/
V549=pile[WZ2]; 
pile[v[22]]=V549; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V549,61,V550)*/
V550=pile[WZ2]; 
pile[v[22]]=V584; pile[WZ1]=V550; 
(*f[64])( );     /*SRA2(V584,V550,V554)*/
V554=pile[WZ2]; 
pile[v[22]]=V554; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V554,40,V555)*/
V555=pile[WZ2]; 
pile[v[22]]=(-4507); pile[WZ1]=V555; 
(*f[64])( );     /*SRA2((-4507),V555,V556)*/
V556=pile[WZ2]; 
pile[v[22]]=V556; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V556,44,V557)*/
V557=pile[WZ2]; 
pile[v[22]]=(-6421); pile[WZ1]=V557; 
(*f[64])( );     /*SRA2((-6421),V557,V559)*/
V559=pile[WZ2]; 
pile[v[22]]=V583; pile[WZ1]=V559; 
(*f[64])( );     /*SRA2(V583,V559,V560)*/
V560=pile[WZ2]; 
pile[v[22]]=(-8693); pile[WZ1]=V560; 
(*f[64])( );     /*SRA2((-8693),V560,V558)*/
V558=pile[WZ2]; 
pile[v[22]]=V558; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V558,41,V548)*/
V548=pile[WZ2]; 
pile[v[22]]=V548; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V548,59,V561)*/
V561=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V561; 
(*f[64])( );     /*SRA2((-2577),V561,V562)*/
V562=pile[WZ2]; 
pile[v[22]]=V562; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V562,40,V564)*/
V564=pile[WZ2]; 
pile[v[22]]=V564; 
(*f[38])( );     /*SPC0(V564,40,V568)*/
V568=pile[WZ2]; 
pile[v[22]]=(-6380); pile[WZ1]=V568; 
(*f[64])( );     /*SRA2((-6380),V568,V570)*/
V570=pile[WZ2]; 
pile[v[22]]=V570; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V570,61,V571)*/
V571=pile[WZ2]; 
pile[v[22]]=V585; pile[WZ1]=V571; 
(*f[64])( );     /*SRA2(V585,V571,V572)*/
V572=pile[WZ2]; 
pile[v[22]]=V572; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V572,40,V573)*/
V573=pile[WZ2]; 
pile[v[22]]=V573; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V573,41,V569)*/
V569=pile[WZ2]; 
pile[v[22]]=V569; 
(*f[38])( );     /*SPC0(V569,41,V566)*/
V566=pile[WZ2]; 
pile[v[22]]=V586; pile[WZ1]=V566; 
(*f[64])( );     /*SRA2(V586,V566,V567)*/
V567=pile[WZ2]; 
pile[v[22]]=(-2591); pile[WZ1]=V567; 
(*f[64])( );     /*SRA2((-2591),V567,V565)*/
V565=pile[WZ2]; 
pile[v[22]]=V565; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V565,41,V563)*/
V563=pile[WZ2]; 
pile[v[22]]=V563; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V563,32,V574)*/
V574=pile[WZ2]; 
pile[v[22]]=V587; pile[WZ1]=V574; 
(*f[64])( );     /*SRA2(V587,V574,V575)*/
V575=pile[WZ2]; 
pile[v[22]]=V575; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V575,40,V576)*/
V576=pile[WZ2]; 
pile[v[22]]=(-6380); pile[WZ1]=V576; 
(*f[64])( );     /*SRA2((-6380),V576,V577)*/
V577=pile[WZ2]; 
pile[v[22]]=V577; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V577,44,V578)*/
V578=pile[WZ2]; 
pile[v[22]]=(-2563); pile[WZ1]=V578; 
(*f[64])( );     /*SRA2((-2563),V578,V579)*/
V579=pile[WZ2]; 
pile[v[22]]=V579; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V579,41,J)*/
J=pile[WZ2]; 
goto l45;
l27:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+47)*/
pile[v[22]]=103; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+48)*/
pile[v[22]]=jvj+47; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+47,I,V732)*/
V732=pile[WZ2]; 
pile[v[22]]=V732; pile[WZ1]=124; 
(*f[38])( );     /*SPC0(V732,124,V733)*/
V733=pile[WZ2]; 
pile[v[22]]=V733; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V733,61,V734)*/
V734=pile[WZ2]; 
pile[v[22]]=jvj+48; pile[WZ1]=V734; 
(*f[2077])( );     /*SPR0(jvj+48,V734,J)*/
J=pile[WZ2]; 
goto l45;
l28:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+49)*/
pile[v[22]]=103; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+50)*/
pile[v[22]]=(-1727); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1727),I,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V130; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V130,91,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=jvj+49; pile[WZ1]=V131; 
(*f[2077])( );     /*SPR0(jvj+49,V131,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V132,93,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=V128; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V128,61,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=jvj+50; pile[WZ1]=V129; 
(*f[2077])( );     /*SPR0(jvj+50,V129,J)*/
J=pile[WZ2]; 
goto l45;
l29:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+51)*/
pile[v[22]]=163; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+51,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+52)*/
pile[v[22]]=160; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+53)*/
pile[v[22]]=V147; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V147,I,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=V141; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V141,91,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=jvj+52; pile[WZ1]=V142; 
(*f[2077])( );     /*SPR0(jvj+52,V142,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=V143; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V143,93,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=V139; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V139,61,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=jvj+53; pile[WZ1]=V140; 
(*f[2077])( );     /*SPR0(jvj+53,V140,J)*/
J=pile[WZ2]; 
goto l45;
l30:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+54)*/
pile[v[22]]=103; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+55)*/
pile[v[22]]=(-2590); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2590),I,V426)*/
V426=pile[WZ2]; 
pile[v[22]]=V426; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V426,91,V428)*/
V428=pile[WZ2]; 
pile[v[22]]=jvj+54; pile[WZ1]=V428; 
(*f[2077])( );     /*SPR0(jvj+54,V428,V429)*/
V429=pile[WZ2]; 
pile[v[22]]=V429; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V429,93,V427)*/
V427=pile[WZ2]; 
pile[v[22]]=V427; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V427,91,V430)*/
V430=pile[WZ2]; 
pile[v[22]]=jvj+55; pile[WZ1]=V430; 
(*f[2077])( );     /*SPR0(jvj+55,V430,V431)*/
V431=pile[WZ2]; 
pile[v[22]]=V431; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V431,93,V424)*/
V424=pile[WZ2]; 
pile[v[22]]=V424; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V424,61,V425)*/
V425=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V425; 
(*f[64])( );     /*SRA2((-1936),V425,J)*/
J=pile[WZ2]; 
goto l45;
l31:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+56)*/
pile[v[22]]=103; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+57)*/
pile[v[22]]=jvj+56; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+56,I,V395)*/
V395=pile[WZ2]; 
pile[v[22]]=V395; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V395,61,V396)*/
V396=pile[WZ2]; 
pile[v[22]]=jvj+57; pile[WZ1]=V396; 
(*f[2077])( );     /*SPR0(jvj+57,V396,V394)*/
V394=pile[WZ2]; 
pile[v[22]]=V394; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V394,59,V397)*/
V397=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V397; 
(*f[64])( );     /*SRA2((-1729),V397,V952)*/
V952=pile[WZ2]; 
pile[v[22]]=V952; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V952,91,V950)*/
V950=pile[WZ2]; 
pile[v[22]]=V950; pile[WZ1]=3; pile[WZ2]=jvj+56; 
(*f[2147])( );     /*SPP0(V950,3,jvj+56,V951)*/
V951=pile[WZ3]; 
pile[v[22]]=V951; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V951,93,V398)*/
V398=pile[WZ2]; 
pile[v[22]]=V398; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V398,61,V399)*/
V399=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V399; 
(*f[99])( );     /*SPM0(0,V399,J)*/
J=pile[WZ2]; 
goto l45;
l32:x[jvj+58]=vo[15];z[jvj+58]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(583,jvj+58,jvj+59)*/
if((x[jvj+59]!=10900)) goto l2;
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(241,29,V766)*/
V766=pile[WZ2]; 
pile[WZ1]=227; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(241,227,V767)*/
V767=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,jvj+60)*/
pile[v[22]]=V767; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V767,I,V750)*/
V750=pile[WZ2]; 
pile[v[22]]=V750; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V750,40,V751)*/
V751=pile[WZ2]; 
pile[v[22]]=V751; 
(*f[38])( );     /*SPC0(V751,40,V757)*/
V757=pile[WZ2]; 
pile[v[22]]=jvj+60; pile[WZ1]=V757; 
(*f[2077])( );     /*SPR0(jvj+60,V757,V759)*/
V759=pile[WZ2]; 
pile[v[22]]=V766; pile[WZ1]=V759; 
(*f[64])( );     /*SRA2(V766,V759,V760)*/
V760=pile[WZ2]; 
pile[v[22]]=600; pile[WZ1]=V760; 
(*f[99])( );     /*SPM0(600,V760,V758)*/
V758=pile[WZ2]; 
pile[v[22]]=V758; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V758,41,V753)*/
V753=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V753; 
(*f[64])( );     /*SRA2((-2601),V753,V754)*/
V754=pile[WZ2]; 
pile[v[22]]=jvj+60; pile[WZ1]=V754; 
(*f[2077])( );     /*SPR0(jvj+60,V754,V755)*/
V755=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V755; 
(*f[64])( );     /*SRA2((-2602),V755,V756)*/
V756=pile[WZ2]; 
pile[v[22]]=600; pile[WZ1]=V756; 
(*f[99])( );     /*SPM0(600,V756,V752)*/
V752=pile[WZ2]; 
pile[v[22]]=V752; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V752,41,J)*/
J=pile[WZ2]; 
goto l45;
l34:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+2)*/
if((I<=0)) goto l35;
pile[v[22]]=I; 
(*f[656])( );     /*SPLN2(I,V589)*/
V589=pile[WZ1]; 
l35:J=0;
pile[v[22]]=241; pile[WZ1]=692; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(241,692,V628)*/
V628=pile[WZ2]; 
pile[WZ1]=694; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(241,694,V629)*/
V629=pile[WZ2]; 
pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(241,26,V630)*/
V630=pile[WZ2]; 
pile[WZ1]=912; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(241,912,V631)*/
V631=pile[WZ2]; 
V591=0;
pile[v[22]]=(-3571); pile[WZ1]=V591; 
(*f[64])( );     /*SRA2((-3571),V591,V595)*/
V595=pile[WZ2]; 
pile[v[22]]=V595; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V595,91,V596)*/
V596=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V596; 
(*f[2077])( );     /*SPR0(jvj+2,V596,V597)*/
V597=pile[WZ2]; 
pile[v[22]]=V597; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V597,93,V593)*/
V593=pile[WZ2]; 
pile[v[22]]=V593; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V593,61,V594)*/
V594=pile[WZ2]; 
pile[v[22]]=V628; pile[WZ1]=V594; 
(*f[64])( );     /*SRA2(V628,V594,V598)*/
V598=pile[WZ2]; 
pile[v[22]]=V598; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V598,40,V599)*/
V599=pile[WZ2]; 
pile[v[22]]=(-4504); pile[WZ1]=V599; 
(*f[64])( );     /*SRA2((-4504),V599,V603)*/
V603=pile[WZ2]; 
pile[v[22]]=V603; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V603,91,V604)*/
V604=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V604; 
(*f[2077])( );     /*SPR0(jvj+2,V604,V605)*/
V605=pile[WZ2]; 
pile[v[22]]=V605; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V605,93,V600)*/
V600=pile[WZ2]; 
pile[v[22]]=V600; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V600,44,V601)*/
V601=pile[WZ2]; 
pile[v[22]]=(-4507); pile[WZ1]=V601; 
(*f[64])( );     /*SRA2((-4507),V601,V602)*/
V602=pile[WZ2]; 
pile[v[22]]=V602; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V602,41,V592)*/
V592=pile[WZ2]; 
pile[v[22]]=V592; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V592,59,V606)*/
V606=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V606; 
(*f[64])( );     /*SRA2((-2577),V606,V607)*/
V607=pile[WZ2]; 
pile[v[22]]=V607; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V607,40,V609)*/
V609=pile[WZ2]; 
pile[v[22]]=V609; 
(*f[38])( );     /*SPC0(V609,40,V613)*/
V613=pile[WZ2]; 
pile[v[22]]=(-6380); pile[WZ1]=V613; 
(*f[64])( );     /*SRA2((-6380),V613,V615)*/
V615=pile[WZ2]; 
pile[v[22]]=V615; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V615,61,V616)*/
V616=pile[WZ2]; 
pile[v[22]]=V629; pile[WZ1]=V616; 
(*f[64])( );     /*SRA2(V629,V616,V617)*/
V617=pile[WZ2]; 
pile[v[22]]=V617; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V617,40,V618)*/
V618=pile[WZ2]; 
pile[v[22]]=V618; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V618,41,V614)*/
V614=pile[WZ2]; 
pile[v[22]]=V614; 
(*f[38])( );     /*SPC0(V614,41,V611)*/
V611=pile[WZ2]; 
pile[v[22]]=V630; pile[WZ1]=V611; 
(*f[64])( );     /*SRA2(V630,V611,V612)*/
V612=pile[WZ2]; 
pile[v[22]]=(-2591); pile[WZ1]=V612; 
(*f[64])( );     /*SRA2((-2591),V612,V610)*/
V610=pile[WZ2]; 
pile[v[22]]=V610; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V610,41,V608)*/
V608=pile[WZ2]; 
pile[v[22]]=V608; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V608,32,V619)*/
V619=pile[WZ2]; 
pile[v[22]]=V631; pile[WZ1]=V619; 
(*f[64])( );     /*SRA2(V631,V619,V620)*/
V620=pile[WZ2]; 
pile[v[22]]=V620; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V620,40,V621)*/
V621=pile[WZ2]; 
pile[v[22]]=(-6380); pile[WZ1]=V621; 
(*f[64])( );     /*SRA2((-6380),V621,V622)*/
V622=pile[WZ2]; 
pile[v[22]]=V622; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V622,44,V623)*/
V623=pile[WZ2]; 
pile[v[22]]=(-2563); pile[WZ1]=V623; 
(*f[64])( );     /*SRA2((-2563),V623,V624)*/
V624=pile[WZ2]; 
pile[v[22]]=V624; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V624,41,V590)*/
V590=pile[WZ2]; 
pile[v[22]]=V590; 
(*f[289])( );     /*SPLN1(V590)*/
goto l45;
l36:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+62)*/
pile[v[22]]=162; pile[WZ1]=jvj+62; 
(*f[219])( );if(v[102]) goto l44;     /*FNDC2(162,jvj+62,KK)*/
KK=pile[WZ2]; 
V483=incon;
if((KK==114)) goto l1;
V483=27;
goto l37;
l38:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+64)*/
pile[v[22]]=163; pile[WZ1]=jvj+64; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+64,V871)*/
V871=pile[WZ2]; 
pile[v[22]]=1324; pile[WZ1]=X; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(1324,X,jvj+65)*/
pile[v[22]]=103; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+66)*/
pile[v[22]]=160; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+67)*/
pile[v[22]]=V871; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V871,I,V862)*/
V862=pile[WZ2]; 
pile[v[22]]=V862; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V862,91,V864)*/
V864=pile[WZ2]; 
pile[v[22]]=jvj+66; pile[WZ1]=V864; 
(*f[2077])( );     /*SPR0(jvj+66,V864,V865)*/
V865=pile[WZ2]; 
pile[v[22]]=V865; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V865,93,V863)*/
V863=pile[WZ2]; 
pile[v[22]]=V863; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V863,91,V866)*/
V866=pile[WZ2]; 
pile[v[22]]=jvj+67; pile[WZ1]=V866; 
(*f[2077])( );     /*SPR0(jvj+67,V866,V867)*/
V867=pile[WZ2]; 
pile[v[22]]=V867; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V867,93,V860)*/
V860=pile[WZ2]; 
pile[v[22]]=V860; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V860,61,V861)*/
V861=pile[WZ2]; 
pile[v[22]]=jvj+65; pile[WZ1]=V861; 
(*f[2077])( );     /*SPR0(jvj+65,V861,J)*/
J=pile[WZ2]; 
goto l45;
l39:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+68)*/
pile[v[22]]=103; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+69)*/
pile[v[22]]=160; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+70)*/
pile[v[22]]=(-1719); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1719),I,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V113,91,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=jvj+68; pile[WZ1]=V114; 
(*f[2077])( );     /*SPR0(jvj+68,V114,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V115,93,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V111,61,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=jvj+69; pile[WZ1]=V112; 
(*f[2077])( );     /*SPR0(jvj+69,V112,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=V110; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V110,59,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V116; 
(*f[64])( );     /*SRA2((-1729),V116,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V119,91,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=jvj+68; pile[WZ1]=V120; 
(*f[2077])( );     /*SPR0(jvj+68,V120,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=V121; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V121,93,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V117,61,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=jvj+70; pile[WZ1]=V118; 
(*f[2077])( );     /*SPR0(jvj+70,V118,J)*/
J=pile[WZ2]; 
goto l45;
l40:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+71,jvj+72)*/
pile[v[22]]=145; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(145,jvj+72,jvj+73)*/
pile[v[22]]=241; pile[WZ1]=jvj+73; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,jvj+73,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+74)*/
pile[v[22]]=160; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+75)*/
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V225)*/
V225=pile[WZ2]; 
pile[v[22]]=V225; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V225,40,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=jvj+75; pile[WZ1]=V227; 
(*f[2077])( );     /*SPR0(jvj+75,V227,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V241; pile[WZ1]=V229; 
(*f[64])( );     /*SRA2(V241,V229,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=jvj+74; pile[WZ1]=V230; 
(*f[2077])( );     /*SPR0(jvj+74,V230,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V228,41,V226)*/
V226=pile[WZ2]; 
pile[v[22]]=V226; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V226,32,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=jvj+74; pile[WZ1]=V231; 
(*f[2077])( );     /*SPR0(jvj+74,V231,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V232,61,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=jvj+75; pile[WZ1]=V233; 
(*f[2077])( );     /*SPR0(jvj+75,V233,J)*/
J=pile[WZ2]; 
goto l45;
l41:pile[v[22]]=241; pile[WZ1]=640; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,640,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(391,640,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+76)*/
pile[v[22]]=103; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+77)*/
pile[v[22]]=160; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+78)*/
pile[v[22]]=V262; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V262,I,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=V250; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V250,91,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=jvj+76; pile[WZ1]=V251; 
(*f[2077])( );     /*SPR0(jvj+76,V251,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V252,93,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=V248; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V248,61,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=jvj+77; pile[WZ1]=V249; 
(*f[2077])( );     /*SPR0(jvj+77,V249,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=V247; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V247,59,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=V263; pile[WZ1]=V253; 
(*f[64])( );     /*SRA2(V263,V253,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V256,91,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=jvj+76; pile[WZ1]=V257; 
(*f[2077])( );     /*SPR0(jvj+76,V257,V258)*/
V258=pile[WZ2]; 
pile[v[22]]=V258; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V258,93,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=V254; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V254,61,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=jvj+78; pile[WZ1]=V255; 
(*f[2077])( );     /*SPR0(jvj+78,V255,J)*/
J=pile[WZ2]; 
goto l45;
l42:pile[v[22]]=241; pile[WZ1]=64; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,64,V942)*/
V942=pile[WZ2]; 
pile[v[22]]=391; pile[WZ1]=1150; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(391,1150,V943)*/
V943=pile[WZ2]; 
pile[v[22]]=241; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,1150,V944)*/
V944=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+79)*/
pile[v[22]]=103; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+80)*/
pile[v[22]]=160; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,X,jvj+81)*/
pile[v[22]]=V944; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V944,I,V921)*/
V921=pile[WZ2]; 
pile[v[22]]=V921; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V921,40,V922)*/
V922=pile[WZ2]; 
pile[v[22]]=(-2531); pile[WZ1]=V922; 
(*f[64])( );     /*SRA2((-2531),V922,V935)*/
V935=pile[WZ2]; 
pile[v[22]]=V943; pile[WZ1]=V935; 
(*f[64])( );     /*SRA2(V943,V935,V936)*/
V936=pile[WZ2]; 
pile[v[22]]=V936; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V936,91,V937)*/
V937=pile[WZ2]; 
pile[v[22]]=jvj+81; pile[WZ1]=V937; 
(*f[2077])( );     /*SPR0(jvj+81,V937,V938)*/
V938=pile[WZ2]; 
pile[v[22]]=V938; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V938,93,V923)*/
V923=pile[WZ2]; 
pile[v[22]]=V923; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V923,44,V924)*/
V924=pile[WZ2]; 
pile[v[22]]=(-10651); pile[WZ1]=V924; 
(*f[64])( );     /*SRA2((-10651),V924,V925)*/
V925=pile[WZ2]; 
pile[v[22]]=V925; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V925,44,V926)*/
V926=pile[WZ2]; 
pile[v[22]]=jvj+79; pile[WZ1]=V926; 
(*f[2077])( );     /*SPR0(jvj+79,V926,V933)*/
V933=pile[WZ2]; 
pile[v[22]]=V942; pile[WZ1]=V933; 
(*f[64])( );     /*SRA2(V942,V933,V934)*/
V934=pile[WZ2]; 
pile[v[22]]=jvj+81; pile[WZ1]=V934; 
(*f[2077])( );     /*SPR0(jvj+81,V934,V927)*/
V927=pile[WZ2]; 
pile[v[22]]=V927; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V927,44,V928)*/
V928=pile[WZ2]; 
pile[v[22]]=(-8074); pile[WZ1]=V928; 
(*f[64])( );     /*SRA2((-8074),V928,V930)*/
V930=pile[WZ2]; 
pile[v[22]]=V930; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V930,91,V931)*/
V931=pile[WZ2]; 
pile[v[22]]=jvj+80; pile[WZ1]=V931; 
(*f[2077])( );     /*SPR0(jvj+80,V931,V932)*/
V932=pile[WZ2]; 
pile[v[22]]=V932; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V932,93,V929)*/
V929=pile[WZ2]; 
pile[v[22]]=V929; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V929,41,J)*/
J=pile[WZ2]; 
goto l45;
l43:pile[v[22]]=241; pile[WZ1]=328; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,328,V192)*/
V192=pile[WZ2]; 
pile[WZ1]=338; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,338,V193)*/
V193=pile[WZ2]; 
pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(241,51,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+82)*/
pile[v[22]]=103; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+83)*/
pile[v[22]]=(-2519); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2519),I,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V166,91,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=jvj+82; pile[WZ1]=V167; 
(*f[2077])( );     /*SPR0(jvj+82,V167,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=V168; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V168,93,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V164,61,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V165; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V165,40,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=V169; 
(*f[38])( );     /*SPC0(V169,40,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=jvj+83; pile[WZ1]=V173; 
(*f[2077])( );     /*SPR0(jvj+83,V173,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=V175; 
(*f[64])( );     /*SRA2(V192,V175,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=8; pile[WZ1]=V176; 
(*f[99])( );     /*SPM0(8,V176,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=V174; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V174,41,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=V171; 
(*f[64])( );     /*SRA2(V193,V171,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=(-2536); pile[WZ1]=V172; 
(*f[64])( );     /*SRA2((-2536),V172,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=V170; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V170,41,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=V163; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V163,59,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=(-2519); pile[WZ1]=V177; 
(*f[64])( );     /*SRA2((-2519),V177,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V180,91,V181)*/
V181=pile[WZ2]; 
pile[v[22]]=jvj+82; pile[WZ1]=V181; 
(*f[2077])( );     /*SPR0(jvj+82,V181,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=V183; 
(*f[64])( );     /*SRA2(V194,V183,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V184; 
(*f[99])( );     /*SPM0(1,V184,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=V182; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V182,93,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V178,61,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=V179; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V179,40,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=jvj+83; pile[WZ1]=V185; 
(*f[2077])( );     /*SPR0(jvj+83,V185,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V193; pile[WZ1]=V187; 
(*f[64])( );     /*SRA2(V193,V187,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=(-2536); pile[WZ1]=V188; 
(*f[64])( );     /*SRA2((-2536),V188,V186)*/
V186=pile[WZ2]; 
pile[v[22]]=V186; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V186,41,J)*/
J=pile[WZ2]; 
goto l45;
l44:J=I;
pile[v[22]]=10116; pile[WZ1]=(-3412); pile[WZ2]=X; 
(*f[2016])( );     /*FAUTE10(10116,(-3412),X)*/
goto l45;
}
