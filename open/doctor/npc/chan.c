#include <ansi.h>
inherit NPC;
void create()
{
 set_name("张翱",({"chan au","chan","au"}));
 set("long","

     他是来自中原的行医者，因仰慕华陀的医术而来拜访他也因此跟
    
     华陀学了不少的医术，现在是华陀得力的助手，他在江湖行医多

     年，练就了一身的好轻功，所以得到一个绰号为行如风。

 ");
 set("gender","男性");
 set("class","doctor");
 set("nickname","行如风");
 set("combat_exp",450000);
 set("attitude","heroism");
 set("age",33);
 set("title","银针门得力助手");
 set("str",15);
 set("cor",30);
 set("cps",20);
 set("kar",25);
 set("force",2000);
 set("max_force",2000);
 set("max_kee",1500);
 set("kee",1500);
 set_skill("literate",60);
 set_skill("cure",80);
 set_skill("dodge",90);
 set_skill("move",90);
 set_skill("parry",30);
 set_skill("stabber",40);
 set_skill("force",40);
 set_skill("unarmed",20);
 set_skill("yu-needle",60);
set_skill("seven-steps",90);
 set_skill("godcure",60);
 set_skill("shinnoforce",40);
 map_skill("stabber","yu-needle");
map_skill("dodge","seven-steps");
 map_skill("force","shinnoforce");
map_skill("move","seven-steps");
 map_skill("parry","yu-needle");
 map_skill("cure","godcure");
 set("force_factor",10);
 set("inquiry",([
 "行如风"  : "哈哈哈～行如风就是我，想比马拉松吗?",
 ]));
 setup();
        carry_object("/open/doctor/obj/needle5.c")->wield();
        add_money("gold",5);
}
void greeting(object ob)
{
        if( (string)ob->query("class") == "poisoner" )
{
        command("say 门主生平最恨毒害苍生之人，今日我便为民除害，纳命来吧！");
        kill_ob(ob);
}
}



