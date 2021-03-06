#include <ansi.h>
inherit NPC;
string ask_yao();
string ask_array();
string ask_sunsword();
string ask_bloodking();
string ask_god();
string ask_array2();
void create()
{
set_name(HIW"龙铁心"NOR,({"tesin long","tesin"}));
set("long","传说中的大剑师..开天三灵器的创作人.生平事迹不为常人所知..生活方式亦出人意料.\n");
        set("gender","男性");
        set("class","swordsman");
            set("family/family_name","仙剑派");
            set("combat_exp",14000000);
            set("attitude","heroism");
            set("dragon-sword",1);
            set("bellicosity", 5000);
        set("age",120);
        set("title",HIY"大剑师"NOR);
            set("str", 50);
            set("cor", 50);
            set("cps", 50);
            set("con", 50);
            set("int", 50);
            set("max_gin", 4000);
            set("gin",4000);
            set("max_kee", 30000);
            set("kee",30000);
            set("s_kee",1000);
            set("max_s_kee",1000);
            set("force",250000);
            set("max_force",2500000);
            set_skill("literate",120);
            set_skill("magic",100);
            set_skill("spells",100);
            set_skill("sun_fire_sword",100);
            set_skill("shaforce",150);
            set_skill("sha-steps",100);
            set_skill("sha-array",100); 
        set_skill("array",100);
        set_skill("move",120);
        set_skill("force",300);
        set_skill("dodge",120);
        set_skill("parry",120);
        set_skill("sword",120);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","sun_fire_sword");
        set("force_factor",50);
                set("inquiry",([
        "逍遥子"   :  (: ask_yao :),
        "天门奇阵"   :  (: ask_array :),
        "仙剑连阳" : (: ask_sunsword :),
        "血魔" : (: ask_bloodking :),
        "神圣侠": (: ask_god :),
        "开天三才阵" : (:ask_array2:),

        ]));
        setup();
        add_money("gold", 10);
        set("get_sha_sp", 1);
        set("chat_chance_combat",90);
        set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
        }));
        carry_object("/open/gsword/obj/dragon-sword")->wield();
        create_family("仙剑派",2,"不传弟子");
}

string ask_yao()
{
command("say 你说好友逍遥子是吗?他已经消失很久了.在神圣侠大战血魔后..就没他的行踪了");
 return("不过..据说有人在搜寻他的踪迹.据说为了搜寻逍遥子的下落..他已经消失武林一阵子了 !\n");
}
string ask_array()
{
 return("天门奇阵乃是逍遥子从大破魔师-于兰天武-学来专门克制血魔的阵法. !\n");
}

string ask_sunsword()
{

command("say 仙剑连阳..具逍遥子说..是破魔师于兰天武给他的破魔圣物.剑上并镶上破魔晶珠..");
 return("不晓得破魔师是如何得到他的...!\n");

}

string ask_bloodking()
{

 return("应该已经被封印在天门奇阵中了..至于天门奇阵在哪..可能得去问问风青云了 !.\n");

}

string ask_array2()
{

command("say 根据破魔师于兰天武所说天门奇阵中为了压抑血魔魔力..因此得阵中加阵... !");
command("say 开天三才阵乃集神圣侠三人灵气..配上开天三灵器之灵力所形成之次空间 !");
 return("目前武林中的开天三灵器..则因为大部分灵气已被阵法吸收..因此威力已不及当初的贰分之一 !\n");

}
string ask_god()
{

command("say 当时..逍遥子号增剑圣..他集合了当时与他齐名的欧阳礼及司马破军参与封魔大战!");
 return("之后..就是我用仙剑连阳帮他们分别铸造了专用武器...接下来的..就要去问别人了!\n");

}

