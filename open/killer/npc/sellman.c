//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
set_name("杀手专卖处的老板",({"vendor"}));
set("gender", "男性" );
set("age", 50);
set("long", @LONG
他可是叶秀杀特地请来的退休杀手，你可不要想杀他哦。。。。
,你可以列出(list)他卖些什么...
LONG
);
        set("combat_exp",200000);
        set("max_kee",2000);
        set("kee",2000);
        set("attitude", "friendly");
        set_skill("dodge", 80);
        set_skill("hammer", 80);
        set_skill("parry", 80);
        set("vendor_goods", ({
                COMMON_OBJ"bandage",
                COMMON_OBJ"pill",
                COMMON_OBJ"pill1",
                COMMON_OBJ"plaster",
                PING_OBJ"cloud",
                CAPITAL_OBJ"tea",
                "/obj/example/wineskin",
                "/obj/example/dumpling",
                "/obj/example/chicken_leg",
}) );
setup();
        carry_object("/obj/example/chicken_leg")->wield();
        carry_object("/open/killer/weapon/k_cloth2")->wear();
add_money("gold",2);
}

void greeting(object ob)
{
int gender,per;
gender = 0;
per = ob->query("per");
if( !ob || environment(ob) != environment() ) return;
if( ob->query("gender") == "女性")
  gender = 1;
switch( random(3) ) {
case 0:
                if( per < 18 && gender)
          say("老板微笑的说：呵。。。 "+ob->name(1)
                       +",妳还真有勇气出门吓人耶!\n");

say("老板愉快的靠近你说： 这位"+RANK_D->query_respect(ob)
                        +"你是新进杀手吧？来买点东西如何？!\n");
break;
case 1:
                if( per > 22 )
                   say("老板嘶声么\喝道: "+ob->name(1)
                        +"奇怪，妳是舞者吗？没事那么漂亮干嘛？!\n");
                say("老板嘶声么\喝道: "+RANK_D->query_respect(ob)
                    +",西域神器唤云扇!这里买，价格一样啦！?\n");
break;
case 2:
                if( per < 15)
say("老板自言自语的说： "+ob->name(1)+"！？？"
            +"\n还好，我还以为，我家养的猴子跑出来了！！\n");
if( per > 26 && gender)
                    say("老板赞叹道: 哇! 恶魔"+ob->name(1)
        +",妳真是令人不禁想要犯罪耶。。。。!!\n");
        
say("老板高声喊道: 跳楼大拍卖,"+RANK_D->query_respect(ob)
+"当我老婆的话，我可以算便宜一点喔!\n");
break;
 }
}
