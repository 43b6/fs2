inherit NPC;  //副镖头 by dhk 2000.4.22
#include <ansi.h>
#include </open/open.h>

void create()
{
    set_name("副镖头",({"mercenary assistant","assistant","mercenary"}) );
    set("title",""HIY"威武"NOR"镖局");
    set("gender", "男性");
    set("age",90);
    set("attitude", "peaceful");
    set("long", "他是威武镖局副镖头，现在正代理外出不在的总镖头，有什\n"
               +"么找他准没错。\n");
    set("kee",2000);
    set("max_kee",2000);
    set("combat_exp",70000);
    set("max_force",2000);
    set("class","blademan");
    set_skill("move",40);
    set_skill("force",80);
    set_skill("dodge",60);
    set_skill("parry",70);
    set_skill("blade",80);
    set_skill("gold-blade",80);
    set_skill("fly-steps",80);
    set_skill("sixforce",80);
    map_skill("blade","gold-blade");
    map_skill("parry","gold-blade");
    map_skill("dodge","fly-steps");
    map_skill("move","fly-steps");
    map_skill("force","sixforce");
    set_temp("apply/armor",100);
    set("force_factor",9);

    setup();
}
int accept_kill(object who)
{
  return 1;
}
int accept_fight(object who)
{
  return 1;
}
int accept_object(object me, object obj)
{
    object bluetooth=new("/open/ping/questsfan/obj/kingblade.c");
    if( obj->query("id") == "leader_letter" )
      {
        command("bow "+getuid(me));
        command("say 阁下救了我们总镖头，真是太感谢了。");
        if( me->query("family/family_name") == "段家" && me->query_temp("helpman") == 2 )
          {
            command("say 这是总镖头在信中交代要我交于你的东西，请收下。\n");
            me->set("helpman",3);
            bluetooth->move(me);
          }
        destruct(obj);
      }
    else
      command("? "+getuid(me));
    return 1;
}
