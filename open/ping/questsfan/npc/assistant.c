inherit NPC;  //����ͷ by dhk 2000.4.22
#include <ansi.h>
#include </open/open.h>

void create()
{
    set_name("����ͷ",({"mercenary assistant","assistant","mercenary"}) );
    set("title",""HIY"����"NOR"�ھ�");
    set("gender", "����");
    set("age",90);
    set("attitude", "peaceful");
    set("long", "���������ھָ���ͷ������������������ڵ�����ͷ����ʲ\n"
               +"ô����׼û��\n");
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
        command("say ���¾�����������ͷ������̫��л�ˡ�");
        if( me->query("family/family_name") == "�μ�" && me->query_temp("helpman") == 2 )
          {
            command("say ��������ͷ�����н���Ҫ�ҽ�����Ķ����������¡�\n");
            me->set("helpman",3);
            bluetooth->move(me);
          }
        destruct(obj);
      }
    else
      command("? "+getuid(me));
    return 1;
}
