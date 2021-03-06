//master of taoist
#include </open/main/main.h>
#include <ansi.h>
inherit NPC;

string magic1();
string magic2();
void create()
{
        set_name("张通",({"Master taoist","master","taoist"}) );
        set("long",
        "负责教导初入道的道士们一些基础的修行(verify)及
简单的茅山术,想加入道士的行列请(join)。\n" );
        set("gender", "男性" );
	set("title","玉矶道人");
	set("nickname","定乾坤");
        set("class","taoist");
        set("guild_master",1);

        set("combat_exp",1000000);
        set("max_mana",2000);
        set("mana",2000);
	set("max_kee",2000);
	set("kee",2000);
	set("force",1000);
	set("max_force",1000);
        set_skill("parry",40);
        set_skill("dodge",40);
        set_skill("force",50);
        set_skill("literate",70);
        set_skill("magic",50);
	set_skill("spells",60);
        set_skill("necromancy",60);
        map_skill("spells","necromancy");
	set_skill("magic",40);
	set_skill("gmagic",60);
        set_skill("move",80);
        set_skill("cure",50);
        set_skill("whip",60);
	set_skill("unarmed",40);
        set_skill("gwhip",60);
	map_skill("whip","gwhip");
	set("spells/stopmove/level",1);
	set("spells/feeblebolt/level",40);
	set("spells/missible/level",40);
	set("spells/explore/level",1);
	set("spells/manabody/level",1);
					
	set("chat_chance_combat",70);
	set("chat_msg_combat",({
	(:magic1:),
	(:magic2:),
	}));
        setup();
        carry_object("/open/tendo/obj/shoe")->wear();
        carry_object("/open/tendo/obj/hat")->wear();
        carry_object("/open/tendo/obj/robe")->wear();
        carry_object("/open/tendo/obj/whisk")->wield();

}

void init()
{
        add_action("do_join","join");
        add_action("do_verify","verify");
}

int do_verify(string str)
{
        object me,ob;

        me = this_player();

        if( !str )
        {
          if( me->query("class") != "taoist" ) return 0;
          if( !(ob = me->query_temp("weapon")) || (string)ob->query("skill_type") != "whip")
            {
              ob = new("/open/tendo/obj/whisk1");
              if (ob) {
                ob->move(me);
                printf("%s给%s一把拂尘\n",this_object()->query("name"),
                me->query("name"));
               }
             return 1;
           }
        else
          return notify_fail("有武器了还跟我要。\n");
        }
        else
          return 0;
}

int do_join(string str)
{
        object ob,me;
        me = this_player();
        if(str!=0)
          return notify_fail("请打\"join\"即可。\n");

        if(me->query("class") == "taoist" )
            return notify_fail("你不要开玩笑了，你不是早就加入了吗？\n");

        if( me->query("class") )
          return notify_fail("你已经加入了别的工会了\n");

	command("hmm");
	command("say 你可以cmd home到老紫那看看。");

        ob = new("/open/tendo/obj/whisk1");
        ob->move(me);

        printf("%s给%s一把拂尘。\n",this_object()->query("name"),
        me->query("name") );
        me->set("class","taoist");
        return 1;
}

string magic1()
{
  command("cast feeblebolt");
  return "\n";
} 

string magic2()
{
  command("cast missible");
  return "\n";
}
