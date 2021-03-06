#include <ansi.h>
inherit F_VENDOR;

string magic1();
string magic2();
string do_tendo();
string do_master();
string do_hawk();
string do_area();

void create()
{
	set_name("龙清和",({"chinho"}));
	set("long","陆清风的师兄,因全心致力于武学之上,故将掌门之位让给他师弟"
                   "!!\n");
        set("gender","男性");
        set("class","taoist");
        set("combat_exp",1500000);
        set("attitude","heroism");
		set("age",91);
        set("title","天道派护法长老");
        set("str", 25);
        set("cor", 29);
        set("cps", 28);
        set("per", 24);
        set("spi", 25);
        set("int", 26);
        set("force", 3000);
        set("max_force", 3000);
        set("max_mana",2000);
        set("mana",2000);
        set("max_atman",2000);
        set("atman",2000);
        set_skill("literate", 70);
	set_skill("cure",60);
	set_skill("taoism", 100);
	map_skill("cure", "taoism");
	set_skill("magic",80);
	set_skill("gmagic",90);
	map_skill("magic","gmagic");
	set_skill("spells",80);
        set_skill("necromancy",90);
	map_skill("spells","necromancy");
        set_skill("force",50);
        set_skill("gforce",80);
        map_skill("force","gforce");
        set_skill("dodge",40);
        set_skill("g-steps", 70);
        map_skill("dodge","g-steps");
        set_skill("parry",60);
        set_skill("whip",70);
        set_skill("gwhip",70);
        map_skill("whip","gwhip");
        map_skill("parry","gwhip");
        set("force_factor", 30);
		set("inquiry",([
        "天道派" : (:do_tendo:),
        "陆皓云" : (:do_master:),
        "灵鹰" : (:do_hawk:),
        "昆仑仙境" : (:do_area:),
          ]));
        setup();
        carry_object("/open/tendo/obj/whisk")->wield();
        carry_object("/open/tendo/obj/hat")->wear();
        carry_object("/open/tendo/obj/shoe")->wear();
        carry_object("/open/tendo/obj/robe")->wear();
}
string do_tendo()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "此事为天道派本门机密，贫道岂能告知外人。";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"唉！！！\n            其实当年众妖大闹人间，先师陆皓云亲率本门道魂三使者大战群魔，\n            不料却在战魂坡惨遭群妖围攻，先师以灵鹰配合天道秘术形成一道强\n            大的阵法困住众妖危害人间，之后虽然武林中各大派赶来救援不及，\n            导致先师身受重伤，如今生死不明。"NOR;

}

string do_master()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "没听说过。";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"其实当年大战之后先师因伤势严重，便将掌门之位传于清风师弟，便\n            携同灵鹰前往昆仑仙境闭关修练道法，日前阐悟道法，长辞人世。"NOR;
}

string do_hawk()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "听说过。";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"嗯！灵鹰乃当年先师遨游昆仑山时无意中在昆仑仙境发现此吸收灵气\n            而生长成的灵鹰，由于此鹰极通灵性，加上先师助其灵气灌顶，灵鹰\n            便长守昆仑山，背负起守护天道派的重责大任。"NOR;
}

string do_area()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "陆清和摇摇头，说道：没听说过。";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"昆仑仙境为先师仙逝之处，亦为我天道禁地，详情你还是去询问清风师弟吧！"NOR;
}

